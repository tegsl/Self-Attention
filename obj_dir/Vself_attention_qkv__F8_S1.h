// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vself_attention.h for the primary calling header

#ifndef VERILATED_VSELF_ATTENTION_QKV__F8_S1_H_
#define VERILATED_VSELF_ATTENTION_QKV__F8_S1_H_  // guard

#include "verilated.h"


class Vself_attention__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vself_attention_qkv__F8_S1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    VL_INW(input_vec_flat,2047,0,64);
    VL_OUTW(Q_flat,2047,0,64);
    VL_OUTW(K_flat,2047,0,64);
    VL_OUTW(V_flat,2047,0,64);
    VlWide<64>/*2047:0*/ __PVT__Q_reg;
    VlWide<64>/*2047:0*/ __PVT__K_reg;
    VlWide<64>/*2047:0*/ __PVT__V_reg;

    // INTERNAL VARIABLES
    Vself_attention__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vself_attention_qkv__F8_S1(Vself_attention__Syms* symsp, const char* v__name);
    ~Vself_attention_qkv__F8_S1();
    VL_UNCOPYABLE(Vself_attention_qkv__F8_S1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
