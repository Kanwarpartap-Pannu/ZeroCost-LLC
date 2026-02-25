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
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out),32);
        bufp->chgBit(oldp+1,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way));
        bufp->chgCData(oldp+2,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way),2);
        bufp->chgQData(oldp+3,((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out))),64);
        bufp->chgIData(oldp+5,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o),32);
        bufp->chgCData(oldp+7,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded),2);
        bufp->chgIData(oldp+8,((vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
                                - (IData)(0x01000000U))),32);
        bufp->chgIData(oldp+9,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+10,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[0]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[1]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[2]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[3]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[4]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[5]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[6]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[7]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[8]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[9]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[10]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[11]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[12]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[13]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[14]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[15]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[16]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[17]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[18]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[19]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[20]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+32,(vlSelfRef.cache_tb__DOT__data_out),32);
        bufp->chgBit(oldp+33,(vlSelfRef.cache_tb__DOT__stall));
        bufp->chgBit(oldp+34,(vlSelfRef.cache_tb__DOT__data_valid));
        bufp->chgBit(oldp+35,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
        bufp->chgBit(oldp+36,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state));
        bufp->chgBit(oldp+37,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
        bufp->chgBit(oldp+38,(vlSelfRef.cache_tb__DOT__cache__DOT__idle));
        bufp->chgBit(oldp+39,(vlSelfRef.cache_tb__DOT__cache__DOT__replace_en));
        __VExpandSel_WordIdx_1 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                               ((IData)(3U) 
                                                                - 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                    >> 3U))), 8U) 
                                                 >> 5U));
        __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                              ((IData)(3U) 
                                                               - 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                   >> 3U))), 8U));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_1[0U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_1[1U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_1[2U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_1[3U] = (((((0x0000001cU <= __VExpandSel_WordIdx_1)
                             ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(4U) + __VExpandSel_WordIdx_1)]) 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        bufp->chgWData(oldp+40,(__Vtemp_1),128);
        __VExpandSel_WordIdx_2 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                               ((IData)(3U) 
                                                                - 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                    >> 3U))), 8U) 
                                                 >> 5U));
        __VExpandSel_LoShift_2 = (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                              ((IData)(3U) 
                                                               - 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                   >> 3U))), 8U));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_2[0U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[1U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[2U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[3U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(4U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[4U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(5U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[5U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(6U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[6U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                           ((IData)(7U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(6U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[7U] = (((((0x00000018U <= __VExpandSel_WordIdx_2)
                             ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(8U) + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                            ((IData)(7U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        bufp->chgWData(oldp+44,(__Vtemp_2),256);
        bufp->chgWData(oldp+52,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array),1024);
        bufp->chgCData(oldp+84,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][0U]),3);
        bufp->chgCData(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [0U][1U]),3);
        bufp->chgCData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][0U]),3);
        bufp->chgCData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [1U][1U]),3);
        bufp->chgCData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [2U][0U]),3);
        bufp->chgCData(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [2U][1U]),3);
        bufp->chgCData(oldp+90,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [3U][0U]),3);
        bufp->chgCData(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [3U][1U]),3);
        bufp->chgBit(oldp+92,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [0U][0U]));
        bufp->chgBit(oldp+93,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [0U][1U]));
        bufp->chgBit(oldp+94,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [1U][0U]));
        bufp->chgBit(oldp+95,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [1U][1U]));
        bufp->chgBit(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [2U][0U]));
        bufp->chgBit(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [2U][1U]));
        bufp->chgBit(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [3U][0U]));
        bufp->chgBit(oldp+99,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [3U][1U]));
        bufp->chgBit(oldp+100,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [0U][0U]));
        bufp->chgBit(oldp+101,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [0U][1U]));
        bufp->chgBit(oldp+102,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [1U][0U]));
        bufp->chgBit(oldp+103,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [1U][1U]));
        bufp->chgBit(oldp+104,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [2U][0U]));
        bufp->chgBit(oldp+105,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [2U][1U]));
        bufp->chgBit(oldp+106,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [3U][0U]));
        bufp->chgBit(oldp+107,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                               [3U][1U]));
        bufp->chgBit(oldp+108,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way));
        bufp->chgBit(oldp+109,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way));
        bufp->chgBit(oldp+110,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found));
        bufp->chgBit(oldp+111,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way));
        bufp->chgBit(oldp+112,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way));
        bufp->chgIData(oldp+113,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
    }
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
}
