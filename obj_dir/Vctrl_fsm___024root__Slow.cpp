// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctrl_fsm.h for the primary calling header

#include "Vctrl_fsm__pch.h"
#include "Vctrl_fsm__Syms.h"
#include "Vctrl_fsm___024root.h"

void Vctrl_fsm___024root___ctor_var_reset(Vctrl_fsm___024root* vlSelf);

Vctrl_fsm___024root::Vctrl_fsm___024root(Vctrl_fsm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vctrl_fsm___024root___ctor_var_reset(this);
}

void Vctrl_fsm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vctrl_fsm___024root::~Vctrl_fsm___024root() {
}
