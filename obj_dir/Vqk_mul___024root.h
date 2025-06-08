// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vqk_mul.h for the primary calling header

#ifndef VERILATED_VQK_MUL___024ROOT_H_
#define VERILATED_VQK_MUL___024ROOT_H_  // guard

#include "verilated.h"


class Vqk_mul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vqk_mul___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    CData/*2:0*/ qk_mul__DOT__state;
    CData/*5:0*/ qk_mul__DOT__i;
    CData/*5:0*/ qk_mul__DOT__j;
    CData/*5:0*/ qk_mul__DOT__k;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(Q_flat,131071,0,4096);
    VL_INW(K_flat,131071,0,4096);
    VL_OUTW(scores_flat,131071,0,4096);
    IData/*31:0*/ qk_mul__DOT__acc;
    IData/*31:0*/ qk_mul__DOT__unnamedblk5__DOT__m;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ qk_mul__DOT__mult;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 64>, 64> qk_mul__DOT__Q;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 64>, 64> qk_mul__DOT__K;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 64>, 64> qk_mul__DOT__scores;
    VlNBACommitQueue<VlUnpacked<VlUnpacked<IData/*31:0*/, 64>, 64>, false, IData/*31:0*/, 2> __VdlyCommitQueueqk_mul__DOT__scores;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vqk_mul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vqk_mul___024root(Vqk_mul__Syms* symsp, const char* v__name);
    ~Vqk_mul___024root();
    VL_UNCOPYABLE(Vqk_mul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
