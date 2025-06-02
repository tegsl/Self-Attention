// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vself_attention__pch.h"

//============================================================
// Constructors

Vself_attention::Vself_attention(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vself_attention__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , fsm_debug_state{vlSymsp->TOP.fsm_debug_state}
    , debug_state_attn{vlSymsp->TOP.debug_state_attn}
    , input_tokens_flat{vlSymsp->TOP.input_tokens_flat}
    , output_tokens_flat{vlSymsp->TOP.output_tokens_flat}
    , debug_q_0_0{vlSymsp->TOP.debug_q_0_0}
    , debug_k_0_0{vlSymsp->TOP.debug_k_0_0}
    , debug_k_1_0{vlSymsp->TOP.debug_k_1_0}
    , debug_qk_score_00{vlSymsp->TOP.debug_qk_score_00}
    , debug_qk_score_01{vlSymsp->TOP.debug_qk_score_01}
    , debug_attn_00{vlSymsp->TOP.debug_attn_00}
    , debug_attn_01{vlSymsp->TOP.debug_attn_01}
    , debug_softmax_sum_0{vlSymsp->TOP.debug_softmax_sum_0}
    , Q_flat{vlSymsp->TOP.Q_flat}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vself_attention::Vself_attention(const char* _vcname__)
    : Vself_attention(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vself_attention::~Vself_attention() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vself_attention___024root___eval_debug_assertions(Vself_attention___024root* vlSelf);
#endif  // VL_DEBUG
void Vself_attention___024root___eval_static(Vself_attention___024root* vlSelf);
void Vself_attention___024root___eval_initial(Vself_attention___024root* vlSelf);
void Vself_attention___024root___eval_settle(Vself_attention___024root* vlSelf);
void Vself_attention___024root___eval(Vself_attention___024root* vlSelf);

void Vself_attention::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vself_attention::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vself_attention___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vself_attention___024root___eval_static(&(vlSymsp->TOP));
        Vself_attention___024root___eval_initial(&(vlSymsp->TOP));
        Vself_attention___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vself_attention___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vself_attention::eventsPending() { return false; }

uint64_t Vself_attention::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vself_attention::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vself_attention___024root___eval_final(Vself_attention___024root* vlSelf);

VL_ATTR_COLD void Vself_attention::final() {
    Vself_attention___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vself_attention::hierName() const { return vlSymsp->name(); }
const char* Vself_attention::modelName() const { return "Vself_attention"; }
unsigned Vself_attention::threads() const { return 1; }
void Vself_attention::prepareClone() const { contextp()->prepareClone(); }
void Vself_attention::atClone() const {
    contextp()->threadPoolpOnClone();
}
