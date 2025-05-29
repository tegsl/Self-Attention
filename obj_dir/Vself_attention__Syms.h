// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSELF_ATTENTION__SYMS_H_
#define VERILATED_VSELF_ATTENTION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vself_attention.h"

// INCLUDE MODULE CLASSES
#include "Vself_attention___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vself_attention__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vself_attention* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vself_attention___024root      TOP;

    // CONSTRUCTORS
    Vself_attention__Syms(VerilatedContext* contextp, const char* namep, Vself_attention* modelp);
    ~Vself_attention__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
