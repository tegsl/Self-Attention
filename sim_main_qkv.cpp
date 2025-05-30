#include "Vqkv.h"
#include "verilated.h"
#include <iostream>
#include <cassert>
#include <cstdint>

#define DATA_WIDTH 16
#define EMBED_DIM  64
#define TOTAL_BITS (DATA_WIDTH * EMBED_DIM)
#define TOTAL_WORDS (TOTAL_BITS / 64)

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vqkv* top) {
    top->clk = 0; top->eval(); main_time++;
    top->clk = 1; top->eval(); main_time++;
}

// For Verilator VlWide<32> (Q_flat, K_flat, V_flat)
uint64_t get_bits(const VlWide<32>& arr, int bit_pos) {
    int word_idx = bit_pos / 64;
    int bit_offset = bit_pos % 64;

    uint64_t val = arr[word_idx] >> bit_offset;
    if (bit_offset + DATA_WIDTH > 64) {
        val |= (arr[word_idx + 1] << (64 - bit_offset));
    }
    return val & ((1ULL << DATA_WIDTH) - 1);
}

// For native uint64_t arrays (input_vec_flat)
uint64_t get_bits(const uint64_t* arr, int bit_pos) {
    int word_idx = bit_pos / 64;
    int bit_offset = bit_pos % 64;

    uint64_t val = arr[word_idx] >> bit_offset;
    if (bit_offset + DATA_WIDTH > 64) {
        val |= (arr[word_idx + 1] << (64 - bit_offset));
    }
    return val & ((1ULL << DATA_WIDTH) - 1);
}



int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vqkv* top = new Vqkv;

    // Reset
    top->rst = 1;
    top->start = 0;
    tick(top);
    top->rst = 0;

    // Fill input_vec_flat with known values (e.g. input[i] = i)
    uint64_t input_vec_flat[TOTAL_WORDS + 1] = {};  // +1 for potential 64-bit spill
    for (int i = 0; i < EMBED_DIM; i++) {
        int bit_pos = i * DATA_WIDTH;
        int word_idx = bit_pos / 64;
        int bit_offset = bit_pos % 64;
        uint64_t val = i & ((1ULL << DATA_WIDTH) - 1);
        input_vec_flat[word_idx] |= (val << bit_offset);
        if (bit_offset + DATA_WIDTH > 64) {
            input_vec_flat[word_idx + 1] |= (val >> (64 - bit_offset));
        }
    }

    // Set input vector into DUT
    for (int i = 0; i <= TOTAL_WORDS; i++) {
        top->input_vec_flat[i] = input_vec_flat[i];
    }

    // Trigger start
    top->start = 1;
    tick(top);
    top->start = 0;

    // Wait for 'done' signal
    while (!top->done) tick(top);
    tick(top); // allow output to settle

    // Validate Q, K, V against input
    for (int i = 0; i < EMBED_DIM; i++) {
        int bit_pos = i * DATA_WIDTH;
        uint64_t input_val = get_bits(input_vec_flat, bit_pos);
        uint64_t q_val = get_bits(top->Q_flat, bit_pos);
        uint64_t k_val = get_bits(top->K_flat, bit_pos);
        uint64_t v_val = get_bits(top->V_flat, bit_pos);

        if (q_val != input_val || k_val != input_val || v_val != input_val) {
            std::cerr << "❌ Mismatch at index " << i
                      << ": Q=" << q_val << ", K=" << k_val
                      << ", V=" << v_val << ", input=" << input_val << "\n";
            exit(1);
        }
    }

    std::cout << "✅ Q, K, V outputs match input_vec_flat\n";
    delete top;
    return 0;
}
