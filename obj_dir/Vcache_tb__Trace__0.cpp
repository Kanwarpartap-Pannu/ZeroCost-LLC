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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.cache_tb__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelfRef.cache_tb__DOT__test_addresses[0]),22);
        bufp->chgIData(oldp+2,(vlSelfRef.cache_tb__DOT__test_addresses[1]),22);
        bufp->chgIData(oldp+3,(vlSelfRef.cache_tb__DOT__test_addresses[2]),22);
        bufp->chgIData(oldp+4,(vlSelfRef.cache_tb__DOT__test_addresses[3]),22);
        bufp->chgIData(oldp+5,(vlSelfRef.cache_tb__DOT__test_addresses[4]),22);
        bufp->chgIData(oldp+6,(vlSelfRef.cache_tb__DOT__test_addresses[5]),22);
        bufp->chgIData(oldp+7,(vlSelfRef.cache_tb__DOT__test_addresses[6]),22);
        bufp->chgIData(oldp+8,(vlSelfRef.cache_tb__DOT__test_addresses[7]),22);
        bufp->chgIData(oldp+9,(vlSelfRef.cache_tb__DOT__test_addresses[8]),22);
        bufp->chgIData(oldp+10,(vlSelfRef.cache_tb__DOT__test_addresses[9]),22);
        bufp->chgIData(oldp+11,(vlSelfRef.cache_tb__DOT__test_addresses[10]),22);
        bufp->chgIData(oldp+12,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgSData(oldp+13,(vlSelfRef.cache_tb__DOT__address),14);
        bufp->chgIData(oldp+14,(vlSelfRef.cache_tb__DOT__i),32);
        bufp->chgCData(oldp+15,((7U & (IData)(vlSelfRef.cache_tb__DOT__address))),3);
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))));
        bufp->chgSData(oldp+17,((0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                >> 4U))),10);
        bufp->chgSData(oldp+18,((0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__address))),14);
        bufp->chgSData(oldp+19,(((((2U >= (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way))
                                    ? vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                   [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                           >> 3U))]
                                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way]
                                    : 0U) << 4U) | 
                                 (8U & (IData)(vlSelfRef.cache_tb__DOT__address)))),14);
        bufp->chgCData(oldp+20,(((2U >= (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way))
                                  ? vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                         >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way]
                                  : 0U)),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+21,(vlSelfRef.cache_tb__DOT__stall));
        bufp->chgBit(oldp+22,(vlSelfRef.cache_tb__DOT__data_valid));
        bufp->chgSData(oldp+23,(vlSelfRef.cache_tb__DOT__cache__DOT__memory_address),14);
        bufp->chgBit(oldp+24,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state));
        bufp->chgBit(oldp+25,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state_mem));
        bufp->chgBit(oldp+26,(vlSelfRef.cache_tb__DOT__cache__DOT__read_en));
        bufp->chgBit(oldp+27,(vlSelfRef.cache_tb__DOT__cache__DOT__write_en));
        bufp->chgQData(oldp+28,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out),64);
        bufp->chgBit(oldp+30,(vlSelfRef.cache_tb__DOT__cache__DOT__request));
        bufp->chgBit(oldp+31,(vlSelfRef.cache_tb__DOT__cache__DOT__idle));
        bufp->chgBit(oldp+32,(vlSelfRef.cache_tb__DOT__cache__DOT__replace_en));
        bufp->chgBit(oldp+33,(vlSelfRef.cache_tb__DOT__cache__DOT__store_en));
        bufp->chgQData(oldp+34,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__temp),64);
        bufp->chgIData(oldp+36,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat),32);
        bufp->chgIData(oldp+37,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o),32);
        bufp->chgIData(oldp+38,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat),32);
        bufp->chgIData(oldp+39,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+40,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[0]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[1]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[2]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[3]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[4]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[5]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[6]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.fifo_buffer__DOT__fifo_buffer[7]),32);
        bufp->chgCData(oldp+48,(vlSelfRef.fifo_buffer__DOT__head),4);
        bufp->chgCData(oldp+49,(vlSelfRef.fifo_buffer__DOT__tail),4);
        bufp->chgBit(oldp+50,(vlSelfRef.fifo_buffer__DOT__empty));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+51,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
        bufp->chgBit(oldp+52,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state_mem));
        bufp->chgBit(oldp+53,(vlSelfRef.cache_tb__DOT__cache__DOT__ready));
        bufp->chgBit(oldp+54,(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished));
        bufp->chgQData(oldp+55,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_store),64);
        bufp->chgBit(oldp+57,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
        bufp->chgCData(oldp+58,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way),2);
        bufp->chgCData(oldp+59,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way),2);
        bufp->chgWData(oldp+60,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o),192);
        bufp->chgWData(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array),384);
        bufp->chgSData(oldp+78,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][0U]),10);
        bufp->chgSData(oldp+79,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][1U]),10);
        bufp->chgSData(oldp+80,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][2U]),10);
        bufp->chgSData(oldp+81,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][0U]),10);
        bufp->chgSData(oldp+82,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][1U]),10);
        bufp->chgSData(oldp+83,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][2U]),10);
        bufp->chgCData(oldp+84,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                [0U][0U]),2);
        bufp->chgCData(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                [0U][1U]),2);
        bufp->chgCData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                [0U][2U]),2);
        bufp->chgCData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                [1U][0U]),2);
        bufp->chgCData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                [1U][1U]),2);
        bufp->chgCData(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                [1U][2U]),2);
        bufp->chgCData(oldp+90,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                                [0U][0U]),2);
        bufp->chgCData(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                                [0U][1U]),2);
        bufp->chgCData(oldp+92,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                                [0U][2U]),2);
        bufp->chgCData(oldp+93,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                                [1U][0U]),2);
        bufp->chgCData(oldp+94,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                                [1U][1U]),2);
        bufp->chgCData(oldp+95,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                                [1U][2U]),2);
        bufp->chgCData(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way),2);
        bufp->chgBit(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found));
        bufp->chgCData(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way),2);
        bufp->chgIData(oldp+99,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+100,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+101,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgCData(oldp+102,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__delay),4);
        bufp->chgIData(oldp+103,((vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
                                  - (IData)(0x01000000U))),32);
        bufp->chgIData(oldp+104,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgIData(oldp+105,(vlSelfRef.push_data),32);
    bufp->chgCData(oldp+106,(vlSelfRef.push_pop),2);
    bufp->chgBit(oldp+107,(vlSelfRef.reset));
    bufp->chgBit(oldp+108,(vlSelfRef.clk));
    bufp->chgIData(oldp+109,(vlSelfRef.pop_data),32);
    bufp->chgBit(oldp+110,(vlSelfRef.buffer_full));
    bufp->chgBit(oldp+111,(vlSelfRef.cache_tb__DOT__clk));
    bufp->chgIData(oldp+112,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->chgCData(oldp+113,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->chgCData(oldp+114,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->chgIData(oldp+115,(((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                               ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                   ? vlSelfRef.__VdfgRegularize_hebeb780c_0_2
                                   : ((0xbfU >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                       ? (0x000000ffU 
                                          & (((0U == 
                                               (0x0000001fU 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                               ? 0U
                                               : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                  (((IData)(7U) 
                                                    + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                             | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                 >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
                                       : 0U)) : ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 ((0xbfU 
                                                   >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                                   ? 
                                                  (0x0000ffffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (((IData)(0x0000000fU) 
                                                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                                      | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                         ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
                                                   : 0U)
                                                  : vlSelfRef.__VdfgRegularize_hebeb780c_0_2))),32);
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
}
