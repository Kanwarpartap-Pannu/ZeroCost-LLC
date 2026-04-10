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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgIData(oldp+1,((vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i 
                                - (IData)(0x01000000U))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+2,(vlSelfRef.fifo_tb__DOT__reset));
        bufp->chgSData(oldp+3,(vlSelfRef.fifo_tb__DOT__push_data),12);
        bufp->chgCData(oldp+4,(vlSelfRef.fifo_tb__DOT__search_addr),4);
        bufp->chgCData(oldp+5,(vlSelfRef.fifo_tb__DOT__merge_entry),3);
        bufp->chgCData(oldp+6,((0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                                               >> 8U))),4);
        bufp->chgBit(oldp+7,(vlSelfRef.fifo_tb__DOT__rd_req));
        bufp->chgCData(oldp+8,(vlSelfRef.fifo_tb__DOT__push_test),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry))));
        bufp->chgBit(oldp+10,(vlSelfRef.fifo_tb__DOT__found));
        bufp->chgCData(oldp+11,(vlSelfRef.fifo_tb__DOT__found_data),8);
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out))));
        bufp->chgCData(oldp+13,(vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry),3);
        bufp->chgCData(oldp+14,((0x000000ffU & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out))),8);
        bufp->chgQData(oldp+15,(vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out),64);
        bufp->chgCData(oldp+17,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address),4);
        bufp->chgIData(oldp+18,(vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat),32);
        bufp->chgIData(oldp+19,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+20,((1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty)))));
        bufp->chgSData(oldp+21,(vlSelfRef.fifo_tb__DOT__pop_data),13);
        bufp->chgBit(oldp+22,(vlSelfRef.fifo_tb__DOT__buffer_full));
        bufp->chgBit(oldp+23,(vlSelfRef.fifo_tb__DOT__pop_valid));
        bufp->chgBit(oldp+24,(vlSelfRef.fifo_tb__DOT__pop_en));
        bufp->chgBit(oldp+25,((1U & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))));
        bufp->chgBit(oldp+26,(vlSelfRef.fifo_tb__DOT__mem1__DOT__ready));
        bufp->chgSData(oldp+27,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[0]),13);
        bufp->chgSData(oldp+28,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[1]),13);
        bufp->chgSData(oldp+29,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[2]),13);
        bufp->chgSData(oldp+30,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[3]),13);
        bufp->chgCData(oldp+31,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head),3);
        bufp->chgCData(oldp+32,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail),3);
        bufp->chgBit(oldp+33,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty));
        bufp->chgIData(oldp+34,(vlSelfRef.fifo_tb__DOT__fifo1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+35,(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state),2);
        bufp->chgBit(oldp+36,(vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en));
        bufp->chgBit(oldp+37,(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_en));
        bufp->chgBit(oldp+38,(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_finished));
        bufp->chgQData(oldp+39,(vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store),64);
        bufp->chgCData(oldp+41,(vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address),4);
        bufp->chgBit(oldp+42,(vlSelfRef.fifo_tb__DOT__mem1__DOT__request));
        bufp->chgIData(oldp+43,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o),32);
        bufp->chgCData(oldp+44,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__delay),4);
        bufp->chgIData(oldp+45,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+46,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+47,(vlSelfRef.fifo_tb__DOT__clk));
    bufp->chgCData(oldp+48,(vlSelfRef.fifo_tb__DOT__push_pop),2);
    bufp->chgCData(oldp+49,(((0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))
                              ? ((IData)(vlSelfRef.fifo_tb__DOT__rd_req)
                                  ? 1U : ((1U & ((~ (IData)(vlSelfRef.fifo_tb__DOT__rd_req)) 
                                                 & (~ (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty))))
                                           ? 2U : 0U))
                              : ((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))
                                  ? ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__ready)
                                      ? 0U : 1U) : 
                                 ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))
                                   ? ((IData)(vlSelfRef.fifo_tb__DOT__pop_valid)
                                       ? ((0x00001000U 
                                           & (IData)(vlSelfRef.fifo_tb__DOT__pop_data))
                                           ? 0U : 3U)
                                       : 2U) : ((3U 
                                                 == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))
                                                 ? 
                                                ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_finished)
                                                  ? 0U
                                                  : 3U)
                                                 : (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))),2);
    bufp->chgIData(oldp+50,(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i),32);
}

void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_cleanup\n"); );
    // Body
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
