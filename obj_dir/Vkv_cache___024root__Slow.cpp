// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkv_cache.h for the primary calling header

#include "Vkv_cache__pch.h"
#include "Vkv_cache__Syms.h"
#include "Vkv_cache___024root.h"

void Vkv_cache___024root___ctor_var_reset(Vkv_cache___024root* vlSelf);

Vkv_cache___024root::Vkv_cache___024root(Vkv_cache__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkv_cache___024root___ctor_var_reset(this);
}

void Vkv_cache___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vkv_cache___024root::~Vkv_cache___024root() {
}
