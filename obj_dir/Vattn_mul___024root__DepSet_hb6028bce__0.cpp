// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vattn_mul.h for the primary calling header

#include "Vattn_mul__pch.h"
#include "Vattn_mul___024root.h"

void Vattn_mul___024root___ico_sequent__TOP__0(Vattn_mul___024root* vlSelf);

void Vattn_mul___024root___eval_ico(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_ico\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vattn_mul___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vattn_mul___024root___ico_sequent__TOP__0(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___ico_sequent__TOP__0\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ attn_mul__DOT__softmax_val;
    attn_mul__DOT__softmax_val = 0;
    IData/*31:0*/ attn_mul__DOT__V_val;
    attn_mul__DOT__V_val = 0;
    // Body
    attn_mul__DOT__softmax_val = (((0U == (0x1fU & 
                                           VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U)))
                                    ? 0U : (vlSelfRef.softmax_scores_flat[
                                            (((IData)(0x1fU) 
                                              + (0x1ffffU 
                                                 & VL_SHIFTL_III(17,32,32, 
                                                                 (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                                  + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(17,32,32, 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U))))) 
                                  | (vlSelfRef.softmax_scores_flat[
                                     (0xfffU & (VL_SHIFTL_III(17,32,32, 
                                                              (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                               + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U) 
                                                >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                                + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U))));
    attn_mul__DOT__V_val = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                            + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U)))
                              ? 0U : (vlSelfRef.V_flat[
                                      (((IData)(0x1fU) 
                                        + (0x1ffffU 
                                           & VL_SHIFTL_III(17,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                            + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(17,32,32, 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                                     + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U))))) 
                            | (vlSelfRef.V_flat[(0xfffU 
                                                 & (VL_SHIFTL_III(17,32,32, 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                                   + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U) 
                                                    >> 5U))] 
                               >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                          + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U))));
    vlSelfRef.attn_mul__DOT__product = VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, attn_mul__DOT__softmax_val), 
                                                   VL_EXTENDS_QI(64,32, attn_mul__DOT__V_val));
}

void Vattn_mul___024root___eval_triggers__ico(Vattn_mul___024root* vlSelf);

