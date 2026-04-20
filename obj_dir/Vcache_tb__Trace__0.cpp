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
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgIData(oldp+1,((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i 
                                - (IData)(0x01000000U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+2,(vlSelfRef.cache_tb__DOT__reset));
        bufp->chgIData(oldp+3,(vlSelfRef.cache_tb__DOT__test_addresses[0]),22);
        bufp->chgIData(oldp+4,(vlSelfRef.cache_tb__DOT__test_addresses[1]),22);
        bufp->chgIData(oldp+5,(vlSelfRef.cache_tb__DOT__test_addresses[2]),22);
        bufp->chgIData(oldp+6,(vlSelfRef.cache_tb__DOT__test_addresses[3]),22);
        bufp->chgIData(oldp+7,(vlSelfRef.cache_tb__DOT__test_addresses[4]),22);
        bufp->chgIData(oldp+8,(vlSelfRef.cache_tb__DOT__test_addresses[5]),22);
        bufp->chgIData(oldp+9,(vlSelfRef.cache_tb__DOT__test_addresses[6]),22);
        bufp->chgIData(oldp+10,(vlSelfRef.cache_tb__DOT__test_addresses[7]),22);
        bufp->chgIData(oldp+11,(vlSelfRef.cache_tb__DOT__test_addresses[8]),22);
        bufp->chgIData(oldp+12,(vlSelfRef.cache_tb__DOT__test_addresses[9]),22);
        bufp->chgIData(oldp+13,(vlSelfRef.cache_tb__DOT__test_addresses[10]),22);
        bufp->chgIData(oldp+14,(vlSelfRef.cache_tb__DOT__test_addresses[11]),22);
        bufp->chgIData(oldp+15,(vlSelfRef.cache_tb__DOT__test_addresses[12]),22);
        bufp->chgIData(oldp+16,(vlSelfRef.cache_tb__DOT__test_addresses[13]),22);
        bufp->chgIData(oldp+17,(vlSelfRef.cache_tb__DOT__test_addresses[14]),22);
        bufp->chgIData(oldp+18,(vlSelfRef.cache_tb__DOT__test_addresses[15]),22);
        bufp->chgIData(oldp+19,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgSData(oldp+20,(vlSelfRef.cache_tb__DOT__addr),14);
        bufp->chgIData(oldp+21,(vlSelfRef.cache_tb__DOT__i),32);
        bufp->chgCData(oldp+22,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
        bufp->chgSData(oldp+23,((0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr))),14);
        bufp->chgBit(oldp+24,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))));
        bufp->chgCData(oldp+25,((7U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                     >> 3U))));
        bufp->chgSData(oldp+27,((0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                >> 4U))),10);
        bufp->chgCData(oldp+28,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                        >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way]),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+29,(vlSelfRef.cache_tb__DOT__data_out),32);
        bufp->chgBit(oldp+30,(vlSelfRef.cache_tb__DOT__stall));
        bufp->chgBit(oldp+31,(vlSelfRef.cache_tb__DOT__data_valid));
        bufp->chgSData(oldp+32,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr),14);
        bufp->chgBit(oldp+33,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid));
        bufp->chgCData(oldp+34,(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq),2);
        bufp->chgBit(oldp+35,(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished));
        bufp->chgQData(oldp+36,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out),64);
        bufp->chgBit(oldp+38,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en));
        bufp->chgBit(oldp+39,(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq));
        bufp->chgBit(oldp+40,(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req));
        bufp->chgCData(oldp+41,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl),2);
        bufp->chgWData(oldp+42,(vlSelfRef.cache_tb__DOT__cache__DOT__push_data),78);
        bufp->chgBit(oldp+45,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state));
        bufp->chgBit(oldp+46,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem));
        bufp->chgBit(oldp+47,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle));
        bufp->chgBit(oldp+48,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search));
        bufp->chgBit(oldp+49,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en));
        bufp->chgBit(oldp+50,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en));
        bufp->chgBit(oldp+51,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en));
        bufp->chgSData(oldp+52,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address),14);
        bufp->chgIData(oldp+53,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat),32);
        bufp->chgIData(oldp+54,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                  (((IData)(0x0000003fU) 
                                                    + 
                                                    (0x000001ffU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     ((IData)(7U) 
                                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x0000001fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              ((IData)(7U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U)))
                                       ? 0x00000020U
                                       : ((IData)(0x00000040U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(9,9,32, 
                                                             ((IData)(7U) 
                                                              - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))))) 
                                 | (((0U == (0x0000001fU 
                                             & VL_SHIFTL_III(9,9,32, 
                                                             ((IData)(7U) 
                                                              - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                                (((IData)(0x0000001fU) 
                                                                  + 
                                                                  (0x000001ffU 
                                                                   & VL_SHIFTL_III(9,9,32, 
                                                                                ((IData)(7U) 
                                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(9,9,32, 
                                                                  ((IData)(7U) 
                                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))))) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                       (0x0000000fU 
                                                        & (VL_SHIFTL_III(9,9,32, 
                                                                         ((IData)(7U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U) 
                                                           >> 5U))])) 
                                       >> (0x0000001fU 
                                           & VL_SHIFTL_III(9,9,32, 
                                                           ((IData)(7U) 
                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                   (((IData)(0x0000003fU) 
                                                     + 
                                                     (0x000001ffU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      ((IData)(7U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x0000001fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               ((IData)(7U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U)))
                                        ? 0x00000020U
                                        : ((IData)(0x00000040U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              ((IData)(7U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))))) 
                                  | (((0U == (0x0000001fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              ((IData)(7U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                                 (((IData)(0x0000001fU) 
                                                                   + 
                                                                   (0x000001ffU 
                                                                    & VL_SHIFTL_III(9,9,32, 
                                                                                ((IData)(7U) 
                                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(7U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                        (0x0000000fU 
                                                         & (VL_SHIFTL_III(9,9,32, 
                                                                          ((IData)(7U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U) 
                                                            >> 5U))])) 
                                        >> (0x0000001fU 
                                            & VL_SHIFTL_III(9,9,32, 
                                                            ((IData)(7U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))))) 
                                 >> 0x00000020U));
        __Vtemp_1[2U] = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address;
        bufp->chgWData(oldp+55,(__Vtemp_1),78);
        bufp->chgCData(oldp+58,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state),2);
        bufp->chgBit(oldp+59,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready));
        bufp->chgWData(oldp+60,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_data),79);
        bufp->chgBit(oldp+63,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid));
        bufp->chgBit(oldp+64,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found));
        bufp->chgCData(oldp+65,(vlSelfRef.cache_tb__DOT__cache__DOT__found_entry),4);
        bufp->chgQData(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data),64);
        bufp->chgBit(oldp+68,((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))));
        bufp->chgBit(oldp+69,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full));
        bufp->chgSData(oldp+70,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address),14);
        bufp->chgBit(oldp+71,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
        bufp->chgBit(oldp+72,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
        bufp->chgBit(oldp+73,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit));
        bufp->chgCData(oldp+74,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way),3);
        bufp->chgCData(oldp+75,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way),3);
        bufp->chgBit(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done));
        bufp->chgWData(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o),512);
        bufp->chgWData(oldp+93,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array),1024);
        bufp->chgSData(oldp+125,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][0U]),10);
        bufp->chgSData(oldp+126,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][1U]),10);
        bufp->chgSData(oldp+127,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][2U]),10);
        bufp->chgSData(oldp+128,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][3U]),10);
        bufp->chgSData(oldp+129,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][4U]),10);
        bufp->chgSData(oldp+130,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][5U]),10);
        bufp->chgSData(oldp+131,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][6U]),10);
        bufp->chgSData(oldp+132,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][7U]),10);
        bufp->chgSData(oldp+133,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][0U]),10);
        bufp->chgSData(oldp+134,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][1U]),10);
        bufp->chgSData(oldp+135,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][2U]),10);
        bufp->chgSData(oldp+136,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][3U]),10);
        bufp->chgSData(oldp+137,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][4U]),10);
        bufp->chgSData(oldp+138,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][5U]),10);
        bufp->chgSData(oldp+139,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][6U]),10);
        bufp->chgSData(oldp+140,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][7U]),10);
        bufp->chgCData(oldp+141,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][0U]),2);
        bufp->chgCData(oldp+142,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][1U]),2);
        bufp->chgCData(oldp+143,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][2U]),2);
        bufp->chgCData(oldp+144,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][3U]),2);
        bufp->chgCData(oldp+145,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][4U]),2);
        bufp->chgCData(oldp+146,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][5U]),2);
        bufp->chgCData(oldp+147,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][6U]),2);
        bufp->chgCData(oldp+148,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][7U]),2);
        bufp->chgCData(oldp+149,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][0U]),2);
        bufp->chgCData(oldp+150,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][1U]),2);
        bufp->chgCData(oldp+151,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][2U]),2);
        bufp->chgCData(oldp+152,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][3U]),2);
        bufp->chgCData(oldp+153,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][4U]),2);
        bufp->chgCData(oldp+154,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][5U]),2);
        bufp->chgCData(oldp+155,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][6U]),2);
        bufp->chgCData(oldp+156,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][7U]),2);
        bufp->chgCData(oldp+157,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][0U]),3);
        bufp->chgCData(oldp+158,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][1U]),3);
        bufp->chgCData(oldp+159,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][2U]),3);
        bufp->chgCData(oldp+160,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][3U]),3);
        bufp->chgCData(oldp+161,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][4U]),3);
        bufp->chgCData(oldp+162,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][5U]),3);
        bufp->chgCData(oldp+163,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][6U]),3);
        bufp->chgCData(oldp+164,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [0U][7U]),3);
        bufp->chgCData(oldp+165,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][0U]),3);
        bufp->chgCData(oldp+166,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][1U]),3);
        bufp->chgCData(oldp+167,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][2U]),3);
        bufp->chgCData(oldp+168,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][3U]),3);
        bufp->chgCData(oldp+169,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][4U]),3);
        bufp->chgCData(oldp+170,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][5U]),3);
        bufp->chgCData(oldp+171,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][6U]),3);
        bufp->chgCData(oldp+172,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                                 [1U][7U]),3);
        bufp->chgCData(oldp+173,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way),3);
        bufp->chgBit(oldp+174,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx));
        bufp->chgSData(oldp+175,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[0]),10);
        bufp->chgSData(oldp+176,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[1]),10);
        bufp->chgSData(oldp+177,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[2]),10);
        bufp->chgSData(oldp+178,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[3]),10);
        bufp->chgCData(oldp+179,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way),3);
        bufp->chgBit(oldp+180,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found));
        bufp->chgCData(oldp+181,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way),3);
        bufp->chgIData(oldp+182,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+183,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+184,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i),32);
        bufp->chgBit(oldp+185,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en));
        bufp->chgBit(oldp+186,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en));
        bufp->chgBit(oldp+187,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished));
        bufp->chgQData(oldp+188,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store),64);
        bufp->chgSData(oldp+190,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address),14);
        bufp->chgBit(oldp+191,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request));
        bufp->chgIData(oldp+192,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o),32);
        bufp->chgCData(oldp+193,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay),4);
        bufp->chgIData(oldp+194,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+195,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgWData(oldp+196,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0]),79);
        bufp->chgWData(oldp+199,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1]),79);
        bufp->chgWData(oldp+202,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2]),79);
        bufp->chgWData(oldp+205,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3]),79);
        bufp->chgWData(oldp+208,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4]),79);
        bufp->chgWData(oldp+211,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5]),79);
        bufp->chgWData(oldp+214,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6]),79);
        bufp->chgWData(oldp+217,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7]),79);
        bufp->chgCData(oldp+220,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head),4);
        bufp->chgCData(oldp+221,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail),4);
        bufp->chgBit(oldp+222,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty));
        bufp->chgIData(oldp+223,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+224,(vlSelfRef.cache_tb__DOT__clk));
    bufp->chgIData(oldp+225,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->chgCData(oldp+226,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->chgCData(oldp+227,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->chgBit(oldp+228,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op));
    bufp->chgIData(oldp+229,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out),32);
    bufp->chgBit(oldp+230,(((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit) 
                            & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))));
    bufp->chgQData(oldp+231,(vlSelfRef.cache_tb__DOT__cache__DOT__temp),64);
    bufp->chgQData(oldp+233,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp),64);
    bufp->chgCData(oldp+235,(((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                               ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)
                                   ? 1U : (((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)) 
                                            & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req))
                                            ? 2U : 0U))
                               : ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                   ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready)
                                       ? 0U : 1U) : 
                                  ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                    ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid)
                                        ? ((0x00004000U 
                                            & vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U])
                                            ? 0U : 3U)
                                        : ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req)
                                            ? 2U : 0U))
                                    : ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                        ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished)
                                            ? 0U : 3U)
                                        : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))),2);
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
}
