// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKV_CACHE__SYMS_H_
#define VERILATED_VKV_CACHE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkv_cache.h"

// INCLUDE MODULE CLASSES
#include "Vkv_cache___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vkv_cache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkv_cache* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkv_cache___024root            TOP;

    // CONSTRUCTORS
    Vkv_cache__Syms(VerilatedContext* contextp, const char* namep, Vkv_cache* modelp);
    ~Vkv_cache__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
