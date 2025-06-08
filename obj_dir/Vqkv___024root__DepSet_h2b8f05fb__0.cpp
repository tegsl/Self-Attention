// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqkv.h for the primary calling header

#include "Vqkv__pch.h"
#include "Vqkv___024root.h"

void Vqkv___024root___ico_sequent__TOP__0(Vqkv___024root* vlSelf);

void Vqkv___024root___eval_ico(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_ico\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vqkv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vqkv___024root___ico_sequent__TOP__0(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___ico_sequent__TOP__0\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.qkv__DOT__next_i = vlSelfRef.qkv__DOT__i;
    vlSelfRef.qkv__DOT__next_state = vlSelfRef.qkv__DOT__state;
    vlSelfRef.qkv__DOT__next_j = vlSelfRef.qkv__DOT__j;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.qkv__DOT__input_vec[__Vilp1] = vlSelfRef.input_vec_flat[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.qkv__DOT__next_acc_q = vlSelfRef.qkv__DOT__acc_q;
    vlSelfRef.qkv__DOT__next_acc_k = vlSelfRef.qkv__DOT__acc_k;
    vlSelfRef.qkv__DOT__next_acc_v = vlSelfRef.qkv__DOT__acc_v;
    if ((2U & (IData)(vlSelfRef.qkv__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.qkv__DOT__state)))) {
            if ((0x3fU != (IData)(vlSelfRef.qkv__DOT__i))) {
                vlSelfRef.qkv__DOT__next_i = (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.qkv__DOT__i)));
                vlSelfRef.qkv__DOT__next_j = 0U;
                vlSelfRef.qkv__DOT__next_acc_q = 0ULL;
                vlSelfRef.qkv__DOT__next_acc_k = 0ULL;
                vlSelfRef.qkv__DOT__next_acc_v = 0ULL;
            }
        }
        vlSelfRef.qkv__DOT__next_state = ((1U & (IData)(vlSelfRef.qkv__DOT__state))
                                           ? 0U : (
                                                   (0x3fU 
                                                    == (IData)(vlSelfRef.qkv__DOT__i))
                                                    ? 3U
                                                    : 1U));
    } else {
        if ((1U & (~ (IData)(vlSelfRef.qkv__DOT__state)))) {
            if (vlSelfRef.start) {
                vlSelfRef.qkv__DOT__next_i = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.qkv__DOT__state))) {
            if ((0x3fU == (IData)(vlSelfRef.qkv__DOT__j))) {
                vlSelfRef.qkv__DOT__next_state = 2U;
            }
            if ((0x3fU != (IData)(vlSelfRef.qkv__DOT__j))) {
                vlSelfRef.qkv__DOT__next_j = (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.qkv__DOT__j)));
            }
            vlSelfRef.qkv__DOT__next_acc_q = (vlSelfRef.qkv__DOT__acc_q 
                                              + VL_SHIFTRS_QQI(64,64,32, 
                                                               VL_MULS_QQQ(64, 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.qkv__DOT__input_vec
                                                                                [
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.qkv__DOT__j))]), 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                (((IData)(vlSelfRef.qkv__DOT__i) 
                                                                                == (IData)(vlSelfRef.qkv__DOT__j))
                                                                                 ? 0x4000U
                                                                                 : 0U))), 0xeU));
            vlSelfRef.qkv__DOT__next_acc_k = (vlSelfRef.qkv__DOT__acc_k 
                                              + VL_SHIFTRS_QQI(64,64,32, 
                                                               VL_MULS_QQQ(64, 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.qkv__DOT__input_vec
                                                                                [
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.qkv__DOT__j))]), 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                (((IData)(vlSelfRef.qkv__DOT__i) 
                                                                                == (IData)(vlSelfRef.qkv__DOT__j))
                                                                                 ? 0x4000U
                                                                                 : 0U))), 0xeU));
            vlSelfRef.qkv__DOT__next_acc_v = (vlSelfRef.qkv__DOT__acc_v 
                                              + VL_SHIFTRS_QQI(64,64,32, 
                                                               VL_MULS_QQQ(64, 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.qkv__DOT__input_vec
                                                                                [
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.qkv__DOT__j))]), 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                (((IData)(vlSelfRef.qkv__DOT__i) 
                                                                                == (IData)(vlSelfRef.qkv__DOT__j))
                                                                                 ? 0x4000U
                                                                                 : 0U))), 0xeU));
        } else if (vlSelfRef.start) {
            vlSelfRef.qkv__DOT__next_state = 1U;
            vlSelfRef.qkv__DOT__next_j = 0U;
            vlSelfRef.qkv__DOT__next_acc_q = 0ULL;
            vlSelfRef.qkv__DOT__next_acc_k = 0ULL;
            vlSelfRef.qkv__DOT__next_acc_v = 0ULL;
        }
    }
}

