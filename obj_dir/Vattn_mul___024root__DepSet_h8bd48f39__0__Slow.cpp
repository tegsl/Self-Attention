// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vattn_mul.h for the primary calling header

#include "Vattn_mul__pch.h"
#include "Vattn_mul__Syms.h"
#include "Vattn_mul___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattn_mul___024root___dump_triggers__stl(Vattn_mul___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vattn_mul___024root___eval_triggers__stl(Vattn_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattn_mul___024root___eval_triggers__stl\n"); );
    Vattn_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vattn_mul___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
