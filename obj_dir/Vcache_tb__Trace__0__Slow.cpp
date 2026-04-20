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
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+240,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+226,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"opcode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+228,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_addresses", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+22,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+226,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+228,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"HIT_FOUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"mem_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+230,0,"cache_hit_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"cache_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"memory_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+56,0,"buffer_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+36,0,"write_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"hit_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+37,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+39,0,"pop_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rd_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"drain_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"pop_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 78,0);
    tracep->declBit(c+64,0,"pop_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"wb_buffer_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"found_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+67,0,"found_buffer_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+69,0,"drain_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"buffer_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"buffer_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+43,0,"push_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+24,0,"search_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declQuad(c+232,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("cache_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+226,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+228,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+65,0,"wb_buffer_found",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+37,0,"mem_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+36,0,"write_finished",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"memory_rq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"memory_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declArray(c+56,0,"mem_store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+230,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"hit_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"offset_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+240,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+28,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+71,0,"replace_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+244,0,"CACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"MAIN_MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"curr_state_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"next_state_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"MISS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"replace_way_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+49,0,"reset_search",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"search_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"search_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"replace_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+78,0,"set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->pushPrefix("cache_data_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+247,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+248,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+249,0,"offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"replace_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"hit_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+37,0,"cache_line_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+226,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+51,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+78,0,"set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+94,0,"data_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+234,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tag_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+246,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+247,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+248,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"LOOKUP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+51,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"reset_search",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"search_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"search_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"hit_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"replace_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"replace_way_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"replace_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+243,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+126,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+127,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+128,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+129,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+130,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+131,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+132,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+133,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+134,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+135,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+136,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+137,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+138,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+139,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+140,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+141,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+142,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+146,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+149,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+150,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+151,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+156,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LRU_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+159,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+160,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+161,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+162,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+163,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+164,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+165,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+166,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+167,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+168,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+76,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"lookup_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"current_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lookup_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+180,0,"empty_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+181,0,"empty_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"oldest_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"reset_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+185,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+253,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+40,0,"rd_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"drain_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"buffer_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 78,0);
    tracep->declBit(c+64,0,"pop_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"pop_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"curr_state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"ready_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+37,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+59,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+236,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+186,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+37,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"write_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+189,0,"mem_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"store_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+192,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"memory_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+254,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"POPPING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+256,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"MEM_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"addr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+189,0,"data_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+186,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"read_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"write_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+192,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"write_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+37,0,"data_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+258,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+194,0,"delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"address_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+195,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_buffer1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+253,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+43,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+42,0,"push_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"search_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+66,0,"merge_entry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"drain_rq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"found_entry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+67,0,"found_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"found",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"pop_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 78,0);
    tracep->declBit(c+64,0,"pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"buffer_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"NO_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"PUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"POP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"MERGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fifo_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+197+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 78,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+248,0,"POINTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+221,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+222,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+224,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+259,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"OP_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+261,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+262,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+263,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+264,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+265,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+266,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+267,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+268,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+269,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+272,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+274,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+277,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"ALU_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"ALU_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
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
    bufp->fullIData(oldp+237,(0x0000000eU),32);
    bufp->fullIData(oldp+238,(0x00000020U),32);
    bufp->fullIData(oldp+239,(2U),32);
    bufp->fullIData(oldp+240,(3U),32);
    bufp->fullIData(oldp+241,(1U),32);
    bufp->fullIData(oldp+242,(0x0000000aU),32);
    bufp->fullIData(oldp+243,(8U),32);
    bufp->fullIData(oldp+244,(0U),32);
    bufp->fullIData(oldp+245,(2U),32);
    bufp->fullIData(oldp+246,(0x0000000aU),32);
    bufp->fullIData(oldp+247,(1U),32);
    bufp->fullIData(oldp+248,(3U),32);
    bufp->fullCData(oldp+249,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset),3);
    bufp->fullIData(oldp+250,(4U),32);
    bufp->fullIData(oldp+251,(4U),32);
    bufp->fullIData(oldp+252,(8U),32);
    bufp->fullIData(oldp+253,(0x00000040U),32);
    bufp->fullBit(oldp+254,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address));
    bufp->fullBit(oldp+255,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i));
    bufp->fullIData(oldp+256,(0x01000000U),32);
    bufp->fullCData(oldp+257,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i),3);
    bufp->fullIData(oldp+258,(0x0009ca00U),32);
    bufp->fullIData(oldp+259,(0U),32);
    bufp->fullCData(oldp+260,(0x33U),7);
    bufp->fullCData(oldp+261,(0x13U),7);
    bufp->fullCData(oldp+262,(3U),7);
    bufp->fullCData(oldp+263,(0x23U),7);
    bufp->fullCData(oldp+264,(0x63U),7);
    bufp->fullCData(oldp+265,(0x67U),7);
    bufp->fullCData(oldp+266,(0x6fU),7);
    bufp->fullCData(oldp+267,(0x37U),7);
    bufp->fullCData(oldp+268,(0x17U),7);
    bufp->fullCData(oldp+269,(0U),4);
    bufp->fullCData(oldp+270,(1U),4);
    bufp->fullCData(oldp+271,(2U),4);
    bufp->fullCData(oldp+272,(3U),4);
    bufp->fullCData(oldp+273,(4U),4);
    bufp->fullCData(oldp+274,(5U),4);
    bufp->fullCData(oldp+275,(6U),4);
    bufp->fullCData(oldp+276,(7U),4);
    bufp->fullCData(oldp+277,(8U),4);
    bufp->fullCData(oldp+278,(9U),4);
    bufp->fullCData(oldp+279,(0x0aU),4);
    bufp->fullCData(oldp+280,(0x0fU),4);
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
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i),32);
    bufp->fullIData(oldp+2,((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i 
                             - (IData)(0x01000000U))),32);
    bufp->fullBit(oldp+3,(vlSelfRef.cache_tb__DOT__reset));
    bufp->fullIData(oldp+4,(vlSelfRef.cache_tb__DOT__test_addresses[0]),22);
    bufp->fullIData(oldp+5,(vlSelfRef.cache_tb__DOT__test_addresses[1]),22);
    bufp->fullIData(oldp+6,(vlSelfRef.cache_tb__DOT__test_addresses[2]),22);
    bufp->fullIData(oldp+7,(vlSelfRef.cache_tb__DOT__test_addresses[3]),22);
    bufp->fullIData(oldp+8,(vlSelfRef.cache_tb__DOT__test_addresses[4]),22);
    bufp->fullIData(oldp+9,(vlSelfRef.cache_tb__DOT__test_addresses[5]),22);
    bufp->fullIData(oldp+10,(vlSelfRef.cache_tb__DOT__test_addresses[6]),22);
    bufp->fullIData(oldp+11,(vlSelfRef.cache_tb__DOT__test_addresses[7]),22);
    bufp->fullIData(oldp+12,(vlSelfRef.cache_tb__DOT__test_addresses[8]),22);
    bufp->fullIData(oldp+13,(vlSelfRef.cache_tb__DOT__test_addresses[9]),22);
    bufp->fullIData(oldp+14,(vlSelfRef.cache_tb__DOT__test_addresses[10]),22);
    bufp->fullIData(oldp+15,(vlSelfRef.cache_tb__DOT__test_addresses[11]),22);
    bufp->fullIData(oldp+16,(vlSelfRef.cache_tb__DOT__test_addresses[12]),22);
    bufp->fullIData(oldp+17,(vlSelfRef.cache_tb__DOT__test_addresses[13]),22);
    bufp->fullIData(oldp+18,(vlSelfRef.cache_tb__DOT__test_addresses[14]),22);
    bufp->fullIData(oldp+19,(vlSelfRef.cache_tb__DOT__test_addresses[15]),22);
    bufp->fullIData(oldp+20,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i),32);
    bufp->fullSData(oldp+21,(vlSelfRef.cache_tb__DOT__addr),14);
    bufp->fullIData(oldp+22,(vlSelfRef.cache_tb__DOT__i),32);
    bufp->fullCData(oldp+23,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
    bufp->fullSData(oldp+24,((0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr))),14);
    bufp->fullBit(oldp+25,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))));
    bufp->fullCData(oldp+26,((7U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                  >> 3U))));
    bufp->fullSData(oldp+28,((0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                             >> 4U))),10);
    bufp->fullCData(oldp+29,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                             [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                     >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way]),2);
    bufp->fullIData(oldp+30,(vlSelfRef.cache_tb__DOT__data_out),32);
    bufp->fullBit(oldp+31,(vlSelfRef.cache_tb__DOT__stall));
    bufp->fullBit(oldp+32,(vlSelfRef.cache_tb__DOT__data_valid));
    bufp->fullSData(oldp+33,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr),14);
    bufp->fullBit(oldp+34,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid));
    bufp->fullCData(oldp+35,(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq),2);
    bufp->fullBit(oldp+36,(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished));
    bufp->fullQData(oldp+37,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out),64);
    bufp->fullBit(oldp+39,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en));
    bufp->fullBit(oldp+40,(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq));
    bufp->fullBit(oldp+41,(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req));
    bufp->fullCData(oldp+42,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl),2);
    bufp->fullWData(oldp+43,(vlSelfRef.cache_tb__DOT__cache__DOT__push_data),78);
    bufp->fullBit(oldp+46,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state));
    bufp->fullBit(oldp+47,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem));
    bufp->fullBit(oldp+48,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle));
    bufp->fullBit(oldp+49,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search));
    bufp->fullBit(oldp+50,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en));
    bufp->fullBit(oldp+51,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en));
    bufp->fullBit(oldp+52,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en));
    bufp->fullSData(oldp+53,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address),14);
    bufp->fullIData(oldp+54,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat),32);
    bufp->fullIData(oldp+55,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat),32);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                              (((IData)(0x0000003fU) 
                                                + (0x000001ffU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(7U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U))) 
                                               >> 5U)])) 
                              << ((0U == (0x0000001fU 
                                          & VL_SHIFTL_III(9,9,32, 
                                                          ((IData)(7U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way)), 6U)))
                                   ? 0x00000020U : 
                                  ((IData)(0x00000040U) 
                                   - (0x0000001fU & 
                                      VL_SHIFTL_III(9,9,32, 
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
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
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
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
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
                                    ? 0x00000020U : 
                                   ((IData)(0x00000040U) 
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
                                             << ((IData)(0x00000020U) 
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
    bufp->fullWData(oldp+56,(__Vtemp_1),78);
    bufp->fullCData(oldp+59,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state),2);
    bufp->fullBit(oldp+60,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready));
    bufp->fullWData(oldp+61,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_data),79);
    bufp->fullBit(oldp+64,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid));
    bufp->fullBit(oldp+65,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found));
    bufp->fullCData(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__found_entry),4);
    bufp->fullQData(oldp+67,(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data),64);
    bufp->fullBit(oldp+69,((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))));
    bufp->fullBit(oldp+70,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full));
    bufp->fullSData(oldp+71,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address),14);
    bufp->fullBit(oldp+72,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
    bufp->fullBit(oldp+73,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
    bufp->fullBit(oldp+74,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit));
    bufp->fullCData(oldp+75,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way),3);
    bufp->fullCData(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way),3);
    bufp->fullBit(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done));
    bufp->fullWData(oldp+78,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o),512);
    bufp->fullWData(oldp+94,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array),1024);
    bufp->fullSData(oldp+126,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][0U]),10);
    bufp->fullSData(oldp+127,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][1U]),10);
    bufp->fullSData(oldp+128,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][2U]),10);
    bufp->fullSData(oldp+129,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][3U]),10);
    bufp->fullSData(oldp+130,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][4U]),10);
    bufp->fullSData(oldp+131,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][5U]),10);
    bufp->fullSData(oldp+132,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][6U]),10);
    bufp->fullSData(oldp+133,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][7U]),10);
    bufp->fullSData(oldp+134,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][0U]),10);
    bufp->fullSData(oldp+135,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][1U]),10);
    bufp->fullSData(oldp+136,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][2U]),10);
    bufp->fullSData(oldp+137,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][3U]),10);
    bufp->fullSData(oldp+138,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][4U]),10);
    bufp->fullSData(oldp+139,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][5U]),10);
    bufp->fullSData(oldp+140,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][6U]),10);
    bufp->fullSData(oldp+141,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][7U]),10);
    bufp->fullCData(oldp+142,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][0U]),2);
    bufp->fullCData(oldp+143,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][1U]),2);
    bufp->fullCData(oldp+144,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][2U]),2);
    bufp->fullCData(oldp+145,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][3U]),2);
    bufp->fullCData(oldp+146,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][4U]),2);
    bufp->fullCData(oldp+147,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][5U]),2);
    bufp->fullCData(oldp+148,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][6U]),2);
    bufp->fullCData(oldp+149,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][7U]),2);
    bufp->fullCData(oldp+150,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][0U]),2);
    bufp->fullCData(oldp+151,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][1U]),2);
    bufp->fullCData(oldp+152,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][2U]),2);
    bufp->fullCData(oldp+153,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][3U]),2);
    bufp->fullCData(oldp+154,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][4U]),2);
    bufp->fullCData(oldp+155,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][5U]),2);
    bufp->fullCData(oldp+156,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][6U]),2);
    bufp->fullCData(oldp+157,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][7U]),2);
    bufp->fullCData(oldp+158,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][0U]),3);
    bufp->fullCData(oldp+159,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][1U]),3);
    bufp->fullCData(oldp+160,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][2U]),3);
    bufp->fullCData(oldp+161,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][3U]),3);
    bufp->fullCData(oldp+162,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][4U]),3);
    bufp->fullCData(oldp+163,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][5U]),3);
    bufp->fullCData(oldp+164,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][6U]),3);
    bufp->fullCData(oldp+165,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [0U][7U]),3);
    bufp->fullCData(oldp+166,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][0U]),3);
    bufp->fullCData(oldp+167,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][1U]),3);
    bufp->fullCData(oldp+168,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][2U]),3);
    bufp->fullCData(oldp+169,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][3U]),3);
    bufp->fullCData(oldp+170,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][4U]),3);
    bufp->fullCData(oldp+171,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][5U]),3);
    bufp->fullCData(oldp+172,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][6U]),3);
    bufp->fullCData(oldp+173,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                              [1U][7U]),3);
    bufp->fullCData(oldp+174,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way),3);
    bufp->fullBit(oldp+175,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx));
    bufp->fullSData(oldp+176,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[0]),10);
    bufp->fullSData(oldp+177,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[1]),10);
    bufp->fullSData(oldp+178,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[2]),10);
    bufp->fullSData(oldp+179,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[3]),10);
    bufp->fullCData(oldp+180,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way),3);
    bufp->fullBit(oldp+181,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found));
    bufp->fullCData(oldp+182,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way),3);
    bufp->fullIData(oldp+183,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+184,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+185,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+186,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en));
    bufp->fullBit(oldp+187,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en));
    bufp->fullBit(oldp+188,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished));
    bufp->fullQData(oldp+189,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store),64);
    bufp->fullSData(oldp+191,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address),14);
    bufp->fullBit(oldp+192,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request));
    bufp->fullIData(oldp+193,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o),32);
    bufp->fullCData(oldp+194,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay),4);
    bufp->fullIData(oldp+195,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+196,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullWData(oldp+197,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0]),79);
    bufp->fullWData(oldp+200,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1]),79);
    bufp->fullWData(oldp+203,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2]),79);
    bufp->fullWData(oldp+206,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3]),79);
    bufp->fullWData(oldp+209,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4]),79);
    bufp->fullWData(oldp+212,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5]),79);
    bufp->fullWData(oldp+215,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6]),79);
    bufp->fullWData(oldp+218,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7]),79);
    bufp->fullCData(oldp+221,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head),4);
    bufp->fullCData(oldp+222,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail),4);
    bufp->fullBit(oldp+223,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty));
    bufp->fullIData(oldp+224,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+225,(vlSelfRef.cache_tb__DOT__clk));
    bufp->fullIData(oldp+226,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->fullCData(oldp+227,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->fullCData(oldp+228,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->fullBit(oldp+229,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op));
    bufp->fullIData(oldp+230,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out),32);
    bufp->fullBit(oldp+231,(((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit) 
                             & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))));
    bufp->fullQData(oldp+232,(vlSelfRef.cache_tb__DOT__cache__DOT__temp),64);
    bufp->fullQData(oldp+234,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp),64);
    bufp->fullCData(oldp+236,(((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
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
