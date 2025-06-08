// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vqk_mul__pch.h"
#include "Vqk_mul.h"
#include "Vqk_mul___024root.h"

// FUNCTIONS
Vqk_mul__Syms::~Vqk_mul__Syms()
{
}

Vqk_mul__Syms::Vqk_mul__Syms(VerilatedContext* contextp, const char* namep, Vqk_mul* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(229);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
