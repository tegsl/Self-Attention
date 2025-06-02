// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoftmax_appr.h for the primary calling header

#include "Vsoftmax_appr__pch.h"
#include "Vsoftmax_appr__Syms.h"
#include "Vsoftmax_appr___024root.h"

void Vsoftmax_appr___024root___ctor_var_reset(Vsoftmax_appr___024root* vlSelf);

Vsoftmax_appr___024root::Vsoftmax_appr___024root(Vsoftmax_appr__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsoftmax_appr___024root___ctor_var_reset(this);
}

void Vsoftmax_appr___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsoftmax_appr___024root::~Vsoftmax_appr___024root() {
}
