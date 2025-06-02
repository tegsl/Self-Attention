#include "Vqkv.h"
#include "verilated.h"
#include <iostream>
#include <cstdint>
#include <cmath>

#define DATA_WIDTH 32
#define EMBED_DIM  64
#define TOTAL_BITS (DATA_WIDTH * EMBED_DIM)
#define TOTAL_WORDS ((TOTAL_BITS + 31) / 32)

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vqkv* top) {
    top->clk = 0;
    top->eval();
    main_time++;
    top->clk = 1;
    top->eval();
    main_time++;
}

uint32_t get_bits(const VlWide<TOTAL_WORDS>& arr, int bit_pos) {
    int word_idx = bit_pos / 32;
    int bit_offset = bit_pos % 32;
    uint64_t val = static_cast<uint64_t>(arr[word_idx]) >> bit_offset;
    if (bit_offset + DATA_WIDTH > 32 && word_idx + 1 < TOTAL_WORDS) {
        val |= static_cast<uint64_t>(arr[word_idx + 1]) << (32 - bit_offset);
    }
    return static_cast<uint32_t>(val & ((1ULL << DATA_WIDTH) - 1));
}

void set_bits(VlWide<TOTAL_WORDS>& arr, int bit_pos, uint32_t value) {
    int word_idx = bit_pos / 32;
    int bit_offset = bit_pos % 32;
    if (word_idx >= TOTAL_WORDS) return;

    uint64_t mask = ((1ULL << DATA_WIDTH) - 1) << bit_offset;
    uint64_t word_val = static_cast<uint64_t>(arr[word_idx]);
    word_val = (word_val & ~mask) | (static_cast<uint64_t>(value) << bit_offset);
    arr[word_idx] = static_cast<uint32_t>(word_val);

    if (bit_offset + DATA_WIDTH > 32 && word_idx + 1 < TOTAL_WORDS) {
        int overflow_bits = bit_offset + DATA_WIDTH - 32;
        uint64_t next_val = static_cast<uint64_t>(arr[word_idx + 1]);
        uint64_t overflow_mask = (1ULL << overflow_bits) - 1;
        next_val = (next_val & ~overflow_mask) | (static_cast<uint64_t>(value) >> (32 - bit_offset));
        arr[word_idx + 1] = static_cast<uint32_t>(next_val);
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vqkv* top = new Vqkv;

    std::cout << "🚀 Starting QKV testbench...\n";

    // Reset
    top->rst = 1;
    top->start = 0;
    for (int i = 0; i < TOTAL_WORDS; ++i)
        top->input_vec_flat[i] = 0;
    tick(top);
    top->rst = 0;
    tick(top);

    // Load input vector with sin wave pattern
    const int FRAC_BITS = 14;
    for (int i = 0; i < EMBED_DIM; ++i) {
        float angle = 2.0f * M_PI * i / EMBED_DIM;
        int32_t val = static_cast<int32_t>(std::sin(angle) * (1 << FRAC_BITS));
        set_bits(top->input_vec_flat, i * DATA_WIDTH, static_cast<uint32_t>(val));
    }

    top->start = 1;
    tick(top);
    top->start = 0;

    // Run until done or timeout
    const int timeout = 10000;
    int cycles = 0;
    while (!top->done && cycles < timeout) {
        tick(top);
        cycles++;
    }

    if (cycles >= timeout) {
        std::cerr << "❌ Timeout waiting for done signal.\n";
        delete top;
        return 1;
    }

    std::cout << "✅ QKV module completed in " << cycles << " cycles.\n";

    // Dump output Q/K/V values
    for (int i = 0; i < EMBED_DIM; ++i) {
        int bit_pos = i * DATA_WIDTH;
        int32_t q = static_cast<int32_t>(get_bits(top->Q_flat, bit_pos));
        int32_t k = static_cast<int32_t>(get_bits(top->K_flat, bit_pos));
        int32_t v = static_cast<int32_t>(get_bits(top->V_flat, bit_pos));

        std::cout << "🔹 QKV[" << i << "] = { " << q << ", " << k << ", " << v << " }\n";
    }

    delete top;
    return 0;
}
