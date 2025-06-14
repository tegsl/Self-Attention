// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vattn_mul.h for the primary calling header

#include "Vattn_mul__pch.h"
#include "Vattn_mul___024root.h"

VL_ATTR_COLD void Vattn_mul___024root___eval_static(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_static\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vattn_mul___024root___eval_initial(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_initial\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vattn_mul___024root___eval_final(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_final\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__stl(Vattn_mul___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vattn_mul___024root___eval_phase__stl(Vattn_mul___024root* vlSelf);

VL_ATTR_COLD void Vattn_mul___024root___eval_settle(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_settle\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vattn_mul___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("attn_mul.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vattn_mul___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__stl(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___dump_triggers__stl\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vattn_mul___024root___stl_sequent__TOP__0(Vattn_mul___024root* vlSelf);

VL_ATTR_COLD void Vattn_mul___024root___eval_stl(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_stl\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vattn_mul___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vattn_mul___024root___stl_sequent__TOP__0(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___stl_sequent__TOP__0\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ attn_mul__DOT__softmax_val;
    attn_mul__DOT__softmax_val = 0;
    IData/*31:0*/ attn_mul__DOT__V_val;
    attn_mul__DOT__V_val = 0;
    // Body
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

VL_ATTR_COLD void Vattn_mul___024root___eval_triggers__stl(Vattn_mul___024root* vlSelf);

VL_ATTR_COLD bool Vattn_mul___024root___eval_phase__stl(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_phase__stl\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vattn_mul___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vattn_mul___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__ico(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___dump_triggers__ico\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__act(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___dump_triggers__act\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__nba(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___dump_triggers__nba\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vattn_mul___024root___ctor_var_reset(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___ctor_var_reset\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->softmax_scores_flat);
    VL_RAND_RESET_W(131072, vlSelf->V_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->output_flat);
    vlSelf->debug_state = VL_RAND_RESET_I(3);
    vlSelf->attn_mul__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->attn_mul__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->attn_mul__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->attn_mul__DOT__k = VL_RAND_RESET_I(6);
    vlSelf->attn_mul__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->attn_mul__DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
