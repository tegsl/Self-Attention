// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkv_cache.h for the primary calling header

#include "Vkv_cache__pch.h"
#include "Vkv_cache__Syms.h"
#include "Vkv_cache___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkv_cache___024root___dump_triggers__stl(Vkv_cache___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkv_cache___024root___eval_triggers__stl(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_triggers__stl\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vkv_cache___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
