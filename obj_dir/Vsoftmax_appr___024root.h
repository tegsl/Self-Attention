// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoftmax_appr.h for the primary calling header

#ifndef VERILATED_VSOFTMAX_APPR___024ROOT_H_
#define VERILATED_VSOFTMAX_APPR___024ROOT_H_  // guard

#include "verilated.h"


class Vsoftmax_appr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoftmax_appr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    CData/*2:0*/ softmax_appr__DOT__state;
    CData/*5:0*/ softmax_appr__DOT__i;
    CData/*5:0*/ softmax_appr__DOT__j;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(scores_flat,131071,0,4096);
    VL_OUTW(softmax_scores_flat,131071,0,4096);
    IData/*31:0*/ softmax_appr__DOT__score;
    IData/*21:0*/ softmax_appr__DOT__exp_val;
    IData/*27:0*/ softmax_appr__DOT__row_sum;
    IData/*31:0*/ softmax_appr__DOT__norm_val;
    IData/*31:0*/ __VactIterCount;
    QData/*35:0*/ softmax_appr__DOT__unnamedblk2__DOT__scaled;
    QData/*35:0*/ softmax_appr__DOT__unnamedblk2__DOT__norm;
    VlUnpacked<VlUnpacked<IData/*21:0*/, 64>, 64> softmax_appr__DOT__exp_scores;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 64>, 64> softmax_appr__DOT__softmax_out;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsoftmax_appr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoftmax_appr___024root(Vsoftmax_appr__Syms* symsp, const char* v__name);
    ~Vsoftmax_appr___024root();
    VL_UNCOPYABLE(Vsoftmax_appr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