bool Vattn_mul___024root___eval_phase__ico(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_phase__ico\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vattn_mul___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vattn_mul___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vattn_mul___024root___eval_act(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_act\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vattn_mul___024root___nba_sequent__TOP__0(Vattn_mul___024root* vlSelf);

void Vattn_mul___024root___eval_nba(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_nba\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vattn_mul___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vattn_mul___024root___nba_sequent__TOP__0(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___nba_sequent__TOP__0\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ attn_mul__DOT__softmax_val;
    attn_mul__DOT__softmax_val = 0;
    IData/*31:0*/ attn_mul__DOT__V_val;
    attn_mul__DOT__V_val = 0;
    CData/*2:0*/ __Vdly__attn_mul__DOT__state;
    __Vdly__attn_mul__DOT__state = 0;
    CData/*5:0*/ __Vdly__attn_mul__DOT__i;
    __Vdly__attn_mul__DOT__i = 0;
    CData/*5:0*/ __Vdly__attn_mul__DOT__j;
    __Vdly__attn_mul__DOT__j = 0;
    CData/*5:0*/ __Vdly__attn_mul__DOT__k;
    __Vdly__attn_mul__DOT__k = 0;
    IData/*31:0*/ __Vdly__attn_mul__DOT__acc;
    __Vdly__attn_mul__DOT__acc = 0;
    // Body
    __Vdly__attn_mul__DOT__acc = vlSelfRef.attn_mul__DOT__acc;
    __Vdly__attn_mul__DOT__state = vlSelfRef.attn_mul__DOT__state;
    __Vdly__attn_mul__DOT__i = vlSelfRef.attn_mul__DOT__i;
    __Vdly__attn_mul__DOT__j = vlSelfRef.attn_mul__DOT__j;
    __Vdly__attn_mul__DOT__k = vlSelfRef.attn_mul__DOT__k;
    if (vlSelfRef.rst) {
        __Vdly__attn_mul__DOT__state = 0U;
        __Vdly__attn_mul__DOT__i = 0U;
        __Vdly__attn_mul__DOT__j = 0U;
        __Vdly__attn_mul__DOT__k = 0U;
        __Vdly__attn_mul__DOT__acc = 0U;
        vlSelfRef.done = 0U;
    } else if ((0U == (IData)(vlSelfRef.attn_mul__DOT__state))) {
        vlSelfRef.done = 0U;
        if (vlSelfRef.start) {
            __Vdly__attn_mul__DOT__i = 0U;
            __Vdly__attn_mul__DOT__j = 0U;
            __Vdly__attn_mul__DOT__k = 0U;
            __Vdly__attn_mul__DOT__acc = 0U;
            __Vdly__attn_mul__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.attn_mul__DOT__state))) {
        __Vdly__attn_mul__DOT__acc = 0U;
        __Vdly__attn_mul__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelfRef.attn_mul__DOT__state))) {
        __Vdly__attn_mul__DOT__acc = ((IData)(VL_EXTENDS_QI(64,32, vlSelfRef.attn_mul__DOT__acc)) 
                                      + (IData)(VL_SHIFTRS_QQI(64,64,32, vlSelfRef.attn_mul__DOT__product, 0xeU)));
        if ((0x3fU == (IData)(vlSelfRef.attn_mul__DOT__j))) {
            __Vdly__attn_mul__DOT__state = 3U;
        } else {
            __Vdly__attn_mul__DOT__j = (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.attn_mul__DOT__j)));
        }
    } else if ((3U == (IData)(vlSelfRef.attn_mul__DOT__state))) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_SHIFTL_III(17,32,32, 
                                                            (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                             + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U)), vlSelfRef.output_flat, vlSelfRef.attn_mul__DOT__acc);
        __Vdly__attn_mul__DOT__j = 0U;
        if ((0x3fU == (IData)(vlSelfRef.attn_mul__DOT__k))) {
            __Vdly__attn_mul__DOT__k = 0U;
            if ((0x3fU == (IData)(vlSelfRef.attn_mul__DOT__i))) {
                __Vdly__attn_mul__DOT__state = 4U;
            } else {
                __Vdly__attn_mul__DOT__i = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.attn_mul__DOT__i)));
                __Vdly__attn_mul__DOT__state = 1U;
            }
        } else {
            __Vdly__attn_mul__DOT__k = (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.attn_mul__DOT__k)));
            __Vdly__attn_mul__DOT__state = 1U;
        }
    } else if ((4U == (IData)(vlSelfRef.attn_mul__DOT__state))) {
        vlSelfRef.done = 1U;
        __Vdly__attn_mul__DOT__state = 0U;
    }
    vlSelfRef.attn_mul__DOT__acc = __Vdly__attn_mul__DOT__acc;
    vlSelfRef.attn_mul__DOT__state = __Vdly__attn_mul__DOT__state;
    vlSelfRef.attn_mul__DOT__i = __Vdly__attn_mul__DOT__i;
    vlSelfRef.attn_mul__DOT__j = __Vdly__attn_mul__DOT__j;
    vlSelfRef.attn_mul__DOT__k = __Vdly__attn_mul__DOT__k;
    vlSelfRef.debug_state = vlSelfRef.attn_mul__DOT__state;
    attn_mul__DOT__softmax_val = (((0U == (0x1fU & 
                                           VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U)))
                                    ? 0U : (vlSelfRef.softmax_scores_flat[
                                            (((IData)(0x1fU) 
                                              + (0x1ffffU 
                                                 & VL_SHIFTL_III(17,32,32, 
                                                                 (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                                  + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(17,32,32, 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U))))) 
                                  | (vlSelfRef.softmax_scores_flat[
                                     (0xfffU & (VL_SHIFTL_III(17,32,32, 
                                                              (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                               + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U) 
                                                >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__i), 6U) 
                                                                + (IData)(vlSelfRef.attn_mul__DOT__j)), 5U))));
    attn_mul__DOT__V_val = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                            + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U)))
                              ? 0U : (vlSelfRef.V_flat[
                                      (((IData)(0x1fU) 
                                        + (0x1ffffU 
                                           & VL_SHIFTL_III(17,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                            + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(17,32,32, 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                                     + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U))))) 
                            | (vlSelfRef.V_flat[(0xfffU 
                                                 & (VL_SHIFTL_III(17,32,32, 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                                   + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U) 
                                                    >> 5U))] 
                               >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.attn_mul__DOT__j), 6U) 
                                                          + (IData)(vlSelfRef.attn_mul__DOT__k)), 5U))));
    vlSelfRef.attn_mul__DOT__product = VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, attn_mul__DOT__softmax_val), 
                                                   VL_EXTENDS_QI(64,32, attn_mul__DOT__V_val));
}

void Vattn_mul___024root___eval_triggers__act(Vattn_mul___024root* vlSelf);

bool Vattn_mul___024root___eval_phase__act(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_phase__act\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vattn_mul___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vattn_mul___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vattn_mul___024root___eval_phase__nba(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_phase__nba\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vattn_mul___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__ico(Vattn_mul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__nba(Vattn_mul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__act(Vattn_mul___024root* vlSelf);
#endif  // VL_DEBUG

void Vattn_mul___024root___eval(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vattn_mul___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("attn_mul.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vattn_mul___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vattn_mul___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("attn_mul.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vattn_mul___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("attn_mul.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vattn_mul___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vattn_mul___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vattn_mul___024root___eval_debug_assertions(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_debug_assertions\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
