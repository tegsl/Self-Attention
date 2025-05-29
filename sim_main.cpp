#include "Vself_attention.h"
#include "verilated.h"
#include <iostream>
#include <random>
#include <cstdint>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vself_attention* top = new Vself_attention;

    constexpr int TOTAL_BITS = 16 * 64 * 64;
    constexpr int VL_WORDS   = TOTAL_BITS / 32;  // Each word is 32 bits

    // Seed deterministic random input
    std::mt19937 rng(123);
    std::uniform_int_distribution<uint16_t> dist(0, 0xFFFF);

    // Populate input_tokens_flat with packed 32-bit values
    for (int i = 0; i < VL_WORDS; ++i) {
        uint16_t lo = dist(rng);
        uint16_t hi = dist(rng);
        top->input_tokens_flat[i] = (hi << 16) | lo;
    }

    // Apply reset for 2 cycles
    for (int i = 0; i < 2; ++i) {
        top->clk = 0; top->rst = 1; top->start = 0; top->eval();
        top->clk = 1; top->eval();
    }

    // Deassert reset, pulse start for 1 cycle
    top->rst = 0;
    top->start = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->start = 0;

    constexpr int max_cycles = 10'000'000;
    int cycle = 0;

    while (cycle++ < max_cycles) {
        top->clk = 0;
        top->eval();

        top->clk = 1;
        top->eval();

        // Periodic debug print
        if (cycle % 500 == 0) {
            std::cout << "⏳ Cycle " << cycle
                      << " | done = " << top->done
                      << " | FSM = " << (int)top->fsm_debug_state
                      << " | attn_mul FSM = " << (int)top->debug_state_attn
                      << "\n";
        }

        // Completion check (either by done or FSM reaching terminal state)
        if (top->done || (int)top->fsm_debug_state == 5) {
            std::cout << "✅ Done at cycle " << cycle << "\n";

            std::cout << "🔢 Output flat (first 8 words):\n";
            for (int i = 0; i < 8; ++i) {
                std::cout << "  output[" << i << "] = 0x"
                          << std::hex << top->output_tokens_flat[i] << std::dec << "\n";
            }
            break;
        }
    }

    if (!top->done && (int)top->fsm_debug_state != 5) {
        std::cerr << "❌ Timeout\n";
    }

    delete top;
    return 0;
}
