// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqkv.h for the primary calling header

#include "Vqkv__pch.h"
#include "Vqkv__Syms.h"
#include "Vqkv___024root.h"

void Vqkv___024root___ctor_var_reset(Vqkv___024root* vlSelf);

Vqkv___024root::Vqkv___024root(Vqkv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vqkv___024root___ctor_var_reset(this);
}

void Vqkv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vqkv___024root::~Vqkv___024root() {
}
