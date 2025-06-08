#include "Vself_attention.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <random>
#include <cstdint>
#include <cstring>
#include <vector>
#include <cmath>

// Configuration constants
constexpr int DATA_WIDTH = 32;
constexpr int SEQ_LEN = 64;
constexpr int EMBED_DIM = 64;
constexpr int FRAC_BITS = 14;
constexpr int FLAT_LEN = (SEQ_LEN * EMBED_DIM * DATA_WIDTH) / 32;
constexpr float FIXED_SCALE = 1 << FRAC_BITS;

// Utility functions
float fixed_to_float(int32_t fixed, int frac_bits = FRAC_BITS) {
    return static_cast<float>(fixed) / (1 << frac_bits);
}

int32_t float_to_fixed(float val, int frac_bits = FRAC_BITS) {
    return static_cast<int32_t>(val * (1 << frac_bits));
}

void print_matrix(const std::string& name, const std::vector<std::vector<float>>& matrix) {
    std::cout << "📊 " << name << ":\n";
    for (size_t i = 0; i < std::min((size_t)8, matrix.size()); ++i) {
        std::cout << "  Row " << std::setw(2) << i << ": ";
        for (size_t j = 0; j < std::min((size_t)8, matrix[i].size()); ++j) {
            std::cout << std::setw(8) << std::fixed << std::setprecision(3) << matrix[i][j] << " ";
        }
        if (matrix[i].size() > 8) std::cout << "...";
        std::cout << "\n";
    }
    if (matrix.size() > 8) std::cout << "  ...\n";
    std::cout << "\n";
}


uint64_t total_cycles = 0;  // global cycle counter
constexpr double CLOCK_FREQ_MHZ = 300.0;
constexpr double CLOCK_PERIOD_NS = 1000.0 / CLOCK_FREQ_MHZ; // 10 ns per cycle

void clock_cycle(Vself_attention* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    total_cycles++;  // ✅ increment clock
}

void reset_dut(Vself_attention* dut) {
    std::cout << "🔄 Applying reset...\n";
    dut->rst = 1;
    dut->start = 0;
    for (int i = 0; i < 3; ++i) {
        clock_cycle(dut);
    }
    dut->rst = 0;
    std::cout << "✅ Reset complete\n";
}

void generate_test_inputs(Vself_attention* dut, int test_pattern = 0) {
    std::cout << "🎲 Generating test inputs (pattern " << test_pattern << ")...\n";
    
    std::vector<std::vector<float>> input_matrix(SEQ_LEN, std::vector<float>(EMBED_DIM));
    
    switch (test_pattern) {
        case 0: {
            // Random diverse inputs
            std::mt19937 rng(42);
            std::normal_distribution<float> dist(0.0f, 0.3f);
            for (int i = 0; i < SEQ_LEN; ++i) {
                for (int j = 0; j < EMBED_DIM; ++j) {
                    input_matrix[i][j] = std::clamp(dist(rng), -1.0f, 1.0f);
                }
            }
            break;
        }
        case 1: {
            // Structured sinusoidal pattern
            for (int i = 0; i < SEQ_LEN; ++i) {
                for (int j = 0; j < EMBED_DIM; ++j) {
                    float val = 0.5f * std::sin(i * 0.1f + j * 0.05f) + 
                               0.3f * std::cos(i * 0.15f + j * 0.08f);
                    input_matrix[i][j] = std::clamp(val, -1.0f, 1.0f);
                }
            }
            break;
        }
        case 2: {
            // Identity-like pattern with distinct tokens
            for (int i = 0; i < SEQ_LEN; ++i) {
                for (int j = 0; j < EMBED_DIM; ++j) {
                    if (i == j % SEQ_LEN) {
                        input_matrix[i][j] = 0.8f;
                    } else if (std::abs(i - (j % SEQ_LEN)) == 1) {
                        input_matrix[i][j] = 0.2f;
                    } else {
                        input_matrix[i][j] = -0.1f;
                    }
                }
            }
            break;
        }
        default: {
            // All zeros for debugging
            for (int i = 0; i < SEQ_LEN; ++i) {
                for (int j = 0; j < EMBED_DIM; ++j) {
                    input_matrix[i][j] = 0.0f;
                }
            }
            break;
        }
    }
    
    // Print sample of input matrix
    print_matrix("Input Matrix (first 8x8)", input_matrix);
    
    // Convert to flat fixed-point format
    for (int i = 0; i < FLAT_LEN; ++i) {
        int token_idx = (i * 2) / EMBED_DIM;
        int dim_idx1 = (i * 2) % EMBED_DIM;
        int dim_idx2 = (i * 2 + 1) % EMBED_DIM;
        
        if (token_idx >= SEQ_LEN) {
            dut->input_tokens_flat[i] = 0;
            continue;
        }
        
        float val1 = (dim_idx1 < EMBED_DIM) ? input_matrix[token_idx][dim_idx1] : 0.0f;
        float val2 = (dim_idx2 < EMBED_DIM) ? input_matrix[token_idx][dim_idx2] : 0.0f;
        
        int16_t fixed1 = static_cast<int16_t>(std::clamp(float_to_fixed(val1), 
                                                        (int32_t)INT16_MIN, (int32_t)INT16_MAX));
        int16_t fixed2 = static_cast<int16_t>(std::clamp(float_to_fixed(val2), 
                                                        (int32_t)INT16_MIN, (int32_t)INT16_MAX));
        
        dut->input_tokens_flat[i] = (static_cast<uint32_t>(static_cast<uint16_t>(fixed1)) << 16) | 
                                   static_cast<uint16_t>(fixed2);
    }
    
    std::cout << "📝 Input conversion complete\n";
}

