// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention__Syms.h"
#include "Vself_attention___024root.h"

void Vself_attention___024root___ctor_var_reset(Vself_attention___024root* vlSelf);

Vself_attention___024root::Vself_attention___024root(Vself_attention__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vself_attention___024root___ctor_var_reset(this);
}

void Vself_attention___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vself_attention___024root::~Vself_attention___024root() {
}
