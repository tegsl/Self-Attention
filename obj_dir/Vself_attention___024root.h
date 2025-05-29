// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vself_attention.h for the primary calling header

#ifndef VERILATED_VSELF_ATTENTION___024ROOT_H_
#define VERILATED_VSELF_ATTENTION___024ROOT_H_  // guard

#include "verilated.h"


class Vself_attention__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vself_attention___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(start,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(fsm_debug_state,2,0);
        VL_OUT8(debug_state_attn,1,0);
        CData/*0:0*/ self_attention__DOT__fsm_start;
        CData/*0:0*/ self_attention__DOT__fsm_done;
        CData/*0:0*/ self_attention__DOT__qkv_start;
        CData/*0:0*/ self_attention__DOT__qk_start;
        CData/*0:0*/ self_attention__DOT__softmax_start;
        CData/*0:0*/ self_attention__DOT__attn_start;
        CData/*0:0*/ self_attention__DOT__qk_done;
        CData/*0:0*/ self_attention__DOT__softmax_done;
        CData/*0:0*/ self_attention__DOT__attn_done;
        CData/*0:0*/ self_attention__DOT__qkv_done_bit;
        CData/*6:0*/ self_attention__DOT__token_counter;
        CData/*2:0*/ self_attention__DOT__fsm__DOT__curr_state;
        CData/*2:0*/ self_attention__DOT__fsm__DOT__next_state;
        CData/*1:0*/ self_attention__DOT__qkv_inst__DOT__state;
        CData/*5:0*/ self_attention__DOT__qkv_inst__DOT__i;
        CData/*1:0*/ self_attention__DOT__qk_inst__DOT__state;
        CData/*5:0*/ self_attention__DOT__qk_inst__DOT__i;
        CData/*5:0*/ self_attention__DOT__qk_inst__DOT__k;
        CData/*2:0*/ self_attention__DOT__softmax_inst__DOT__state;
        CData/*5:0*/ self_attention__DOT__softmax_inst__DOT__i;
        CData/*5:0*/ self_attention__DOT__softmax_inst__DOT__j;
        CData/*1:0*/ self_attention__DOT__attn_inst__DOT__state;
        CData/*5:0*/ self_attention__DOT__attn_inst__DOT__i;
        CData/*5:0*/ self_attention__DOT__attn_inst__DOT__j;
        CData/*5:0*/ self_attention__DOT__attn_inst__DOT__k;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ self_attention__DOT__qk_inst__DOT__Q_val;
        SData/*15:0*/ self_attention__DOT__qk_inst__DOT__K_val;
        SData/*11:0*/ self_attention__DOT__softmax_inst__DOT__sum_idx;
        SData/*15:0*/ self_attention__DOT__softmax_inst__DOT__recip_sum;
        SData/*15:0*/ self_attention__DOT__attn_inst__DOT__softmax_val_reg;
        SData/*15:0*/ self_attention__DOT__attn_inst__DOT__V_val_reg;
        VL_INW(input_tokens_flat,65535,0,2048);
        VL_OUTW(output_tokens_flat,65535,0,2048);
        VlWide<32>/*1023:0*/ self_attention__DOT__K_flat_in;
        VlWide<32>/*1023:0*/ self_attention__DOT__V_flat_in;
        VlWide<32>/*1023:0*/ self_attention__DOT__K_flat_out;
        VlWide<32>/*1023:0*/ self_attention__DOT__V_flat_out;
        VlWide<2048>/*65535:0*/ self_attention__DOT__Q_flat;
        VlWide<2048>/*65535:0*/ self_attention__DOT__scores_flat;
        VlWide<2048>/*65535:0*/ self_attention__DOT__softmax_scores_flat;
        VlWide<32>/*1023:0*/ self_attention__DOT____Vcellout__qkv_inst__Q_flat;
        IData/*31:0*/ self_attention__DOT__qkv_inst__DOT__mult_q;
        IData/*31:0*/ self_attention__DOT__qkv_inst__DOT__mult_k;
        IData/*31:0*/ self_attention__DOT__qkv_inst__DOT__mult_v;
        IData/*31:0*/ self_attention__DOT__qkv_inst__DOT__acc_q;
        IData/*31:0*/ self_attention__DOT__qkv_inst__DOT__acc_k;
        IData/*31:0*/ self_attention__DOT__qkv_inst__DOT__acc_v;
        IData/*31:0*/ self_attention__DOT__qk_inst__DOT__acc;
        IData/*31:0*/ self_attention__DOT__qk_inst__DOT__product;
        IData/*31:0*/ self_attention__DOT__softmax_inst__DOT__sum_exp;
        IData/*31:0*/ self_attention__DOT__softmax_inst__DOT__product;
        IData/*31:0*/ self_attention__DOT__attn_inst__DOT__product_reg;
        IData/*31:0*/ self_attention__DOT__attn_inst__DOT__acc;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__qkv_inst__DOT__input_vec;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__qkv_inst__DOT__Q;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__qkv_inst__DOT__K;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__qkv_inst__DOT__V;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__qkv_inst__DOT__W;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> self_attention__DOT__kv_cache_inst__DOT__K_mem;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> self_attention__DOT__kv_cache_inst__DOT__V_mem;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__kv_cache_inst__DOT__K_in;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__kv_cache_inst__DOT__V_in;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__kv_cache_inst__DOT__K_out;
        VlUnpacked<SData/*15:0*/, 64> self_attention__DOT__kv_cache_inst__DOT__V_out;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> self_attention__DOT__softmax_inst__DOT__scores;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> self_attention__DOT__softmax_inst__DOT__exp_scores;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> self_attention__DOT__softmax_inst__DOT__softmax_scores;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vself_attention__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vself_attention___024root(Vself_attention__Syms* symsp, const char* v__name);
    ~Vself_attention___024root();
    VL_UNCOPYABLE(Vself_attention___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
