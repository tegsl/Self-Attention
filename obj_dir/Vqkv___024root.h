// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vqkv.h for the primary calling header

#ifndef VERILATED_VQKV___024ROOT_H_
#define VERILATED_VQKV___024ROOT_H_  // guard

#include "verilated.h"


class Vqkv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vqkv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(input_vec_flat,2047,0,64);
    VL_OUTW(Q_flat,2047,0,64);
    VL_OUTW(K_flat,2047,0,64);
    VL_OUTW(V_flat,2047,0,64);
    VlWide<64>/*2047:0*/ qkv__DOT__Q_reg;
    VlWide<64>/*2047:0*/ qkv__DOT__K_reg;
    VlWide<64>/*2047:0*/ qkv__DOT__V_reg;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vqkv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vqkv___024root(Vqkv__Syms* symsp, const char* v__name);
    ~Vqkv___024root();
    VL_UNCOPYABLE(Vqkv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
