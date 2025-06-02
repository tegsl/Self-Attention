// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkv_cache.h for the primary calling header

#ifndef VERILATED_VKV_CACHE___024ROOT_H_
#define VERILATED_VKV_CACHE___024ROOT_H_  // guard

#include "verilated.h"


class Vkv_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vkv_cache___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(write_en,0,0);
    VL_IN8(write_addr,5,0);
    VL_IN8(read_addr,5,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(K_flat_in,1023,0,32);
    VL_INW(V_flat_in,1023,0,32);
    VL_OUTW(K_flat_out,1023,0,32);
    VL_OUTW(V_flat_out,1023,0,32);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> kv_cache__DOT__K_mem;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 64>, 64> kv_cache__DOT__V_mem;
    VlUnpacked<SData/*15:0*/, 64> kv_cache__DOT__K_in;
    VlUnpacked<SData/*15:0*/, 64> kv_cache__DOT__V_in;
    VlUnpacked<SData/*15:0*/, 64> kv_cache__DOT__K_out;
    VlUnpacked<SData/*15:0*/, 64> kv_cache__DOT__V_out;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkv_cache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkv_cache___024root(Vkv_cache__Syms* symsp, const char* v__name);
    ~Vkv_cache___024root();
    VL_UNCOPYABLE(Vkv_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
