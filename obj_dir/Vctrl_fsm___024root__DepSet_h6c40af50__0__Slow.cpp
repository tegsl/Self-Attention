// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctrl_fsm.h for the primary calling header

#include "Vctrl_fsm__pch.h"
#include "Vctrl_fsm___024root.h"

VL_ATTR_COLD void Vctrl_fsm___024root___eval_static(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_static\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vctrl_fsm___024root___eval_initial(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_initial\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vctrl_fsm___024root___eval_final(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_final\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__stl(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vctrl_fsm___024root___eval_phase__stl(Vctrl_fsm___024root* vlSelf);

VL_ATTR_COLD void Vctrl_fsm___024root___eval_settle(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_settle\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vctrl_fsm___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ctrl_fsm.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vctrl_fsm___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__stl(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___dump_triggers__stl\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vctrl_fsm___024root___stl_sequent__TOP__0(Vctrl_fsm___024root* vlSelf);

VL_ATTR_COLD void Vctrl_fsm___024root___eval_stl(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_stl\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vctrl_fsm___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vctrl_fsm___024root___stl_sequent__TOP__0(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___stl_sequent__TOP__0\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = 0U;
    vlSelfRef.debug_state = vlSelfRef.ctrl_fsm__DOT__curr_state;
    vlSelfRef.qkv_start = 0U;
    vlSelfRef.attn_start = 0U;
    vlSelfRef.softmax_start = 0U;
    vlSelfRef.qk_start = 0U;
    if ((0U != (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        if ((1U != (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
            if ((2U != (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                if ((3U != (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                    if ((4U != (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                        if ((5U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                            vlSelfRef.done = 1U;
                        }
                    }
                    if ((4U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                        vlSelfRef.attn_start = (1U 
                                                & (~ (IData)(vlSelfRef.ctrl_fsm__DOT__issued_attn)));
                    }
                }
                if ((3U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                    vlSelfRef.softmax_start = (1U & 
                                               (~ (IData)(vlSelfRef.ctrl_fsm__DOT__issued_softmax)));
                }
            }
            if ((2U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
                vlSelfRef.qk_start = (1U & (~ (IData)(vlSelfRef.ctrl_fsm__DOT__issued_qk)));
            }
        }
        if ((1U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
            vlSelfRef.qkv_start = (1U & (~ (IData)(vlSelfRef.ctrl_fsm__DOT__issued_qkv)));
        }
    }
    vlSelfRef.ctrl_fsm__DOT__next_state = vlSelfRef.ctrl_fsm__DOT__curr_state;
    if ((0U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        if (vlSelfRef.start) {
            vlSelfRef.ctrl_fsm__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        if (vlSelfRef.qkv_done) {
            vlSelfRef.ctrl_fsm__DOT__next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        if (vlSelfRef.qk_done) {
            vlSelfRef.ctrl_fsm__DOT__next_state = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        if (vlSelfRef.softmax_done) {
            vlSelfRef.ctrl_fsm__DOT__next_state = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        if (vlSelfRef.attn_done) {
            vlSelfRef.ctrl_fsm__DOT__next_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.ctrl_fsm__DOT__curr_state))) {
        vlSelfRef.ctrl_fsm__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vctrl_fsm___024root___eval_triggers__stl(Vctrl_fsm___024root* vlSelf);

VL_ATTR_COLD bool Vctrl_fsm___024root___eval_phase__stl(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_phase__stl\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vctrl_fsm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vctrl_fsm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__ico(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___dump_triggers__ico\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__act(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___dump_triggers__act\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__nba(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___dump_triggers__nba\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vctrl_fsm___024root___ctor_var_reset(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___ctor_var_reset\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->qkv_done = VL_RAND_RESET_I(1);
    vlSelf->qk_done = VL_RAND_RESET_I(1);
    vlSelf->softmax_done = VL_RAND_RESET_I(1);
    vlSelf->attn_done = VL_RAND_RESET_I(1);
    vlSelf->qkv_start = VL_RAND_RESET_I(1);
    vlSelf->qk_start = VL_RAND_RESET_I(1);
    vlSelf->softmax_start = VL_RAND_RESET_I(1);
    vlSelf->attn_start = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->debug_state = VL_RAND_RESET_I(3);
    vlSelf->ctrl_fsm__DOT__curr_state = VL_RAND_RESET_I(3);
    vlSelf->ctrl_fsm__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ctrl_fsm__DOT__issued_qkv = VL_RAND_RESET_I(1);
    vlSelf->ctrl_fsm__DOT__issued_qk = VL_RAND_RESET_I(1);
    vlSelf->ctrl_fsm__DOT__issued_softmax = VL_RAND_RESET_I(1);
    vlSelf->ctrl_fsm__DOT__issued_attn = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