void start_computation(Vself_attention* dut) {
    std::cout << "🚀 Starting computation...\n";
    
    dut->start = 1;
    clock_cycle(dut);
    clock_cycle(dut);  // Hold start for 2 cycles
    dut->start = 0;
    
    std::cout << "📡 Start signal sent. Initial FSM state: " << (int)dut->fsm_debug_state << "\n";
}

bool wait_for_completion(Vself_attention* dut, int max_cycles = 50'000'000) {
    std::cout << "⏳ Waiting for completion...\n";
    
    int cycle = 0;
    int last_progress_cycle = 0;
    uint8_t last_fsm_state = dut->fsm_debug_state;
    uint8_t last_attn_state = dut->debug_state_attn;
    
    while (cycle < max_cycles && !dut->done) {
        clock_cycle(dut);
        cycle++;
        
        // Progress reporting
        if (cycle % 10000 == 0) {
            std::cout << "  Cycle " << std::setw(8) << cycle 
                      << " | FSM: " << std::setw(2) << (int)dut->fsm_debug_state
                      << " | Attn: " << std::setw(2) << (int)dut->debug_state_attn
                      << " | Done: " << dut->done << "\n";
        }
        
        // Detect state changes
        if (dut->fsm_debug_state != last_fsm_state || dut->debug_state_attn != last_attn_state) {
            std::cout << "  🔄 State change at cycle " << cycle 
                      << " | FSM: " << (int)last_fsm_state << " → " << (int)dut->fsm_debug_state
                      << " | Attn: " << (int)last_attn_state << " → " << (int)dut->debug_state_attn << "\n";
            last_fsm_state = dut->fsm_debug_state;
            last_attn_state = dut->debug_state_attn;
            last_progress_cycle = cycle;
        }
        
        // Detect potential hang
        if (cycle - last_progress_cycle > 1'000'000) {
            std::cout << "⚠️  No progress for 1M cycles, possible hang detected\n";
            std::cout << "   Current FSM: " << (int)dut->fsm_debug_state
                      << " | Attn: " << (int)dut->debug_state_attn << "\n";
            break;
        }
    }
    
    if (dut->done) {
        std::cout << "✅ Computation completed in " << cycle << " cycles\n";
        return true;
    } else {
        std::cout << "❌ Timeout or hang after " << cycle << " cycles\n";
        std::cout << "   Final FSM: " << (int)dut->fsm_debug_state
                  << " | Attn: " << (int)dut->debug_state_attn << "\n";
        return false;
    }
}

void analyze_output(Vself_attention* dut) {
    std::cout << "🔍 Analyzing output...\n";
    
    std::vector<std::vector<float>> output_matrix(SEQ_LEN, std::vector<float>(EMBED_DIM));
    
    // Decode output
    for (int i = 0; i < SEQ_LEN; ++i) {
        for (int j = 0; j < EMBED_DIM; ++j) {
            int flat_idx = i * EMBED_DIM + j;
            if (flat_idx < FLAT_LEN * 2) {
                uint32_t raw = dut->output_tokens_flat[flat_idx];
                output_matrix[i][j] = fixed_to_float(static_cast<int32_t>(raw));
            }
        }
    }
    
    // Print output matrix
    print_matrix("Output Matrix (first 8x8)", output_matrix);
    
    // Statistical analysis
    float sum = 0.0f, min_val = output_matrix[0][0], max_val = output_matrix[0][0];
    int total_elements = 0;
    
    for (int i = 0; i < SEQ_LEN; ++i) {
        for (int j = 0; j < EMBED_DIM; ++j) {
            float val = output_matrix[i][j];
            sum += val;
            min_val = std::min(min_val, val);
            max_val = std::max(max_val, val);
            total_elements++;
        }
    }
    
    float mean = sum / total_elements;
    
    // Calculate variance
    float variance = 0.0f;
    for (int i = 0; i < SEQ_LEN; ++i) {
        for (int j = 0; j < EMBED_DIM; ++j) {
            float diff = output_matrix[i][j] - mean;
            variance += diff * diff;
        }
    }
    variance /= total_elements;
    
    std::cout << "📈 Output Statistics:\n";
    std::cout << "  Mean: " << std::fixed << std::setprecision(6) << mean << "\n";
    std::cout << "  Min:  " << min_val << "\n";
    std::cout << "  Max:  " << max_val << "\n";
    std::cout << "  Std:  " << std::sqrt(variance) << "\n";
    
    // Check for problematic patterns
    bool all_same = true;
    float first_val = output_matrix[0][0];
    for (int i = 0; i < SEQ_LEN && all_same; ++i) {
        for (int j = 0; j < EMBED_DIM && all_same; ++j) {
            if (std::abs(output_matrix[i][j] - first_val) > 1e-6) {
                all_same = false;
            }
        }
    }
    
    if (all_same) {
        std::cout << "⚠️  All outputs are identical: " << first_val << "\n";
    } else {
        std::cout << "✅ Output shows variation - attention mechanism working\n";
    }
}