void Vqkv___024root___eval_triggers__ico(Vqkv___024root* vlSelf);

bool Vqkv___024root___eval_phase__ico(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__ico\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vqkv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vqkv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vqkv___024root___eval_act(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_act\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vqkv___024root___nba_sequent__TOP__0(Vqkv___024root* vlSelf);

void Vqkv___024root___eval_nba(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_nba\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vqkv___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<64>/*2047:0*/ Vqkv__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vqkv___024root___nba_sequent__TOP__0(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___nba_sequent__TOP__0\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.qkv__DOT__j = 0U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.qkv__DOT__Q_reg[__Vilp1] = Vqkv__ConstPool__CONST_h6be9aa18_0[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.qkv__DOT__K_reg[__Vilp2] = Vqkv__ConstPool__CONST_h6be9aa18_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.qkv__DOT__V_reg[__Vilp3] = Vqkv__ConstPool__CONST_h6be9aa18_0[__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        vlSelfRef.qkv__DOT__acc_q = 0ULL;
        vlSelfRef.qkv__DOT__acc_k = 0ULL;
        vlSelfRef.qkv__DOT__acc_v = 0ULL;
        vlSelfRef.qkv__DOT__i = 0U;
        vlSelfRef.qkv__DOT__state = 0U;
    } else {
        vlSelfRef.qkv__DOT__j = vlSelfRef.qkv__DOT__next_j;
        if ((2U == (IData)(vlSelfRef.qkv__DOT__state))) {
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.qkv__DOT__i), 5U)), vlSelfRef.qkv__DOT__Q_reg, (IData)(vlSelfRef.qkv__DOT__acc_q));
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.qkv__DOT__i), 5U)), vlSelfRef.qkv__DOT__K_reg, (IData)(vlSelfRef.qkv__DOT__acc_k));
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.qkv__DOT__i), 5U)), vlSelfRef.qkv__DOT__V_reg, (IData)(vlSelfRef.qkv__DOT__acc_v));
        }
        vlSelfRef.qkv__DOT__acc_q = vlSelfRef.qkv__DOT__next_acc_q;
        vlSelfRef.qkv__DOT__acc_k = vlSelfRef.qkv__DOT__next_acc_k;
        vlSelfRef.qkv__DOT__acc_v = vlSelfRef.qkv__DOT__next_acc_v;
        vlSelfRef.qkv__DOT__i = vlSelfRef.qkv__DOT__next_i;
        vlSelfRef.qkv__DOT__state = vlSelfRef.qkv__DOT__next_state;
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelfRef.Q_flat[__Vilp4] = vlSelfRef.qkv__DOT__Q_reg[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3fU)) {
        vlSelfRef.K_flat[__Vilp5] = vlSelfRef.qkv__DOT__K_reg[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3fU)) {
        vlSelfRef.V_flat[__Vilp6] = vlSelfRef.qkv__DOT__V_reg[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSelfRef.done = 0U;
    vlSelfRef.qkv__DOT__next_i = vlSelfRef.qkv__DOT__i;
    vlSelfRef.qkv__DOT__next_state = vlSelfRef.qkv__DOT__state;
    vlSelfRef.qkv__DOT__next_j = vlSelfRef.qkv__DOT__j;
    vlSelfRef.qkv__DOT__next_acc_q = vlSelfRef.qkv__DOT__acc_q;
    vlSelfRef.qkv__DOT__next_acc_k = vlSelfRef.qkv__DOT__acc_k;
    vlSelfRef.qkv__DOT__next_acc_v = vlSelfRef.qkv__DOT__acc_v;
    if ((2U & (IData)(vlSelfRef.qkv__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.qkv__DOT__state))) {
            vlSelfRef.done = 1U;
            vlSelfRef.qkv__DOT__next_state = 0U;
        } else {
            vlSelfRef.qkv__DOT__next_state = ((0x3fU 
                                               == (IData)(vlSelfRef.qkv__DOT__i))
                                               ? 3U
                                               : 1U);
        }
        if ((1U & (~ (IData)(vlSelfRef.qkv__DOT__state)))) {
            if ((0x3fU != (IData)(vlSelfRef.qkv__DOT__i))) {
                vlSelfRef.qkv__DOT__next_i = (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.qkv__DOT__i)));
                vlSelfRef.qkv__DOT__next_j = 0U;
                vlSelfRef.qkv__DOT__next_acc_q = 0ULL;
                vlSelfRef.qkv__DOT__next_acc_k = 0ULL;
                vlSelfRef.qkv__DOT__next_acc_v = 0ULL;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.qkv__DOT__state)))) {
            if (vlSelfRef.start) {
                vlSelfRef.qkv__DOT__next_i = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.qkv__DOT__state))) {
            if ((0x3fU == (IData)(vlSelfRef.qkv__DOT__j))) {
                vlSelfRef.qkv__DOT__next_state = 2U;
            }
            if ((0x3fU != (IData)(vlSelfRef.qkv__DOT__j))) {
                vlSelfRef.qkv__DOT__next_j = (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.qkv__DOT__j)));
            }
            vlSelfRef.qkv__DOT__next_acc_q = (vlSelfRef.qkv__DOT__acc_q 
                                              + VL_SHIFTRS_QQI(64,64,32, 
                                                               VL_MULS_QQQ(64, 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.qkv__DOT__input_vec
                                                                                [
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.qkv__DOT__j))]), 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                (((IData)(vlSelfRef.qkv__DOT__i) 
                                                                                == (IData)(vlSelfRef.qkv__DOT__j))
                                                                                 ? 0x4000U
                                                                                 : 0U))), 0xeU));
            vlSelfRef.qkv__DOT__next_acc_k = (vlSelfRef.qkv__DOT__acc_k 
                                              + VL_SHIFTRS_QQI(64,64,32, 
                                                               VL_MULS_QQQ(64, 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.qkv__DOT__input_vec
                                                                                [
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.qkv__DOT__j))]), 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                (((IData)(vlSelfRef.qkv__DOT__i) 
                                                                                == (IData)(vlSelfRef.qkv__DOT__j))
                                                                                 ? 0x4000U
                                                                                 : 0U))), 0xeU));
            vlSelfRef.qkv__DOT__next_acc_v = (vlSelfRef.qkv__DOT__acc_v 
                                              + VL_SHIFTRS_QQI(64,64,32, 
                                                               VL_MULS_QQQ(64, 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.qkv__DOT__input_vec
                                                                                [
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.qkv__DOT__j))]), 
                                                                           VL_EXTENDS_QI(64,32, 
                                                                                (((IData)(vlSelfRef.qkv__DOT__i) 
                                                                                == (IData)(vlSelfRef.qkv__DOT__j))
                                                                                 ? 0x4000U
                                                                                 : 0U))), 0xeU));
        } else if (vlSelfRef.start) {
            vlSelfRef.qkv__DOT__next_state = 1U;
            vlSelfRef.qkv__DOT__next_j = 0U;
            vlSelfRef.qkv__DOT__next_acc_q = 0ULL;
            vlSelfRef.qkv__DOT__next_acc_k = 0ULL;
            vlSelfRef.qkv__DOT__next_acc_v = 0ULL;
        }
    }
}

void Vqkv___024root___eval_triggers__act(Vqkv___024root* vlSelf);

bool Vqkv___024root___eval_phase__act(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__act\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vqkv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vqkv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vqkv___024root___eval_phase__nba(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__nba\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vqkv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__ico(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__nba(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__act(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG

void Vqkv___024root___eval(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vqkv___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("qkv.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vqkv___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vqkv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("qkv.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vqkv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("qkv.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vqkv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vqkv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vqkv___024root___eval_debug_assertions(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_debug_assertions\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
