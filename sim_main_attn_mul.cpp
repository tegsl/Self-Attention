#include <verilated.h>
#include "Vattn_mul.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdint>
#include <cstring>

#define DATA_WIDTH 32
#define SEQ_LEN 64
#define EMBED_DIM 64
#define FRAC_BITS 14

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int32_t float_to_fixed(float val) {
    const int64_t scale = 1LL << FRAC_BITS;
    const int64_t max_val = (1LL << 31) - 1;
    const int64_t min_val = -(1LL << 31);

    int64_t fixed = static_cast<int64_t>(roundf(val * scale));
    if (fixed > max_val) fixed = max_val;
    if (fixed < min_val) fixed = min_val;

    return static_cast<int32_t>(fixed);
}

float fixed_to_float(int32_t val) {
    return static_cast<float>(val) / (1 << FRAC_BITS);
}

// reinterpret-cast version for 32-bit signed storage
void set_value_in_array(uint32_t* array, int bit_offset, int32_t value) {
    int word_idx = bit_offset / 32;
    uint32_t raw;
    std::memcpy(&raw, &value, sizeof(uint32_t));
    array[word_idx] = raw;
}

int32_t get_value_from_array(const uint32_t* array, int bit_offset) {
    int word_idx = bit_offset / 32;
    int32_t val;
    std::memcpy(&val, &array[word_idx], sizeof(int32_t));
    return val;
}

void tick(Vattn_mul* dut) {
    dut->clk = 0;
    dut->eval();
    main_time++;

    dut->clk = 1;
    dut->eval();
    main_time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vattn_mul* dut = new Vattn_mul;

    std::cout << "🔧 32-bit attn_mul testbench\n";

    // Reset
    dut->rst = 1;
    dut->start = 0;
    tick(dut);
    dut->rst = 0;
    tick(dut);

    for (int i = 0; i < 2048; i++) {
        dut->softmax_scores_flat[i] = 0;
        dut->V_flat[i] = 0;
        dut->output_flat[i] = 0;
    }

    std::cout << "📊 Setting test data...\n";

    // softmax[0][0] = 0.5, softmax[0][1] = 0.5
    int softmax_00_offset = (0 * SEQ_LEN + 0) * DATA_WIDTH;
    int softmax_01_offset = (0 * SEQ_LEN + 1) * DATA_WIDTH;
    set_value_in_array(dut->softmax_scores_flat, softmax_00_offset, float_to_fixed(0.5f));
    set_value_in_array(dut->softmax_scores_flat, softmax_01_offset, float_to_fixed(0.5f));

    // V[0][0] = 2.0, V[1][0] = 4.0
    int v_00_offset = (0 * EMBED_DIM + 0) * DATA_WIDTH;
    int v_10_offset = (1 * EMBED_DIM + 0) * DATA_WIDTH;
    set_value_in_array(dut->V_flat, v_00_offset, float_to_fixed(2.0f));
    set_value_in_array(dut->V_flat, v_10_offset, float_to_fixed(4.0f));

    std::cout << "✅ Inputs set:\n";
    std::cout << "  softmax[0][0] = " << fixed_to_float(get_value_from_array(dut->softmax_scores_flat, softmax_00_offset)) << "\n";
    std::cout << "  softmax[0][1] = " << fixed_to_float(get_value_from_array(dut->softmax_scores_flat, softmax_01_offset)) << "\n";
    std::cout << "  V[0][0] = " << fixed_to_float(get_value_from_array(dut->V_flat, v_00_offset)) << "\n";
    std::cout << "  V[1][0] = " << fixed_to_float(get_value_from_array(dut->V_flat, v_10_offset)) << "\n";

    std::cout << "\n🚀 Starting computation...\n";
    dut->start = 1;
    tick(dut);
    dut->start = 0;

    int cycles = 0;
    const int max_cycles = 1000000;
    while (!dut->done && cycles < max_cycles) {
        tick(dut);
        cycles++;
        if (cycles % 10000 == 0) {
            std::cout << "[" << cycles << "] Waiting... done=" << (int)dut->done;
            if (dut->debug_state)
                std::cout << " state=" << (int)dut->debug_state;
            std::cout << "\n";
        }
    }

    if (cycles >= max_cycles) {
        std::cerr << "❌ Timeout after " << cycles << " cycles\n";
        delete dut;
        return 1;
    }

    std::cout << "✅ Done in " << cycles << " cycles\n";

    int output_00_offset = (0 * EMBED_DIM + 0) * DATA_WIDTH;
    int32_t result_raw = get_value_from_array(dut->output_flat, output_00_offset);
    float result = fixed_to_float(result_raw);
    float expected = 3.0f;

    std::cout << "\n🎯 Results:\n";
    std::cout << "  Expected: " << expected << "\n";
    std::cout << "  Got:      " << std::fixed << std::setprecision(4) << result;
    std::cout << " (0x" << std::hex << result_raw << std::dec << ")\n";

    float error = std::abs(result - expected);
    if (error < 0.01f) {
        std::cout << "  ✅ PASS\n";
        delete dut;
        return 0;
    } else {
        std::cout << "  ❌ FAIL (error=" << error << ")\n";
        delete dut;
        return 1;
    }
}
