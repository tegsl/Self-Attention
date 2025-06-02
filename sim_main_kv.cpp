#include "Vkv_cache.h"
#include "verilated.h"
#include <iostream>
#include <cassert>
#include <vector>

#define SEQ_LEN 64
#define DIM 64
#define DATA_WIDTH 16
#define FLAT_WIDTH (SEQ_LEN * DIM * DATA_WIDTH / 8)

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vkv_cache* top) {
    top->clk = 0; top->eval(); main_time++;
    top->clk = 1; top->eval(); main_time++;
}

// Helper to set flattened input
void set_flat_input(uint32_t* flat, int dim, uint16_t base) {
    for (int i = 0; i < DIM; i++) {
        uint16_t val = base + i;
        int bit_pos = i * DATA_WIDTH;
        int word = bit_pos / 32;
        int offset = bit_pos % 32;
        flat[word] &= ~(((1 << DATA_WIDTH) - 1) << offset);
        flat[word] |= (val << offset);
        if (offset + DATA_WIDTH > 32) {
            flat[word + 1] &= ~((1 << (offset + DATA_WIDTH - 32)) - 1);
            flat[word + 1] |= (val >> (32 - offset));
        }
    }
}

// Helper to read flattened output
std::vector<uint16_t> read_flat_output(const uint32_t* flat) {
    std::vector<uint16_t> out(DIM);
    for (int i = 0; i < DIM; i++) {
        int bit_pos = i * DATA_WIDTH;
        int word = bit_pos / 32;
        int offset = bit_pos % 32;
        uint32_t val = flat[word] >> offset;
        if (offset + DATA_WIDTH > 32)
            val |= flat[word + 1] << (32 - offset);
        out[i] = val & ((1 << DATA_WIDTH) - 1);
    }
    return out;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vkv_cache* top = new Vkv_cache;

    top->rst_n = 0;
    tick(top);
    top->rst_n = 1;

    uint16_t base_val = 100;

    // Write a vector to addr 5
    top->write_en = 1;
    top->write_addr = 5;
    top->read_addr = 5;
    set_flat_input(top->K_flat_in, DIM, base_val);
    set_flat_input(top->V_flat_in, DIM, base_val + 1000);
    tick(top); // write

    top->write_en = 0;
    tick(top); // allow read back

    auto K_read = read_flat_output(top->K_flat_out);
    auto V_read = read_flat_output(top->V_flat_out);

    bool success = true;
    for (int i = 0; i < DIM; i++) {
        uint16_t expected_k = base_val + i;
        uint16_t expected_v = base_val + 1000 + i;
        if (K_read[i] != expected_k || V_read[i] != expected_v) {
            std::cerr << "❌ Mismatch at index " << i
                      << ": K_out=" << K_read[i]
                      << ", expected=" << expected_k
                      << "; V_out=" << V_read[i]
                      << ", expected=" << expected_v << "\n";
            success = false;
        }
    }

    if (success)
        std::cout << "✅ KV cache read/write verified successfully.\n";
    else
        std::cerr << "❌ KV cache test failed.\n";

    delete top;
    return success ? 0 : 1;
}
