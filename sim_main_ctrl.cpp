#include "Vctrl_fsm.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vctrl_fsm* top) {
    top->clk = 0; top->eval(); main_time++;
    top->clk = 1; top->eval(); main_time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vctrl_fsm* top = new Vctrl_fsm;

    std::cout << "\U0001F504 Resetting FSM...\n";
    top->rst = 1;
    top->start = 0;
    top->qkv_done = 0;
    top->qk_done = 0;
    top->softmax_done = 0;
    top->attn_done = 0;
    tick(top);
    top->rst = 0;

    std::cout << "\U0001F680 Starting FSM...\n";
    top->start = 1;
    tick(top);
    top->start = 0;

    int cycles = 0;
    while (!top->done && cycles < 20) {
        // Wait one cycle before asserting *_done signals
        if (cycles >= 1) {
            top->qkv_done     = (top->debug_state == 1);
            top->qk_done      = (top->debug_state == 2);
            top->softmax_done = (top->debug_state == 3);
            top->attn_done    = (top->debug_state == 4);
        } else {
            top->qkv_done = 0;
            top->qk_done = 0;
            top->softmax_done = 0;
            top->attn_done = 0;
        }

        tick(top);

        std::string state_str;
        switch (top->debug_state) {
            case 0: state_str = "IDLE"; break;
            case 1: state_str = "QKV"; break;
            case 2: state_str = "QK"; break;
            case 3: state_str = "SOFTMAX"; break;
            case 4: state_str = "ATTN"; break;
            case 5: state_str = "DONE"; break;
            default: state_str = "UNKNOWN"; break;
        }

        std::cout << "Cycle " << cycles
                  << " | State: " << std::setw(8) << state_str
                  << " | qkv_start=" << (int)top->qkv_start
                  << " qk_start=" << (int)top->qk_start
                  << " softmax_start=" << (int)top->softmax_start
                  << " attn_start=" << (int)top->attn_start
                  << " done=" << (int)top->done << "\n";

        if (top->done) break;
        ++cycles;
    }

    if (top->done)
        std::cout << "\u2705 FSM completed successfully in " << cycles << " cycles.\n";
    else
        std::cout << "\u274C FSM did not complete within 20 cycles.\n";

    delete top;
    return 0;
}
