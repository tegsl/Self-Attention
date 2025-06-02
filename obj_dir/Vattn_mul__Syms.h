// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VATTN_MUL__SYMS_H_
#define VERILATED_VATTN_MUL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vattn_mul.h"

// INCLUDE MODULE CLASSES
#include "Vattn_mul___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vattn_mul__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vattn_mul* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vattn_mul___024root            TOP;

    // CONSTRUCTORS
    Vattn_mul__Syms(VerilatedContext* contextp, const char* namep, Vattn_mul* modelp);
    ~Vattn_mul__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
