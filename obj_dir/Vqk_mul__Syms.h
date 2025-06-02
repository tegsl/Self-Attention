// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VQK_MUL__SYMS_H_
#define VERILATED_VQK_MUL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vqk_mul.h"

// INCLUDE MODULE CLASSES
#include "Vqk_mul___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vqk_mul__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vqk_mul* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vqk_mul___024root              TOP;

    // CONSTRUCTORS
    Vqk_mul__Syms(VerilatedContext* contextp, const char* namep, Vqk_mul* modelp);
    ~Vqk_mul__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
