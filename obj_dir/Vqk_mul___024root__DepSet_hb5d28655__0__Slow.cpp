// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqk_mul.h for the primary calling header

#include "Vqk_mul__pch.h"
#include "Vqk_mul__Syms.h"
#include "Vqk_mul___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__stl(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vqk_mul___024root___eval_triggers__stl(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_triggers__stl\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vqk_mul___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
