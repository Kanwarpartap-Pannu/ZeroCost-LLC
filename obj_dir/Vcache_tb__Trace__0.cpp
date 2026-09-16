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
        bufp->chgIData(oldp+21,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgIData(oldp+22,((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i 
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
        bufp->chgIData(oldp+65,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+66,(vlSelfRef.cache_tb__DOT__addr),16);
        bufp->chgIData(oldp+67,(vlSelfRef.cache_tb__DOT__i),32);
        bufp->chgCData(oldp+68,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
        bufp->chgSData(oldp+69,((0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr))),16);
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))));
        bufp->chgCData(oldp+71,((7U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                     >> 3U))));
        bufp->chgSData(oldp+73,((0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                >> 4U))),12);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+74,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way));
        bufp->chgBit(oldp+75,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way));
        bufp->chgBit(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o));
        bufp->chgWData(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o),128);
        bufp->chgBit(oldp+81,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way));
        bufp->chgBit(oldp+82,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way));
        bufp->chgBit(oldp+83,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found));
        bufp->chgCData(oldp+84,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgSData(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address),16);
        bufp->chgBit(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit));
        bufp->chgCData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state),2);
        bufp->chgBit(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set));
        bufp->chgBit(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way));
        bufp->chgBit(oldp+90,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state));
        bufp->chgBit(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgIData(oldp+92,(vlSelfRef.cache_tb__DOT__data_out),32);
        bufp->chgBit(oldp+93,(vlSelfRef.cache_tb__DOT__stall));
        bufp->chgBit(oldp+94,(vlSelfRef.cache_tb__DOT__data_valid));
        bufp->chgSData(oldp+95,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr),16);
        bufp->chgIData(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out),32);
        bufp->chgBit(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid));
        bufp->chgCData(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq),2);
        bufp->chgWData(oldp+99,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store),80);
        bufp->chgBit(oldp+102,(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished));
        bufp->chgBit(oldp+103,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en));
        bufp->chgBit(oldp+104,(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq));
        bufp->chgBit(oldp+105,(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req));
        bufp->chgCData(oldp+106,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl),2);
        bufp->chgWData(oldp+107,(vlSelfRef.cache_tb__DOT__cache__DOT__push_data),80);
        bufp->chgBit(oldp+110,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state));
        bufp->chgCData(oldp+111,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache),2);
        bufp->chgBit(oldp+112,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem));
        bufp->chgCData(oldp+113,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag),2);
        bufp->chgBit(oldp+114,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit));
        bufp->chgBit(oldp+115,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle));
        bufp->chgSData(oldp+116,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data),12);
        bufp->chgBit(oldp+117,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in));
        bufp->chgBit(oldp+118,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag));
        bufp->chgBit(oldp+119,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re));
        bufp->chgCData(oldp+120,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o),2);
        bufp->chgBit(oldp+121,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__enable));
        bufp->chgBit(oldp+122,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig));
        bufp->chgBit(oldp+123,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data));
        bufp->chgBit(oldp+124,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en));
        bufp->chgQData(oldp+125,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_in),64);
        bufp->chgBit(oldp+127,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data));
        bufp->chgBit(oldp+128,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search));
        bufp->chgBit(oldp+129,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en));
        bufp->chgBit(oldp+130,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en));
        bufp->chgBit(oldp+131,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag));
        bufp->chgSData(oldp+132,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o),12);
        bufp->chgBit(oldp+133,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag));
        bufp->chgBit(oldp+134,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en));
        bufp->chgBit(oldp+135,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir));
        bufp->chgCData(oldp+136,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way),2);
        bufp->chgBit(oldp+137,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en));
        bufp->chgBit(oldp+138,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en));
        bufp->chgBit(oldp+139,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out));
        bufp->chgQData(oldp+140,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp),64);
        bufp->chgCData(oldp+142,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way),2);
        bufp->chgBit(oldp+143,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found));
        bufp->chgSData(oldp+144,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+145,(vlSelfRef.cache_tb__DOT__requester));
        bufp->chgCData(oldp+146,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state),2);
        bufp->chgBit(oldp+147,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready));
        bufp->chgWData(oldp+148,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_data),81);
        bufp->chgBit(oldp+151,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid));
        bufp->chgBit(oldp+152,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found));
        bufp->chgCData(oldp+153,(vlSelfRef.cache_tb__DOT__cache__DOT__found_entry),4);
        bufp->chgQData(oldp+154,(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data),64);
        bufp->chgBit(oldp+156,((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))));
        bufp->chgBit(oldp+157,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full));
        bufp->chgCData(oldp+158,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__q),3);
        bufp->chgBit(oldp+159,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
        bufp->chgCData(oldp+160,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache),2);
        bufp->chgBit(oldp+161,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
        bufp->chgCData(oldp+162,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state),2);
        bufp->chgBit(oldp+163,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done));
        bufp->chgBit(oldp+164,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs));
        bufp->chgQData(oldp+165,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_block),64);
        bufp->chgBit(oldp+167,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_index));
        bufp->chgCData(oldp+168,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_way),2);
        bufp->chgBit(oldp+169,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__valid_ornot));
        bufp->chgWData(oldp+170,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array),256);
        bufp->chgSData(oldp+178,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][0U]),12);
        bufp->chgSData(oldp+179,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [0U][1U]),12);
        bufp->chgSData(oldp+180,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][0U]),12);
        bufp->chgSData(oldp+181,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                 [1U][1U]),12);
        bufp->chgCData(oldp+182,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][0U]),2);
        bufp->chgCData(oldp+183,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [0U][1U]),2);
        bufp->chgCData(oldp+184,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][0U]),2);
        bufp->chgCData(oldp+185,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                 [1U][1U]),2);
        bufp->chgBit(oldp+186,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                               [0U][0U]));
        bufp->chgBit(oldp+187,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                               [0U][1U]));
        bufp->chgBit(oldp+188,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                               [1U][0U]));
        bufp->chgBit(oldp+189,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                               [1U][1U]));
        bufp->chgBit(oldp+190,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                               [0U][0U]));
        bufp->chgBit(oldp+191,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                               [0U][1U]));
        bufp->chgBit(oldp+192,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                               [1U][0U]));
        bufp->chgBit(oldp+193,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                               [1U][1U]));
        bufp->chgBit(oldp+194,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                               [0U][0U]));
        bufp->chgBit(oldp+195,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                               [0U][1U]));
        bufp->chgBit(oldp+196,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                               [1U][0U]));
        bufp->chgBit(oldp+197,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                               [1U][1U]));
        bufp->chgIData(oldp+198,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+199,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+200,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i),32);
        bufp->chgSData(oldp+201,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [0U][0U]),12);
        bufp->chgSData(oldp+202,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [0U][1U]),12);
        bufp->chgSData(oldp+203,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [0U][2U]),12);
        bufp->chgSData(oldp+204,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [0U][3U]),12);
        bufp->chgSData(oldp+205,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [1U][0U]),12);
        bufp->chgSData(oldp+206,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [1U][1U]),12);
        bufp->chgSData(oldp+207,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [1U][2U]),12);
        bufp->chgSData(oldp+208,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                                 [1U][3U]),12);
        bufp->chgCData(oldp+209,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [0U][0U]),2);
        bufp->chgCData(oldp+210,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [0U][1U]),2);
        bufp->chgCData(oldp+211,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [0U][2U]),2);
        bufp->chgCData(oldp+212,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [0U][3U]),2);
        bufp->chgCData(oldp+213,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [1U][0U]),2);
        bufp->chgCData(oldp+214,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [1U][1U]),2);
        bufp->chgCData(oldp+215,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [1U][2U]),2);
        bufp->chgCData(oldp+216,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                                 [1U][3U]),2);
        bufp->chgCData(oldp+217,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [0U][0U]),2);
        bufp->chgCData(oldp+218,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [0U][1U]),2);
        bufp->chgCData(oldp+219,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [0U][2U]),2);
        bufp->chgCData(oldp+220,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [0U][3U]),2);
        bufp->chgCData(oldp+221,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [1U][0U]),2);
        bufp->chgCData(oldp+222,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [1U][1U]),2);
        bufp->chgCData(oldp+223,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [1U][2U]),2);
        bufp->chgCData(oldp+224,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                 [1U][3U]),2);
        bufp->chgCData(oldp+225,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [0U][0U]),2);
        bufp->chgCData(oldp+226,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [0U][1U]),2);
        bufp->chgCData(oldp+227,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [0U][2U]),2);
        bufp->chgCData(oldp+228,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [0U][3U]),2);
        bufp->chgCData(oldp+229,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [1U][0U]),2);
        bufp->chgCData(oldp+230,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [1U][1U]),2);
        bufp->chgCData(oldp+231,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [1U][2U]),2);
        bufp->chgCData(oldp+232,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                                 [1U][3U]),2);
        bufp->chgBit(oldp+233,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [0U][0U]));
        bufp->chgBit(oldp+234,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [0U][1U]));
        bufp->chgBit(oldp+235,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [0U][2U]));
        bufp->chgBit(oldp+236,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [0U][3U]));
        bufp->chgBit(oldp+237,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [1U][0U]));
        bufp->chgBit(oldp+238,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [1U][1U]));
        bufp->chgBit(oldp+239,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [1U][2U]));
        bufp->chgBit(oldp+240,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                               [1U][3U]));
        bufp->chgCData(oldp+241,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__q),3);
        bufp->chgBit(oldp+242,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way));
        bufp->chgBit(oldp+243,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx));
        bufp->chgSData(oldp+244,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[0]),12);
        bufp->chgSData(oldp+245,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[1]),12);
        bufp->chgSData(oldp+246,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[2]),12);
        bufp->chgSData(oldp+247,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[3]),12);
        bufp->chgIData(oldp+248,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+249,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+250,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+251,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv),2);
        bufp->chgBit(oldp+252,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en));
        bufp->chgBit(oldp+253,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en));
        bufp->chgBit(oldp+254,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished));
        bufp->chgQData(oldp+255,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store),64);
        bufp->chgSData(oldp+257,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address),16);
        bufp->chgBit(oldp+258,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request));
        bufp->chgIData(oldp+259,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o),32);
        bufp->chgCData(oldp+260,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay),4);
        bufp->chgIData(oldp+261,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+262,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgWData(oldp+263,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0]),81);
        bufp->chgWData(oldp+266,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1]),81);
        bufp->chgWData(oldp+269,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2]),81);
        bufp->chgWData(oldp+272,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3]),81);
        bufp->chgWData(oldp+275,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4]),81);
        bufp->chgWData(oldp+278,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5]),81);
        bufp->chgWData(oldp+281,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6]),81);
        bufp->chgWData(oldp+284,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7]),81);
        bufp->chgCData(oldp+287,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head),4);
        bufp->chgCData(oldp+288,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail),4);
        bufp->chgBit(oldp+289,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty));
        bufp->chgIData(oldp+290,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+291,(vlSelfRef.cache_tb__DOT__clk));
    bufp->chgBit(oldp+292,(vlSelfRef.cache_tb__DOT__reset));
    bufp->chgIData(oldp+293,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->chgCData(oldp+294,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->chgCData(oldp+295,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->chgBit(oldp+296,(vlSelfRef.cache_tb__DOT__start));
    bufp->chgBit(oldp+297,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op));
    bufp->chgBit(oldp+298,(((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit) 
                            & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))));
    bufp->chgQData(oldp+299,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out),64);
    bufp->chgQData(oldp+301,(vlSelfRef.cache_tb__DOT__cache__DOT__temp),64);
    bufp->chgBit(oldp+303,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req));
    bufp->chgBit(oldp+304,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__q_en));
    bufp->chgSData(oldp+305,(((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag] 
                               << 4U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in) 
                                         << 3U))),16);
    bufp->chgCData(oldp+306,(((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                               ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)
                                   ? 1U : (((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)) 
                                            & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req))
                                            ? 2U : 0U))
                               : ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                   ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready)
                                       ? 0U : 1U) : 
                                  ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                    ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid)
                                        ? ((0x00010000U 
                                            & vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U])
                                            ? 0U : 3U)
                                        : ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req)
                                            ? 2U : 0U))
                                    : ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                        ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished)
                                            ? 0U : 3U)
                                        : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))),2);
    bufp->chgIData(oldp+307,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat),32);
    bufp->chgIData(oldp+308,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat),32);
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
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
