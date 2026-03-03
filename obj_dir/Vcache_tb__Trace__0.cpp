// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_tb__Syms.h"


void Vcache_tb___024root__trace_chg_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcache_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_chg_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcache_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcache_tb___024root__trace_chg_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_chg_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+1,(vlSelfRef.cache_tb__DOT__address),14);
        bufp->chgIData(oldp+2,(vlSelfRef.cache_tb__DOT__store_data),32);
        bufp->chgCData(oldp+3,(vlSelfRef.cache_tb__DOT__opcode_i),7);
        bufp->chgCData(oldp+4,(vlSelfRef.cache_tb__DOT__funct3_i),3);
        bufp->chgCData(oldp+5,((7U & (IData)(vlSelfRef.cache_tb__DOT__address))),3);
        bufp->chgCData(oldp+6,((3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                      >> 3U))),2);
        bufp->chgSData(oldp+7,((0x000001ffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 5U))),9);
        bufp->chgSData(oldp+8,((0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__address))),14);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+9,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out),64);
        bufp->chgIData(oldp+11,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o),32);
        bufp->chgCData(oldp+14,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded),2);
        bufp->chgIData(oldp+15,((vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
                                 - (IData)(0x01000000U))),32);
        bufp->chgIData(oldp+16,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgIData(oldp+17,(vlSelfRef.cache_tb__DOT__data_out),32);
        bufp->chgBit(oldp+18,(vlSelfRef.cache_tb__DOT__stall));
        bufp->chgBit(oldp+19,(vlSelfRef.cache_tb__DOT__data_valid));
        bufp->chgBit(oldp+20,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
        bufp->chgBit(oldp+21,(vlSelfRef.cache_tb__DOT__cache__DOT__idle));
        bufp->chgBit(oldp+22,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way));
        bufp->chgBit(oldp+23,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way));
        bufp->chgBit(oldp+24,(vlSelfRef.cache_tb__DOT__cache__DOT__replace_en));
        bufp->chgWData(oldp+25,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o),128);
        bufp->chgBit(oldp+29,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way));
        bufp->chgBit(oldp+30,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found));
        bufp->chgBit(oldp+31,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+32,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
        bufp->chgBit(oldp+33,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state));
        bufp->chgWData(oldp+34,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array),512);
        bufp->chgSData(oldp+50,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][0U]),9);
        bufp->chgSData(oldp+51,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][1U]),9);
        bufp->chgSData(oldp+52,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][0U]),9);
        bufp->chgSData(oldp+53,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][1U]),9);
        bufp->chgSData(oldp+54,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [2U][0U]),9);
        bufp->chgSData(oldp+55,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [2U][1U]),9);
        bufp->chgSData(oldp+56,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [3U][0U]),9);
        bufp->chgSData(oldp+57,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [3U][1U]),9);
        bufp->chgBit(oldp+58,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [0U][0U]));
        bufp->chgBit(oldp+59,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [0U][1U]));
        bufp->chgBit(oldp+60,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [1U][0U]));
        bufp->chgBit(oldp+61,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [1U][1U]));
        bufp->chgBit(oldp+62,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [2U][0U]));
        bufp->chgBit(oldp+63,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [2U][1U]));
        bufp->chgBit(oldp+64,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [3U][0U]));
        bufp->chgBit(oldp+65,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [3U][1U]));
        bufp->chgBit(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [0U][0U]));
        bufp->chgBit(oldp+67,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [0U][1U]));
        bufp->chgBit(oldp+68,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [1U][0U]));
        bufp->chgBit(oldp+69,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [1U][1U]));
        bufp->chgBit(oldp+70,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [2U][0U]));
        bufp->chgBit(oldp+71,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [2U][1U]));
        bufp->chgBit(oldp+72,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [3U][0U]));
        bufp->chgBit(oldp+73,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                              [3U][1U]));
        bufp->chgIData(oldp+74,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
    }
    bufp->chgBit(oldp+75,(vlSelfRef.cache_tb__DOT__clk));
    bufp->chgBit(oldp+76,(vlSelfRef.cache_tb__DOT__reset));
    bufp->chgIData(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i),32);
}

void Vcache_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_cleanup\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
