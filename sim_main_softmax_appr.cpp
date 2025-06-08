#include <verilated.h>
#include "Vsoftmax_appr.h"
#include <iostream>
#include <iomanip>
#include <cstdint>

class SoftmaxTestbench {
private:
    Vsoftmax_appr* dut;
    uint64_t sim_time;

    static constexpr double CLOCK_FREQ_MHZ = 300.0;
    static constexpr double CLOCK_PERIOD_NS = 1000.0 / CLOCK_FREQ_MHZ;  // 3.33 ns

    static const int INPUT_WIDTH = 32;
    static const int OUTPUT_WIDTH = 32;
    static const int SEQ_LEN = 64;
    static const int FRAC_BITS = 14;
    static const int TOTAL_BITS_IN = INPUT_WIDTH * SEQ_LEN * SEQ_LEN;
    static const int TOTAL_BITS_OUT = OUTPUT_WIDTH * SEQ_LEN * SEQ_LEN;
    static const int WORDS_IN = (TOTAL_BITS_IN + 31) / 32;
    static const int WORDS_OUT = (TOTAL_BITS_OUT + 31) / 32;

    int32_t float_to_fixed(float val) {
        return static_cast<int32_t>(val * (1 << FRAC_BITS));
    }

    float fixed_to_float(uint32_t val) {
        if (OUTPUT_WIDTH < 32 && (val & (1u << (OUTPUT_WIDTH - 1)))) {
            val |= (~0u << OUTPUT_WIDTH);
        }
        return static_cast<float>(static_cast<int32_t>(val)) / (1 << FRAC_BITS);
    }

    template<int N>
    void set_fixed_element(VlWide<N>& arr, int element_idx, int width, int32_t value) {
        int bit_start = element_idx * width;
        for (int b = 0; b < width; b++) {
            int bit_pos = bit_start + b;
            int word_idx = bit_pos / 32;
            int bit_in_word = bit_pos % 32;
            if (value & (1U << b))
                arr[word_idx] |= (1U << bit_in_word);
            else
                arr[word_idx] &= ~(1U << bit_in_word);
        }
    }

    template<int N>
    uint32_t get_fixed_element(const VlWide<N>& arr, int element_idx, int width) {
        int bit_start = element_idx * width;
        uint32_t result = 0;
        for (int b = 0; b < width; b++) {
            int bit_pos = bit_start + b;
            int word_idx = bit_pos / 32;
            int bit_in_word = bit_pos % 32;
            if (arr[word_idx] & (1U << bit_in_word)) {
                result |= (1U << b);
            }
        }
        return result;
    }

    double get_sim_time_ns() const {
        return sim_time * CLOCK_PERIOD_NS;
    }

public:
    SoftmaxTestbench() : sim_time(0) {
        dut = new Vsoftmax_appr;
    }

    ~SoftmaxTestbench() {
        delete dut;
    }

    void clock_cycle() {
        dut->clk = 0; dut->eval(); sim_time++;
        dut->clk = 1; dut->eval(); sim_time++;
    }

    void reset() {
        dut->rst = 1;
        dut->start = 0;
        for (int i = 0; i < WORDS_IN; i++) dut->scores_flat[i] = 0;
        clock_cycle();
        dut->rst = 0;
        clock_cycle();
        std::cout << "✅ Reset complete\n";
    }

    void set_minimal_test() {
        for (int i = 0; i < WORDS_IN; i++) dut->scores_flat[i] = 0;

        int32_t val1 = float_to_fixed(1.0f);
        int32_t val2 = float_to_fixed(0.5f);

        std::cout << "🧪 Test values:\n"
                  << "  [0][0] = 1.0  → " << val1 << "\n"
                  << "  [0][1] = 0.5  → " << val2 << "\n";

        set_fixed_element<WORDS_IN>(dut->scores_flat, 0, INPUT_WIDTH, val1);
        set_fixed_element<WORDS_IN>(dut->scores_flat, 1, INPUT_WIDTH, val2);
    }

    void set_exp_test_ramp() {
        for (int i = 0; i < WORDS_IN; i++) dut->scores_flat[i] = 0;

        std::cout << "🧪 Setting exp ramp: [0][0..7] = 0.0, 0.25, ..., 1.75\n";
        for (int k = 0; k < 8; k++) {
            float fval = 0.25f * k;
            int32_t fixed_val = float_to_fixed(fval);
            set_fixed_element<WORDS_IN>(dut->scores_flat, k, INPUT_WIDTH, fixed_val);
        }
    }

    void extract_and_print_outputs(int count = 8) {
        std::cout << "\n🔍 Extracting first " << count << " outputs:\n";
        for (int i = 0; i < count; i++) {
            uint32_t val = get_fixed_element<WORDS_OUT>(dut->softmax_scores_flat, i, OUTPUT_WIDTH);
            float result = fixed_to_float(val);
            std::cout << "  [" << i << "] = " << std::fixed << std::setprecision(6)
                      << result << " (raw 0x" << std::hex << val << std::dec << ")\n";
        }
    }

    void validate_softmax_row_sum(int row = 0) {
        float sum = 0.0f;
        for (int i = 0; i < SEQ_LEN; i++) {
            int idx = row * SEQ_LEN + i;
            uint32_t val = get_fixed_element<WORDS_OUT>(dut->softmax_scores_flat, idx, OUTPUT_WIDTH);
            sum += fixed_to_float(val);
        }
        std::cout << "🧾 Softmax sum for row " << row << ": ≈ " << std::setprecision(6) << sum << "\n";
    }

    bool run_debug_test(bool use_exp_ramp = false) {
        std::cout << "\n=== 🔁 Running Softmax Debug Test ===\n";

        if (use_exp_ramp)
            set_exp_test_ramp();
        else
            set_minimal_test();

        dut->start = 1;
        clock_cycle();  // one cycle with start high
        dut->start = 0;

        int timeout = 100000;
        int cycle_count = 0;
        while (!dut->done && timeout-- > 0) {
            clock_cycle();
            cycle_count++;
        }

        if (!dut->done) {
            std::cout << "❌ Timeout! Softmax did not finish.\n";
            return false;
        }

        double sim_time_ns = get_sim_time_ns();
        std::cout << "✅ Done. Softmax completed in " << cycle_count << " cycles ("
                  << std::fixed << std::setprecision(2) << sim_time_ns << " ns)\n";

        extract_and_print_outputs();
        validate_softmax_row_sum();
        return true;
    }

    void run_all_tests() {
        std::cout << "🚀 Starting Softmax Tests\n";
        bool pass1 = run_debug_test(false);
        bool pass2 = run_debug_test(true);

        if (pass1 && pass2)
            std::cout << "\n✅ All tests passed.\n";
        else
            std::cout << "\n❌ Some tests failed.\n";
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    SoftmaxTestbench tb;
    tb.reset();
    tb.run_all_tests();
    std::cout << "\n🏁 Simulation complete.\n";
    return 0;
}
