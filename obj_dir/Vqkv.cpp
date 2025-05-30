// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vqkv__pch.h"

//============================================================
// Constructors

Vqkv::Vqkv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vqkv__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , input_vec_flat{vlSymsp->TOP.input_vec_flat}
    , Q_flat{vlSymsp->TOP.Q_flat}
    , K_flat{vlSymsp->TOP.K_flat}
    , V_flat{vlSymsp->TOP.V_flat}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vqkv::Vqkv(const char* _vcname__)
    : Vqkv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vqkv::~Vqkv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vqkv___024root___eval_debug_assertions(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG
void Vqkv___024root___eval_static(Vqkv___024root* vlSelf);
void Vqkv___024root___eval_initial(Vqkv___024root* vlSelf);
void Vqkv___024root___eval_settle(Vqkv___024root* vlSelf);
void Vqkv___024root___eval(Vqkv___024root* vlSelf);

void Vqkv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vqkv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vqkv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vqkv___024root___eval_static(&(vlSymsp->TOP));
        Vqkv___024root___eval_initial(&(vlSymsp->TOP));
        Vqkv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vqkv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vqkv::eventsPending() { return false; }

uint64_t Vqkv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vqkv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vqkv___024root___eval_final(Vqkv___024root* vlSelf);

VL_ATTR_COLD void Vqkv::final() {
    Vqkv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vqkv::hierName() const { return vlSymsp->name(); }
const char* Vqkv::modelName() const { return "Vqkv"; }
unsigned Vqkv::threads() const { return 1; }
void Vqkv::prepareClone() const { contextp()->prepareClone(); }
void Vqkv::atClone() const {
    contextp()->threadPoolpOnClone();
}
