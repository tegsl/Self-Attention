// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqkv.h for the primary calling header

#include "Vqkv__pch.h"
#include "Vqkv___024root.h"

VL_ATTR_COLD void Vqkv___024root___eval_static(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_static\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vqkv___024root___eval_initial(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_initial\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vqkv___024root___eval_final(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_final\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__stl(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vqkv___024root___eval_phase__stl(Vqkv___024root* vlSelf);

VL_ATTR_COLD void Vqkv___024root___eval_settle(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_settle\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vqkv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("qkv.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vqkv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__stl(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___dump_triggers__stl\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vqkv___024root___stl_sequent__TOP__0(Vqkv___024root* vlSelf);

VL_ATTR_COLD void Vqkv___024root___eval_stl(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_stl\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vqkv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vqkv___024root___stl_sequent__TOP__0(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___stl_sequent__TOP__0\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.Q_flat[__Vilp1] = vlSelfRef.qkv__DOT__Q_reg[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelfRef.K_flat[__Vilp2] = vlSelfRef.qkv__DOT__K_reg[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelfRef.V_flat[__Vilp3] = vlSelfRef.qkv__DOT__V_reg[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
}

VL_ATTR_COLD void Vqkv___024root___eval_triggers__stl(Vqkv___024root* vlSelf);

VL_ATTR_COLD bool Vqkv___024root___eval_phase__stl(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__stl\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vqkv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vqkv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__act(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___dump_triggers__act\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vqkv___024root___dump_triggers__nba(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___dump_triggers__nba\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vqkv___024root___ctor_var_reset(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___ctor_var_reset\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->input_vec_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->Q_flat);
    VL_RAND_RESET_W(2048, vlSelf->K_flat);
    VL_RAND_RESET_W(2048, vlSelf->V_flat);
    VL_RAND_RESET_W(2048, vlSelf->qkv__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->qkv__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->qkv__DOT__V_reg);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
