#include "Vself_attention.h"
#include "verilated.h"
#include <iostream>
#include <random>
#include <cstdint>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vself_attention* top = new Vself_attention;

    const int TOTAL_BITS = 16 * 64 * 64;
    const int VL_WORDS = TOTAL_BITS / 32;  // 2048 words

    std::mt19937 rng(123);
    std::uniform_int_distribution<uint16_t> dist(0, 0xFFFF);

    // Fill the input with 16-bit values packed into 32-bit chunks
    for (int i = 0; i < VL_WORDS; ++i) {
        uint32_t low  = dist(rng);
        uint32_t high = dist(rng);
        top->input_tokens_flat[i] = (high << 16) | low;
    }

    // Apply reset
    top->clk = 0;
    top->rst = 1;
    top->start = 0;
    top->eval();

    top->clk = 1;
    top->eval();

    // Release reset and start
    top->rst = 0;
    top->start = 1;

    const int max_cycles = 100000;
    int cycle = 0;

    while (cycle++ < max_cycles) {
        top->clk = 0;
        top->eval();

        top->clk = 1;
        top->eval();

        // Periodic progress report
        if (cycle % 500 == 0) {
            std::cout << "⏳ Cycle " << cycle << " - done=" << top->done << "\n";
            std::cout << "FSM state = " << (int)top->fsm_debug_state << "\n";
            std::cout << "attn_mul FSM state = " << (int)top->debug_state_attn << "\n";
        }

        // Check if completed
        if (top->done) {
            std::cout << "✅ Done at cycle " << cycle << "\n";

            std::cout << "🔢 Output flat (first 8 words):\n";
            for (int i = 0; i < 8; ++i) {
                std::cout << "  output[" << i << "] = 0x" << std::hex
                          << top->output_tokens_flat[i] << std::dec << "\n";
            }
            break;
        }
    }

    if (!top->done) {
        std::cerr << "❌ Timeout\n";
    }

    delete top;
    return 0;
}
