Self-Attention Accelerator (Hardware)

This repository implements a modular self-attention accelerator using SystemVerilog. It includes functional units such as QKV generation, softmax approximation, and attention-weighted value summation. Each SystemVerilog module is accompanied by a C++ testbench using Verilator for simulation and verification.

---

📁 Repository Contents

Each module in this directory follows the same pattern:
- `<module>.sv`: The SystemVerilog source file
- `<module>_tb.cpp`: The corresponding C++ Verilator testbench

Example:
- qkv.sv          — Generates Query, Key, and Value vectors
- qkv_tb.cpp      — Verilator testbench for qkv.sv

- softmax_appr.sv — Computes an approximate softmax
- softmax_appr_tb.cpp — Verilator testbench for softmax_appr.sv

- attnmul.sv      — Performs attention-weighted summation using softmax weights and Value vectors
- attnmul_tb.cpp  — Verilator testbench for attnmul.sv


---

🚀 Simulation Instructions

### Requirements:
- Verilator (https://veripool.org/wiki/verilator)
- C++ compiler (GCC/Clang)

### To Compile and Run a Testbench:
```bash
verilator -Wall --cc <module>.sv --exe <module>_tb.cpp
make -C obj_dir -f V<module>.mk
./obj_dir/V<module>
```

Replace `<module>` with the actual module name (e.g., `qkv`, `softmax_appr`, `attnmul`).

---

🧪 Verification

Testbenches are designed to:
- Load and apply vector inputs
- Monitor internal states (FSM progress, partial sums, debug flags)
- Print and compare output values against expected patterns

Partial sum validation and input/output variation were used to verify correct contributions from each component.

---

📚 Citation

If this project contributes to your work, please cite it as:

@misc{tegsl_self_attention_hw,
  author       = {T. L. Tegbir},
  title        = {Self-Attention Hardware Accelerator},
  howpublished = {GitHub repository},
  year         = {2025},
  note         = {https://github.com/tegsl/Self-Attention}
}
