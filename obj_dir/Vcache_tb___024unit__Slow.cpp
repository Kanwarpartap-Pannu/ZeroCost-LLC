// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tb.h for the primary calling header

#include "Vcache_tb__pch.h"

void Vcache_tb___024unit___ctor_var_reset(Vcache_tb___024unit* vlSelf);

Vcache_tb___024unit::Vcache_tb___024unit(Vcache_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_tb___024unit___ctor_var_reset(this);
}

void Vcache_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_tb___024unit::~Vcache_tb___024unit() {
}
