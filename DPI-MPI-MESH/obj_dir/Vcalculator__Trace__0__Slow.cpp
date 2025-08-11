// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalculator__Syms.h"


VL_ATTR_COLD void Vcalculator___024root__trace_init_sub__TOP__0(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_init_sub__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+732,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+734,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+736,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+737,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+739,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("calculator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+732,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+734,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+736,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+737,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+739,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("int_con", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+732,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+734,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+736,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+737,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+739,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+62+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+80+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+98+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+116+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+134+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+161+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+170+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+188+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+206+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+215+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+224+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+242+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+260+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+269+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+278+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+296+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+314+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+323+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_out_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+332+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_out_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+350+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_a_wires", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_b_wires", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+19+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_ctrl_wires", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_valid_wires", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declQuad(c+55,0,"host_in_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+57,0,"host_in_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+59,0,"host_in_ctrl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+60,0,"host_in_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+359,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+361,0,"valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"any",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("t0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+740,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+740,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+741,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+367,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+368,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+369,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+373,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+374,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+375,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+377,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+379,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+380,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+381,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+383,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+385,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+386,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+387,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+389,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+391,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+392,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+393,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+395,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+397,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+398,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+399,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+401,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+745,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+740,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+741,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+402,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+404,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+406,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+407,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+413,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+414,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+418,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+419,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+420,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+422,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+424,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+425,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+426,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+428,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+430,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+431,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+432,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+434,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+436,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+437,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+438,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+442,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+443,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+444,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+446,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+746,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+740,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+741,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+447,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+449,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+451,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+452,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+367,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+368,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+453,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+455,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+457,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+458,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+459,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+461,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+463,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+464,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+465,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+467,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+469,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+470,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+471,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+473,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+475,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+476,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+477,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+479,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+740,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+745,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+414,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+418,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+419,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+413,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+480,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+482,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+484,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+485,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+486,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+488,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+490,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+491,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+492,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+494,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+496,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+497,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+498,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+500,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+502,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+503,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+504,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+506,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+508,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+509,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+510,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+512,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+745,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+745,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+363,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+367,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+368,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+447,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+449,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+451,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+452,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+513,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+515,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+517,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+518,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+369,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+373,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+374,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+519,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+521,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+523,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+524,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+525,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+527,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+529,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+530,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+531,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+533,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+535,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+536,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+537,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+539,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+541,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+542,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+543,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+545,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+746,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+745,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+402,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+404,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+406,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+407,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+546,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+548,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+550,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+551,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+413,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+552,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+554,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+556,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+557,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+558,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+560,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+562,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+563,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+564,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+566,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+568,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+569,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+570,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+572,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+574,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+575,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+576,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+578,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+740,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+746,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+369,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+373,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+374,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+513,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+515,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+517,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+518,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+579,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+581,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+583,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+584,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+585,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+587,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+589,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+590,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+591,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+593,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+595,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+596,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+597,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+599,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+601,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+602,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+603,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+605,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+745,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+746,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+408,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+413,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+546,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+548,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+550,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+551,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+480,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+482,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+484,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+485,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+606,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+608,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+610,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+611,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+612,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+614,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+616,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+617,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+618,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+620,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+622,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+623,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+624,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+626,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+628,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+629,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+630,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+632,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("t2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+746,0,"TILE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+746,0,"TILE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+447,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+449,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+451,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+452,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+513,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+515,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+517,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+518,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+741,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+743,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+744,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+633,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+635,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+637,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+638,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+639,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+641,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+643,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+644,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+645,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+647,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+649,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+650,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+651,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+653,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+655,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+656,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+657,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+659,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+660,0,"idx_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+661,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+747,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("tmp_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+662+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tmp_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+680+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tmp_ctrl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+698+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tmp_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+707+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+716,0,"some",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+717,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+718,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+719,0,"dx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+720,0,"dy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+721,0,"md",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+722,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+723,0,"ty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+724,0,"nidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+725,0,"nidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+726,0,"local_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+728,0,"nidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+729,0,"nidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+730,0,"nidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+731,0,"nidx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcalculator___024root__trace_init_top(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_init_top\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcalculator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcalculator___024root__trace_register(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_register\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcalculator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcalculator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcalculator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcalculator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalculator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_const_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalculator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_const_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+740,(0U),32);
    bufp->fullQData(oldp+741,(0ULL),64);
    bufp->fullSData(oldp+743,(0U),16);
    bufp->fullBit(oldp+744,(0U));
    bufp->fullIData(oldp+745,(1U),32);
    bufp->fullIData(oldp+746,(2U),32);
    bufp->fullIData(oldp+747,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__j),32);
}

VL_ATTR_COLD void Vcalculator___024root__trace_full_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalculator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_full_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalculator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalculator___024root__trace_full_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_full_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[0]),64);
    bufp->fullQData(oldp+3,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[1]),64);
    bufp->fullQData(oldp+5,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[2]),64);
    bufp->fullQData(oldp+7,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[3]),64);
    bufp->fullQData(oldp+9,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[4]),64);
    bufp->fullQData(oldp+11,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[5]),64);
    bufp->fullQData(oldp+13,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[6]),64);
    bufp->fullQData(oldp+15,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[7]),64);
    bufp->fullQData(oldp+17,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_wires[8]),64);
    bufp->fullQData(oldp+19,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[0]),64);
    bufp->fullQData(oldp+21,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[1]),64);
    bufp->fullQData(oldp+23,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[2]),64);
    bufp->fullQData(oldp+25,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[3]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[4]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[5]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[6]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[7]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_wires[8]),64);
    bufp->fullSData(oldp+37,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[0]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[1]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[2]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[3]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[4]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[5]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[6]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[7]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_wires[8]),16);
    bufp->fullBit(oldp+46,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[0]));
    bufp->fullBit(oldp+47,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[1]));
    bufp->fullBit(oldp+48,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[2]));
    bufp->fullBit(oldp+49,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[3]));
    bufp->fullBit(oldp+50,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[4]));
    bufp->fullBit(oldp+51,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[5]));
    bufp->fullBit(oldp+52,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[6]));
    bufp->fullBit(oldp+53,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[7]));
    bufp->fullBit(oldp+54,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_wires[8]));
    bufp->fullQData(oldp+55,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_reg),64);
    bufp->fullQData(oldp+57,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_reg),64);
    bufp->fullSData(oldp+59,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_reg),16);
    bufp->fullBit(oldp+60,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_reg));
    bufp->fullIData(oldp+61,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk1__DOT__k),32);
    bufp->fullQData(oldp+62,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[0]),64);
    bufp->fullQData(oldp+64,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[1]),64);
    bufp->fullQData(oldp+66,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[2]),64);
    bufp->fullQData(oldp+68,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[3]),64);
    bufp->fullQData(oldp+70,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[4]),64);
    bufp->fullQData(oldp+72,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[5]),64);
    bufp->fullQData(oldp+74,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[6]),64);
    bufp->fullQData(oldp+76,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[7]),64);
    bufp->fullQData(oldp+78,(vlSelfRef.calculator__DOT__int_con__DOT__in_a[8]),64);
    bufp->fullQData(oldp+80,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[0]),64);
    bufp->fullQData(oldp+82,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[1]),64);
    bufp->fullQData(oldp+84,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[2]),64);
    bufp->fullQData(oldp+86,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[3]),64);
    bufp->fullQData(oldp+88,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[4]),64);
    bufp->fullQData(oldp+90,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[5]),64);
    bufp->fullQData(oldp+92,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[6]),64);
    bufp->fullQData(oldp+94,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[7]),64);
    bufp->fullQData(oldp+96,(vlSelfRef.calculator__DOT__int_con__DOT__in_b[8]),64);
    bufp->fullSData(oldp+98,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[0]),16);
    bufp->fullSData(oldp+99,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[1]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[2]),16);
    bufp->fullSData(oldp+101,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[3]),16);
    bufp->fullSData(oldp+102,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[4]),16);
    bufp->fullSData(oldp+103,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[5]),16);
    bufp->fullSData(oldp+104,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[6]),16);
    bufp->fullSData(oldp+105,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[7]),16);
    bufp->fullSData(oldp+106,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[8]),16);
    bufp->fullBit(oldp+107,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[0]));
    bufp->fullBit(oldp+108,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[1]));
    bufp->fullBit(oldp+109,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[2]));
    bufp->fullBit(oldp+110,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[3]));
    bufp->fullBit(oldp+111,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[4]));
    bufp->fullBit(oldp+112,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[5]));
    bufp->fullBit(oldp+113,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[6]));
    bufp->fullBit(oldp+114,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[7]));
    bufp->fullBit(oldp+115,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid[8]));
    bufp->fullQData(oldp+116,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[0]),64);
    bufp->fullQData(oldp+118,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[1]),64);
    bufp->fullQData(oldp+120,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[2]),64);
    bufp->fullQData(oldp+122,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[3]),64);
    bufp->fullQData(oldp+124,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[4]),64);
    bufp->fullQData(oldp+126,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[5]),64);
    bufp->fullQData(oldp+128,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[6]),64);
    bufp->fullQData(oldp+130,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[7]),64);
    bufp->fullQData(oldp+132,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8]),64);
    bufp->fullQData(oldp+134,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[0]),64);
    bufp->fullQData(oldp+136,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[1]),64);
    bufp->fullQData(oldp+138,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[2]),64);
    bufp->fullQData(oldp+140,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[3]),64);
    bufp->fullQData(oldp+142,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[4]),64);
    bufp->fullQData(oldp+144,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[5]),64);
    bufp->fullQData(oldp+146,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[6]),64);
    bufp->fullQData(oldp+148,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[7]),64);
    bufp->fullQData(oldp+150,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[8]),64);
    bufp->fullSData(oldp+152,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[0]),16);
    bufp->fullSData(oldp+153,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[1]),16);
    bufp->fullSData(oldp+154,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[2]),16);
    bufp->fullSData(oldp+155,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[3]),16);
    bufp->fullSData(oldp+156,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[4]),16);
    bufp->fullSData(oldp+157,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[5]),16);
    bufp->fullSData(oldp+158,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[6]),16);
    bufp->fullSData(oldp+159,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[7]),16);
    bufp->fullSData(oldp+160,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[8]),16);
    bufp->fullBit(oldp+161,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[0]));
    bufp->fullBit(oldp+162,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[1]));
    bufp->fullBit(oldp+163,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[2]));
    bufp->fullBit(oldp+164,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[3]));
    bufp->fullBit(oldp+165,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[4]));
    bufp->fullBit(oldp+166,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[5]));
    bufp->fullBit(oldp+167,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[6]));
    bufp->fullBit(oldp+168,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[7]));
    bufp->fullBit(oldp+169,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[8]));
    bufp->fullQData(oldp+170,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[0]),64);
    bufp->fullQData(oldp+172,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[1]),64);
    bufp->fullQData(oldp+174,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[2]),64);
    bufp->fullQData(oldp+176,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[3]),64);
    bufp->fullQData(oldp+178,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[4]),64);
    bufp->fullQData(oldp+180,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[5]),64);
    bufp->fullQData(oldp+182,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[6]),64);
    bufp->fullQData(oldp+184,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[7]),64);
    bufp->fullQData(oldp+186,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[8]),64);
    bufp->fullQData(oldp+188,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0]),64);
    bufp->fullQData(oldp+190,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[1]),64);
    bufp->fullQData(oldp+192,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[2]),64);
    bufp->fullQData(oldp+194,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[3]),64);
    bufp->fullQData(oldp+196,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[4]),64);
    bufp->fullQData(oldp+198,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[5]),64);
    bufp->fullQData(oldp+200,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[6]),64);
    bufp->fullQData(oldp+202,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[7]),64);
    bufp->fullQData(oldp+204,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[8]),64);
    bufp->fullSData(oldp+206,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[1]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[2]),16);
    bufp->fullSData(oldp+209,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[3]),16);
    bufp->fullSData(oldp+210,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[4]),16);
    bufp->fullSData(oldp+211,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[5]),16);
    bufp->fullSData(oldp+212,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[6]),16);
    bufp->fullSData(oldp+213,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[7]),16);
    bufp->fullSData(oldp+214,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[8]),16);
    bufp->fullBit(oldp+215,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0]));
    bufp->fullBit(oldp+216,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[1]));
    bufp->fullBit(oldp+217,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[2]));
    bufp->fullBit(oldp+218,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[3]));
    bufp->fullBit(oldp+219,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[4]));
    bufp->fullBit(oldp+220,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[5]));
    bufp->fullBit(oldp+221,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[6]));
    bufp->fullBit(oldp+222,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[7]));
    bufp->fullBit(oldp+223,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[8]));
    bufp->fullQData(oldp+224,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0]),64);
    bufp->fullQData(oldp+226,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[1]),64);
    bufp->fullQData(oldp+228,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[2]),64);
    bufp->fullQData(oldp+230,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[3]),64);
    bufp->fullQData(oldp+232,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[4]),64);
    bufp->fullQData(oldp+234,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[5]),64);
    bufp->fullQData(oldp+236,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[6]),64);
    bufp->fullQData(oldp+238,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[7]),64);
    bufp->fullQData(oldp+240,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[8]),64);
    bufp->fullQData(oldp+242,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0]),64);
    bufp->fullQData(oldp+244,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[1]),64);
    bufp->fullQData(oldp+246,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[2]),64);
    bufp->fullQData(oldp+248,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[3]),64);
    bufp->fullQData(oldp+250,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[4]),64);
    bufp->fullQData(oldp+252,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[5]),64);
    bufp->fullQData(oldp+254,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[6]),64);
    bufp->fullQData(oldp+256,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[7]),64);
    bufp->fullQData(oldp+258,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[8]),64);
    bufp->fullSData(oldp+260,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0]),16);
    bufp->fullSData(oldp+261,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[1]),16);
    bufp->fullSData(oldp+262,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[2]),16);
    bufp->fullSData(oldp+263,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[3]),16);
    bufp->fullSData(oldp+264,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[4]),16);
    bufp->fullSData(oldp+265,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[5]),16);
    bufp->fullSData(oldp+266,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[6]),16);
    bufp->fullSData(oldp+267,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[7]),16);
    bufp->fullSData(oldp+268,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[8]),16);
    bufp->fullBit(oldp+269,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0]));
    bufp->fullBit(oldp+270,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[1]));
    bufp->fullBit(oldp+271,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[2]));
    bufp->fullBit(oldp+272,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[3]));
    bufp->fullBit(oldp+273,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[4]));
    bufp->fullBit(oldp+274,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[5]));
    bufp->fullBit(oldp+275,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[6]));
    bufp->fullBit(oldp+276,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[7]));
    bufp->fullBit(oldp+277,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[8]));
    bufp->fullQData(oldp+278,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[0]),64);
    bufp->fullQData(oldp+280,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[1]),64);
    bufp->fullQData(oldp+282,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[2]),64);
    bufp->fullQData(oldp+284,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[3]),64);
    bufp->fullQData(oldp+286,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[4]),64);
    bufp->fullQData(oldp+288,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[5]),64);
    bufp->fullQData(oldp+290,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[6]),64);
    bufp->fullQData(oldp+292,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[7]),64);
    bufp->fullQData(oldp+294,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[8]),64);
    bufp->fullQData(oldp+296,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[0]),64);
    bufp->fullQData(oldp+298,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[1]),64);
    bufp->fullQData(oldp+300,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[2]),64);
    bufp->fullQData(oldp+302,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[3]),64);
    bufp->fullQData(oldp+304,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[4]),64);
    bufp->fullQData(oldp+306,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[5]),64);
    bufp->fullQData(oldp+308,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[6]),64);
    bufp->fullQData(oldp+310,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[7]),64);
    bufp->fullQData(oldp+312,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[8]),64);
    bufp->fullSData(oldp+314,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[0]),16);
    bufp->fullSData(oldp+315,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[1]),16);
    bufp->fullSData(oldp+316,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[2]),16);
    bufp->fullSData(oldp+317,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[3]),16);
    bufp->fullSData(oldp+318,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[4]),16);
    bufp->fullSData(oldp+319,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[5]),16);
    bufp->fullSData(oldp+320,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[6]),16);
    bufp->fullSData(oldp+321,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[7]),16);
    bufp->fullSData(oldp+322,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[8]),16);
    bufp->fullBit(oldp+323,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[0]));
    bufp->fullBit(oldp+324,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[1]));
    bufp->fullBit(oldp+325,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[2]));
    bufp->fullBit(oldp+326,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[3]));
    bufp->fullBit(oldp+327,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[4]));
    bufp->fullBit(oldp+328,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[5]));
    bufp->fullBit(oldp+329,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[6]));
    bufp->fullBit(oldp+330,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[7]));
    bufp->fullBit(oldp+331,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[8]));
    bufp->fullQData(oldp+332,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[0]),64);
    bufp->fullQData(oldp+334,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[1]),64);
    bufp->fullQData(oldp+336,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[2]),64);
    bufp->fullQData(oldp+338,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[3]),64);
    bufp->fullQData(oldp+340,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[4]),64);
    bufp->fullQData(oldp+342,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[5]),64);
    bufp->fullQData(oldp+344,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[6]),64);
    bufp->fullQData(oldp+346,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[7]),64);
    bufp->fullQData(oldp+348,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[8]),64);
    bufp->fullBit(oldp+350,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0]));
    bufp->fullBit(oldp+351,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[1]));
    bufp->fullBit(oldp+352,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[2]));
    bufp->fullBit(oldp+353,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[3]));
    bufp->fullBit(oldp+354,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[4]));
    bufp->fullBit(oldp+355,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[5]));
    bufp->fullBit(oldp+356,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[6]));
    bufp->fullBit(oldp+357,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[7]));
    bufp->fullBit(oldp+358,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[8]));
    bufp->fullQData(oldp+359,(vlSelfRef.calculator__DOT__int_con__DOT__result_r),64);
    bufp->fullBit(oldp+361,(vlSelfRef.calculator__DOT__int_con__DOT__valid_r));
    bufp->fullIData(oldp+362,(vlSelfRef.calculator__DOT__int_con__DOT__any),32);
    bufp->fullQData(oldp+363,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [1U]),64);
    bufp->fullQData(oldp+365,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [1U]),64);
    bufp->fullSData(oldp+367,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [1U]),16);
    bufp->fullBit(oldp+368,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [1U]));
    bufp->fullQData(oldp+369,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [3U]),64);
    bufp->fullQData(oldp+371,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [3U]),64);
    bufp->fullSData(oldp+373,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [3U]),16);
    bufp->fullBit(oldp+374,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [3U]));
    bufp->fullQData(oldp+375,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_n),64);
    bufp->fullQData(oldp+377,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_n),64);
    bufp->fullSData(oldp+379,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_n),16);
    bufp->fullBit(oldp+380,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_n));
    bufp->fullQData(oldp+381,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e),64);
    bufp->fullQData(oldp+383,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e),64);
    bufp->fullSData(oldp+385,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e),16);
    bufp->fullBit(oldp+386,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e));
    bufp->fullQData(oldp+387,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s),64);
    bufp->fullQData(oldp+389,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s),64);
    bufp->fullSData(oldp+391,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s),16);
    bufp->fullBit(oldp+392,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s));
    bufp->fullQData(oldp+393,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_w),64);
    bufp->fullQData(oldp+395,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_w),64);
    bufp->fullSData(oldp+397,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_w),16);
    bufp->fullBit(oldp+398,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_w));
    bufp->fullQData(oldp+399,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a),64);
    bufp->fullBit(oldp+401,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid));
    bufp->fullQData(oldp+402,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [2U]),64);
    bufp->fullQData(oldp+404,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [2U]),64);
    bufp->fullSData(oldp+406,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [2U]),16);
    bufp->fullBit(oldp+407,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [2U]));
    bufp->fullQData(oldp+408,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [4U]),64);
    bufp->fullQData(oldp+410,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [4U]),64);
    bufp->fullSData(oldp+412,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [4U]),16);
    bufp->fullBit(oldp+413,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [4U]));
    bufp->fullQData(oldp+414,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [0U]),64);
    bufp->fullQData(oldp+416,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [0U]),64);
    bufp->fullSData(oldp+418,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [0U]),16);
    bufp->fullBit(oldp+419,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [0U]));
    bufp->fullQData(oldp+420,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_n),64);
    bufp->fullQData(oldp+422,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_n),64);
    bufp->fullSData(oldp+424,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_n),16);
    bufp->fullBit(oldp+425,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_n));
    bufp->fullQData(oldp+426,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e),64);
    bufp->fullQData(oldp+428,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e),64);
    bufp->fullSData(oldp+430,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e),16);
    bufp->fullBit(oldp+431,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e));
    bufp->fullQData(oldp+432,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s),64);
    bufp->fullQData(oldp+434,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s),64);
    bufp->fullSData(oldp+436,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s),16);
    bufp->fullBit(oldp+437,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s));
    bufp->fullQData(oldp+438,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w),64);
    bufp->fullQData(oldp+440,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w),64);
    bufp->fullSData(oldp+442,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w),16);
    bufp->fullBit(oldp+443,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w));
    bufp->fullQData(oldp+444,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__host_out_a),64);
    bufp->fullBit(oldp+446,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__host_out_valid));
    bufp->fullQData(oldp+447,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [5U]),64);
    bufp->fullQData(oldp+449,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [5U]),64);
    bufp->fullSData(oldp+451,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [5U]),16);
    bufp->fullBit(oldp+452,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [5U]));
    bufp->fullQData(oldp+453,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_n),64);
    bufp->fullQData(oldp+455,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_n),64);
    bufp->fullSData(oldp+457,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_n),16);
    bufp->fullBit(oldp+458,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_n));
    bufp->fullQData(oldp+459,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e),64);
    bufp->fullQData(oldp+461,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e),64);
    bufp->fullSData(oldp+463,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e),16);
    bufp->fullBit(oldp+464,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e));
    bufp->fullQData(oldp+465,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s),64);
    bufp->fullQData(oldp+467,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s),64);
    bufp->fullSData(oldp+469,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s),16);
    bufp->fullBit(oldp+470,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s));
    bufp->fullQData(oldp+471,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w),64);
    bufp->fullQData(oldp+473,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w),64);
    bufp->fullSData(oldp+475,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w),16);
    bufp->fullBit(oldp+476,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w));
    bufp->fullQData(oldp+477,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__host_out_a),64);
    bufp->fullBit(oldp+479,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__host_out_valid));
    bufp->fullQData(oldp+480,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [6U]),64);
    bufp->fullQData(oldp+482,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [6U]),64);
    bufp->fullSData(oldp+484,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [6U]),16);
    bufp->fullBit(oldp+485,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [6U]));
    bufp->fullQData(oldp+486,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n),64);
    bufp->fullQData(oldp+488,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n),64);
    bufp->fullSData(oldp+490,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n),16);
    bufp->fullBit(oldp+491,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n));
    bufp->fullQData(oldp+492,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e),64);
    bufp->fullQData(oldp+494,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e),64);
    bufp->fullSData(oldp+496,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e),16);
    bufp->fullBit(oldp+497,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e));
    bufp->fullQData(oldp+498,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s),64);
    bufp->fullQData(oldp+500,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s),64);
    bufp->fullSData(oldp+502,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s),16);
    bufp->fullBit(oldp+503,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s));
    bufp->fullQData(oldp+504,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_w),64);
    bufp->fullQData(oldp+506,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_w),64);
    bufp->fullSData(oldp+508,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_w),16);
    bufp->fullBit(oldp+509,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_w));
    bufp->fullQData(oldp+510,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__host_out_a),64);
    bufp->fullBit(oldp+512,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__host_out_valid));
    bufp->fullQData(oldp+513,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [7U]),64);
    bufp->fullQData(oldp+515,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [7U]),64);
    bufp->fullSData(oldp+517,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [7U]),16);
    bufp->fullBit(oldp+518,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [7U]));
    bufp->fullQData(oldp+519,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n),64);
    bufp->fullQData(oldp+521,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n),64);
    bufp->fullSData(oldp+523,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n),16);
    bufp->fullBit(oldp+524,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n));
    bufp->fullQData(oldp+525,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e),64);
    bufp->fullQData(oldp+527,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e),64);
    bufp->fullSData(oldp+529,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e),16);
    bufp->fullBit(oldp+530,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e));
    bufp->fullQData(oldp+531,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s),64);
    bufp->fullQData(oldp+533,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s),64);
    bufp->fullSData(oldp+535,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s),16);
    bufp->fullBit(oldp+536,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s));
    bufp->fullQData(oldp+537,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w),64);
    bufp->fullQData(oldp+539,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w),64);
    bufp->fullSData(oldp+541,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w),16);
    bufp->fullBit(oldp+542,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w));
    bufp->fullQData(oldp+543,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__host_out_a),64);
    bufp->fullBit(oldp+545,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__host_out_valid));
    bufp->fullQData(oldp+546,(vlSelfRef.calculator__DOT__int_con__DOT__in_a
                              [8U]),64);
    bufp->fullQData(oldp+548,(vlSelfRef.calculator__DOT__int_con__DOT__in_b
                              [8U]),64);
    bufp->fullSData(oldp+550,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                              [8U]),16);
    bufp->fullBit(oldp+551,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                            [8U]));
    bufp->fullQData(oldp+552,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n),64);
    bufp->fullQData(oldp+554,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n),64);
    bufp->fullSData(oldp+556,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n),16);
    bufp->fullBit(oldp+557,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n));
    bufp->fullQData(oldp+558,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e),64);
    bufp->fullQData(oldp+560,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e),64);
    bufp->fullSData(oldp+562,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e),16);
    bufp->fullBit(oldp+563,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e));
    bufp->fullQData(oldp+564,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s),64);
    bufp->fullQData(oldp+566,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s),64);
    bufp->fullSData(oldp+568,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s),16);
    bufp->fullBit(oldp+569,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s));
    bufp->fullQData(oldp+570,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w),64);
    bufp->fullQData(oldp+572,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w),64);
    bufp->fullSData(oldp+574,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w),16);
    bufp->fullBit(oldp+575,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w));
    bufp->fullQData(oldp+576,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__host_out_a),64);
    bufp->fullBit(oldp+578,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__host_out_valid));
    bufp->fullQData(oldp+579,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n),64);
    bufp->fullQData(oldp+581,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n),64);
    bufp->fullSData(oldp+583,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n),16);
    bufp->fullBit(oldp+584,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n));
    bufp->fullQData(oldp+585,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e),64);
    bufp->fullQData(oldp+587,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e),64);
    bufp->fullSData(oldp+589,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e),16);
    bufp->fullBit(oldp+590,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e));
    bufp->fullQData(oldp+591,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s),64);
    bufp->fullQData(oldp+593,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s),64);
    bufp->fullSData(oldp+595,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s),16);
    bufp->fullBit(oldp+596,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s));
    bufp->fullQData(oldp+597,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_w),64);
    bufp->fullQData(oldp+599,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_w),64);
    bufp->fullSData(oldp+601,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_w),16);
    bufp->fullBit(oldp+602,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_w));
    bufp->fullQData(oldp+603,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__host_out_a),64);
    bufp->fullBit(oldp+605,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__host_out_valid));
    bufp->fullQData(oldp+606,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n),64);
    bufp->fullQData(oldp+608,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n),64);
    bufp->fullSData(oldp+610,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n),16);
    bufp->fullBit(oldp+611,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n));
    bufp->fullQData(oldp+612,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e),64);
    bufp->fullQData(oldp+614,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e),64);
    bufp->fullSData(oldp+616,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e),16);
    bufp->fullBit(oldp+617,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e));
    bufp->fullQData(oldp+618,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s),64);
    bufp->fullQData(oldp+620,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s),64);
    bufp->fullSData(oldp+622,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s),16);
    bufp->fullBit(oldp+623,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s));
    bufp->fullQData(oldp+624,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w),64);
    bufp->fullQData(oldp+626,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w),64);
    bufp->fullSData(oldp+628,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w),16);
    bufp->fullBit(oldp+629,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w));
    bufp->fullQData(oldp+630,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__host_out_a),64);
    bufp->fullBit(oldp+632,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__host_out_valid));
    bufp->fullQData(oldp+633,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n),64);
    bufp->fullQData(oldp+635,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n),64);
    bufp->fullSData(oldp+637,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n),16);
    bufp->fullBit(oldp+638,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n));
    bufp->fullQData(oldp+639,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e),64);
    bufp->fullQData(oldp+641,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e),64);
    bufp->fullSData(oldp+643,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e),16);
    bufp->fullBit(oldp+644,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e));
    bufp->fullQData(oldp+645,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s),64);
    bufp->fullQData(oldp+647,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s),64);
    bufp->fullSData(oldp+649,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s),16);
    bufp->fullBit(oldp+650,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s));
    bufp->fullQData(oldp+651,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w),64);
    bufp->fullQData(oldp+653,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w),64);
    bufp->fullSData(oldp+655,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w),16);
    bufp->fullBit(oldp+656,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w));
    bufp->fullQData(oldp+657,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__host_out_a),64);
    bufp->fullBit(oldp+659,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__host_out_valid));
    bufp->fullIData(oldp+660,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h),32);
    bufp->fullIData(oldp+661,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__i),32);
    bufp->fullQData(oldp+662,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0]),64);
    bufp->fullQData(oldp+664,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[1]),64);
    bufp->fullQData(oldp+666,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[2]),64);
    bufp->fullQData(oldp+668,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[3]),64);
    bufp->fullQData(oldp+670,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[4]),64);
    bufp->fullQData(oldp+672,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[5]),64);
    bufp->fullQData(oldp+674,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[6]),64);
    bufp->fullQData(oldp+676,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[7]),64);
    bufp->fullQData(oldp+678,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[8]),64);
    bufp->fullQData(oldp+680,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0]),64);
    bufp->fullQData(oldp+682,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[1]),64);
    bufp->fullQData(oldp+684,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[2]),64);
    bufp->fullQData(oldp+686,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[3]),64);
    bufp->fullQData(oldp+688,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[4]),64);
    bufp->fullQData(oldp+690,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[5]),64);
    bufp->fullQData(oldp+692,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[6]),64);
    bufp->fullQData(oldp+694,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[7]),64);
    bufp->fullQData(oldp+696,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[8]),64);
    bufp->fullSData(oldp+698,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0]),16);
    bufp->fullSData(oldp+699,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[1]),16);
    bufp->fullSData(oldp+700,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[2]),16);
    bufp->fullSData(oldp+701,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[3]),16);
    bufp->fullSData(oldp+702,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[4]),16);
    bufp->fullSData(oldp+703,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[5]),16);
    bufp->fullSData(oldp+704,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[6]),16);
    bufp->fullSData(oldp+705,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[7]),16);
    bufp->fullSData(oldp+706,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[8]),16);
    bufp->fullBit(oldp+707,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0]));
    bufp->fullBit(oldp+708,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1]));
    bufp->fullBit(oldp+709,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2]));
    bufp->fullBit(oldp+710,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3]));
    bufp->fullBit(oldp+711,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4]));
    bufp->fullBit(oldp+712,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5]));
    bufp->fullBit(oldp+713,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6]));
    bufp->fullBit(oldp+714,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7]));
    bufp->fullBit(oldp+715,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8]));
    bufp->fullIData(oldp+716,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some),32);
    bufp->fullSData(oldp+717,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c),16);
    bufp->fullBit(oldp+718,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r));
    bufp->fullCData(oldp+719,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx),2);
    bufp->fullCData(oldp+720,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy),2);
    bufp->fullCData(oldp+721,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md),4);
    bufp->fullIData(oldp+722,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx),32);
    bufp->fullIData(oldp+723,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty),32);
    bufp->fullIData(oldp+724,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx),32);
    bufp->fullIData(oldp+725,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx),32);
    bufp->fullQData(oldp+726,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res),64);
    bufp->fullIData(oldp+728,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx),32);
    bufp->fullIData(oldp+729,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx),32);
    bufp->fullIData(oldp+730,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx),32);
    bufp->fullIData(oldp+731,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx),32);
    bufp->fullQData(oldp+732,(vlSelfRef.a),64);
    bufp->fullQData(oldp+734,(vlSelfRef.b),64);
    bufp->fullCData(oldp+736,(vlSelfRef.mode),4);
    bufp->fullQData(oldp+737,(vlSelfRef.result),64);
    bufp->fullBit(oldp+739,(vlSelfRef.valid));
}
