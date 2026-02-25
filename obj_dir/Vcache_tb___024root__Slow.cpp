// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tb.h for the primary calling header

#include "Vcache_tb__pch.h"

void Vcache_tb___024root___ctor_var_reset(Vcache_tb___024root* vlSelf);

Vcache_tb___024root::Vcache_tb___024root(Vcache_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_tb___024root___ctor_var_reset(this);
}

void Vcache_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_tb___024root::~Vcache_tb___024root() {
}
