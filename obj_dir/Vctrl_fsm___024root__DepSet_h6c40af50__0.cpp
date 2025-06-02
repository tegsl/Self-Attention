// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctrl_fsm.h for the primary calling header

#include "Vctrl_fsm__pch.h"
#include "Vctrl_fsm___024root.h"

void Vctrl_fsm___024root___ico_sequent__TOP__0(Vctrl_fsm___024root* vlSelf);

void Vctrl_fsm___024root___eval_ico(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_ico\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vctrl_fsm___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vctrl_fsm___024root___ico_sequent__TOP__0(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___ico_sequent__TOP__0\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vctrl_fsm___024root___eval_triggers__ico(Vctrl_fsm___024root* vlSelf);

bool Vctrl_fsm___024root___eval_phase__ico(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_phase__ico\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vctrl_fsm___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vctrl_fsm___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vctrl_fsm___024root___eval_act(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_act\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vctrl_fsm___024root___nba_sequent__TOP__0(Vctrl_fsm___024root* vlSelf);

void Vctrl_fsm___024root___eval_nba(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_nba\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vctrl_fsm___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vctrl_fsm__ConstPool__TABLE_h3e43a941_0;
extern const VlUnpacked<CData/*4:0*/, 128> Vctrl_fsm__ConstPool__TABLE_h8a3e8535_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vctrl_fsm__ConstPool__TABLE_hc95da36e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vctrl_fsm__ConstPool__TABLE_h4112f3dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vctrl_fsm__ConstPool__TABLE_hdd29bceb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vctrl_fsm__ConstPool__TABLE_hc3d77660_0;

VL_INLINE_OPT void Vctrl_fsm___024root___nba_sequent__TOP__0(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___nba_sequent__TOP__0\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.ctrl_fsm__DOT__curr_state) 
                     << 4U) | (((IData)(vlSelfRef.ctrl_fsm__DOT__next_state) 
                                << 1U) | (IData)(vlSelfRef.rst)));
    vlSelfRef.ctrl_fsm__DOT__curr_state = Vctrl_fsm__ConstPool__TABLE_h3e43a941_0
        [__Vtableidx1];
    if ((2U & Vctrl_fsm__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.ctrl_fsm__DOT__issued_qkv = Vctrl_fsm__ConstPool__TABLE_hc95da36e_0
            [__Vtableidx1];
    }
    if ((4U & Vctrl_fsm__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.ctrl_fsm__DOT__issued_qk = Vctrl_fsm__ConstPool__TABLE_h4112f3dd_0
            [__Vtableidx1];
    }
    if ((8U & Vctrl_fsm__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.ctrl_fsm__DOT__issued_softmax = Vctrl_fsm__ConstPool__TABLE_hdd29bceb_0
            [__Vtableidx1];
    }
    if ((0x10U & Vctrl_fsm__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.ctrl_fsm__DOT__issued_attn = Vctrl_fsm__ConstPool__TABLE_hc3d77660_0
            [__Vtableidx1];
    }
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

void Vctrl_fsm___024root___eval_triggers__act(Vctrl_fsm___024root* vlSelf);

bool Vctrl_fsm___024root___eval_phase__act(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_phase__act\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vctrl_fsm___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vctrl_fsm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vctrl_fsm___024root___eval_phase__nba(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_phase__nba\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vctrl_fsm___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__ico(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__nba(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__act(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vctrl_fsm___024root___eval(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vctrl_fsm___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ctrl_fsm.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vctrl_fsm___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vctrl_fsm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ctrl_fsm.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vctrl_fsm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ctrl_fsm.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vctrl_fsm___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vctrl_fsm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vctrl_fsm___024root___eval_debug_assertions(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_debug_assertions\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.qkv_done & 0xfeU)))) {
        Verilated::overWidthError("qkv_done");}
    if (VL_UNLIKELY(((vlSelfRef.qk_done & 0xfeU)))) {
        Verilated::overWidthError("qk_done");}
    if (VL_UNLIKELY(((vlSelfRef.softmax_done & 0xfeU)))) {
        Verilated::overWidthError("softmax_done");}
    if (VL_UNLIKELY(((vlSelfRef.attn_done & 0xfeU)))) {
        Verilated::overWidthError("attn_done");}
}
#endif  // VL_DEBUG
