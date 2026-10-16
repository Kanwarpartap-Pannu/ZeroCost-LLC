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
        bufp->chgIData(oldp+0,(vlSelfRef.cache_tb__DOT__my_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.cache_tb__DOT__my_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.cache_tb__DOT__my_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.cache_tb__DOT__my_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cache_tb__DOT__my_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.cache_tb__DOT__my_array[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.cache_tb__DOT__my_array[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.cache_tb__DOT__my_array[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.cache_tb__DOT__my_array[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.cache_tb__DOT__my_array[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.cache_tb__DOT__my_array[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cache_tb__DOT__my_array[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cache_tb__DOT__my_array[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cache_tb__DOT__my_array[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.cache_tb__DOT__my_array[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.cache_tb__DOT__my_array[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.cache_tb__DOT__my_array[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.cache_tb__DOT__my_array[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.cache_tb__DOT__my_array[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.cache_tb__DOT__my_array[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.cache_tb__DOT__my_array[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgIData(oldp+22,((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i 
                                 - (IData)(0x01000000U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgQData(oldp+23,(vlSelfRef.cache_tb__DOT__test_addresses[0]),56);
        bufp->chgQData(oldp+25,(vlSelfRef.cache_tb__DOT__test_addresses[1]),56);
        bufp->chgQData(oldp+27,(vlSelfRef.cache_tb__DOT__test_addresses[2]),56);
        bufp->chgQData(oldp+29,(vlSelfRef.cache_tb__DOT__test_addresses[3]),56);
        bufp->chgQData(oldp+31,(vlSelfRef.cache_tb__DOT__test_addresses[4]),56);
        bufp->chgQData(oldp+33,(vlSelfRef.cache_tb__DOT__test_addresses[5]),56);
        bufp->chgQData(oldp+35,(vlSelfRef.cache_tb__DOT__test_addresses[6]),56);
        bufp->chgQData(oldp+37,(vlSelfRef.cache_tb__DOT__test_addresses[7]),56);
        bufp->chgQData(oldp+39,(vlSelfRef.cache_tb__DOT__test_addresses[8]),56);
        bufp->chgQData(oldp+41,(vlSelfRef.cache_tb__DOT__test_addresses[9]),56);
        bufp->chgQData(oldp+43,(vlSelfRef.cache_tb__DOT__test_addresses[10]),56);
        bufp->chgQData(oldp+45,(vlSelfRef.cache_tb__DOT__test_addresses[11]),56);
        bufp->chgQData(oldp+47,(vlSelfRef.cache_tb__DOT__test_addresses[12]),56);
        bufp->chgQData(oldp+49,(vlSelfRef.cache_tb__DOT__test_addresses[13]),56);
        bufp->chgQData(oldp+51,(vlSelfRef.cache_tb__DOT__test_addresses[14]),56);
        bufp->chgQData(oldp+53,(vlSelfRef.cache_tb__DOT__test_addresses[15]),56);
        bufp->chgQData(oldp+55,(vlSelfRef.cache_tb__DOT__test_addresses[16]),56);
        bufp->chgQData(oldp+57,(vlSelfRef.cache_tb__DOT__test_addresses[17]),56);
        bufp->chgQData(oldp+59,(vlSelfRef.cache_tb__DOT__test_addresses[18]),56);
        bufp->chgQData(oldp+61,(vlSelfRef.cache_tb__DOT__test_addresses[19]),56);
        bufp->chgQData(oldp+63,(vlSelfRef.cache_tb__DOT__test_addresses[20]),56);
        bufp->chgIData(oldp+65,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgSData(oldp+66,(vlSelfRef.cache_tb__DOT__address),16);
        bufp->chgIData(oldp+67,(vlSelfRef.cache_tb__DOT__i),32);
        bufp->chgCData(oldp+68,((7U & (IData)(vlSelfRef.cache_tb__DOT__address))),3);
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))));
        bufp->chgSData(oldp+70,((0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                >> 4U))),12);
        bufp->chgSData(oldp+71,((0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__address))),16);
        bufp->chgIData(oldp+72,(vlSelfRef.cache_tb__DOT__address),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+73,(vlSelfRef.cache_tb__DOT__stall));
        bufp->chgBit(oldp+74,(vlSelfRef.cache_tb__DOT__data_valid));
        bufp->chgCData(oldp+75,(vlSelfRef.cache_tb__DOT__cache__DOT__T_op),4);
        bufp->chgBit(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way));
        bufp->chgBit(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set));
        bufp->chgBit(oldp+78,(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl));
        bufp->chgBit(oldp+79,(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl));
        bufp->chgCData(oldp+80,(vlSelfRef.cache_tb__DOT__cache__DOT__D_op),2);
        bufp->chgQData(oldp+81,(vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o),64);
        bufp->chgQData(oldp+83,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i),48);
        bufp->chgCData(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state),4);
        bufp->chgCData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way),3);
        bufp->chgCData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set),2);
        bufp->chgQData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp),64);
        bufp->chgBit(oldp+90,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found));
        bufp->chgBit(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found));
        bufp->chgCData(oldp+92,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way),2);
        bufp->chgCData(oldp+93,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way),2);
        bufp->chgCData(oldp+94,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way),2);
        bufp->chgBit(oldp+95,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set));
        bufp->chgCData(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag),2);
        bufp->chgBit(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update));
        bufp->chgQData(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+100,(vlSelfRef.cache_tb__DOT__requester));
        bufp->chgBit(oldp+101,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
        bufp->chgQData(oldp+102,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data),64);
        bufp->chgBit(oldp+104,(vlSelfRef.cache_tb__DOT__cache__DOT__push_en));
        bufp->chgBit(oldp+105,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en));
        bufp->chgBit(oldp+106,((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)))));
        bufp->chgBit(oldp+107,(vlSelfRef.cache_tb__DOT__cache__DOT__found));
        bufp->chgBit(oldp+108,(vlSelfRef.cache_tb__DOT__cache__DOT__full));
        bufp->chgQData(oldp+109,((0x0000ffffffffffffULL 
                                  & vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o)),48);
        bufp->chgIData(oldp+111,(vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o),32);
        bufp->chgBit(oldp+112,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_valid));
        bufp->chgSData(oldp+113,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr),16);
        bufp->chgIData(oldp+114,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_data_in),32);
        bufp->chgCData(oldp+115,(vlSelfRef.cache_tb__DOT__cache__DOT__M_op),2);
        bufp->chgBit(oldp+116,(vlSelfRef.cache_tb__DOT__cache__DOT__ready_out));
        bufp->chgBit(oldp+117,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_finished));
        bufp->chgIData(oldp+118,((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out)),32);
        bufp->chgCData(oldp+119,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state),4);
        bufp->chgQData(oldp+120,(vlSelfRef.cache_tb__DOT__cache__DOT__temp),64);
        bufp->chgBit(oldp+122,(vlSelfRef.cache_tb__DOT__cache__DOT__buff_write));
        bufp->chgWData(oldp+123,(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array),256);
        bufp->chgBit(oldp+131,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en));
        bufp->chgBit(oldp+132,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__write_en));
        bufp->chgQData(oldp+133,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out),64);
        bufp->chgBit(oldp+135,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__request));
        bufp->chgIData(oldp+136,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat),32);
        bufp->chgIData(oldp+137,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o),32);
        bufp->chgCData(oldp+138,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__delay),4);
        bufp->chgIData(oldp+139,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat),32);
        bufp->chgIData(oldp+140,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+141,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+142,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [0U][0U]),16);
        bufp->chgSData(oldp+143,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [0U][1U]),16);
        bufp->chgSData(oldp+144,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [0U][2U]),16);
        bufp->chgSData(oldp+145,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [0U][3U]),16);
        bufp->chgSData(oldp+146,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [1U][0U]),16);
        bufp->chgSData(oldp+147,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [1U][1U]),16);
        bufp->chgSData(oldp+148,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [1U][2U]),16);
        bufp->chgSData(oldp+149,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                                 [1U][3U]),16);
        bufp->chgCData(oldp+150,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [0U][0U]),4);
        bufp->chgCData(oldp+151,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [0U][1U]),4);
        bufp->chgCData(oldp+152,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [0U][2U]),4);
        bufp->chgCData(oldp+153,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [0U][3U]),4);
        bufp->chgCData(oldp+154,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [1U][0U]),4);
        bufp->chgCData(oldp+155,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [1U][1U]),4);
        bufp->chgCData(oldp+156,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [1U][2U]),4);
        bufp->chgCData(oldp+157,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                 [1U][3U]),4);
        bufp->chgCData(oldp+158,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                 [0U][0U]),6);
        bufp->chgCData(oldp+159,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                 [0U][1U]),6);
        bufp->chgCData(oldp+160,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                 [1U][0U]),6);
        bufp->chgCData(oldp+161,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                 [1U][1U]),6);
        bufp->chgCData(oldp+162,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre),2);
        bufp->chgBit(oldp+163,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs));
        bufp->chgCData(oldp+164,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q),5);
        bufp->chgCData(oldp+165,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag),2);
        bufp->chgCData(oldp+166,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way),2);
        bufp->chgBit(oldp+167,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set));
        bufp->chgBit(oldp+168,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag));
        bufp->chgCData(oldp+169,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag),2);
        bufp->chgCData(oldp+170,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim),2);
        bufp->chgCData(oldp+171,((3U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.cache_tb__DOT__requester)))),2);
        bufp->chgCData(oldp+172,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way),2);
        bufp->chgBit(oldp+173,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set));
        bufp->chgBit(oldp+174,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed));
        bufp->chgIData(oldp+175,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+176,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+177,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+178,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk9__DOT__i),32);
        bufp->chgQData(oldp+179,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o),64);
        bufp->chgWData(oldp+181,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[0]),65);
        bufp->chgWData(oldp+184,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[1]),65);
        bufp->chgWData(oldp+187,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[2]),65);
        bufp->chgWData(oldp+190,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[3]),65);
        bufp->chgWData(oldp+193,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[4]),65);
        bufp->chgWData(oldp+196,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[5]),65);
        bufp->chgWData(oldp+199,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[6]),65);
        bufp->chgWData(oldp+202,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[7]),65);
        bufp->chgCData(oldp+205,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head),4);
        bufp->chgCData(oldp+206,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail),4);
        bufp->chgBit(oldp+207,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty));
        bufp->chgCData(oldp+208,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry),3);
        bufp->chgIData(oldp+209,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+210,(vlSelfRef.cache_tb__DOT__clk));
    bufp->chgBit(oldp+211,(vlSelfRef.cache_tb__DOT__reset));
    bufp->chgIData(oldp+212,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->chgCData(oldp+213,(vlSelfRef.cache_tb__DOT__op),3);
    bufp->chgCData(oldp+214,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->chgIData(oldp+215,(((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                               ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                   ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                   : (0x000000ffU & (IData)(
                                                            (vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
                                                             >> 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,6,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
                               : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                   ? (0x0000ffffU & (IData)(
                                                            (vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
                                                             >> 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,6,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                   : vlSelfRef.__VdfgRegularize_hebeb780c_0_0))),32);
    bufp->chgBit(oldp+216,(vlSelfRef.cache_tb__DOT__start));
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
