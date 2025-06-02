// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vctrl_fsm.h for the primary calling header

#ifndef VERILATED_VCTRL_FSM___024ROOT_H_
#define VERILATED_VCTRL_FSM___024ROOT_H_  // guard

#include "verilated.h"


class Vctrl_fsm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vctrl_fsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_IN8(qkv_done,0,0);
    VL_IN8(qk_done,0,0);
    VL_IN8(softmax_done,0,0);
    VL_IN8(attn_done,0,0);
    VL_OUT8(qkv_start,0,0);
    VL_OUT8(qk_start,0,0);
    VL_OUT8(softmax_start,0,0);
    VL_OUT8(attn_start,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(debug_state,2,0);
    CData/*2:0*/ ctrl_fsm__DOT__curr_state;
    CData/*2:0*/ ctrl_fsm__DOT__next_state;
    CData/*0:0*/ ctrl_fsm__DOT__issued_qkv;
    CData/*0:0*/ ctrl_fsm__DOT__issued_qk;
    CData/*0:0*/ ctrl_fsm__DOT__issued_softmax;
    CData/*0:0*/ ctrl_fsm__DOT__issued_attn;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vctrl_fsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vctrl_fsm___024root(Vctrl_fsm__Syms* symsp, const char* v__name);
    ~Vctrl_fsm___024root();
    VL_UNCOPYABLE(Vctrl_fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
