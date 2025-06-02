// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vattn_mul.h for the primary calling header

#ifndef VERILATED_VATTN_MUL___024ROOT_H_
#define VERILATED_VATTN_MUL___024ROOT_H_  // guard

#include "verilated.h"


class Vattn_mul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vattn_mul___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(debug_state,2,0);
    CData/*2:0*/ attn_mul__DOT__state;
    CData/*5:0*/ attn_mul__DOT__i;
    CData/*5:0*/ attn_mul__DOT__j;
    CData/*5:0*/ attn_mul__DOT__k;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(softmax_scores_flat,131071,0,4096);
    VL_INW(V_flat,131071,0,4096);
    VL_OUTW(output_flat,131071,0,4096);
    IData/*31:0*/ attn_mul__DOT__acc;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ attn_mul__DOT__product;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vattn_mul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vattn_mul___024root(Vattn_mul__Syms* symsp, const char* v__name);
    ~Vattn_mul___024root();
    VL_UNCOPYABLE(Vattn_mul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
