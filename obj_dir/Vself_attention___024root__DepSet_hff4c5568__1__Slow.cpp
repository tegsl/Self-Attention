// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention___024root.h"

VL_ATTR_COLD void Vself_attention___024root___eval_triggers__stl(Vself_attention___024root* vlSelf);
VL_ATTR_COLD void Vself_attention___024root___eval_stl(Vself_attention___024root* vlSelf);

VL_ATTR_COLD bool Vself_attention___024root___eval_phase__stl(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_phase__stl\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vself_attention___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vself_attention___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__ico(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__ico\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__act(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__act\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__nba(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__nba\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vself_attention___024root___ctor_var_reset(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___ctor_var_reset\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->input_tokens_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->output_tokens_flat);
    vlSelf->fsm_debug_state = VL_RAND_RESET_I(3);
    vlSelf->debug_state_attn = VL_RAND_RESET_I(3);
    vlSelf->debug_q_0_0 = VL_RAND_RESET_I(32);
    vlSelf->debug_k_0_0 = VL_RAND_RESET_I(32);
    vlSelf->debug_k_1_0 = VL_RAND_RESET_I(32);
    vlSelf->debug_qk_score_00 = VL_RAND_RESET_I(32);
    vlSelf->debug_qk_score_01 = VL_RAND_RESET_I(32);
    vlSelf->debug_attn_00 = VL_RAND_RESET_I(32);
    vlSelf->debug_attn_01 = VL_RAND_RESET_I(32);
    vlSelf->debug_softmax_sum_0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(131072, vlSelf->Q_flat);
    vlSelf->self_attention__DOT__fsm_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__fsm_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qkv_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qk_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__softmax_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__attn_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qk_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__softmax_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__attn_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qkv_done_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT__K_flat);
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT__V_flat);
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT__softmax_scores_flat);
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT____Vcellout__qk_inst__scores_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__fsm__DOT__curr_state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__fsm__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__fsm__DOT__issued_qkv = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__fsm__DOT__issued_qk = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__fsm__DOT__issued_softmax = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__fsm__DOT__issued_attn = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qk_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__qk_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qk_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qk_inst__DOT__k = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__qk_inst__DOT__Q[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__qk_inst__DOT__K[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__qk_inst__DOT__scores[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->self_attention__DOT__qk_inst__DOT__mult = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qk_inst__DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qk_inst__DOT__unnamedblk5__DOT__m = 0;
    vlSelf->self_attention__DOT__softmax_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__softmax_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__softmax_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__softmax_inst__DOT__score = VL_RAND_RESET_Q(56);
    vlSelf->self_attention__DOT__softmax_inst__DOT__exp_val = VL_RAND_RESET_I(22);
    vlSelf->self_attention__DOT__softmax_inst__DOT__row_sum = VL_RAND_RESET_I(28);
    vlSelf->self_attention__DOT__softmax_inst__DOT__norm_val = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__exp_scores[__Vi0][__Vi1] = VL_RAND_RESET_I(22);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__softmax_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->self_attention__DOT__softmax_inst__DOT__unnamedblk2__DOT__scaled = VL_RAND_RESET_Q(36);
    vlSelf->self_attention__DOT__softmax_inst__DOT__unnamedblk2__DOT__norm = VL_RAND_RESET_Q(36);
    vlSelf->self_attention__DOT__attn_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__attn_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__k = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__attn_inst__DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__next_i = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__next_j = VL_RAND_RESET_I(7);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__next_acc_q = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__next_acc_k = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__next_acc_v = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__V_reg);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
