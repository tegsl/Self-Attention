// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention___024root.h"

VL_ATTR_COLD void Vself_attention___024root___eval_static(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_static\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vself_attention___024root___eval_initial__TOP(Vself_attention___024root* vlSelf);

VL_ATTR_COLD void Vself_attention___024root___eval_initial(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_initial\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vself_attention___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vself_attention___024root___eval_initial__TOP(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_initial__TOP\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[0U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[1U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[2U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[3U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[4U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[5U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[6U] = 0xffffffffU;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[7U] = 0xffffffffU;
}

VL_ATTR_COLD void Vself_attention___024root___eval_final(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_final\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__stl(Vself_attention___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vself_attention___024root___eval_phase__stl(Vself_attention___024root* vlSelf);

VL_ATTR_COLD void Vself_attention___024root___eval_settle(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_settle\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vself_attention___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("self_attention.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vself_attention___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__stl(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__stl\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vself_attention___024root___stl_sequent__TOP__0(Vself_attention___024root* vlSelf);
VL_ATTR_COLD void Vself_attention___024root___stl_sequent__TOP__1(Vself_attention___024root* vlSelf);

VL_ATTR_COLD void Vself_attention___024root___eval_stl(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_stl\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vself_attention___024root___stl_sequent__TOP__0(vlSelf);
        Vself_attention___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vself_attention___024root___stl_sequent__TOP__0(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___stl_sequent__TOP__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.self_attention__DOT__fsm_done = 0U;
    if ((0U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if ((1U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
            if ((2U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                if ((3U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                    if ((4U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                        if ((5U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                            vlSelfRef.self_attention__DOT__fsm_done = 1U;
                        }
                    }
                }
            }
        }
    }
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec[__Vilp1] 
            = vlSelfRef.input_tokens_flat[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec[__Vilp2] 
            = vlSelfRef.input_tokens_flat[(__Vilp2 
                                           + (IData)(0x40U))];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec[__Vilp3] 
            = vlSelfRef.input_tokens_flat[(__Vilp3 
                                           + (IData)(0x80U))];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec[__Vilp4] 
            = vlSelfRef.input_tokens_flat[(__Vilp4 
                                           + (IData)(0xc0U))];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec[__Vilp5] 
            = vlSelfRef.input_tokens_flat[(__Vilp5 
                                           + (IData)(0x100U))];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec[__Vilp6] 
            = vlSelfRef.input_tokens_flat[(__Vilp6 
                                           + (IData)(0x140U))];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec[__Vilp7] 
            = vlSelfRef.input_tokens_flat[(__Vilp7 
                                           + (IData)(0x180U))];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec[__Vilp8] 
            = vlSelfRef.input_tokens_flat[(__Vilp8 
                                           + (IData)(0x1c0U))];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec[__Vilp9] 
            = vlSelfRef.input_tokens_flat[(__Vilp9 
                                           + (IData)(0x200U))];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec[__Vilp10] 
            = vlSelfRef.input_tokens_flat[(__Vilp10 
                                           + (IData)(0x240U))];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec[__Vilp11] 
            = vlSelfRef.input_tokens_flat[(__Vilp11 
                                           + (IData)(0x280U))];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec[__Vilp12] 
            = vlSelfRef.input_tokens_flat[(__Vilp12 
                                           + (IData)(0x2c0U))];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec[__Vilp13] 
            = vlSelfRef.input_tokens_flat[(__Vilp13 
                                           + (IData)(0x300U))];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec[__Vilp14] 
            = vlSelfRef.input_tokens_flat[(__Vilp14 
                                           + (IData)(0x340U))];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec[__Vilp15] 
            = vlSelfRef.input_tokens_flat[(__Vilp15 
                                           + (IData)(0x380U))];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec[__Vilp16] 
            = vlSelfRef.input_tokens_flat[(__Vilp16 
                                           + (IData)(0x3c0U))];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec[__Vilp17] 
            = vlSelfRef.input_tokens_flat[(__Vilp17 
                                           + (IData)(0x400U))];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec[__Vilp18] 
            = vlSelfRef.input_tokens_flat[(__Vilp18 
                                           + (IData)(0x440U))];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec[__Vilp19] 
            = vlSelfRef.input_tokens_flat[(__Vilp19 
                                           + (IData)(0x480U))];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    IData/*31:0*/ __Vilp20;
    __Vilp20 = 0U;
    while ((__Vilp20 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec[__Vilp20] 
            = vlSelfRef.input_tokens_flat[(__Vilp20 
                                           + (IData)(0x4c0U))];
        __Vilp20 = ((IData)(1U) + __Vilp20);
    }
    IData/*31:0*/ __Vilp21;
    __Vilp21 = 0U;
    while ((__Vilp21 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec[__Vilp21] 
            = vlSelfRef.input_tokens_flat[(__Vilp21 
                                           + (IData)(0x500U))];
        __Vilp21 = ((IData)(1U) + __Vilp21);
    }
    IData/*31:0*/ __Vilp22;
    __Vilp22 = 0U;
    while ((__Vilp22 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec[__Vilp22] 
            = vlSelfRef.input_tokens_flat[(__Vilp22 
                                           + (IData)(0x540U))];
        __Vilp22 = ((IData)(1U) + __Vilp22);
    }
    IData/*31:0*/ __Vilp23;
    __Vilp23 = 0U;
    while ((__Vilp23 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec[__Vilp23] 
            = vlSelfRef.input_tokens_flat[(__Vilp23 
                                           + (IData)(0x580U))];
        __Vilp23 = ((IData)(1U) + __Vilp23);
    }
    IData/*31:0*/ __Vilp24;
    __Vilp24 = 0U;
    while ((__Vilp24 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec[__Vilp24] 
            = vlSelfRef.input_tokens_flat[(__Vilp24 
                                           + (IData)(0x5c0U))];
        __Vilp24 = ((IData)(1U) + __Vilp24);
    }
    IData/*31:0*/ __Vilp25;
    __Vilp25 = 0U;
    while ((__Vilp25 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec[__Vilp25] 
            = vlSelfRef.input_tokens_flat[(__Vilp25 
                                           + (IData)(0x600U))];
        __Vilp25 = ((IData)(1U) + __Vilp25);
    }
    IData/*31:0*/ __Vilp26;
    __Vilp26 = 0U;
    while ((__Vilp26 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec[__Vilp26] 
            = vlSelfRef.input_tokens_flat[(__Vilp26 
                                           + (IData)(0x640U))];
        __Vilp26 = ((IData)(1U) + __Vilp26);
    }
    IData/*31:0*/ __Vilp27;
    __Vilp27 = 0U;
    while ((__Vilp27 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec[__Vilp27] 
            = vlSelfRef.input_tokens_flat[(__Vilp27 
                                           + (IData)(0x680U))];
        __Vilp27 = ((IData)(1U) + __Vilp27);
    }
    IData/*31:0*/ __Vilp28;
    __Vilp28 = 0U;
    while ((__Vilp28 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec[__Vilp28] 
            = vlSelfRef.input_tokens_flat[(__Vilp28 
                                           + (IData)(0x6c0U))];
        __Vilp28 = ((IData)(1U) + __Vilp28);
    }
    IData/*31:0*/ __Vilp29;
    __Vilp29 = 0U;
    while ((__Vilp29 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec[__Vilp29] 
            = vlSelfRef.input_tokens_flat[(__Vilp29 
                                           + (IData)(0x700U))];
        __Vilp29 = ((IData)(1U) + __Vilp29);
    }
    IData/*31:0*/ __Vilp30;
    __Vilp30 = 0U;
    while ((__Vilp30 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec[__Vilp30] 
            = vlSelfRef.input_tokens_flat[(__Vilp30 
                                           + (IData)(0x740U))];
        __Vilp30 = ((IData)(1U) + __Vilp30);
    }
    IData/*31:0*/ __Vilp31;
    __Vilp31 = 0U;
    while ((__Vilp31 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec[__Vilp31] 
            = vlSelfRef.input_tokens_flat[(__Vilp31 
                                           + (IData)(0x780U))];
        __Vilp31 = ((IData)(1U) + __Vilp31);
    }
    IData/*31:0*/ __Vilp32;
    __Vilp32 = 0U;
    while ((__Vilp32 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec[__Vilp32] 
            = vlSelfRef.input_tokens_flat[(__Vilp32 
                                           + (IData)(0x7c0U))];
        __Vilp32 = ((IData)(1U) + __Vilp32);
    }
    IData/*31:0*/ __Vilp33;
    __Vilp33 = 0U;
    while ((__Vilp33 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec[__Vilp33] 
            = vlSelfRef.input_tokens_flat[(__Vilp33 
                                           + (IData)(0x800U))];
        __Vilp33 = ((IData)(1U) + __Vilp33);
    }
    IData/*31:0*/ __Vilp34;
    __Vilp34 = 0U;
    while ((__Vilp34 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec[__Vilp34] 
            = vlSelfRef.input_tokens_flat[(__Vilp34 
                                           + (IData)(0x840U))];
        __Vilp34 = ((IData)(1U) + __Vilp34);
    }
    IData/*31:0*/ __Vilp35;
    __Vilp35 = 0U;
    while ((__Vilp35 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec[__Vilp35] 
            = vlSelfRef.input_tokens_flat[(__Vilp35 
                                           + (IData)(0x880U))];
        __Vilp35 = ((IData)(1U) + __Vilp35);
    }
    IData/*31:0*/ __Vilp36;
    __Vilp36 = 0U;
    while ((__Vilp36 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec[__Vilp36] 
            = vlSelfRef.input_tokens_flat[(__Vilp36 
                                           + (IData)(0x8c0U))];
        __Vilp36 = ((IData)(1U) + __Vilp36);
    }
    IData/*31:0*/ __Vilp37;
    __Vilp37 = 0U;
    while ((__Vilp37 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec[__Vilp37] 
            = vlSelfRef.input_tokens_flat[(__Vilp37 
                                           + (IData)(0x900U))];
        __Vilp37 = ((IData)(1U) + __Vilp37);
    }
    IData/*31:0*/ __Vilp38;
    __Vilp38 = 0U;
    while ((__Vilp38 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec[__Vilp38] 
            = vlSelfRef.input_tokens_flat[(__Vilp38 
                                           + (IData)(0x940U))];
        __Vilp38 = ((IData)(1U) + __Vilp38);
    }
    IData/*31:0*/ __Vilp39;
    __Vilp39 = 0U;
    while ((__Vilp39 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec[__Vilp39] 
            = vlSelfRef.input_tokens_flat[(__Vilp39 
                                           + (IData)(0x980U))];
        __Vilp39 = ((IData)(1U) + __Vilp39);
    }
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[0U] 
        = vlSelfRef.input_tokens_flat[0x9c0U];
}

VL_ATTR_COLD void Vself_attention___024root___stl_sequent__TOP__1(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___stl_sequent__TOP__1\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ self_attention__DOT__qkv_done_bit;
    self_attention__DOT__qkv_done_bit = 0;
    IData/*31:0*/ self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m;
    self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m = 0;
    IData/*31:0*/ self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m;
    self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m = 0;
    IData/*31:0*/ self_attention__DOT__attn_inst__DOT__softmax_val;
    self_attention__DOT__attn_inst__DOT__softmax_val = 0;
    IData/*31:0*/ self_attention__DOT__attn_inst__DOT__V_val;
    self_attention__DOT__attn_inst__DOT__V_val = 0;
    SData/*15:0*/ __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout = 0;
    QData/*61:0*/ __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x = 0;
    QData/*61:0*/ __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped = 0;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    VlWide<192>/*6143:0*/ __Vtemp_4;
    VlWide<256>/*8191:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<192>/*6143:0*/ __Vtemp_7;
    VlWide<256>/*8191:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<192>/*6143:0*/ __Vtemp_10;
    VlWide<256>/*8191:0*/ __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_12;
    VlWide<192>/*6143:0*/ __Vtemp_13;
    VlWide<256>/*8191:0*/ __Vtemp_14;
    VlWide<128>/*4095:0*/ __Vtemp_15;
    VlWide<192>/*6143:0*/ __Vtemp_16;
    VlWide<256>/*8191:0*/ __Vtemp_17;
    VlWide<128>/*4095:0*/ __Vtemp_18;
    VlWide<192>/*6143:0*/ __Vtemp_19;
    VlWide<256>/*8191:0*/ __Vtemp_20;
    VlWide<128>/*4095:0*/ __Vtemp_21;
    VlWide<192>/*6143:0*/ __Vtemp_22;
    VlWide<256>/*8191:0*/ __Vtemp_23;
    VlWide<128>/*4095:0*/ __Vtemp_24;
    VlWide<192>/*6143:0*/ __Vtemp_25;
    VlWide<256>/*8191:0*/ __Vtemp_26;
    VlWide<128>/*4095:0*/ __Vtemp_27;
    VlWide<192>/*6143:0*/ __Vtemp_28;
    VlWide<256>/*8191:0*/ __Vtemp_29;
    VlWide<128>/*4095:0*/ __Vtemp_30;
    VlWide<192>/*6143:0*/ __Vtemp_31;
    VlWide<256>/*8191:0*/ __Vtemp_32;
    VlWide<128>/*4095:0*/ __Vtemp_33;
    VlWide<192>/*6143:0*/ __Vtemp_34;
    VlWide<256>/*8191:0*/ __Vtemp_35;
    VlWide<128>/*4095:0*/ __Vtemp_36;
    VlWide<192>/*6143:0*/ __Vtemp_37;
    VlWide<256>/*8191:0*/ __Vtemp_38;
    VlWide<128>/*4095:0*/ __Vtemp_39;
    VlWide<192>/*6143:0*/ __Vtemp_40;
    VlWide<256>/*8191:0*/ __Vtemp_41;
    VlWide<128>/*4095:0*/ __Vtemp_42;
    VlWide<192>/*6143:0*/ __Vtemp_43;
    VlWide<256>/*8191:0*/ __Vtemp_44;
    VlWide<128>/*4095:0*/ __Vtemp_45;
    VlWide<192>/*6143:0*/ __Vtemp_46;
    VlWide<256>/*8191:0*/ __Vtemp_47;
    VlWide<128>/*4095:0*/ __Vtemp_48;
    VlWide<192>/*6143:0*/ __Vtemp_49;
    VlWide<256>/*8191:0*/ __Vtemp_50;
    VlWide<128>/*4095:0*/ __Vtemp_51;
    VlWide<192>/*6143:0*/ __Vtemp_52;
    VlWide<256>/*8191:0*/ __Vtemp_53;
    VlWide<128>/*4095:0*/ __Vtemp_54;
    VlWide<192>/*6143:0*/ __Vtemp_55;
    VlWide<256>/*8191:0*/ __Vtemp_56;
    VlWide<128>/*4095:0*/ __Vtemp_57;
    VlWide<192>/*6143:0*/ __Vtemp_58;
    VlWide<256>/*8191:0*/ __Vtemp_59;
    VlWide<128>/*4095:0*/ __Vtemp_60;
    VlWide<192>/*6143:0*/ __Vtemp_61;
    VlWide<256>/*8191:0*/ __Vtemp_62;
    VlWide<128>/*4095:0*/ __Vtemp_63;
    VlWide<192>/*6143:0*/ __Vtemp_64;
    VlWide<256>/*8191:0*/ __Vtemp_65;
    VlWide<128>/*4095:0*/ __Vtemp_66;
    VlWide<192>/*6143:0*/ __Vtemp_67;
    VlWide<256>/*8191:0*/ __Vtemp_68;
    VlWide<128>/*4095:0*/ __Vtemp_69;
    VlWide<192>/*6143:0*/ __Vtemp_70;
    VlWide<256>/*8191:0*/ __Vtemp_71;
    VlWide<128>/*4095:0*/ __Vtemp_72;
    VlWide<192>/*6143:0*/ __Vtemp_73;
    VlWide<256>/*8191:0*/ __Vtemp_74;
    VlWide<128>/*4095:0*/ __Vtemp_75;
    VlWide<192>/*6143:0*/ __Vtemp_76;
    VlWide<256>/*8191:0*/ __Vtemp_77;
    VlWide<128>/*4095:0*/ __Vtemp_78;
    VlWide<192>/*6143:0*/ __Vtemp_79;
    VlWide<256>/*8191:0*/ __Vtemp_80;
    VlWide<128>/*4095:0*/ __Vtemp_81;
    VlWide<192>/*6143:0*/ __Vtemp_82;
    VlWide<256>/*8191:0*/ __Vtemp_83;
    VlWide<128>/*4095:0*/ __Vtemp_84;
    VlWide<192>/*6143:0*/ __Vtemp_85;
    VlWide<256>/*8191:0*/ __Vtemp_86;
    VlWide<128>/*4095:0*/ __Vtemp_87;
    VlWide<192>/*6143:0*/ __Vtemp_88;
    VlWide<256>/*8191:0*/ __Vtemp_89;
    VlWide<128>/*4095:0*/ __Vtemp_90;
    VlWide<192>/*6143:0*/ __Vtemp_91;
    VlWide<256>/*8191:0*/ __Vtemp_92;
    VlWide<128>/*4095:0*/ __Vtemp_93;
    VlWide<192>/*6143:0*/ __Vtemp_94;
    VlWide<256>/*8191:0*/ __Vtemp_95;
    VlWide<128>/*4095:0*/ __Vtemp_96;
    VlWide<192>/*6143:0*/ __Vtemp_97;
    VlWide<256>/*8191:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_114;
    VlWide<4>/*127:0*/ __Vtemp_119;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_122;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_128;
    VlWide<4>/*127:0*/ __Vtemp_131;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_142;
    VlWide<4>/*127:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_154;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_159;
    VlWide<4>/*127:0*/ __Vtemp_160;
    VlWide<4>/*127:0*/ __Vtemp_162;
    VlWide<4>/*127:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_170;
    VlWide<4>/*127:0*/ __Vtemp_171;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_174;
    VlWide<4>/*127:0*/ __Vtemp_175;
    VlWide<4>/*127:0*/ __Vtemp_176;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<4>/*127:0*/ __Vtemp_179;
    VlWide<4>/*127:0*/ __Vtemp_182;
    VlWide<4>/*127:0*/ __Vtemp_187;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_190;
    VlWide<4>/*127:0*/ __Vtemp_191;
    VlWide<4>/*127:0*/ __Vtemp_192;
    VlWide<4>/*127:0*/ __Vtemp_193;
    VlWide<4>/*127:0*/ __Vtemp_194;
    VlWide<4>/*127:0*/ __Vtemp_196;
    VlWide<4>/*127:0*/ __Vtemp_199;
    VlWide<4>/*127:0*/ __Vtemp_204;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_207;
    VlWide<4>/*127:0*/ __Vtemp_208;
    VlWide<4>/*127:0*/ __Vtemp_209;
    VlWide<4>/*127:0*/ __Vtemp_210;
    VlWide<4>/*127:0*/ __Vtemp_211;
    VlWide<4>/*127:0*/ __Vtemp_213;
    VlWide<4>/*127:0*/ __Vtemp_216;
    VlWide<4>/*127:0*/ __Vtemp_221;
    VlWide<4>/*127:0*/ __Vtemp_222;
    VlWide<4>/*127:0*/ __Vtemp_224;
    VlWide<4>/*127:0*/ __Vtemp_225;
    VlWide<4>/*127:0*/ __Vtemp_226;
    VlWide<4>/*127:0*/ __Vtemp_227;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_230;
    VlWide<4>/*127:0*/ __Vtemp_233;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[__Vilp1] 
            = vlSelfRef.input_tokens_flat[(__Vilp1 
                                           + (IData)(0x9c0U))];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec[__Vilp2] 
            = vlSelfRef.input_tokens_flat[(__Vilp2 
                                           + (IData)(0xa00U))];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec[__Vilp3] 
            = vlSelfRef.input_tokens_flat[(__Vilp3 
                                           + (IData)(0xa40U))];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec[__Vilp4] 
            = vlSelfRef.input_tokens_flat[(__Vilp4 
                                           + (IData)(0xa80U))];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec[__Vilp5] 
            = vlSelfRef.input_tokens_flat[(__Vilp5 
                                           + (IData)(0xac0U))];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec[__Vilp6] 
            = vlSelfRef.input_tokens_flat[(__Vilp6 
                                           + (IData)(0xb00U))];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec[__Vilp7] 
            = vlSelfRef.input_tokens_flat[(__Vilp7 
                                           + (IData)(0xb40U))];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec[__Vilp8] 
            = vlSelfRef.input_tokens_flat[(__Vilp8 
                                           + (IData)(0xb80U))];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec[__Vilp9] 
            = vlSelfRef.input_tokens_flat[(__Vilp9 
                                           + (IData)(0xbc0U))];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec[__Vilp10] 
            = vlSelfRef.input_tokens_flat[(__Vilp10 
                                           + (IData)(0xc00U))];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec[__Vilp11] 
            = vlSelfRef.input_tokens_flat[(__Vilp11 
                                           + (IData)(0xc40U))];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec[__Vilp12] 
            = vlSelfRef.input_tokens_flat[(__Vilp12 
                                           + (IData)(0xc80U))];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec[__Vilp13] 
            = vlSelfRef.input_tokens_flat[(__Vilp13 
                                           + (IData)(0xcc0U))];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec[__Vilp14] 
            = vlSelfRef.input_tokens_flat[(__Vilp14 
                                           + (IData)(0xd00U))];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec[__Vilp15] 
            = vlSelfRef.input_tokens_flat[(__Vilp15 
                                           + (IData)(0xd40U))];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec[__Vilp16] 
            = vlSelfRef.input_tokens_flat[(__Vilp16 
                                           + (IData)(0xd80U))];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec[__Vilp17] 
            = vlSelfRef.input_tokens_flat[(__Vilp17 
                                           + (IData)(0xdc0U))];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec[__Vilp18] 
            = vlSelfRef.input_tokens_flat[(__Vilp18 
                                           + (IData)(0xe00U))];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec[__Vilp19] 
            = vlSelfRef.input_tokens_flat[(__Vilp19 
                                           + (IData)(0xe40U))];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    IData/*31:0*/ __Vilp20;
    __Vilp20 = 0U;
    while ((__Vilp20 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec[__Vilp20] 
            = vlSelfRef.input_tokens_flat[(__Vilp20 
                                           + (IData)(0xe80U))];
        __Vilp20 = ((IData)(1U) + __Vilp20);
    }
    IData/*31:0*/ __Vilp21;
    __Vilp21 = 0U;
    while ((__Vilp21 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec[__Vilp21] 
            = vlSelfRef.input_tokens_flat[(__Vilp21 
                                           + (IData)(0xec0U))];
        __Vilp21 = ((IData)(1U) + __Vilp21);
    }
    IData/*31:0*/ __Vilp22;
    __Vilp22 = 0U;
    while ((__Vilp22 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec[__Vilp22] 
            = vlSelfRef.input_tokens_flat[(__Vilp22 
                                           + (IData)(0xf00U))];
        __Vilp22 = ((IData)(1U) + __Vilp22);
    }
    IData/*31:0*/ __Vilp23;
    __Vilp23 = 0U;
    while ((__Vilp23 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec[__Vilp23] 
            = vlSelfRef.input_tokens_flat[(__Vilp23 
                                           + (IData)(0xf40U))];
        __Vilp23 = ((IData)(1U) + __Vilp23);
    }
    IData/*31:0*/ __Vilp24;
    __Vilp24 = 0U;
    while ((__Vilp24 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec[__Vilp24] 
            = vlSelfRef.input_tokens_flat[(__Vilp24 
                                           + (IData)(0xf80U))];
        __Vilp24 = ((IData)(1U) + __Vilp24);
    }
    IData/*31:0*/ __Vilp25;
    __Vilp25 = 0U;
    while ((__Vilp25 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec[__Vilp25] 
            = vlSelfRef.input_tokens_flat[(__Vilp25 
                                           + (IData)(0xfc0U))];
        __Vilp25 = ((IData)(1U) + __Vilp25);
    }
    vlSelfRef.fsm_debug_state = vlSelfRef.self_attention__DOT__fsm__DOT__curr_state;
    vlSelfRef.debug_state_attn = vlSelfRef.self_attention__DOT__attn_inst__DOT__state;
    vlSelfRef.debug_q_0_0 = vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__Q_flat[0U];
    vlSelfRef.debug_k_0_0 = vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__K_flat[0U];
    vlSelfRef.debug_k_1_0 = vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__K_flat[0U];
    vlSelfRef.self_attention__DOT__qkv_start = 0U;
    vlSelfRef.self_attention__DOT__attn_start = 0U;
    vlSelfRef.self_attention__DOT__softmax_start = 0U;
    vlSelfRef.self_attention__DOT__qk_start = 0U;
    if ((0U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if ((1U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
            vlSelfRef.self_attention__DOT__qkv_start 
                = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_qkv)));
        }
        if ((1U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
            if ((2U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                if ((3U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                    if ((4U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                        vlSelfRef.self_attention__DOT__attn_start 
                            = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_attn)));
                    }
                }
                if ((3U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                    vlSelfRef.self_attention__DOT__softmax_start 
                        = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_softmax)));
                }
            }
            if ((2U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                vlSelfRef.self_attention__DOT__qk_start 
                    = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_qk)));
            }
        }
    }
    self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3fU]);
        self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m 
            = ((IData)(1U) + self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m);
    }
    self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3fU]);
        self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m 
            = ((IData)(1U) + self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_3, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_4, __Vtemp_3, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_5, __Vtemp_4, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp26;
    __Vilp26 = 0U;
    while ((__Vilp26 <= 0xffU)) {
        vlSelfRef.Q_flat[__Vilp26] = __Vtemp_5[__Vilp26];
        __Vilp26 = ((IData)(1U) + __Vilp26);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_6, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_7, __Vtemp_6, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_8, __Vtemp_7, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp27;
    __Vilp27 = 0U;
    while ((__Vilp27 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp27 + (IData)(0x100U))] 
            = __Vtemp_8[__Vilp27];
        __Vilp27 = ((IData)(1U) + __Vilp27);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_9, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_10, __Vtemp_9, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_11, __Vtemp_10, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp28;
    __Vilp28 = 0U;
    while ((__Vilp28 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp28 + (IData)(0x200U))] 
            = __Vtemp_11[__Vilp28];
        __Vilp28 = ((IData)(1U) + __Vilp28);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_12, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_13, __Vtemp_12, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_14, __Vtemp_13, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp29;
    __Vilp29 = 0U;
    while ((__Vilp29 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp29 + (IData)(0x300U))] 
            = __Vtemp_14[__Vilp29];
        __Vilp29 = ((IData)(1U) + __Vilp29);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_15, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_16, __Vtemp_15, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_17, __Vtemp_16, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp30;
    __Vilp30 = 0U;
    while ((__Vilp30 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp30 + (IData)(0x400U))] 
            = __Vtemp_17[__Vilp30];
        __Vilp30 = ((IData)(1U) + __Vilp30);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_18, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_19, __Vtemp_18, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_20, __Vtemp_19, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp31;
    __Vilp31 = 0U;
    while ((__Vilp31 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp31 + (IData)(0x500U))] 
            = __Vtemp_20[__Vilp31];
        __Vilp31 = ((IData)(1U) + __Vilp31);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_21, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_22, __Vtemp_21, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_23, __Vtemp_22, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp32;
    __Vilp32 = 0U;
    while ((__Vilp32 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp32 + (IData)(0x600U))] 
            = __Vtemp_23[__Vilp32];
        __Vilp32 = ((IData)(1U) + __Vilp32);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_24, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_25, __Vtemp_24, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_26, __Vtemp_25, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp33;
    __Vilp33 = 0U;
    while ((__Vilp33 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp33 + (IData)(0x700U))] 
            = __Vtemp_26[__Vilp33];
        __Vilp33 = ((IData)(1U) + __Vilp33);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_27, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_28, __Vtemp_27, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_29, __Vtemp_28, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp34;
    __Vilp34 = 0U;
    while ((__Vilp34 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp34 + (IData)(0x800U))] 
            = __Vtemp_29[__Vilp34];
        __Vilp34 = ((IData)(1U) + __Vilp34);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_30, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_31, __Vtemp_30, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_32, __Vtemp_31, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp35;
    __Vilp35 = 0U;
    while ((__Vilp35 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp35 + (IData)(0x900U))] 
            = __Vtemp_32[__Vilp35];
        __Vilp35 = ((IData)(1U) + __Vilp35);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_33, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_34, __Vtemp_33, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_35, __Vtemp_34, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp36;
    __Vilp36 = 0U;
    while ((__Vilp36 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp36 + (IData)(0xa00U))] 
            = __Vtemp_35[__Vilp36];
        __Vilp36 = ((IData)(1U) + __Vilp36);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_36, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_37, __Vtemp_36, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_38, __Vtemp_37, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp37;
    __Vilp37 = 0U;
    while ((__Vilp37 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp37 + (IData)(0xb00U))] 
            = __Vtemp_38[__Vilp37];
        __Vilp37 = ((IData)(1U) + __Vilp37);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_39, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_40, __Vtemp_39, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_41, __Vtemp_40, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp38;
    __Vilp38 = 0U;
    while ((__Vilp38 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp38 + (IData)(0xc00U))] 
            = __Vtemp_41[__Vilp38];
        __Vilp38 = ((IData)(1U) + __Vilp38);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_42, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_43, __Vtemp_42, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_44, __Vtemp_43, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp39;
    __Vilp39 = 0U;
    while ((__Vilp39 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp39 + (IData)(0xd00U))] 
            = __Vtemp_44[__Vilp39];
        __Vilp39 = ((IData)(1U) + __Vilp39);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_45, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_46, __Vtemp_45, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_47, __Vtemp_46, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp40;
    __Vilp40 = 0U;
    while ((__Vilp40 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp40 + (IData)(0xe00U))] 
            = __Vtemp_47[__Vilp40];
        __Vilp40 = ((IData)(1U) + __Vilp40);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_48, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_49, __Vtemp_48, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_50, __Vtemp_49, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp41;
    __Vilp41 = 0U;
    while ((__Vilp41 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp41 + (IData)(0xf00U))] 
            = __Vtemp_50[__Vilp41];
        __Vilp41 = ((IData)(1U) + __Vilp41);
    }
    self_attention__DOT__qkv_done_bit = ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__done) 
                                         & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__done) 
                                            & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__done) 
                                               & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__done) 
                                                  & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__done) 
                                                     & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__done) 
                                                        & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__done) 
                                                           & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__done) 
                                                              & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__done) 
                                                                 & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__done) 
                                                                    & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__done) 
                                                                       & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__done) 
                                                                          & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__done) 
                                                                             & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done) 
                                                                                & (IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_51, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_52, __Vtemp_51, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_53, __Vtemp_52, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp42;
    __Vilp42 = 0U;
    while ((__Vilp42 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[__Vilp42] 
            = __Vtemp_53[__Vilp42];
        __Vilp42 = ((IData)(1U) + __Vilp42);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_54, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_55, __Vtemp_54, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_56, __Vtemp_55, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp43;
    __Vilp43 = 0U;
    while ((__Vilp43 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp43 
                                               + (IData)(0x100U))] 
            = __Vtemp_56[__Vilp43];
        __Vilp43 = ((IData)(1U) + __Vilp43);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_57, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_58, __Vtemp_57, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_59, __Vtemp_58, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp44;
    __Vilp44 = 0U;
    while ((__Vilp44 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp44 
                                               + (IData)(0x200U))] 
            = __Vtemp_59[__Vilp44];
        __Vilp44 = ((IData)(1U) + __Vilp44);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_60, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_61, __Vtemp_60, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_62, __Vtemp_61, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp45;
    __Vilp45 = 0U;
    while ((__Vilp45 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp45 
                                               + (IData)(0x300U))] 
            = __Vtemp_62[__Vilp45];
        __Vilp45 = ((IData)(1U) + __Vilp45);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_63, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_64, __Vtemp_63, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_65, __Vtemp_64, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp46;
    __Vilp46 = 0U;
    while ((__Vilp46 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp46 
                                               + (IData)(0x400U))] 
            = __Vtemp_65[__Vilp46];
        __Vilp46 = ((IData)(1U) + __Vilp46);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_66, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_67, __Vtemp_66, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_68, __Vtemp_67, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp47;
    __Vilp47 = 0U;
    while ((__Vilp47 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp47 
                                               + (IData)(0x500U))] 
            = __Vtemp_68[__Vilp47];
        __Vilp47 = ((IData)(1U) + __Vilp47);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_69, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_70, __Vtemp_69, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_71, __Vtemp_70, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp48;
    __Vilp48 = 0U;
    while ((__Vilp48 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp48 
                                               + (IData)(0x600U))] 
            = __Vtemp_71[__Vilp48];
        __Vilp48 = ((IData)(1U) + __Vilp48);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_72, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_73, __Vtemp_72, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_74, __Vtemp_73, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp49;
    __Vilp49 = 0U;
    while ((__Vilp49 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp49 
                                               + (IData)(0x700U))] 
            = __Vtemp_74[__Vilp49];
        __Vilp49 = ((IData)(1U) + __Vilp49);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_75, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_76, __Vtemp_75, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_77, __Vtemp_76, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp50;
    __Vilp50 = 0U;
    while ((__Vilp50 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp50 
                                               + (IData)(0x800U))] 
            = __Vtemp_77[__Vilp50];
        __Vilp50 = ((IData)(1U) + __Vilp50);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_78, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_79, __Vtemp_78, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_80, __Vtemp_79, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp51;
    __Vilp51 = 0U;
    while ((__Vilp51 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp51 
                                               + (IData)(0x900U))] 
            = __Vtemp_80[__Vilp51];
        __Vilp51 = ((IData)(1U) + __Vilp51);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_81, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_82, __Vtemp_81, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_83, __Vtemp_82, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp52;
    __Vilp52 = 0U;
    while ((__Vilp52 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp52 
                                               + (IData)(0xa00U))] 
            = __Vtemp_83[__Vilp52];
        __Vilp52 = ((IData)(1U) + __Vilp52);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_84, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_85, __Vtemp_84, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_86, __Vtemp_85, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp53;
    __Vilp53 = 0U;
    while ((__Vilp53 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp53 
                                               + (IData)(0xb00U))] 
            = __Vtemp_86[__Vilp53];
        __Vilp53 = ((IData)(1U) + __Vilp53);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_87, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_88, __Vtemp_87, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_89, __Vtemp_88, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp54;
    __Vilp54 = 0U;
    while ((__Vilp54 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp54 
                                               + (IData)(0xc00U))] 
            = __Vtemp_89[__Vilp54];
        __Vilp54 = ((IData)(1U) + __Vilp54);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_90, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_91, __Vtemp_90, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_92, __Vtemp_91, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp55;
    __Vilp55 = 0U;
    while ((__Vilp55 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp55 
                                               + (IData)(0xd00U))] 
            = __Vtemp_92[__Vilp55];
        __Vilp55 = ((IData)(1U) + __Vilp55);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_93, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_94, __Vtemp_93, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_95, __Vtemp_94, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp56;
    __Vilp56 = 0U;
    while ((__Vilp56 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp56 
                                               + (IData)(0xe00U))] 
            = __Vtemp_95[__Vilp56];
        __Vilp56 = ((IData)(1U) + __Vilp56);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_96, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_97, __Vtemp_96, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_98, __Vtemp_97, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp57;
    __Vilp57 = 0U;
    while ((__Vilp57 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp57 
                                               + (IData)(0xf00U))] 
            = __Vtemp_98[__Vilp57];
        __Vilp57 = ((IData)(1U) + __Vilp57);
    }
    vlSelfRef.debug_attn_00 = vlSelfRef.self_attention__DOT__softmax_scores_flat[0U];
    vlSelfRef.debug_attn_01 = vlSelfRef.self_attention__DOT__softmax_scores_flat[1U];
    vlSelfRef.debug_qk_score_00 = vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat[0U];
    vlSelfRef.debug_qk_score_01 = ((vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat[2U] 
                                    << 2U) | (vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat[1U] 
                                              >> 0x1eU));
    VL_EXTEND_WW(253952,131072, vlSelfRef.self_attention__DOT__scores_flat, vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat);
    vlSelfRef.self_attention__DOT__fsm__DOT__next_state 
        = vlSelfRef.self_attention__DOT__fsm__DOT__curr_state;
    if ((0U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__fsm_start) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (self_attention__DOT__qkv_done_bit) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__qk_done) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__softmax_done) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__attn_done) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 0U;
    }
    self_attention__DOT__attn_inst__DOT__softmax_val 
        = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                           + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U)))
             ? 0U : (vlSelfRef.self_attention__DOT__softmax_scores_flat[
                     (((IData)(0x1fU) + (0x1ffffU & 
                                         VL_SHIFTL_III(17,32,32, 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U))))) 
           | (vlSelfRef.self_attention__DOT__softmax_scores_flat[
              (0xfffU & (VL_SHIFTL_III(17,32,32, (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                            (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                             + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U))));
    self_attention__DOT__attn_inst__DOT__V_val = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(17,32,32, 
                                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                      + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.self_attention__DOT__V_flat[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x1ffffU 
                                                       & VL_SHIFTL_III(17,32,32, 
                                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(17,32,32, 
                                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                       + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U))))) 
                                                  | (vlSelfRef.self_attention__DOT__V_flat[
                                                     (0xfffU 
                                                      & (VL_SHIFTL_III(17,32,32, 
                                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(17,32,32, 
                                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                       + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U))));
    vlSelfRef.self_attention__DOT__attn_inst__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, self_attention__DOT__attn_inst__DOT__softmax_val), 
                      VL_EXTENDS_QI(64,32, self_attention__DOT__attn_inst__DOT__V_val));
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[0U] 
        = ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                     * (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))
            ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelfRef.self_attention__DOT__scores_flat[
                                                         (((IData)(0x3dU) 
                                                           + 
                                                           (0x3ffffU 
                                                            & ((IData)(0x3eU) 
                                                               * 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3eU) 
                                                  * 
                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                      + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x3eU) 
                                                 * 
                                                 (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__scores_flat[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3ffffU 
                                                                   & ((IData)(0x3eU) 
                                                                      * 
                                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                      + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.self_attention__DOT__scores_flat[
                                                              (0x1fffU 
                                                               & (((IData)(0x3eU) 
                                                                   * 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                      + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))))
            : 0ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[1U] 
        = ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(1U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[2U] 
        = ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(2U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(2U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[3U] 
        = ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(3U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(3U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(3U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(3U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(3U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[4U] 
        = ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(4U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(4U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[5U] 
        = ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(5U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(5U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(5U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(5U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(5U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[6U] 
        = ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(6U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(6U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(6U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(6U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(6U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[7U] 
        = ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(7U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(7U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(7U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(7U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(7U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [0U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_102, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_103[0U] = __Vtemp_102[0U];
        __Vtemp_103[1U] = __Vtemp_102[1U];
        __Vtemp_103[2U] = __Vtemp_102[2U];
        __Vtemp_103[3U] = (0xfffffffU & __Vtemp_102[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_105, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_106[0U] = __Vtemp_105[0U];
        __Vtemp_106[1U] = __Vtemp_105[1U];
        __Vtemp_106[2U] = __Vtemp_105[2U];
        __Vtemp_106[3U] = (0xfffffffU & __Vtemp_105[3U]);
        VL_MULS_WWW(124, __Vtemp_107, __Vtemp_103, __Vtemp_106);
        __Vtemp_108[0U] = __Vtemp_107[0U];
        __Vtemp_108[1U] = __Vtemp_107[1U];
        __Vtemp_108[2U] = __Vtemp_107[2U];
        __Vtemp_108[3U] = (0xfffffffU & __Vtemp_107[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_109, __Vtemp_108, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_109[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_109[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_109[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_109[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_111, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_114, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_111[0U] 
                                             + __Vtemp_114[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[0U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [1U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_119, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_120[0U] = __Vtemp_119[0U];
        __Vtemp_120[1U] = __Vtemp_119[1U];
        __Vtemp_120[2U] = __Vtemp_119[2U];
        __Vtemp_120[3U] = (0xfffffffU & __Vtemp_119[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_122, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_123[0U] = __Vtemp_122[0U];
        __Vtemp_123[1U] = __Vtemp_122[1U];
        __Vtemp_123[2U] = __Vtemp_122[2U];
        __Vtemp_123[3U] = (0xfffffffU & __Vtemp_122[3U]);
        VL_MULS_WWW(124, __Vtemp_124, __Vtemp_120, __Vtemp_123);
        __Vtemp_125[0U] = __Vtemp_124[0U];
        __Vtemp_125[1U] = __Vtemp_124[1U];
        __Vtemp_125[2U] = __Vtemp_124[2U];
        __Vtemp_125[3U] = (0xfffffffU & __Vtemp_124[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_126, __Vtemp_125, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_126[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_126[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_126[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_126[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_128, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_131, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_128[0U] 
                                             + __Vtemp_131[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[1U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [2U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_136, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_137[0U] = __Vtemp_136[0U];
        __Vtemp_137[1U] = __Vtemp_136[1U];
        __Vtemp_137[2U] = __Vtemp_136[2U];
        __Vtemp_137[3U] = (0xfffffffU & __Vtemp_136[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_139, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_140[0U] = __Vtemp_139[0U];
        __Vtemp_140[1U] = __Vtemp_139[1U];
        __Vtemp_140[2U] = __Vtemp_139[2U];
        __Vtemp_140[3U] = (0xfffffffU & __Vtemp_139[3U]);
        VL_MULS_WWW(124, __Vtemp_141, __Vtemp_137, __Vtemp_140);
        __Vtemp_142[0U] = __Vtemp_141[0U];
        __Vtemp_142[1U] = __Vtemp_141[1U];
        __Vtemp_142[2U] = __Vtemp_141[2U];
        __Vtemp_142[3U] = (0xfffffffU & __Vtemp_141[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_143, __Vtemp_142, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_143[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_143[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_143[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_143[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_145, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_148, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_145[0U] 
                                             + __Vtemp_148[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[2U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [3U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_153, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_154[0U] = __Vtemp_153[0U];
        __Vtemp_154[1U] = __Vtemp_153[1U];
        __Vtemp_154[2U] = __Vtemp_153[2U];
        __Vtemp_154[3U] = (0xfffffffU & __Vtemp_153[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_156, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_157[0U] = __Vtemp_156[0U];
        __Vtemp_157[1U] = __Vtemp_156[1U];
        __Vtemp_157[2U] = __Vtemp_156[2U];
        __Vtemp_157[3U] = (0xfffffffU & __Vtemp_156[3U]);
        VL_MULS_WWW(124, __Vtemp_158, __Vtemp_154, __Vtemp_157);
        __Vtemp_159[0U] = __Vtemp_158[0U];
        __Vtemp_159[1U] = __Vtemp_158[1U];
        __Vtemp_159[2U] = __Vtemp_158[2U];
        __Vtemp_159[3U] = (0xfffffffU & __Vtemp_158[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_160, __Vtemp_159, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_160[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_160[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_160[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_160[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_162, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_165, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_162[0U] 
                                             + __Vtemp_165[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[3U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [4U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_170, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_171[0U] = __Vtemp_170[0U];
        __Vtemp_171[1U] = __Vtemp_170[1U];
        __Vtemp_171[2U] = __Vtemp_170[2U];
        __Vtemp_171[3U] = (0xfffffffU & __Vtemp_170[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_173, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_174[0U] = __Vtemp_173[0U];
        __Vtemp_174[1U] = __Vtemp_173[1U];
        __Vtemp_174[2U] = __Vtemp_173[2U];
        __Vtemp_174[3U] = (0xfffffffU & __Vtemp_173[3U]);
        VL_MULS_WWW(124, __Vtemp_175, __Vtemp_171, __Vtemp_174);
        __Vtemp_176[0U] = __Vtemp_175[0U];
        __Vtemp_176[1U] = __Vtemp_175[1U];
        __Vtemp_176[2U] = __Vtemp_175[2U];
        __Vtemp_176[3U] = (0xfffffffU & __Vtemp_175[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_177, __Vtemp_176, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_177[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_177[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_177[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_177[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_179, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_182, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_179[0U] 
                                             + __Vtemp_182[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[4U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [5U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_187, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_188[0U] = __Vtemp_187[0U];
        __Vtemp_188[1U] = __Vtemp_187[1U];
        __Vtemp_188[2U] = __Vtemp_187[2U];
        __Vtemp_188[3U] = (0xfffffffU & __Vtemp_187[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_190, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_191[0U] = __Vtemp_190[0U];
        __Vtemp_191[1U] = __Vtemp_190[1U];
        __Vtemp_191[2U] = __Vtemp_190[2U];
        __Vtemp_191[3U] = (0xfffffffU & __Vtemp_190[3U]);
        VL_MULS_WWW(124, __Vtemp_192, __Vtemp_188, __Vtemp_191);
        __Vtemp_193[0U] = __Vtemp_192[0U];
        __Vtemp_193[1U] = __Vtemp_192[1U];
        __Vtemp_193[2U] = __Vtemp_192[2U];
        __Vtemp_193[3U] = (0xfffffffU & __Vtemp_192[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_194, __Vtemp_193, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_194[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_194[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_194[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_194[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_196, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_199, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_196[0U] 
                                             + __Vtemp_199[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[5U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [6U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_204, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_205[0U] = __Vtemp_204[0U];
        __Vtemp_205[1U] = __Vtemp_204[1U];
        __Vtemp_205[2U] = __Vtemp_204[2U];
        __Vtemp_205[3U] = (0xfffffffU & __Vtemp_204[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_207, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_208[0U] = __Vtemp_207[0U];
        __Vtemp_208[1U] = __Vtemp_207[1U];
        __Vtemp_208[2U] = __Vtemp_207[2U];
        __Vtemp_208[3U] = (0xfffffffU & __Vtemp_207[3U]);
        VL_MULS_WWW(124, __Vtemp_209, __Vtemp_205, __Vtemp_208);
        __Vtemp_210[0U] = __Vtemp_209[0U];
        __Vtemp_210[1U] = __Vtemp_209[1U];
        __Vtemp_210[2U] = __Vtemp_209[2U];
        __Vtemp_210[3U] = (0xfffffffU & __Vtemp_209[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_211, __Vtemp_210, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_211[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_211[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_211[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_211[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_213, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_216, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_213[0U] 
                                             + __Vtemp_216[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[6U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [7U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_221, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_222[0U] = __Vtemp_221[0U];
        __Vtemp_222[1U] = __Vtemp_221[1U];
        __Vtemp_222[2U] = __Vtemp_221[2U];
        __Vtemp_222[3U] = (0xfffffffU & __Vtemp_221[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_224, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_225[0U] = __Vtemp_224[0U];
        __Vtemp_225[1U] = __Vtemp_224[1U];
        __Vtemp_225[2U] = __Vtemp_224[2U];
        __Vtemp_225[3U] = (0xfffffffU & __Vtemp_224[3U]);
        VL_MULS_WWW(124, __Vtemp_226, __Vtemp_222, __Vtemp_225);
        __Vtemp_227[0U] = __Vtemp_226[0U];
        __Vtemp_227[1U] = __Vtemp_226[1U];
        __Vtemp_227[2U] = __Vtemp_226[2U];
        __Vtemp_227[3U] = (0xfffffffU & __Vtemp_226[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_228, __Vtemp_227, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_228[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_228[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_228[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_228[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_230, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_233, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_230[0U] 
                                             + __Vtemp_233[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[7U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
}

VL_ATTR_COLD void Vself_attention___024root___eval_triggers__stl(Vself_attention___024root* vlSelf);

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
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT__V_flat);
    VL_RAND_RESET_W(253952, vlSelf->self_attention__DOT__scores_flat);
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT__softmax_scores_flat);
    VL_RAND_RESET_W(131072, vlSelf->self_attention__DOT____Vcellout__qk_inst__scores_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__V_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__K_flat);
    VL_RAND_RESET_W(2048, vlSelf->self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__Q_flat);
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
    vlSelf->self_attention__DOT__qk_inst__DOT__Q_val = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qk_inst__DOT__K_val = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qk_inst__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__qk_inst__DOT__accum = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__qk_inst__DOT__scores[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->self_attention__DOT__qk_inst__DOT__scaled_acc = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__softmax_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__softmax_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__softmax_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__softmax_inst__DOT__max_score = VL_RAND_RESET_Q(62);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->self_attention__DOT__softmax_inst__DOT__scores_parallel[__Vi0] = VL_RAND_RESET_Q(62);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->self_attention__DOT__softmax_inst__DOT__sum_exp = VL_RAND_RESET_I(22);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->self_attention__DOT__softmax_inst__DOT__norm_vals_parallel[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__exp_scores[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__softmax_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum = VL_RAND_RESET_I(22);
    vlSelf->self_attention__DOT__attn_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__attn_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__k = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->self_attention__DOT__attn_inst__DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
