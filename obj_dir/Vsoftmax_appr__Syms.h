// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOFTMAX_APPR__SYMS_H_
#define VERILATED_VSOFTMAX_APPR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsoftmax_appr.h"

// INCLUDE MODULE CLASSES
#include "Vsoftmax_appr___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsoftmax_appr__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsoftmax_appr* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsoftmax_appr___024root        TOP;

    // CONSTRUCTORS
    Vsoftmax_appr__Syms(VerilatedContext* contextp, const char* namep, Vsoftmax_appr* modelp);
    ~Vsoftmax_appr__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
