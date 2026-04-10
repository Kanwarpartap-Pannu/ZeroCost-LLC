// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

void Vfifo_tb___024unit___ctor_var_reset(Vfifo_tb___024unit* vlSelf);

Vfifo_tb___024unit::Vfifo_tb___024unit(Vfifo_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfifo_tb___024unit___ctor_var_reset(this);
}

void Vfifo_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfifo_tb___024unit::~Vfifo_tb___024unit() {
}
