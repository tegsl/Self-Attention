// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkv_cache__pch.h"

//============================================================
// Constructors

Vkv_cache::Vkv_cache(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkv_cache__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , write_en{vlSymsp->TOP.write_en}
    , write_addr{vlSymsp->TOP.write_addr}
    , read_addr{vlSymsp->TOP.read_addr}
    , K_flat_in{vlSymsp->TOP.K_flat_in}
    , V_flat_in{vlSymsp->TOP.V_flat_in}
    , K_flat_out{vlSymsp->TOP.K_flat_out}
    , V_flat_out{vlSymsp->TOP.V_flat_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkv_cache::Vkv_cache(const char* _vcname__)
    : Vkv_cache(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkv_cache::~Vkv_cache() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkv_cache___024root___eval_debug_assertions(Vkv_cache___024root* vlSelf);
#endif  // VL_DEBUG
void Vkv_cache___024root___eval_static(Vkv_cache___024root* vlSelf);
void Vkv_cache___024root___eval_initial(Vkv_cache___024root* vlSelf);
void Vkv_cache___024root___eval_settle(Vkv_cache___024root* vlSelf);
void Vkv_cache___024root___eval(Vkv_cache___024root* vlSelf);

void Vkv_cache::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkv_cache::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkv_cache___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkv_cache___024root___eval_static(&(vlSymsp->TOP));
        Vkv_cache___024root___eval_initial(&(vlSymsp->TOP));
        Vkv_cache___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkv_cache___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkv_cache::eventsPending() { return false; }

uint64_t Vkv_cache::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vkv_cache::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkv_cache___024root___eval_final(Vkv_cache___024root* vlSelf);

VL_ATTR_COLD void Vkv_cache::final() {
    Vkv_cache___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkv_cache::hierName() const { return vlSymsp->name(); }
const char* Vkv_cache::modelName() const { return "Vkv_cache"; }
unsigned Vkv_cache::threads() const { return 1; }
void Vkv_cache::prepareClone() const { contextp()->prepareClone(); }
void Vkv_cache::atClone() const {
    contextp()->threadPoolpOnClone();
}
