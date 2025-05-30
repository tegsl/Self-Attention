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
    CData/*1:0*/ qkv__DOT__state;
    CData/*5:0*/ qkv__DOT__i;
    CData/*5:0*/ qkv__DOT__calc_j;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ qkv__DOT__weight;
    VL_INW(input_vec_flat,1023,0,32);
    VL_OUTW(Q_flat,1023,0,32);
    VL_OUTW(K_flat,1023,0,32);
    VL_OUTW(V_flat,1023,0,32);
    IData/*31:0*/ qkv__DOT__acc_q;
    IData/*31:0*/ qkv__DOT__acc_k;
    IData/*31:0*/ qkv__DOT__acc_v;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 64> qkv__DOT__input_vec;
    VlUnpacked<SData/*15:0*/, 64> qkv__DOT__Q;
    VlUnpacked<SData/*15:0*/, 64> qkv__DOT__K;
    VlUnpacked<SData/*15:0*/, 64> qkv__DOT__V;
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
