// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VQKV__SYMS_H_
#define VERILATED_VQKV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vqkv.h"

// INCLUDE MODULE CLASSES
#include "Vqkv___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vqkv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vqkv* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vqkv___024root                 TOP;

    // CONSTRUCTORS
    Vqkv__Syms(VerilatedContext* contextp, const char* namep, Vqkv* modelp);
    ~Vqkv__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
