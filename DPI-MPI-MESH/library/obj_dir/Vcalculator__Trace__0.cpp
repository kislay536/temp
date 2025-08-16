// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalculator__Syms.h"


void Vcalculator___024root__trace_chg_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcalculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_chg_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcalculator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcalculator___024root__trace_chg_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_chg_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+1,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[0]),64);
        bufp->chgQData(oldp+3,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[1]),64);
        bufp->chgQData(oldp+5,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[2]),64);
        bufp->chgQData(oldp+7,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[3]),64);
        bufp->chgQData(oldp+9,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[4]),64);
        bufp->chgQData(oldp+11,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[5]),64);
        bufp->chgQData(oldp+13,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[6]),64);
        bufp->chgQData(oldp+15,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[7]),64);
        bufp->chgQData(oldp+17,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[8]),64);
        bufp->chgQData(oldp+19,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[0]),64);
        bufp->chgQData(oldp+21,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[1]),64);
        bufp->chgQData(oldp+23,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[2]),64);
        bufp->chgQData(oldp+25,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[3]),64);
        bufp->chgQData(oldp+27,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[4]),64);
        bufp->chgQData(oldp+29,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[5]),64);
        bufp->chgQData(oldp+31,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[6]),64);
        bufp->chgQData(oldp+33,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[7]),64);
        bufp->chgQData(oldp+35,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[8]),64);
        bufp->chgSData(oldp+37,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[1]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[2]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[3]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[4]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[5]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[6]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[7]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[8]),16);
        bufp->chgBit(oldp+46,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[0]));
        bufp->chgBit(oldp+47,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[1]));
        bufp->chgBit(oldp+48,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[2]));
        bufp->chgBit(oldp+49,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[3]));
        bufp->chgBit(oldp+50,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[4]));
        bufp->chgBit(oldp+51,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[5]));
        bufp->chgBit(oldp+52,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[6]));
        bufp->chgBit(oldp+53,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[7]));
        bufp->chgBit(oldp+54,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[8]));
        bufp->chgBit(oldp+55,(vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+56,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[0]),64);
        bufp->chgQData(oldp+58,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[1]),64);
        bufp->chgQData(oldp+60,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[2]),64);
        bufp->chgQData(oldp+62,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[3]),64);
        bufp->chgQData(oldp+64,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[4]),64);
        bufp->chgQData(oldp+66,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[5]),64);
        bufp->chgQData(oldp+68,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[6]),64);
        bufp->chgQData(oldp+70,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[7]),64);
        bufp->chgQData(oldp+72,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8]),64);
        bufp->chgQData(oldp+74,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[0]),64);
        bufp->chgQData(oldp+76,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[1]),64);
        bufp->chgQData(oldp+78,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[2]),64);
        bufp->chgQData(oldp+80,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[3]),64);
        bufp->chgQData(oldp+82,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[4]),64);
        bufp->chgQData(oldp+84,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[5]),64);
        bufp->chgQData(oldp+86,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[6]),64);
        bufp->chgQData(oldp+88,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[7]),64);
        bufp->chgQData(oldp+90,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[8]),64);
        bufp->chgSData(oldp+92,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[0]),16);
        bufp->chgSData(oldp+93,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[1]),16);
        bufp->chgSData(oldp+94,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[2]),16);
        bufp->chgSData(oldp+95,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[3]),16);
        bufp->chgSData(oldp+96,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[4]),16);
        bufp->chgSData(oldp+97,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[5]),16);
        bufp->chgSData(oldp+98,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[6]),16);
        bufp->chgSData(oldp+99,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[7]),16);
        bufp->chgSData(oldp+100,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[8]),16);
        bufp->chgBit(oldp+101,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[0]));
        bufp->chgBit(oldp+102,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[1]));
        bufp->chgBit(oldp+103,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[2]));
        bufp->chgBit(oldp+104,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[3]));
        bufp->chgBit(oldp+105,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[4]));
        bufp->chgBit(oldp+106,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[5]));
        bufp->chgBit(oldp+107,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[6]));
        bufp->chgBit(oldp+108,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[7]));
        bufp->chgBit(oldp+109,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[8]));
        bufp->chgQData(oldp+110,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[0]),64);
        bufp->chgQData(oldp+112,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[1]),64);
        bufp->chgQData(oldp+114,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[2]),64);
        bufp->chgQData(oldp+116,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[3]),64);
        bufp->chgQData(oldp+118,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[4]),64);
        bufp->chgQData(oldp+120,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[5]),64);
        bufp->chgQData(oldp+122,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[6]),64);
        bufp->chgQData(oldp+124,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[7]),64);
        bufp->chgQData(oldp+126,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[8]),64);
        bufp->chgQData(oldp+128,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0]),64);
        bufp->chgQData(oldp+130,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[1]),64);
        bufp->chgQData(oldp+132,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[2]),64);
        bufp->chgQData(oldp+134,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[3]),64);
        bufp->chgQData(oldp+136,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[4]),64);
        bufp->chgQData(oldp+138,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[5]),64);
        bufp->chgQData(oldp+140,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[6]),64);
        bufp->chgQData(oldp+142,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[7]),64);
        bufp->chgQData(oldp+144,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[8]),64);
        bufp->chgSData(oldp+146,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0]),16);
        bufp->chgSData(oldp+147,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[1]),16);
        bufp->chgSData(oldp+148,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[2]),16);
        bufp->chgSData(oldp+149,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[3]),16);
        bufp->chgSData(oldp+150,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[4]),16);
        bufp->chgSData(oldp+151,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[5]),16);
        bufp->chgSData(oldp+152,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[6]),16);
        bufp->chgSData(oldp+153,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[7]),16);
        bufp->chgSData(oldp+154,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[8]),16);
        bufp->chgBit(oldp+155,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0]));
        bufp->chgBit(oldp+156,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[1]));
        bufp->chgBit(oldp+157,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[2]));
        bufp->chgBit(oldp+158,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[3]));
        bufp->chgBit(oldp+159,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[4]));
        bufp->chgBit(oldp+160,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[5]));
        bufp->chgBit(oldp+161,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[6]));
        bufp->chgBit(oldp+162,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[7]));
        bufp->chgBit(oldp+163,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[8]));
        bufp->chgQData(oldp+164,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0]),64);
        bufp->chgQData(oldp+166,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[1]),64);
        bufp->chgQData(oldp+168,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[2]),64);
        bufp->chgQData(oldp+170,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[3]),64);
        bufp->chgQData(oldp+172,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[4]),64);
        bufp->chgQData(oldp+174,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[5]),64);
        bufp->chgQData(oldp+176,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[6]),64);
        bufp->chgQData(oldp+178,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[7]),64);
        bufp->chgQData(oldp+180,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[8]),64);
        bufp->chgQData(oldp+182,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0]),64);
        bufp->chgQData(oldp+184,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[1]),64);
        bufp->chgQData(oldp+186,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[2]),64);
        bufp->chgQData(oldp+188,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[3]),64);
        bufp->chgQData(oldp+190,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[4]),64);
        bufp->chgQData(oldp+192,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[5]),64);
        bufp->chgQData(oldp+194,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[6]),64);
        bufp->chgQData(oldp+196,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[7]),64);
        bufp->chgQData(oldp+198,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[8]),64);
        bufp->chgSData(oldp+200,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0]),16);
        bufp->chgSData(oldp+201,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[1]),16);
        bufp->chgSData(oldp+202,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[2]),16);
        bufp->chgSData(oldp+203,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[3]),16);
        bufp->chgSData(oldp+204,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[4]),16);
        bufp->chgSData(oldp+205,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[5]),16);
        bufp->chgSData(oldp+206,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[6]),16);
        bufp->chgSData(oldp+207,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[7]),16);
        bufp->chgSData(oldp+208,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[8]),16);
        bufp->chgBit(oldp+209,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0]));
        bufp->chgBit(oldp+210,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[1]));
        bufp->chgBit(oldp+211,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[2]));
        bufp->chgBit(oldp+212,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[3]));
        bufp->chgBit(oldp+213,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[4]));
        bufp->chgBit(oldp+214,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[5]));
        bufp->chgBit(oldp+215,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[6]));
        bufp->chgBit(oldp+216,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[7]));
        bufp->chgBit(oldp+217,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[8]));
        bufp->chgQData(oldp+218,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[0]),64);
        bufp->chgQData(oldp+220,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[1]),64);
        bufp->chgQData(oldp+222,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[2]),64);
        bufp->chgQData(oldp+224,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[3]),64);
        bufp->chgQData(oldp+226,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[4]),64);
        bufp->chgQData(oldp+228,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[5]),64);
        bufp->chgQData(oldp+230,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[6]),64);
        bufp->chgQData(oldp+232,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[7]),64);
        bufp->chgQData(oldp+234,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[8]),64);
        bufp->chgQData(oldp+236,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[0]),64);
        bufp->chgQData(oldp+238,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[1]),64);
        bufp->chgQData(oldp+240,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[2]),64);
        bufp->chgQData(oldp+242,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[3]),64);
        bufp->chgQData(oldp+244,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[4]),64);
        bufp->chgQData(oldp+246,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[5]),64);
        bufp->chgQData(oldp+248,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[6]),64);
        bufp->chgQData(oldp+250,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[7]),64);
        bufp->chgQData(oldp+252,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[8]),64);
        bufp->chgSData(oldp+254,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[0]),16);
        bufp->chgSData(oldp+255,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[1]),16);
        bufp->chgSData(oldp+256,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[2]),16);
        bufp->chgSData(oldp+257,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[3]),16);
        bufp->chgSData(oldp+258,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[4]),16);
        bufp->chgSData(oldp+259,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[5]),16);
        bufp->chgSData(oldp+260,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[6]),16);
        bufp->chgSData(oldp+261,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[7]),16);
        bufp->chgSData(oldp+262,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[8]),16);
        bufp->chgBit(oldp+263,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[0]));
        bufp->chgBit(oldp+264,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[1]));
        bufp->chgBit(oldp+265,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[2]));
        bufp->chgBit(oldp+266,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[3]));
        bufp->chgBit(oldp+267,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[4]));
        bufp->chgBit(oldp+268,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[5]));
        bufp->chgBit(oldp+269,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[6]));
        bufp->chgBit(oldp+270,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[7]));
        bufp->chgBit(oldp+271,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[8]));
        bufp->chgQData(oldp+272,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[0]),64);
        bufp->chgQData(oldp+274,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[1]),64);
        bufp->chgQData(oldp+276,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[2]),64);
        bufp->chgQData(oldp+278,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[3]),64);
        bufp->chgQData(oldp+280,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[4]),64);
        bufp->chgQData(oldp+282,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[5]),64);
        bufp->chgQData(oldp+284,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[6]),64);
        bufp->chgQData(oldp+286,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[7]),64);
        bufp->chgQData(oldp+288,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[8]),64);
        bufp->chgBit(oldp+290,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0]));
        bufp->chgBit(oldp+291,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[1]));
        bufp->chgBit(oldp+292,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[2]));
        bufp->chgBit(oldp+293,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[3]));
        bufp->chgBit(oldp+294,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[4]));
        bufp->chgBit(oldp+295,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[5]));
        bufp->chgBit(oldp+296,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[6]));
        bufp->chgBit(oldp+297,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[7]));
        bufp->chgBit(oldp+298,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[8]));
        bufp->chgQData(oldp+299,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[0]),64);
        bufp->chgQData(oldp+301,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[1]),64);
        bufp->chgQData(oldp+303,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[2]),64);
        bufp->chgQData(oldp+305,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[3]),64);
        bufp->chgQData(oldp+307,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[4]),64);
        bufp->chgQData(oldp+309,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[5]),64);
        bufp->chgQData(oldp+311,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[6]),64);
        bufp->chgQData(oldp+313,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[7]),64);
        bufp->chgQData(oldp+315,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[8]),64);
        bufp->chgQData(oldp+317,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[0]),64);
        bufp->chgQData(oldp+319,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[1]),64);
        bufp->chgQData(oldp+321,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[2]),64);
        bufp->chgQData(oldp+323,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[3]),64);
        bufp->chgQData(oldp+325,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[4]),64);
        bufp->chgQData(oldp+327,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[5]),64);
        bufp->chgQData(oldp+329,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[6]),64);
        bufp->chgQData(oldp+331,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[7]),64);
        bufp->chgQData(oldp+333,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[8]),64);
        bufp->chgSData(oldp+335,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[0]),16);
        bufp->chgSData(oldp+336,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[1]),16);
        bufp->chgSData(oldp+337,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[2]),16);
        bufp->chgSData(oldp+338,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[3]),16);
        bufp->chgSData(oldp+339,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[4]),16);
        bufp->chgSData(oldp+340,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[5]),16);
        bufp->chgSData(oldp+341,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[6]),16);
        bufp->chgSData(oldp+342,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[7]),16);
        bufp->chgSData(oldp+343,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[8]),16);
        bufp->chgBit(oldp+344,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[0]));
        bufp->chgBit(oldp+345,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[1]));
        bufp->chgBit(oldp+346,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[2]));
        bufp->chgBit(oldp+347,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[3]));
        bufp->chgBit(oldp+348,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[4]));
        bufp->chgBit(oldp+349,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[5]));
        bufp->chgBit(oldp+350,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[6]));
        bufp->chgBit(oldp+351,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[7]));
        bufp->chgBit(oldp+352,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[8]));
        bufp->chgQData(oldp+353,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[0]),64);
        bufp->chgQData(oldp+355,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[1]),64);
        bufp->chgQData(oldp+357,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[2]),64);
        bufp->chgQData(oldp+359,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[3]),64);
        bufp->chgQData(oldp+361,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[4]),64);
        bufp->chgQData(oldp+363,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[5]),64);
        bufp->chgQData(oldp+365,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[6]),64);
        bufp->chgQData(oldp+367,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[7]),64);
        bufp->chgQData(oldp+369,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[8]),64);
        bufp->chgQData(oldp+371,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[0]),64);
        bufp->chgQData(oldp+373,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[1]),64);
        bufp->chgQData(oldp+375,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[2]),64);
        bufp->chgQData(oldp+377,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[3]),64);
        bufp->chgQData(oldp+379,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[4]),64);
        bufp->chgQData(oldp+381,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[5]),64);
        bufp->chgQData(oldp+383,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[6]),64);
        bufp->chgQData(oldp+385,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[7]),64);
        bufp->chgQData(oldp+387,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[8]),64);
        bufp->chgSData(oldp+389,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[0]),16);
        bufp->chgSData(oldp+390,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[1]),16);
        bufp->chgSData(oldp+391,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[2]),16);
        bufp->chgSData(oldp+392,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[3]),16);
        bufp->chgSData(oldp+393,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[4]),16);
        bufp->chgSData(oldp+394,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[5]),16);
        bufp->chgSData(oldp+395,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[6]),16);
        bufp->chgSData(oldp+396,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[7]),16);
        bufp->chgSData(oldp+397,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[8]),16);
        bufp->chgBit(oldp+398,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[0]));
        bufp->chgBit(oldp+399,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[1]));
        bufp->chgBit(oldp+400,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[2]));
        bufp->chgBit(oldp+401,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[3]));
        bufp->chgBit(oldp+402,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[4]));
        bufp->chgBit(oldp+403,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[5]));
        bufp->chgBit(oldp+404,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[6]));
        bufp->chgBit(oldp+405,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[7]));
        bufp->chgBit(oldp+406,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[8]));
        bufp->chgQData(oldp+407,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[0]),64);
        bufp->chgQData(oldp+409,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[1]),64);
        bufp->chgQData(oldp+411,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[2]),64);
        bufp->chgQData(oldp+413,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[3]),64);
        bufp->chgQData(oldp+415,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[4]),64);
        bufp->chgQData(oldp+417,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[5]),64);
        bufp->chgQData(oldp+419,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[6]),64);
        bufp->chgQData(oldp+421,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[7]),64);
        bufp->chgQData(oldp+423,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[8]),64);
        bufp->chgQData(oldp+425,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[0]),64);
        bufp->chgQData(oldp+427,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[1]),64);
        bufp->chgQData(oldp+429,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[2]),64);
        bufp->chgQData(oldp+431,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[3]),64);
        bufp->chgQData(oldp+433,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[4]),64);
        bufp->chgQData(oldp+435,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[5]),64);
        bufp->chgQData(oldp+437,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[6]),64);
        bufp->chgQData(oldp+439,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[7]),64);
        bufp->chgQData(oldp+441,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[8]),64);
        bufp->chgSData(oldp+443,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[0]),16);
        bufp->chgSData(oldp+444,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[1]),16);
        bufp->chgSData(oldp+445,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[2]),16);
        bufp->chgSData(oldp+446,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[3]),16);
        bufp->chgSData(oldp+447,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[4]),16);
        bufp->chgSData(oldp+448,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[5]),16);
        bufp->chgSData(oldp+449,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[6]),16);
        bufp->chgSData(oldp+450,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[7]),16);
        bufp->chgSData(oldp+451,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[8]),16);
        bufp->chgBit(oldp+452,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[0]));
        bufp->chgBit(oldp+453,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[1]));
        bufp->chgBit(oldp+454,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[2]));
        bufp->chgBit(oldp+455,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[3]));
        bufp->chgBit(oldp+456,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[4]));
        bufp->chgBit(oldp+457,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[5]));
        bufp->chgBit(oldp+458,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[6]));
        bufp->chgBit(oldp+459,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[7]));
        bufp->chgBit(oldp+460,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[8]));
        bufp->chgQData(oldp+461,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[0]),64);
        bufp->chgQData(oldp+463,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[1]),64);
        bufp->chgQData(oldp+465,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[2]),64);
        bufp->chgQData(oldp+467,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[3]),64);
        bufp->chgQData(oldp+469,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[4]),64);
        bufp->chgQData(oldp+471,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[5]),64);
        bufp->chgQData(oldp+473,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[6]),64);
        bufp->chgQData(oldp+475,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[7]),64);
        bufp->chgQData(oldp+477,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[8]),64);
        bufp->chgQData(oldp+479,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[0]),64);
        bufp->chgQData(oldp+481,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[1]),64);
        bufp->chgQData(oldp+483,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[2]),64);
        bufp->chgQData(oldp+485,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[3]),64);
        bufp->chgQData(oldp+487,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[4]),64);
        bufp->chgQData(oldp+489,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[5]),64);
        bufp->chgQData(oldp+491,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[6]),64);
        bufp->chgQData(oldp+493,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[7]),64);
        bufp->chgQData(oldp+495,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[8]),64);
        bufp->chgSData(oldp+497,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[0]),16);
        bufp->chgSData(oldp+498,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[1]),16);
        bufp->chgSData(oldp+499,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[2]),16);
        bufp->chgSData(oldp+500,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[3]),16);
        bufp->chgSData(oldp+501,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[4]),16);
        bufp->chgSData(oldp+502,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[5]),16);
        bufp->chgSData(oldp+503,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[6]),16);
        bufp->chgSData(oldp+504,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[7]),16);
        bufp->chgSData(oldp+505,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[8]),16);
        bufp->chgBit(oldp+506,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[0]));
        bufp->chgBit(oldp+507,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[1]));
        bufp->chgBit(oldp+508,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[2]));
        bufp->chgBit(oldp+509,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[3]));
        bufp->chgBit(oldp+510,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[4]));
        bufp->chgBit(oldp+511,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[5]));
        bufp->chgBit(oldp+512,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[6]));
        bufp->chgBit(oldp+513,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[7]));
        bufp->chgBit(oldp+514,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[8]));
        bufp->chgQData(oldp+515,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[0]),64);
        bufp->chgQData(oldp+517,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[1]),64);
        bufp->chgQData(oldp+519,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[2]),64);
        bufp->chgQData(oldp+521,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[3]),64);
        bufp->chgQData(oldp+523,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[4]),64);
        bufp->chgQData(oldp+525,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[5]),64);
        bufp->chgQData(oldp+527,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[6]),64);
        bufp->chgQData(oldp+529,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[7]),64);
        bufp->chgQData(oldp+531,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[8]),64);
        bufp->chgQData(oldp+533,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[0]),64);
        bufp->chgQData(oldp+535,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[1]),64);
        bufp->chgQData(oldp+537,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[2]),64);
        bufp->chgQData(oldp+539,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[3]),64);
        bufp->chgQData(oldp+541,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[4]),64);
        bufp->chgQData(oldp+543,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[5]),64);
        bufp->chgQData(oldp+545,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[6]),64);
        bufp->chgQData(oldp+547,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[7]),64);
        bufp->chgQData(oldp+549,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[8]),64);
        bufp->chgSData(oldp+551,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[0]),16);
        bufp->chgSData(oldp+552,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[1]),16);
        bufp->chgSData(oldp+553,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[2]),16);
        bufp->chgSData(oldp+554,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[3]),16);
        bufp->chgSData(oldp+555,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[4]),16);
        bufp->chgSData(oldp+556,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[5]),16);
        bufp->chgSData(oldp+557,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[6]),16);
        bufp->chgSData(oldp+558,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[7]),16);
        bufp->chgSData(oldp+559,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[8]),16);
        bufp->chgBit(oldp+560,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[0]));
        bufp->chgBit(oldp+561,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[1]));
        bufp->chgBit(oldp+562,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[2]));
        bufp->chgBit(oldp+563,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[3]));
        bufp->chgBit(oldp+564,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[4]));
        bufp->chgBit(oldp+565,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[5]));
        bufp->chgBit(oldp+566,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[6]));
        bufp->chgBit(oldp+567,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[7]));
        bufp->chgBit(oldp+568,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[8]));
        bufp->chgQData(oldp+569,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[0]),64);
        bufp->chgQData(oldp+571,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[1]),64);
        bufp->chgQData(oldp+573,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[2]),64);
        bufp->chgQData(oldp+575,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[3]),64);
        bufp->chgQData(oldp+577,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[4]),64);
        bufp->chgQData(oldp+579,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[5]),64);
        bufp->chgQData(oldp+581,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[6]),64);
        bufp->chgQData(oldp+583,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[7]),64);
        bufp->chgQData(oldp+585,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[8]),64);
        bufp->chgQData(oldp+587,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[0]),64);
        bufp->chgQData(oldp+589,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[1]),64);
        bufp->chgQData(oldp+591,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[2]),64);
        bufp->chgQData(oldp+593,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[3]),64);
        bufp->chgQData(oldp+595,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[4]),64);
        bufp->chgQData(oldp+597,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[5]),64);
        bufp->chgQData(oldp+599,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[6]),64);
        bufp->chgQData(oldp+601,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[7]),64);
        bufp->chgQData(oldp+603,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[8]),64);
        bufp->chgSData(oldp+605,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[0]),16);
        bufp->chgSData(oldp+606,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[1]),16);
        bufp->chgSData(oldp+607,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[2]),16);
        bufp->chgSData(oldp+608,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[3]),16);
        bufp->chgSData(oldp+609,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[4]),16);
        bufp->chgSData(oldp+610,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[5]),16);
        bufp->chgSData(oldp+611,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[6]),16);
        bufp->chgSData(oldp+612,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[7]),16);
        bufp->chgSData(oldp+613,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[8]),16);
        bufp->chgBit(oldp+614,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[0]));
        bufp->chgBit(oldp+615,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[1]));
        bufp->chgBit(oldp+616,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[2]));
        bufp->chgBit(oldp+617,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[3]));
        bufp->chgBit(oldp+618,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[4]));
        bufp->chgBit(oldp+619,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[5]));
        bufp->chgBit(oldp+620,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[6]));
        bufp->chgBit(oldp+621,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[7]));
        bufp->chgBit(oldp+622,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[8]));
        bufp->chgQData(oldp+623,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[0]),64);
        bufp->chgQData(oldp+625,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[1]),64);
        bufp->chgQData(oldp+627,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[2]),64);
        bufp->chgQData(oldp+629,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[3]),64);
        bufp->chgQData(oldp+631,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[4]),64);
        bufp->chgQData(oldp+633,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[5]),64);
        bufp->chgQData(oldp+635,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[6]),64);
        bufp->chgQData(oldp+637,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[7]),64);
        bufp->chgQData(oldp+639,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[8]),64);
        bufp->chgQData(oldp+641,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[0]),64);
        bufp->chgQData(oldp+643,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[1]),64);
        bufp->chgQData(oldp+645,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[2]),64);
        bufp->chgQData(oldp+647,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[3]),64);
        bufp->chgQData(oldp+649,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[4]),64);
        bufp->chgQData(oldp+651,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[5]),64);
        bufp->chgQData(oldp+653,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[6]),64);
        bufp->chgQData(oldp+655,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[7]),64);
        bufp->chgQData(oldp+657,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[8]),64);
        bufp->chgSData(oldp+659,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[0]),16);
        bufp->chgSData(oldp+660,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[1]),16);
        bufp->chgSData(oldp+661,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[2]),16);
        bufp->chgSData(oldp+662,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[3]),16);
        bufp->chgSData(oldp+663,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[4]),16);
        bufp->chgSData(oldp+664,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[5]),16);
        bufp->chgSData(oldp+665,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[6]),16);
        bufp->chgSData(oldp+666,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[7]),16);
        bufp->chgSData(oldp+667,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[8]),16);
        bufp->chgBit(oldp+668,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[0]));
        bufp->chgBit(oldp+669,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[1]));
        bufp->chgBit(oldp+670,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[2]));
        bufp->chgBit(oldp+671,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[3]));
        bufp->chgBit(oldp+672,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[4]));
        bufp->chgBit(oldp+673,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[5]));
        bufp->chgBit(oldp+674,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[6]));
        bufp->chgBit(oldp+675,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[7]));
        bufp->chgBit(oldp+676,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[8]));
        bufp->chgQData(oldp+677,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[0]),64);
        bufp->chgQData(oldp+679,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[1]),64);
        bufp->chgQData(oldp+681,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[2]),64);
        bufp->chgQData(oldp+683,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[3]),64);
        bufp->chgQData(oldp+685,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[4]),64);
        bufp->chgQData(oldp+687,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[5]),64);
        bufp->chgQData(oldp+689,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[6]),64);
        bufp->chgQData(oldp+691,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[7]),64);
        bufp->chgQData(oldp+693,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[8]),64);
        bufp->chgQData(oldp+695,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[0]),64);
        bufp->chgQData(oldp+697,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[1]),64);
        bufp->chgQData(oldp+699,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[2]),64);
        bufp->chgQData(oldp+701,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[3]),64);
        bufp->chgQData(oldp+703,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[4]),64);
        bufp->chgQData(oldp+705,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[5]),64);
        bufp->chgQData(oldp+707,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[6]),64);
        bufp->chgQData(oldp+709,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[7]),64);
        bufp->chgQData(oldp+711,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[8]),64);
        bufp->chgSData(oldp+713,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[0]),16);
        bufp->chgSData(oldp+714,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[1]),16);
        bufp->chgSData(oldp+715,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[2]),16);
        bufp->chgSData(oldp+716,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[3]),16);
        bufp->chgSData(oldp+717,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[4]),16);
        bufp->chgSData(oldp+718,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[5]),16);
        bufp->chgSData(oldp+719,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[6]),16);
        bufp->chgSData(oldp+720,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[7]),16);
        bufp->chgSData(oldp+721,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[8]),16);
        bufp->chgBit(oldp+722,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[0]));
        bufp->chgBit(oldp+723,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[1]));
        bufp->chgBit(oldp+724,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[2]));
        bufp->chgBit(oldp+725,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[3]));
        bufp->chgBit(oldp+726,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[4]));
        bufp->chgBit(oldp+727,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[5]));
        bufp->chgBit(oldp+728,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[6]));
        bufp->chgBit(oldp+729,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[7]));
        bufp->chgBit(oldp+730,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[8]));
        bufp->chgQData(oldp+731,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[0]),64);
        bufp->chgQData(oldp+733,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[1]),64);
        bufp->chgQData(oldp+735,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[2]),64);
        bufp->chgQData(oldp+737,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[3]),64);
        bufp->chgQData(oldp+739,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[4]),64);
        bufp->chgQData(oldp+741,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[5]),64);
        bufp->chgQData(oldp+743,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[6]),64);
        bufp->chgQData(oldp+745,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[7]),64);
        bufp->chgQData(oldp+747,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[8]),64);
        bufp->chgQData(oldp+749,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[0]),64);
        bufp->chgQData(oldp+751,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[1]),64);
        bufp->chgQData(oldp+753,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[2]),64);
        bufp->chgQData(oldp+755,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[3]),64);
        bufp->chgQData(oldp+757,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[4]),64);
        bufp->chgQData(oldp+759,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[5]),64);
        bufp->chgQData(oldp+761,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[6]),64);
        bufp->chgQData(oldp+763,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[7]),64);
        bufp->chgQData(oldp+765,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[8]),64);
        bufp->chgSData(oldp+767,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[0]),16);
        bufp->chgSData(oldp+768,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[1]),16);
        bufp->chgSData(oldp+769,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[2]),16);
        bufp->chgSData(oldp+770,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[3]),16);
        bufp->chgSData(oldp+771,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[4]),16);
        bufp->chgSData(oldp+772,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[5]),16);
        bufp->chgSData(oldp+773,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[6]),16);
        bufp->chgSData(oldp+774,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[7]),16);
        bufp->chgSData(oldp+775,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[8]),16);
        bufp->chgBit(oldp+776,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[0]));
        bufp->chgBit(oldp+777,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[1]));
        bufp->chgBit(oldp+778,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[2]));
        bufp->chgBit(oldp+779,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[3]));
        bufp->chgBit(oldp+780,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[4]));
        bufp->chgBit(oldp+781,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[5]));
        bufp->chgBit(oldp+782,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[6]));
        bufp->chgBit(oldp+783,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[7]));
        bufp->chgBit(oldp+784,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[8]));
        bufp->chgBit(oldp+785,(vlSelfRef.calculator__DOT__int_con__DOT__is_busy));
        bufp->chgQData(oldp+786,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [0U]),64);
        bufp->chgQData(oldp+788,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [0U]),64);
        bufp->chgSData(oldp+790,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [0U]),16);
        bufp->chgBit(oldp+791,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [0U]));
        bufp->chgQData(oldp+792,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [0U]),64);
        bufp->chgQData(oldp+794,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [0U]),64);
        bufp->chgSData(oldp+796,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [0U]),16);
        bufp->chgBit(oldp+797,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [0U]));
        bufp->chgQData(oldp+798,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [0U]),64);
        bufp->chgQData(oldp+800,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [0U]),64);
        bufp->chgSData(oldp+802,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [0U]),16);
        bufp->chgBit(oldp+803,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [0U]));
        bufp->chgQData(oldp+804,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [0U]),64);
        bufp->chgQData(oldp+806,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [0U]),64);
        bufp->chgSData(oldp+808,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [0U]),16);
        bufp->chgBit(oldp+809,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [0U]));
        bufp->chgQData(oldp+810,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [0U]),64);
        bufp->chgQData(oldp+812,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [0U]),64);
        bufp->chgSData(oldp+814,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [0U]),16);
        bufp->chgBit(oldp+815,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                               [0U]));
        bufp->chgQData(oldp+816,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e),64);
        bufp->chgQData(oldp+818,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e),64);
        bufp->chgSData(oldp+820,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e),16);
        bufp->chgBit(oldp+821,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e));
        bufp->chgQData(oldp+822,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s),64);
        bufp->chgQData(oldp+824,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s),64);
        bufp->chgSData(oldp+826,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s),16);
        bufp->chgBit(oldp+827,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s));
        bufp->chgQData(oldp+828,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a),64);
        bufp->chgBit(oldp+830,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid));
        bufp->chgBit(oldp+831,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                        [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                [0U] 
                                                | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                   [0U] 
                                                   | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                   [0U]))))));
        bufp->chgQData(oldp+832,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a),64);
        bufp->chgQData(oldp+834,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b),64);
        bufp->chgSData(oldp+836,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+837,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid));
        bufp->chgBit(oldp+838,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+839,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+840,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+841,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+842,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest));
        bufp->chgQData(oldp+843,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result),64);
        bufp->chgSData(oldp+845,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+846,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [1U]),64);
        bufp->chgQData(oldp+848,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [1U]),64);
        bufp->chgSData(oldp+850,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [1U]),16);
        bufp->chgBit(oldp+851,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [1U]));
        bufp->chgQData(oldp+852,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [1U]),64);
        bufp->chgQData(oldp+854,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [1U]),64);
        bufp->chgSData(oldp+856,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [1U]),16);
        bufp->chgBit(oldp+857,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [1U]));
        bufp->chgQData(oldp+858,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [1U]),64);
        bufp->chgQData(oldp+860,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [1U]),64);
        bufp->chgSData(oldp+862,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [1U]),16);
        bufp->chgBit(oldp+863,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [1U]));
        bufp->chgQData(oldp+864,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [1U]),64);
        bufp->chgQData(oldp+866,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [1U]),64);
        bufp->chgSData(oldp+868,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [1U]),16);
        bufp->chgBit(oldp+869,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [1U]));
        bufp->chgQData(oldp+870,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [1U]),64);
        bufp->chgQData(oldp+872,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [1U]),64);
        bufp->chgSData(oldp+874,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [1U]),16);
        bufp->chgBit(oldp+875,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                               [1U]));
        bufp->chgQData(oldp+876,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e),64);
        bufp->chgQData(oldp+878,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e),64);
        bufp->chgSData(oldp+880,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e),16);
        bufp->chgBit(oldp+881,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e));
        bufp->chgQData(oldp+882,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s),64);
        bufp->chgQData(oldp+884,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s),64);
        bufp->chgSData(oldp+886,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s),16);
        bufp->chgBit(oldp+887,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s));
        bufp->chgQData(oldp+888,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w),64);
        bufp->chgQData(oldp+890,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w),64);
        bufp->chgSData(oldp+892,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w),16);
        bufp->chgBit(oldp+893,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w));
        bufp->chgBit(oldp+894,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                        [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                [1U] 
                                                | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                   [1U] 
                                                   | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                   [1U]))))));
        bufp->chgQData(oldp+895,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a),64);
        bufp->chgQData(oldp+897,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b),64);
        bufp->chgSData(oldp+899,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+900,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid));
        bufp->chgBit(oldp+901,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+902,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+903,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+904,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+905,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest));
        bufp->chgQData(oldp+906,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result),64);
        bufp->chgSData(oldp+908,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+909,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [2U]),64);
        bufp->chgQData(oldp+911,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [2U]),64);
        bufp->chgSData(oldp+913,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [2U]),16);
        bufp->chgBit(oldp+914,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [2U]));
        bufp->chgQData(oldp+915,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [2U]),64);
        bufp->chgQData(oldp+917,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [2U]),64);
        bufp->chgSData(oldp+919,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [2U]),16);
        bufp->chgBit(oldp+920,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [2U]));
        bufp->chgQData(oldp+921,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [2U]),64);
        bufp->chgQData(oldp+923,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [2U]),64);
        bufp->chgSData(oldp+925,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [2U]),16);
        bufp->chgBit(oldp+926,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [2U]));
        bufp->chgQData(oldp+927,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [2U]),64);
        bufp->chgQData(oldp+929,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [2U]),64);
        bufp->chgSData(oldp+931,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [2U]),16);
        bufp->chgBit(oldp+932,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [2U]));
        bufp->chgQData(oldp+933,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [2U]),64);
        bufp->chgQData(oldp+935,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [2U]),64);
        bufp->chgSData(oldp+937,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [2U]),16);
        bufp->chgBit(oldp+938,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                               [2U]));
        bufp->chgQData(oldp+939,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e),64);
        bufp->chgQData(oldp+941,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e),64);
        bufp->chgSData(oldp+943,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e),16);
        bufp->chgBit(oldp+944,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e));
        bufp->chgQData(oldp+945,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s),64);
        bufp->chgQData(oldp+947,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s),64);
        bufp->chgSData(oldp+949,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s),16);
        bufp->chgBit(oldp+950,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s));
        bufp->chgQData(oldp+951,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w),64);
        bufp->chgQData(oldp+953,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w),64);
        bufp->chgSData(oldp+955,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w),16);
        bufp->chgBit(oldp+956,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w));
        bufp->chgBit(oldp+957,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                        [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                [2U] 
                                                | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                   [2U] 
                                                   | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                   [2U]))))));
        bufp->chgQData(oldp+958,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a),64);
        bufp->chgQData(oldp+960,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b),64);
        bufp->chgSData(oldp+962,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+963,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid));
        bufp->chgBit(oldp+964,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+965,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+966,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+967,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+968,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest));
        bufp->chgQData(oldp+969,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result),64);
        bufp->chgSData(oldp+971,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+972,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [3U]),64);
        bufp->chgQData(oldp+974,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [3U]),64);
        bufp->chgSData(oldp+976,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [3U]),16);
        bufp->chgBit(oldp+977,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [3U]));
        bufp->chgQData(oldp+978,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [3U]),64);
        bufp->chgQData(oldp+980,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [3U]),64);
        bufp->chgSData(oldp+982,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [3U]),16);
        bufp->chgBit(oldp+983,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [3U]));
        bufp->chgQData(oldp+984,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [3U]),64);
        bufp->chgQData(oldp+986,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [3U]),64);
        bufp->chgSData(oldp+988,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [3U]),16);
        bufp->chgBit(oldp+989,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [3U]));
        bufp->chgQData(oldp+990,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [3U]),64);
        bufp->chgQData(oldp+992,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [3U]),64);
        bufp->chgSData(oldp+994,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [3U]),16);
        bufp->chgBit(oldp+995,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [3U]));
        bufp->chgQData(oldp+996,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [3U]),64);
        bufp->chgQData(oldp+998,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [3U]),64);
        bufp->chgSData(oldp+1000,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [3U]),16);
        bufp->chgBit(oldp+1001,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [3U]));
        bufp->chgQData(oldp+1002,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n),64);
        bufp->chgQData(oldp+1004,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n),64);
        bufp->chgSData(oldp+1006,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n),16);
        bufp->chgBit(oldp+1007,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n));
        bufp->chgQData(oldp+1008,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e),64);
        bufp->chgQData(oldp+1010,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e),64);
        bufp->chgSData(oldp+1012,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e),16);
        bufp->chgBit(oldp+1013,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e));
        bufp->chgQData(oldp+1014,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s),64);
        bufp->chgQData(oldp+1016,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s),64);
        bufp->chgSData(oldp+1018,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s),16);
        bufp->chgBit(oldp+1019,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s));
        bufp->chgBit(oldp+1020,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [3U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [3U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [3U]))))));
        bufp->chgQData(oldp+1021,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a),64);
        bufp->chgQData(oldp+1023,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b),64);
        bufp->chgSData(oldp+1025,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1026,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid));
        bufp->chgBit(oldp+1027,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1028,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1029,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1030,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1031,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest));
        bufp->chgQData(oldp+1032,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result),64);
        bufp->chgSData(oldp+1034,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1035,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [4U]),64);
        bufp->chgQData(oldp+1037,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [4U]),64);
        bufp->chgSData(oldp+1039,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [4U]),16);
        bufp->chgBit(oldp+1040,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [4U]));
        bufp->chgQData(oldp+1041,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [4U]),64);
        bufp->chgQData(oldp+1043,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [4U]),64);
        bufp->chgSData(oldp+1045,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [4U]),16);
        bufp->chgBit(oldp+1046,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [4U]));
        bufp->chgQData(oldp+1047,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [4U]),64);
        bufp->chgQData(oldp+1049,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [4U]),64);
        bufp->chgSData(oldp+1051,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [4U]),16);
        bufp->chgBit(oldp+1052,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [4U]));
        bufp->chgQData(oldp+1053,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [4U]),64);
        bufp->chgQData(oldp+1055,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [4U]),64);
        bufp->chgSData(oldp+1057,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [4U]),16);
        bufp->chgBit(oldp+1058,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [4U]));
        bufp->chgQData(oldp+1059,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [4U]),64);
        bufp->chgQData(oldp+1061,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [4U]),64);
        bufp->chgSData(oldp+1063,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [4U]),16);
        bufp->chgBit(oldp+1064,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [4U]));
        bufp->chgQData(oldp+1065,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n),64);
        bufp->chgQData(oldp+1067,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n),64);
        bufp->chgSData(oldp+1069,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n),16);
        bufp->chgBit(oldp+1070,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n));
        bufp->chgQData(oldp+1071,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e),64);
        bufp->chgQData(oldp+1073,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e),64);
        bufp->chgSData(oldp+1075,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e),16);
        bufp->chgBit(oldp+1076,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e));
        bufp->chgQData(oldp+1077,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s),64);
        bufp->chgQData(oldp+1079,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s),64);
        bufp->chgSData(oldp+1081,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s),16);
        bufp->chgBit(oldp+1082,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s));
        bufp->chgQData(oldp+1083,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w),64);
        bufp->chgQData(oldp+1085,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w),64);
        bufp->chgSData(oldp+1087,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w),16);
        bufp->chgBit(oldp+1088,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w));
        bufp->chgBit(oldp+1089,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [4U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [4U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [4U]))))));
        bufp->chgQData(oldp+1090,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a),64);
        bufp->chgQData(oldp+1092,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b),64);
        bufp->chgSData(oldp+1094,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1095,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid));
        bufp->chgBit(oldp+1096,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1097,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1098,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1099,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1100,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest));
        bufp->chgQData(oldp+1101,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result),64);
        bufp->chgSData(oldp+1103,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1104,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [5U]),64);
        bufp->chgQData(oldp+1106,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [5U]),64);
        bufp->chgSData(oldp+1108,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [5U]),16);
        bufp->chgBit(oldp+1109,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [5U]));
        bufp->chgQData(oldp+1110,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [5U]),64);
        bufp->chgQData(oldp+1112,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [5U]),64);
        bufp->chgSData(oldp+1114,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [5U]),16);
        bufp->chgBit(oldp+1115,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [5U]));
        bufp->chgQData(oldp+1116,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [5U]),64);
        bufp->chgQData(oldp+1118,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [5U]),64);
        bufp->chgSData(oldp+1120,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [5U]),16);
        bufp->chgBit(oldp+1121,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [5U]));
        bufp->chgQData(oldp+1122,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [5U]),64);
        bufp->chgQData(oldp+1124,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [5U]),64);
        bufp->chgSData(oldp+1126,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [5U]),16);
        bufp->chgBit(oldp+1127,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [5U]));
        bufp->chgQData(oldp+1128,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [5U]),64);
        bufp->chgQData(oldp+1130,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [5U]),64);
        bufp->chgSData(oldp+1132,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [5U]),16);
        bufp->chgBit(oldp+1133,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [5U]));
        bufp->chgQData(oldp+1134,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n),64);
        bufp->chgQData(oldp+1136,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n),64);
        bufp->chgSData(oldp+1138,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n),16);
        bufp->chgBit(oldp+1139,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n));
        bufp->chgQData(oldp+1140,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e),64);
        bufp->chgQData(oldp+1142,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e),64);
        bufp->chgSData(oldp+1144,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e),16);
        bufp->chgBit(oldp+1145,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e));
        bufp->chgQData(oldp+1146,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s),64);
        bufp->chgQData(oldp+1148,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s),64);
        bufp->chgSData(oldp+1150,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s),16);
        bufp->chgBit(oldp+1151,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s));
        bufp->chgQData(oldp+1152,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w),64);
        bufp->chgQData(oldp+1154,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w),64);
        bufp->chgSData(oldp+1156,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w),16);
        bufp->chgBit(oldp+1157,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w));
        bufp->chgBit(oldp+1158,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [5U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [5U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [5U]))))));
        bufp->chgQData(oldp+1159,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a),64);
        bufp->chgQData(oldp+1161,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b),64);
        bufp->chgSData(oldp+1163,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1164,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid));
        bufp->chgBit(oldp+1165,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1166,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1167,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1168,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1169,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest));
        bufp->chgQData(oldp+1170,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result),64);
        bufp->chgSData(oldp+1172,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1173,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [6U]),64);
        bufp->chgQData(oldp+1175,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [6U]),64);
        bufp->chgSData(oldp+1177,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [6U]),16);
        bufp->chgBit(oldp+1178,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [6U]));
        bufp->chgQData(oldp+1179,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [6U]),64);
        bufp->chgQData(oldp+1181,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [6U]),64);
        bufp->chgSData(oldp+1183,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [6U]),16);
        bufp->chgBit(oldp+1184,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [6U]));
        bufp->chgQData(oldp+1185,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [6U]),64);
        bufp->chgQData(oldp+1187,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [6U]),64);
        bufp->chgSData(oldp+1189,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [6U]),16);
        bufp->chgBit(oldp+1190,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [6U]));
        bufp->chgQData(oldp+1191,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [6U]),64);
        bufp->chgQData(oldp+1193,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [6U]),64);
        bufp->chgSData(oldp+1195,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [6U]),16);
        bufp->chgBit(oldp+1196,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [6U]));
        bufp->chgQData(oldp+1197,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [6U]),64);
        bufp->chgQData(oldp+1199,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [6U]),64);
        bufp->chgSData(oldp+1201,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [6U]),16);
        bufp->chgBit(oldp+1202,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [6U]));
        bufp->chgQData(oldp+1203,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n),64);
        bufp->chgQData(oldp+1205,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n),64);
        bufp->chgSData(oldp+1207,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n),16);
        bufp->chgBit(oldp+1208,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n));
        bufp->chgQData(oldp+1209,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e),64);
        bufp->chgQData(oldp+1211,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e),64);
        bufp->chgSData(oldp+1213,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e),16);
        bufp->chgBit(oldp+1214,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e));
        bufp->chgQData(oldp+1215,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s),64);
        bufp->chgQData(oldp+1217,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s),64);
        bufp->chgSData(oldp+1219,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s),16);
        bufp->chgBit(oldp+1220,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s));
        bufp->chgBit(oldp+1221,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [6U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [6U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [6U]))))));
        bufp->chgQData(oldp+1222,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a),64);
        bufp->chgQData(oldp+1224,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b),64);
        bufp->chgSData(oldp+1226,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1227,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid));
        bufp->chgBit(oldp+1228,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1229,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1230,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1231,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1232,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest));
        bufp->chgQData(oldp+1233,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result),64);
        bufp->chgSData(oldp+1235,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1236,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [7U]),64);
        bufp->chgQData(oldp+1238,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [7U]),64);
        bufp->chgSData(oldp+1240,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [7U]),16);
        bufp->chgBit(oldp+1241,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [7U]));
        bufp->chgQData(oldp+1242,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [7U]),64);
        bufp->chgQData(oldp+1244,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [7U]),64);
        bufp->chgSData(oldp+1246,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [7U]),16);
        bufp->chgBit(oldp+1247,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [7U]));
        bufp->chgQData(oldp+1248,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [7U]),64);
        bufp->chgQData(oldp+1250,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [7U]),64);
        bufp->chgSData(oldp+1252,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [7U]),16);
        bufp->chgBit(oldp+1253,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [7U]));
        bufp->chgQData(oldp+1254,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [7U]),64);
        bufp->chgQData(oldp+1256,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [7U]),64);
        bufp->chgSData(oldp+1258,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [7U]),16);
        bufp->chgBit(oldp+1259,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [7U]));
        bufp->chgQData(oldp+1260,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [7U]),64);
        bufp->chgQData(oldp+1262,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [7U]),64);
        bufp->chgSData(oldp+1264,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [7U]),16);
        bufp->chgBit(oldp+1265,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [7U]));
        bufp->chgQData(oldp+1266,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n),64);
        bufp->chgQData(oldp+1268,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n),64);
        bufp->chgSData(oldp+1270,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n),16);
        bufp->chgBit(oldp+1271,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n));
        bufp->chgQData(oldp+1272,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e),64);
        bufp->chgQData(oldp+1274,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e),64);
        bufp->chgSData(oldp+1276,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e),16);
        bufp->chgBit(oldp+1277,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e));
        bufp->chgQData(oldp+1278,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s),64);
        bufp->chgQData(oldp+1280,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s),64);
        bufp->chgSData(oldp+1282,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s),16);
        bufp->chgBit(oldp+1283,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s));
        bufp->chgQData(oldp+1284,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w),64);
        bufp->chgQData(oldp+1286,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w),64);
        bufp->chgSData(oldp+1288,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w),16);
        bufp->chgBit(oldp+1289,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w));
        bufp->chgBit(oldp+1290,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [7U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [7U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [7U]))))));
        bufp->chgQData(oldp+1291,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a),64);
        bufp->chgQData(oldp+1293,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b),64);
        bufp->chgSData(oldp+1295,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1296,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid));
        bufp->chgBit(oldp+1297,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1298,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1299,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1300,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1301,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest));
        bufp->chgQData(oldp+1302,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result),64);
        bufp->chgSData(oldp+1304,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1305,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [8U]),64);
        bufp->chgQData(oldp+1307,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [8U]),64);
        bufp->chgSData(oldp+1309,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [8U]),16);
        bufp->chgBit(oldp+1310,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [8U]));
        bufp->chgQData(oldp+1311,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [8U]),64);
        bufp->chgQData(oldp+1313,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [8U]),64);
        bufp->chgSData(oldp+1315,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [8U]),16);
        bufp->chgBit(oldp+1316,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [8U]));
        bufp->chgQData(oldp+1317,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [8U]),64);
        bufp->chgQData(oldp+1319,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [8U]),64);
        bufp->chgSData(oldp+1321,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [8U]),16);
        bufp->chgBit(oldp+1322,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [8U]));
        bufp->chgQData(oldp+1323,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [8U]),64);
        bufp->chgQData(oldp+1325,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [8U]),64);
        bufp->chgSData(oldp+1327,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [8U]),16);
        bufp->chgBit(oldp+1328,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [8U]));
        bufp->chgQData(oldp+1329,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [8U]),64);
        bufp->chgQData(oldp+1331,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [8U]),64);
        bufp->chgSData(oldp+1333,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [8U]),16);
        bufp->chgBit(oldp+1334,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [8U]));
        bufp->chgQData(oldp+1335,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n),64);
        bufp->chgQData(oldp+1337,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n),64);
        bufp->chgSData(oldp+1339,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n),16);
        bufp->chgBit(oldp+1340,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n));
        bufp->chgQData(oldp+1341,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e),64);
        bufp->chgQData(oldp+1343,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e),64);
        bufp->chgSData(oldp+1345,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e),16);
        bufp->chgBit(oldp+1346,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e));
        bufp->chgQData(oldp+1347,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s),64);
        bufp->chgQData(oldp+1349,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s),64);
        bufp->chgSData(oldp+1351,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s),16);
        bufp->chgBit(oldp+1352,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s));
        bufp->chgQData(oldp+1353,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w),64);
        bufp->chgQData(oldp+1355,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w),64);
        bufp->chgSData(oldp+1357,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w),16);
        bufp->chgBit(oldp+1358,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w));
        bufp->chgBit(oldp+1359,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [8U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [8U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [8U]))))));
        bufp->chgQData(oldp+1360,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a),64);
        bufp->chgQData(oldp+1362,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b),64);
        bufp->chgSData(oldp+1364,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1365,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid));
        bufp->chgBit(oldp+1366,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1367,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1368,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1369,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1370,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest));
        bufp->chgQData(oldp+1371,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result),64);
        bufp->chgSData(oldp+1373,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgIData(oldp+1374,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk4__DOT__i),32);
    }
    bufp->chgBit(oldp+1375,(vlSelfRef.clk));
    bufp->chgQData(oldp+1376,(vlSelfRef.a),64);
    bufp->chgQData(oldp+1378,(vlSelfRef.b),64);
    bufp->chgCData(oldp+1380,(vlSelfRef.mode),4);
    bufp->chgQData(oldp+1381,(vlSelfRef.result),64);
    bufp->chgBit(oldp+1383,(vlSelfRef.valid));
}

void Vcalculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_cleanup\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
