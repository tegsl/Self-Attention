#include "Vqk_mul.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>

constexpr int DATA_WIDTH = 32;
constexpr int SEQ_LEN = 64;
constexpr int EMBED_DIM = 64;
constexpr int FRAC_BITS = 14;
constexpr int MAX_CYCLES = 10000000;

constexpr int QK_WIDE = (SEQ_LEN * EMBED_DIM * DATA_WIDTH + 31) / 32;
constexpr int SCORE_WIDE = (SEQ_LEN * SEQ_LEN * DATA_WIDTH + 31) / 32;

template<int N>
void set_bits(VlWide<N>& arr, int offset, int width, uint32_t value) {
    for (int i = 0; i < width; i++) {
        int bit_idx = offset + i;
        int word_idx = bit_idx / 32;
        int bit_pos = bit_idx % 32;
        if (word_idx >= N || word_idx < 0) continue;
        if (value & (1u << i))
            arr[word_idx] |= (1u << bit_pos);
        else
            arr[word_idx] &= ~(1u << bit_pos);
    }
}

template<int N>
uint32_t get_bits(const VlWide<N>& arr, int offset, int width) {
    uint32_t result = 0;
    for (int i = 0; i < width; i++) {
        int bit_idx = offset + i;
        int word_idx = bit_idx / 32;
        int bit_pos = bit_idx % 32;
        if (word_idx >= N || word_idx < 0) continue;
        if (arr[word_idx] & (1u << bit_pos))
            result |= (1u << i);
    }
    return result;
}

int32_t to_signed32(uint32_t val) {
    return static_cast<int32_t>(val);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vqk_mul* top = new Vqk_mul;

    std::memset(&top->Q_flat, 0, sizeof(top->Q_flat));
    std::memset(&top->K_flat, 0, sizeof(top->K_flat));

    top->clk = 0;
    top->rst = 1;
    top->start = 0;
    top->eval();
    top->clk = 1; top->eval();
    top->clk = 0; top->rst = 0; top->eval();

    std::cout << "🔧 Initializing Q and K matrices...\n";

    std::vector<std::vector<int32_t>> Q_matrix(SEQ_LEN, std::vector<int32_t>(EMBED_DIM));
    std::vector<std::vector<int32_t>> K_matrix(SEQ_LEN, std::vector<int32_t>(EMBED_DIM));

    for (int i = 0; i < SEQ_LEN; i++) {
        for (int j = 0; j < EMBED_DIM; j++) {
            int32_t q_val = ((i % 2) << FRAC_BITS);  // Alternate rows: 0 or 1.0 in fixed-point
            Q_matrix[i][j] = q_val;
            uint32_t val = static_cast<uint32_t>(q_val);
            int offset = (i * EMBED_DIM + j) * DATA_WIDTH;
            set_bits<QK_WIDE>(top->Q_flat, offset, DATA_WIDTH, val);
        }
    }

    for (int i = 0; i < SEQ_LEN; i++) {
        for (int j = 0; j < EMBED_DIM; j++) {
            int32_t k_val = (j % 3 == 0) ? (1 << FRAC_BITS) : -(1 << FRAC_BITS);
            K_matrix[i][j] = k_val;
            uint32_t val = static_cast<uint32_t>(k_val);
            int offset = (i * EMBED_DIM + j) * DATA_WIDTH;
            set_bits<QK_WIDE>(top->K_flat, offset, DATA_WIDTH, val);
        }
    }

    top->start = 1;
    int cycle = 0;
    bool start_deasserted = false;

    std::cout << "\n🔁 Starting simulation...\n";

    while (cycle < MAX_CYCLES) {
        top->clk = 0; top->eval();
        if (cycle == 1 && !start_deasserted) {
            top->start = 0;
            start_deasserted = true;
            std::cout << "🔄 Start signal deasserted at cycle 1\n";
        }
        top->clk = 1; top->eval();

        if (top->done) {
            std::cout << "✅ Done at cycle " << cycle << "\n";
            break;
        }
        cycle++;
    }

    if (cycle >= MAX_CYCLES) {
        std::cerr << "❌ Timeout occurred\n";
        delete top;
        return 1;
    }

    std::cout << "\n📊 Verifying sample scores...\n";
    std::vector<std::pair<int, int>> test_positions = {
        {0, 0}, {31, 31}, {63, 63}, {15, 47}, {47, 15}, {5, 10}, {10, 5}, {23, 7}
    };

    int passed = 0;
    for (auto [i, j] : test_positions) {
        int32_t expected = 0;
        for (int k = 0; k < EMBED_DIM; k++) {
            int64_t prod = (int64_t)Q_matrix[i][k] * (int64_t)K_matrix[j][k];
            expected += static_cast<int32_t>(prod >> FRAC_BITS);
        }

        int offset = (i * SEQ_LEN + j) * DATA_WIDTH;
        int32_t actual = to_signed32(get_bits<SCORE_WIDE>(top->scores_flat, offset, DATA_WIDTH));

        std::cout << "Score[" << i << "][" << j << "] = " << actual
                  << " (Expected: " << expected << ")"
                  << ((actual == expected) ? " ✓" : " ✗") << "\n";

        if (actual == expected) passed++;
    }

    std::cout << "\n🎯 Passed " << passed << " / " << test_positions.size() << " tests\n";

    delete top;
    return (passed == test_positions.size()) ? 0 : 1;
}
