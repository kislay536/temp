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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a_0),64);
        bufp->chgQData(oldp+2,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b_0),64);
        bufp->chgSData(oldp+4,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl_0),16);
        bufp->chgBit(oldp+5,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid_0));
        bufp->chgBit(oldp+6,(vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+7,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_3),64);
        bufp->chgQData(oldp+9,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_4),64);
        bufp->chgQData(oldp+11,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_5),64);
        bufp->chgQData(oldp+13,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_6),64);
        bufp->chgQData(oldp+15,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_7),64);
        bufp->chgQData(oldp+17,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_8),64);
        bufp->chgQData(oldp+19,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_3),64);
        bufp->chgQData(oldp+21,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_4),64);
        bufp->chgQData(oldp+23,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_5),64);
        bufp->chgQData(oldp+25,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_6),64);
        bufp->chgQData(oldp+27,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_7),64);
        bufp->chgQData(oldp+29,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_8),64);
        bufp->chgSData(oldp+31,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_3),16);
        bufp->chgSData(oldp+32,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_4),16);
        bufp->chgSData(oldp+33,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_5),16);
        bufp->chgSData(oldp+34,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_6),16);
        bufp->chgSData(oldp+35,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_7),16);
        bufp->chgSData(oldp+36,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_8),16);
        bufp->chgBit(oldp+37,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_3));
        bufp->chgBit(oldp+38,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_4));
        bufp->chgBit(oldp+39,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_5));
        bufp->chgBit(oldp+40,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_6));
        bufp->chgBit(oldp+41,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_7));
        bufp->chgBit(oldp+42,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_8));
        bufp->chgQData(oldp+43,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_0),64);
        bufp->chgQData(oldp+45,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_1),64);
        bufp->chgQData(oldp+47,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_2),64);
        bufp->chgQData(oldp+49,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_3),64);
        bufp->chgQData(oldp+51,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_4),64);
        bufp->chgQData(oldp+53,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_5),64);
        bufp->chgQData(oldp+55,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_6),64);
        bufp->chgQData(oldp+57,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_7),64);
        bufp->chgQData(oldp+59,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_8),64);
        bufp->chgQData(oldp+61,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_0),64);
        bufp->chgQData(oldp+63,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_1),64);
        bufp->chgQData(oldp+65,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_2),64);
        bufp->chgQData(oldp+67,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_3),64);
        bufp->chgQData(oldp+69,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_4),64);
        bufp->chgQData(oldp+71,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_5),64);
        bufp->chgQData(oldp+73,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_6),64);
        bufp->chgQData(oldp+75,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_7),64);
        bufp->chgQData(oldp+77,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_8),64);
        bufp->chgSData(oldp+79,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_0),16);
        bufp->chgSData(oldp+80,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_1),16);
        bufp->chgSData(oldp+81,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_2),16);
        bufp->chgSData(oldp+82,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_3),16);
        bufp->chgSData(oldp+83,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_4),16);
        bufp->chgSData(oldp+84,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_5),16);
        bufp->chgSData(oldp+85,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_6),16);
        bufp->chgSData(oldp+86,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_7),16);
        bufp->chgSData(oldp+87,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_8),16);
        bufp->chgBit(oldp+88,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_0));
        bufp->chgBit(oldp+89,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_1));
        bufp->chgBit(oldp+90,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_2));
        bufp->chgBit(oldp+91,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_3));
        bufp->chgBit(oldp+92,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_4));
        bufp->chgBit(oldp+93,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_5));
        bufp->chgBit(oldp+94,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_6));
        bufp->chgBit(oldp+95,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_7));
        bufp->chgBit(oldp+96,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_8));
        bufp->chgQData(oldp+97,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_0),64);
        bufp->chgQData(oldp+99,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_1),64);
        bufp->chgQData(oldp+101,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_2),64);
        bufp->chgQData(oldp+103,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_3),64);
        bufp->chgQData(oldp+105,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_4),64);
        bufp->chgQData(oldp+107,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_5),64);
        bufp->chgQData(oldp+109,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_6),64);
        bufp->chgQData(oldp+111,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_7),64);
        bufp->chgQData(oldp+113,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_8),64);
        bufp->chgQData(oldp+115,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_0),64);
        bufp->chgQData(oldp+117,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_1),64);
        bufp->chgQData(oldp+119,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_2),64);
        bufp->chgQData(oldp+121,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_3),64);
        bufp->chgQData(oldp+123,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_4),64);
        bufp->chgQData(oldp+125,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_5),64);
        bufp->chgQData(oldp+127,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_6),64);
        bufp->chgQData(oldp+129,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_7),64);
        bufp->chgQData(oldp+131,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_8),64);
        bufp->chgSData(oldp+133,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_0),16);
        bufp->chgSData(oldp+134,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_1),16);
        bufp->chgSData(oldp+135,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_2),16);
        bufp->chgSData(oldp+136,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_3),16);
        bufp->chgSData(oldp+137,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_4),16);
        bufp->chgSData(oldp+138,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_5),16);
        bufp->chgSData(oldp+139,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_6),16);
        bufp->chgSData(oldp+140,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_7),16);
        bufp->chgSData(oldp+141,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_8),16);
        bufp->chgBit(oldp+142,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_0));
        bufp->chgBit(oldp+143,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_1));
        bufp->chgBit(oldp+144,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_2));
        bufp->chgBit(oldp+145,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_3));
        bufp->chgBit(oldp+146,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_4));
        bufp->chgBit(oldp+147,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_5));
        bufp->chgBit(oldp+148,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_6));
        bufp->chgBit(oldp+149,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_7));
        bufp->chgBit(oldp+150,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_8));
        bufp->chgQData(oldp+151,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_1),64);
        bufp->chgQData(oldp+153,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_2),64);
        bufp->chgQData(oldp+155,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_4),64);
        bufp->chgQData(oldp+157,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_5),64);
        bufp->chgQData(oldp+159,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_7),64);
        bufp->chgQData(oldp+161,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_8),64);
        bufp->chgQData(oldp+163,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_1),64);
        bufp->chgQData(oldp+165,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_2),64);
        bufp->chgQData(oldp+167,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_4),64);
        bufp->chgQData(oldp+169,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_5),64);
        bufp->chgQData(oldp+171,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_7),64);
        bufp->chgQData(oldp+173,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_8),64);
        bufp->chgSData(oldp+175,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_1),16);
        bufp->chgSData(oldp+176,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_2),16);
        bufp->chgSData(oldp+177,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_4),16);
        bufp->chgSData(oldp+178,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_5),16);
        bufp->chgSData(oldp+179,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_7),16);
        bufp->chgSData(oldp+180,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_8),16);
        bufp->chgBit(oldp+181,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_1));
        bufp->chgBit(oldp+182,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_2));
        bufp->chgBit(oldp+183,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_4));
        bufp->chgBit(oldp+184,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_5));
        bufp->chgBit(oldp+185,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_7));
        bufp->chgBit(oldp+186,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_8));
        bufp->chgQData(oldp+187,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a_0),64);
        bufp->chgBit(oldp+189,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid_0));
        bufp->chgQData(oldp+190,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_0),64);
        bufp->chgQData(oldp+192,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_1),64);
        bufp->chgQData(oldp+194,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_2),64);
        bufp->chgQData(oldp+196,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_3),64);
        bufp->chgQData(oldp+198,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_4),64);
        bufp->chgQData(oldp+200,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_5),64);
        bufp->chgQData(oldp+202,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_6),64);
        bufp->chgQData(oldp+204,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_7),64);
        bufp->chgQData(oldp+206,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_8),64);
        bufp->chgQData(oldp+208,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_0),64);
        bufp->chgQData(oldp+210,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_1),64);
        bufp->chgQData(oldp+212,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_2),64);
        bufp->chgQData(oldp+214,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_3),64);
        bufp->chgQData(oldp+216,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_4),64);
        bufp->chgQData(oldp+218,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_5),64);
        bufp->chgQData(oldp+220,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_6),64);
        bufp->chgQData(oldp+222,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_7),64);
        bufp->chgQData(oldp+224,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_8),64);
        bufp->chgSData(oldp+226,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_0),16);
        bufp->chgSData(oldp+227,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_1),16);
        bufp->chgSData(oldp+228,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_2),16);
        bufp->chgSData(oldp+229,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_3),16);
        bufp->chgSData(oldp+230,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_4),16);
        bufp->chgSData(oldp+231,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_5),16);
        bufp->chgSData(oldp+232,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_6),16);
        bufp->chgSData(oldp+233,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_7),16);
        bufp->chgSData(oldp+234,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_8),16);
        bufp->chgBit(oldp+235,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_0));
        bufp->chgBit(oldp+236,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_1));
        bufp->chgBit(oldp+237,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_2));
        bufp->chgBit(oldp+238,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_3));
        bufp->chgBit(oldp+239,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_4));
        bufp->chgBit(oldp+240,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_5));
        bufp->chgBit(oldp+241,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_6));
        bufp->chgBit(oldp+242,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_7));
        bufp->chgBit(oldp+243,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_8));
        bufp->chgQData(oldp+244,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_0),64);
        bufp->chgQData(oldp+246,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_1),64);
        bufp->chgQData(oldp+248,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_2),64);
        bufp->chgQData(oldp+250,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_3),64);
        bufp->chgQData(oldp+252,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_4),64);
        bufp->chgQData(oldp+254,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_5),64);
        bufp->chgQData(oldp+256,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_6),64);
        bufp->chgQData(oldp+258,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_7),64);
        bufp->chgQData(oldp+260,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_8),64);
        bufp->chgQData(oldp+262,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_0),64);
        bufp->chgQData(oldp+264,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_1),64);
        bufp->chgQData(oldp+266,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_2),64);
        bufp->chgQData(oldp+268,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_3),64);
        bufp->chgQData(oldp+270,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_4),64);
        bufp->chgQData(oldp+272,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_5),64);
        bufp->chgQData(oldp+274,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_6),64);
        bufp->chgQData(oldp+276,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_7),64);
        bufp->chgQData(oldp+278,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_8),64);
        bufp->chgSData(oldp+280,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_0),16);
        bufp->chgSData(oldp+281,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_1),16);
        bufp->chgSData(oldp+282,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_2),16);
        bufp->chgSData(oldp+283,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_3),16);
        bufp->chgSData(oldp+284,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_4),16);
        bufp->chgSData(oldp+285,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_5),16);
        bufp->chgSData(oldp+286,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_6),16);
        bufp->chgSData(oldp+287,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_7),16);
        bufp->chgSData(oldp+288,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_8),16);
        bufp->chgBit(oldp+289,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_0));
        bufp->chgBit(oldp+290,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_1));
        bufp->chgBit(oldp+291,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_2));
        bufp->chgBit(oldp+292,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_3));
        bufp->chgBit(oldp+293,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_4));
        bufp->chgBit(oldp+294,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_5));
        bufp->chgBit(oldp+295,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_6));
        bufp->chgBit(oldp+296,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_7));
        bufp->chgBit(oldp+297,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_8));
        bufp->chgQData(oldp+298,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_0),64);
        bufp->chgQData(oldp+300,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_1),64);
        bufp->chgQData(oldp+302,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_2),64);
        bufp->chgQData(oldp+304,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_3),64);
        bufp->chgQData(oldp+306,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_4),64);
        bufp->chgQData(oldp+308,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_5),64);
        bufp->chgQData(oldp+310,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_6),64);
        bufp->chgQData(oldp+312,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_7),64);
        bufp->chgQData(oldp+314,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_8),64);
        bufp->chgQData(oldp+316,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_0),64);
        bufp->chgQData(oldp+318,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_1),64);
        bufp->chgQData(oldp+320,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_2),64);
        bufp->chgQData(oldp+322,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_3),64);
        bufp->chgQData(oldp+324,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_4),64);
        bufp->chgQData(oldp+326,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_5),64);
        bufp->chgQData(oldp+328,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_6),64);
        bufp->chgQData(oldp+330,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_7),64);
        bufp->chgQData(oldp+332,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_8),64);
        bufp->chgSData(oldp+334,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_0),16);
        bufp->chgSData(oldp+335,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_1),16);
        bufp->chgSData(oldp+336,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_2),16);
        bufp->chgSData(oldp+337,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_3),16);
        bufp->chgSData(oldp+338,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_4),16);
        bufp->chgSData(oldp+339,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_5),16);
        bufp->chgSData(oldp+340,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_6),16);
        bufp->chgSData(oldp+341,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_7),16);
        bufp->chgSData(oldp+342,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_8),16);
        bufp->chgBit(oldp+343,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_0));
        bufp->chgBit(oldp+344,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_1));
        bufp->chgBit(oldp+345,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_2));
        bufp->chgBit(oldp+346,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_3));
        bufp->chgBit(oldp+347,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_4));
        bufp->chgBit(oldp+348,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_5));
        bufp->chgBit(oldp+349,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_6));
        bufp->chgBit(oldp+350,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_7));
        bufp->chgBit(oldp+351,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_8));
        bufp->chgQData(oldp+352,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_0),64);
        bufp->chgQData(oldp+354,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_1),64);
        bufp->chgQData(oldp+356,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_2),64);
        bufp->chgQData(oldp+358,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_3),64);
        bufp->chgQData(oldp+360,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_4),64);
        bufp->chgQData(oldp+362,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_5),64);
        bufp->chgQData(oldp+364,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_6),64);
        bufp->chgQData(oldp+366,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_7),64);
        bufp->chgQData(oldp+368,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_8),64);
        bufp->chgQData(oldp+370,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_0),64);
        bufp->chgQData(oldp+372,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_1),64);
        bufp->chgQData(oldp+374,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_2),64);
        bufp->chgQData(oldp+376,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_3),64);
        bufp->chgQData(oldp+378,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_4),64);
        bufp->chgQData(oldp+380,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_5),64);
        bufp->chgQData(oldp+382,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_6),64);
        bufp->chgQData(oldp+384,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_7),64);
        bufp->chgQData(oldp+386,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_8),64);
        bufp->chgSData(oldp+388,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_0),16);
        bufp->chgSData(oldp+389,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_1),16);
        bufp->chgSData(oldp+390,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_2),16);
        bufp->chgSData(oldp+391,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_3),16);
        bufp->chgSData(oldp+392,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_4),16);
        bufp->chgSData(oldp+393,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_5),16);
        bufp->chgSData(oldp+394,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_6),16);
        bufp->chgSData(oldp+395,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_7),16);
        bufp->chgSData(oldp+396,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_8),16);
        bufp->chgBit(oldp+397,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_0));
        bufp->chgBit(oldp+398,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_1));
        bufp->chgBit(oldp+399,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_2));
        bufp->chgBit(oldp+400,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_3));
        bufp->chgBit(oldp+401,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_4));
        bufp->chgBit(oldp+402,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_5));
        bufp->chgBit(oldp+403,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_6));
        bufp->chgBit(oldp+404,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_7));
        bufp->chgBit(oldp+405,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_8));
        bufp->chgQData(oldp+406,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_0),64);
        bufp->chgQData(oldp+408,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_1),64);
        bufp->chgQData(oldp+410,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_2),64);
        bufp->chgQData(oldp+412,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_3),64);
        bufp->chgQData(oldp+414,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_4),64);
        bufp->chgQData(oldp+416,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_5),64);
        bufp->chgQData(oldp+418,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_6),64);
        bufp->chgQData(oldp+420,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_7),64);
        bufp->chgQData(oldp+422,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_8),64);
        bufp->chgQData(oldp+424,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_0),64);
        bufp->chgQData(oldp+426,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_1),64);
        bufp->chgQData(oldp+428,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_2),64);
        bufp->chgQData(oldp+430,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_3),64);
        bufp->chgQData(oldp+432,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_4),64);
        bufp->chgQData(oldp+434,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_5),64);
        bufp->chgQData(oldp+436,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_6),64);
        bufp->chgQData(oldp+438,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_7),64);
        bufp->chgQData(oldp+440,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_8),64);
        bufp->chgSData(oldp+442,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_0),16);
        bufp->chgSData(oldp+443,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_1),16);
        bufp->chgSData(oldp+444,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_2),16);
        bufp->chgSData(oldp+445,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_3),16);
        bufp->chgSData(oldp+446,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_4),16);
        bufp->chgSData(oldp+447,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_5),16);
        bufp->chgSData(oldp+448,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_6),16);
        bufp->chgSData(oldp+449,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_7),16);
        bufp->chgSData(oldp+450,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_8),16);
        bufp->chgBit(oldp+451,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_0));
        bufp->chgBit(oldp+452,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_1));
        bufp->chgBit(oldp+453,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_2));
        bufp->chgBit(oldp+454,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_3));
        bufp->chgBit(oldp+455,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_4));
        bufp->chgBit(oldp+456,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_5));
        bufp->chgBit(oldp+457,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_6));
        bufp->chgBit(oldp+458,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_7));
        bufp->chgBit(oldp+459,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_8));
        bufp->chgBit(oldp+460,(vlSelfRef.calculator__DOT__int_con__DOT__is_busy));
        bufp->chgBit(oldp+461,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_0) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_0) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_0) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_0) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_0)))))));
        bufp->chgQData(oldp+462,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a),64);
        bufp->chgQData(oldp+464,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b),64);
        bufp->chgSData(oldp+466,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+467,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid));
        bufp->chgBit(oldp+468,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+469,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+470,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+471,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+472,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest));
        bufp->chgQData(oldp+473,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result),64);
        bufp->chgSData(oldp+475,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+476,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_1) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_1) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_1) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_1) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_1)))))));
        bufp->chgQData(oldp+477,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a),64);
        bufp->chgQData(oldp+479,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b),64);
        bufp->chgSData(oldp+481,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+482,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid));
        bufp->chgBit(oldp+483,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+484,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+485,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+486,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+487,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest));
        bufp->chgQData(oldp+488,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result),64);
        bufp->chgSData(oldp+490,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+491,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_2) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_2) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_2) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_2) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_2)))))));
        bufp->chgQData(oldp+492,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a),64);
        bufp->chgQData(oldp+494,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b),64);
        bufp->chgSData(oldp+496,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+497,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+499,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+500,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+501,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+502,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest));
        bufp->chgQData(oldp+503,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result),64);
        bufp->chgSData(oldp+505,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+506,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_3) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_3) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_3) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_3) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_3)))))));
        bufp->chgQData(oldp+507,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a),64);
        bufp->chgQData(oldp+509,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b),64);
        bufp->chgSData(oldp+511,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+512,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid));
        bufp->chgBit(oldp+513,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+514,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+515,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+516,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+517,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest));
        bufp->chgQData(oldp+518,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result),64);
        bufp->chgSData(oldp+520,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+521,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_4) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_4) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_4) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_4) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_4)))))));
        bufp->chgQData(oldp+522,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a),64);
        bufp->chgQData(oldp+524,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b),64);
        bufp->chgSData(oldp+526,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+527,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid));
        bufp->chgBit(oldp+528,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+529,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+530,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+531,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+532,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest));
        bufp->chgQData(oldp+533,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result),64);
        bufp->chgSData(oldp+535,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+536,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_5) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_5) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_5) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_5) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_5)))))));
        bufp->chgQData(oldp+537,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a),64);
        bufp->chgQData(oldp+539,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b),64);
        bufp->chgSData(oldp+541,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+542,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid));
        bufp->chgBit(oldp+543,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+544,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+545,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+546,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+547,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest));
        bufp->chgQData(oldp+548,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result),64);
        bufp->chgSData(oldp+550,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+551,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_6) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_6) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_6) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_6) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_6)))))));
        bufp->chgQData(oldp+552,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a),64);
        bufp->chgQData(oldp+554,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b),64);
        bufp->chgSData(oldp+556,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+557,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid));
        bufp->chgBit(oldp+558,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+559,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+560,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+561,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+562,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest));
        bufp->chgQData(oldp+563,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result),64);
        bufp->chgSData(oldp+565,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+566,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_7) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_7) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_7) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_7) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_7)))))));
        bufp->chgQData(oldp+567,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a),64);
        bufp->chgQData(oldp+569,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b),64);
        bufp->chgSData(oldp+571,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+572,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid));
        bufp->chgBit(oldp+573,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+574,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+575,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+576,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+577,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest));
        bufp->chgQData(oldp+578,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result),64);
        bufp->chgSData(oldp+580,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgBit(oldp+581,(((IData)(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_8) 
                                | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_8) 
                                   | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_8) 
                                      | ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_8) 
                                         | (IData)(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_8)))))));
        bufp->chgQData(oldp+582,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a),64);
        bufp->chgQData(oldp+584,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b),64);
        bufp->chgSData(oldp+586,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+587,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid));
        bufp->chgBit(oldp+588,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+589,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+590,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+591,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+592,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest));
        bufp->chgQData(oldp+593,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result),64);
        bufp->chgSData(oldp+595,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    }
    bufp->chgBit(oldp+596,(vlSelfRef.clk));
    bufp->chgQData(oldp+597,(vlSelfRef.a),64);
    bufp->chgQData(oldp+599,(vlSelfRef.b),64);
    bufp->chgCData(oldp+601,(vlSelfRef.mode),4);
    bufp->chgQData(oldp+602,(vlSelfRef.result),64);
    bufp->chgBit(oldp+604,(vlSelfRef.valid));
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
