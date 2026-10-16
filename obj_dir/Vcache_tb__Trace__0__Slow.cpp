// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_tb__Syms.h"


VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP____024unit__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcache_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+221,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+213,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+215,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+216,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"requester",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+217,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_addresses", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declQuad(c+24+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 55,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("my_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+68,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"LOOKUP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+213,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"requester",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+216,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+221,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"DIRECTORY_WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,0,"set_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+71,0,"tag_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+72,0,"read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"T_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"tag_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+78,0,"tag_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+102,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"relocate_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"evict_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"D_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+103,0,"cache_line_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+226,0,"data_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+82,0,"way_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"buffer_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+105,0,"push_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"pop_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"drain_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+110,0,"buffer_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+112,0,"search_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"buffer_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"mem_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"M_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+117,0,"ready_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"wr_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"mem_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"MISS_BUFFER_HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+228,0,"READING_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"INSERT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+229,0,"RELOC_ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+230,0,"RELOC_TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+231,0,"RELOC_THREE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+232,0,"WRITE_BUFFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+233,0,"WRITE_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+234,0,"POP_BUFFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+120,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+121,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+123,0,"buff_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+228,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+232,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+228,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"way_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+69,0,"offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"D_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+215,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+213,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+103,0,"cache_line_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+82,0,"way_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+124,0,"data_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declQuad(c+89,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+212,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"M_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"ready_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"wr_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+235,0,"mem_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+237,0,"store_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+136,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+241,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"MEM_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"addr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+235,0,"data_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+132,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"read_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"write_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"write_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+134,0,"data_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+243,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+139,0,"delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"address_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tag1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+245,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+70,0,"set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+101,0,"requester",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+76,0,"T_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"way_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+78,0,"set_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+102,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"relocate_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"evict_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"CAPACITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+143,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+147,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+150,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tag_metadata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+151,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+153,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+155,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+157,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_metadata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+159,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+160,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+161,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+162,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+163,0,"has_cre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+164,0,"next_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+165,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+166,0,"hit_way_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"hit_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+91,0,"cre_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"empty_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"empty_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"cre_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"free_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"search_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+169,0,"empty_found_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"empty_way_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"replace_way_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+171,0,"victim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+172,0,"sharer_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+98,0,"cre_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,0,"victim_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+175,0,"overwrite_needed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wr_buffer1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+99,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+105,0,"push_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"pop_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"search_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"drain_rq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"search_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"found",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+180,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+113,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+182+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 64,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+228,0,"POINTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+206,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+208,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"found_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP____024unit__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+249,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"T_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+251,0,"T_INSERT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+252,0,"T_REMOVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,0,"T_RELOC_ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+254,0,"T_RELOC_TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+255,0,"T_RELOC_THREE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"T_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"T_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"T_EVICT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,0,"T_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+260,0,"D_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"D_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+262,0,"D_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+263,0,"D_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"M_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+262,0,"M_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"M_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"C_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+264,0,"C_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"C_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"C_EVICT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,0,"C_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_init_top(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_top\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcache_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache_tb___024root__trace_register(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_register\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcache_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcache_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcache_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcache_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_const_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcache_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_const_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+218,(0x00000010U),32);
    bufp->fullIData(oldp+219,(0x00000020U),32);
    bufp->fullIData(oldp+220,(2U),32);
    bufp->fullIData(oldp+221,(3U),32);
    bufp->fullIData(oldp+222,(1U),32);
    bufp->fullIData(oldp+223,(0x0000000cU),32);
    bufp->fullIData(oldp+224,(4U),32);
    bufp->fullIData(oldp+225,(2U),32);
    bufp->fullBit(oldp+226,(vlSelfRef.cache_tb__DOT__cache__DOT__data_set));
    bufp->fullIData(oldp+227,(0U),32);
    bufp->fullIData(oldp+228,(3U),32);
    bufp->fullIData(oldp+229,(5U),32);
    bufp->fullIData(oldp+230,(6U),32);
    bufp->fullIData(oldp+231,(7U),32);
    bufp->fullIData(oldp+232,(8U),32);
    bufp->fullIData(oldp+233,(9U),32);
    bufp->fullIData(oldp+234,(0x0000000aU),32);
    bufp->fullQData(oldp+235,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store),64);
    bufp->fullSData(oldp+237,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__store_address),16);
    bufp->fullBit(oldp+238,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__address));
    bufp->fullBit(oldp+239,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__funct3_i));
    bufp->fullIData(oldp+240,(0U),32);
    bufp->fullIData(oldp+241,(0x01000000U),32);
    bufp->fullCData(oldp+242,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__funct3_i),3);
    bufp->fullIData(oldp+243,(0x00400000U),32);
    bufp->fullIData(oldp+244,(0x0000000cU),32);
    bufp->fullIData(oldp+245,(1U),32);
    bufp->fullIData(oldp+246,(2U),32);
    bufp->fullIData(oldp+247,(4U),32);
    bufp->fullIData(oldp+248,(8U),32);
    bufp->fullIData(oldp+249,(0U),32);
    bufp->fullCData(oldp+250,(0U),4);
    bufp->fullCData(oldp+251,(0x0eU),4);
    bufp->fullCData(oldp+252,(0x0fU),4);
    bufp->fullCData(oldp+253,(8U),4);
    bufp->fullCData(oldp+254,(0x0aU),4);
    bufp->fullCData(oldp+255,(0x0cU),4);
    bufp->fullCData(oldp+256,(2U),4);
    bufp->fullCData(oldp+257,(3U),4);
    bufp->fullCData(oldp+258,(6U),4);
    bufp->fullCData(oldp+259,(4U),4);
    bufp->fullCData(oldp+260,(0U),2);
    bufp->fullCData(oldp+261,(1U),2);
    bufp->fullCData(oldp+262,(2U),2);
    bufp->fullCData(oldp+263,(3U),2);
    bufp->fullCData(oldp+264,(1U),4);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_full_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcache_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_full_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.cache_tb__DOT__my_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.cache_tb__DOT__my_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.cache_tb__DOT__my_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cache_tb__DOT__my_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.cache_tb__DOT__my_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cache_tb__DOT__my_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cache_tb__DOT__my_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.cache_tb__DOT__my_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.cache_tb__DOT__my_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.cache_tb__DOT__my_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.cache_tb__DOT__my_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.cache_tb__DOT__my_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cache_tb__DOT__my_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cache_tb__DOT__my_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.cache_tb__DOT__my_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.cache_tb__DOT__my_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.cache_tb__DOT__my_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.cache_tb__DOT__my_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cache_tb__DOT__my_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.cache_tb__DOT__my_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cache_tb__DOT__my_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i),32);
    bufp->fullIData(oldp+23,((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i 
                              - (IData)(0x01000000U))),32);
    bufp->fullQData(oldp+24,(vlSelfRef.cache_tb__DOT__test_addresses[0]),56);
    bufp->fullQData(oldp+26,(vlSelfRef.cache_tb__DOT__test_addresses[1]),56);
    bufp->fullQData(oldp+28,(vlSelfRef.cache_tb__DOT__test_addresses[2]),56);
    bufp->fullQData(oldp+30,(vlSelfRef.cache_tb__DOT__test_addresses[3]),56);
    bufp->fullQData(oldp+32,(vlSelfRef.cache_tb__DOT__test_addresses[4]),56);
    bufp->fullQData(oldp+34,(vlSelfRef.cache_tb__DOT__test_addresses[5]),56);
    bufp->fullQData(oldp+36,(vlSelfRef.cache_tb__DOT__test_addresses[6]),56);
    bufp->fullQData(oldp+38,(vlSelfRef.cache_tb__DOT__test_addresses[7]),56);
    bufp->fullQData(oldp+40,(vlSelfRef.cache_tb__DOT__test_addresses[8]),56);
    bufp->fullQData(oldp+42,(vlSelfRef.cache_tb__DOT__test_addresses[9]),56);
    bufp->fullQData(oldp+44,(vlSelfRef.cache_tb__DOT__test_addresses[10]),56);
    bufp->fullQData(oldp+46,(vlSelfRef.cache_tb__DOT__test_addresses[11]),56);
    bufp->fullQData(oldp+48,(vlSelfRef.cache_tb__DOT__test_addresses[12]),56);
    bufp->fullQData(oldp+50,(vlSelfRef.cache_tb__DOT__test_addresses[13]),56);
    bufp->fullQData(oldp+52,(vlSelfRef.cache_tb__DOT__test_addresses[14]),56);
    bufp->fullQData(oldp+54,(vlSelfRef.cache_tb__DOT__test_addresses[15]),56);
    bufp->fullQData(oldp+56,(vlSelfRef.cache_tb__DOT__test_addresses[16]),56);
    bufp->fullQData(oldp+58,(vlSelfRef.cache_tb__DOT__test_addresses[17]),56);
    bufp->fullQData(oldp+60,(vlSelfRef.cache_tb__DOT__test_addresses[18]),56);
    bufp->fullQData(oldp+62,(vlSelfRef.cache_tb__DOT__test_addresses[19]),56);
    bufp->fullQData(oldp+64,(vlSelfRef.cache_tb__DOT__test_addresses[20]),56);
    bufp->fullIData(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i),32);
    bufp->fullSData(oldp+67,(vlSelfRef.cache_tb__DOT__address),16);
    bufp->fullIData(oldp+68,(vlSelfRef.cache_tb__DOT__i),32);
    bufp->fullCData(oldp+69,((7U & (IData)(vlSelfRef.cache_tb__DOT__address))),3);
    bufp->fullBit(oldp+70,((1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))));
    bufp->fullSData(oldp+71,((0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                             >> 4U))),12);
    bufp->fullSData(oldp+72,((0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__address))),16);
    bufp->fullIData(oldp+73,(vlSelfRef.cache_tb__DOT__address),32);
    bufp->fullBit(oldp+74,(vlSelfRef.cache_tb__DOT__stall));
    bufp->fullBit(oldp+75,(vlSelfRef.cache_tb__DOT__data_valid));
    bufp->fullCData(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__T_op),4);
    bufp->fullBit(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way));
    bufp->fullBit(oldp+78,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set));
    bufp->fullBit(oldp+79,(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl));
    bufp->fullBit(oldp+80,(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl));
    bufp->fullCData(oldp+81,(vlSelfRef.cache_tb__DOT__cache__DOT__D_op),2);
    bufp->fullQData(oldp+82,(vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o),64);
    bufp->fullQData(oldp+84,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i),48);
    bufp->fullCData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state),4);
    bufp->fullCData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way),3);
    bufp->fullCData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set),2);
    bufp->fullQData(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp),64);
    bufp->fullBit(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found));
    bufp->fullBit(oldp+92,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found));
    bufp->fullCData(oldp+93,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way),2);
    bufp->fullCData(oldp+94,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way),2);
    bufp->fullCData(oldp+95,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way),2);
    bufp->fullBit(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set));
    bufp->fullCData(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag),2);
    bufp->fullBit(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update));
    bufp->fullQData(oldp+99,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i),64);
    bufp->fullBit(oldp+101,(vlSelfRef.cache_tb__DOT__requester));
    bufp->fullBit(oldp+102,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
    bufp->fullQData(oldp+103,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data),64);
    bufp->fullBit(oldp+105,(vlSelfRef.cache_tb__DOT__cache__DOT__push_en));
    bufp->fullBit(oldp+106,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en));
    bufp->fullBit(oldp+107,((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)))));
    bufp->fullBit(oldp+108,(vlSelfRef.cache_tb__DOT__cache__DOT__found));
    bufp->fullBit(oldp+109,(vlSelfRef.cache_tb__DOT__cache__DOT__full));
    bufp->fullQData(oldp+110,((0x0000ffffffffffffULL 
                               & vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o)),48);
    bufp->fullIData(oldp+112,(vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o),32);
    bufp->fullBit(oldp+113,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_valid));
    bufp->fullSData(oldp+114,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr),16);
    bufp->fullIData(oldp+115,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_data_in),32);
    bufp->fullCData(oldp+116,(vlSelfRef.cache_tb__DOT__cache__DOT__M_op),2);
    bufp->fullBit(oldp+117,(vlSelfRef.cache_tb__DOT__cache__DOT__ready_out));
    bufp->fullBit(oldp+118,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_finished));
    bufp->fullIData(oldp+119,((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out)),32);
    bufp->fullCData(oldp+120,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state),4);
    bufp->fullQData(oldp+121,(vlSelfRef.cache_tb__DOT__cache__DOT__temp),64);
    bufp->fullBit(oldp+123,(vlSelfRef.cache_tb__DOT__cache__DOT__buff_write));
    bufp->fullWData(oldp+124,(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array),256);
    bufp->fullBit(oldp+132,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en));
    bufp->fullBit(oldp+133,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__write_en));
    bufp->fullQData(oldp+134,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out),64);
    bufp->fullBit(oldp+136,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__request));
    bufp->fullIData(oldp+137,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat),32);
    bufp->fullIData(oldp+138,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o),32);
    bufp->fullCData(oldp+139,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__delay),4);
    bufp->fullIData(oldp+140,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat),32);
    bufp->fullIData(oldp+141,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+142,(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+143,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [0U][0U]),16);
    bufp->fullSData(oldp+144,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [0U][1U]),16);
    bufp->fullSData(oldp+145,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [0U][2U]),16);
    bufp->fullSData(oldp+146,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [0U][3U]),16);
    bufp->fullSData(oldp+147,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [1U][0U]),16);
    bufp->fullSData(oldp+148,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [1U][1U]),16);
    bufp->fullSData(oldp+149,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [1U][2U]),16);
    bufp->fullSData(oldp+150,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                              [1U][3U]),16);
    bufp->fullCData(oldp+151,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [0U][0U]),4);
    bufp->fullCData(oldp+152,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [0U][1U]),4);
    bufp->fullCData(oldp+153,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [0U][2U]),4);
    bufp->fullCData(oldp+154,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [0U][3U]),4);
    bufp->fullCData(oldp+155,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [1U][0U]),4);
    bufp->fullCData(oldp+156,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [1U][1U]),4);
    bufp->fullCData(oldp+157,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [1U][2U]),4);
    bufp->fullCData(oldp+158,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [1U][3U]),4);
    bufp->fullCData(oldp+159,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                              [0U][0U]),6);
    bufp->fullCData(oldp+160,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                              [0U][1U]),6);
    bufp->fullCData(oldp+161,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                              [1U][0U]),6);
    bufp->fullCData(oldp+162,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                              [1U][1U]),6);
    bufp->fullCData(oldp+163,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre),2);
    bufp->fullBit(oldp+164,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs));
    bufp->fullCData(oldp+165,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q),5);
    bufp->fullCData(oldp+166,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag),2);
    bufp->fullCData(oldp+167,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way),2);
    bufp->fullBit(oldp+168,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set));
    bufp->fullBit(oldp+169,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag));
    bufp->fullCData(oldp+170,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag),2);
    bufp->fullCData(oldp+171,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim),2);
    bufp->fullCData(oldp+172,((3U & ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__requester)))),2);
    bufp->fullCData(oldp+173,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way),2);
    bufp->fullBit(oldp+174,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set));
    bufp->fullBit(oldp+175,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed));
    bufp->fullIData(oldp+176,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+177,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+178,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+179,(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk9__DOT__i),32);
    bufp->fullQData(oldp+180,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o),64);
    bufp->fullWData(oldp+182,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[0]),65);
    bufp->fullWData(oldp+185,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[1]),65);
    bufp->fullWData(oldp+188,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[2]),65);
    bufp->fullWData(oldp+191,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[3]),65);
    bufp->fullWData(oldp+194,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[4]),65);
    bufp->fullWData(oldp+197,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[5]),65);
    bufp->fullWData(oldp+200,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[6]),65);
    bufp->fullWData(oldp+203,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[7]),65);
    bufp->fullCData(oldp+206,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head),4);
    bufp->fullCData(oldp+207,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail),4);
    bufp->fullBit(oldp+208,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty));
    bufp->fullCData(oldp+209,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry),3);
    bufp->fullIData(oldp+210,(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+211,(vlSelfRef.cache_tb__DOT__clk));
    bufp->fullBit(oldp+212,(vlSelfRef.cache_tb__DOT__reset));
    bufp->fullIData(oldp+213,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->fullCData(oldp+214,(vlSelfRef.cache_tb__DOT__op),3);
    bufp->fullCData(oldp+215,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->fullIData(oldp+216,(((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                    ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                    : (0x000000ffU 
                                       & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
                                                  >> 
                                                  (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, 
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
                                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                    ? (0x0000ffffU 
                                       & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
                                                  >> 
                                                  (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, 
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_0))),32);
    bufp->fullBit(oldp+217,(vlSelfRef.cache_tb__DOT__start));
}
