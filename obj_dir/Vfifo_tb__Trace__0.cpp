// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo_tb__Syms.h"


void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0\n"); );
    // Body
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vfifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0_sub_0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.fifo_tb__DOT__pop_data),8);
        bufp->chgBit(oldp+1,(vlSelfRef.fifo_tb__DOT__buffer_full));
        bufp->chgCData(oldp+2,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head),3);
        bufp->chgCData(oldp+7,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail),3);
        bufp->chgBit(oldp+8,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty));
    }
    bufp->chgBit(oldp+9,(vlSelfRef.fifo_tb__DOT__clk));
    bufp->chgBit(oldp+10,(vlSelfRef.fifo_tb__DOT__reset));
    bufp->chgCData(oldp+11,(vlSelfRef.fifo_tb__DOT__push_data),8);
    bufp->chgCData(oldp+12,(vlSelfRef.fifo_tb__DOT__push_pop),2);
}

void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_cleanup\n"); );
    // Body
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
