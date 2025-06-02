// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention_qkv__F8_S1.h"

VL_ATTR_COLD void Vself_attention_qkv__F8_S1___ctor_var_reset(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___ctor_var_reset\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_RAND_RESET_W(2048, vlSelf->__PVT__Q_reg);
    VL_RAND_RESET_W(2048, vlSelf->__PVT__K_reg);
    VL_RAND_RESET_W(2048, vlSelf->__PVT__V_reg);
}
