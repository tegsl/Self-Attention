// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCTRL_FSM__SYMS_H_
#define VERILATED_VCTRL_FSM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vctrl_fsm.h"

// INCLUDE MODULE CLASSES
#include "Vctrl_fsm___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vctrl_fsm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vctrl_fsm* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vctrl_fsm___024root            TOP;

    // CONSTRUCTORS
    Vctrl_fsm__Syms(VerilatedContext* contextp, const char* namep, Vctrl_fsm* modelp);
    ~Vctrl_fsm__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