void print_debug_signals(Vself_attention* dut) {
    std::cout << "\n🔬 Debug Signals:\n";
    std::cout << "  debug_q_0_0        = " << fixed_to_float(dut->debug_q_0_0)        << "\n";
    std::cout << "  debug_k_0_0        = " << fixed_to_float(dut->debug_k_0_0)        << "\n";
    std::cout << "  debug_k_1_0        = " << fixed_to_float(dut->debug_k_1_0)        << "\n";
    std::cout << "  debug_qk_score_00  = " << fixed_to_float(dut->debug_qk_score_00)  << "\n";
    std::cout << "  debug_qk_score_01  = " << fixed_to_float(dut->debug_qk_score_01)  << "\n";
    std::cout << "  debug_attn_00      = " << fixed_to_float(dut->debug_attn_00)      << "\n";
    std::cout << "  debug_attn_01      = " << fixed_to_float(dut->debug_attn_01)      << "\n";
    std::cout << "  debug_softmax_sum_0 = " << fixed_to_float(dut->debug_softmax_sum_0) << "\n";
}

void dump_q_matrix(Vself_attention* dut) {
    std::cout << "\n🧠 Dumping Q[0..3][0..3]...\n";

    for (int i = 0; i < 4; ++i) {
        std::cout << "  Q[" << i << "]: ";
        for (int j = 0; j < 4; ++j) {
            int flat_idx = i * EMBED_DIM + j;
            uint32_t raw = dut->Q_flat[flat_idx];
            float val = fixed_to_float((int32_t)raw);
            std::cout << std::setw(10) << val << " ";
        }
        std::cout << "\n";
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // Parse command line arguments
    int test_pattern = 0;
    if (argc > 1) {
        test_pattern = std::atoi(argv[1]);
    }

    std::cout << "🧠 Self-Attention Verilog Testbench\n";
    std::cout << "=====================================\n";
    std::cout << "Configuration:\n";
    std::cout << "  SEQ_LEN: " << SEQ_LEN << "\n";
    std::cout << "  EMBED_DIM: " << EMBED_DIM << "\n";
    std::cout << "  FRAC_BITS: " << FRAC_BITS << "\n";
    std::cout << "  Test Pattern: " << test_pattern << "\n\n";

    // Initialize DUT
    Vself_attention* dut = new Vself_attention;

    try {
        // Run test
        reset_dut(dut);
        generate_test_inputs(dut, test_pattern);
        start_computation(dut);
        bool success = wait_for_completion(dut);

        if (success) {
            analyze_output(dut);
            std::cout << "\n🎉 Test completed successfully!\n";
            dump_q_matrix(dut);
            print_debug_signals(dut);
        } else {
            std::cout << "\n💥 Test failed - check your Verilog implementation\n";
            delete dut;
            return 1;
        }

        // ✅ Timing Report
        double elapsed_ns = total_cycles * CLOCK_PERIOD_NS;
        double elapsed_ms = elapsed_ns / 1e6;
        double tokens_per_sec = (SEQ_LEN * 1e9) / elapsed_ns;

        std::cout << "\n⏱️  Total Cycles: " << total_cycles << "\n";
        std::cout << "⏱️  Simulated Time: " << std::fixed << std::setprecision(3)
                  << elapsed_ns << " ns (" << elapsed_ms << " ms)\n";
        std::cout << "⚡ Throughput: " << std::fixed << std::setprecision(2)
                  << tokens_per_sec << " tokens/sec\n";

    } catch (const std::exception& e) {
        std::cerr << "❌ Exception: " << e.what() << "\n";
        delete dut;
        return 1;
    }

    delete dut;
    std::cout << "\n🏁 Testbench finished\n";
    return 0;
}
