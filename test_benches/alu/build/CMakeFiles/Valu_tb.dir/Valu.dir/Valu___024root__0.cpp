// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu___024root___eval_triggers_vec__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers_vec__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(4, vlSelfRef.__Vcellinp__ALU__ALU_funct, vlSelfRef.ALU_funct);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__ALU__in1, vlSelfRef.in1);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__ALU__in2, vlSelfRef.in2);
    if (((IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__ALU_funct))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__ALU__ALU_funct, vlSelfRef.ALU__DOT____Vtogcov__ALU_funct);
        vlSelfRef.ALU__DOT____Vtogcov__ALU_funct = vlSelfRef.__Vcellinp__ALU__ALU_funct;
    }
    if ((vlSelfRef.__Vcellinp__ALU__in1 ^ vlSelfRef.ALU__DOT____Vtogcov__in1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8, vlSelfRef.__Vcellinp__ALU__in1, vlSelfRef.ALU__DOT____Vtogcov__in1);
        vlSelfRef.ALU__DOT____Vtogcov__in1 = vlSelfRef.__Vcellinp__ALU__in1;
    }
    if (((vlSelfRef.__Vcellinp__ALU__in1 >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__A))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 334, 
                               (vlSelfRef.__Vcellinp__ALU__in1 
                                >> 0x0000001fU), vlSelfRef.ALU__DOT____Vtogcov__A);
        vlSelfRef.ALU__DOT____Vtogcov__A = (vlSelfRef.__Vcellinp__ALU__in1 
                                            >> 0x0000001fU);
    }
    if ((vlSelfRef.__Vcellinp__ALU__in2 ^ vlSelfRef.ALU__DOT____Vtogcov__in2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 72, vlSelfRef.__Vcellinp__ALU__in2, vlSelfRef.ALU__DOT____Vtogcov__in2);
        vlSelfRef.ALU__DOT____Vtogcov__in2 = vlSelfRef.__Vcellinp__ALU__in2;
    }
    if (((vlSelfRef.__Vcellinp__ALU__in2 >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__B))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 336, 
                               (vlSelfRef.__Vcellinp__ALU__in2 
                                >> 0x0000001fU), vlSelfRef.ALU__DOT____Vtogcov__B);
        vlSelfRef.ALU__DOT____Vtogcov__B = (vlSelfRef.__Vcellinp__ALU__in2 
                                            >> 0x0000001fU);
    }
    if (((~ vlSelfRef.__Vcellinp__ALU__in2) ^ vlSelfRef.ALU__DOT__s1__DOT____Vtogcov__B)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 551, 
                               (~ vlSelfRef.__Vcellinp__ALU__in2), vlSelfRef.ALU__DOT__s1__DOT____Vtogcov__B);
        vlSelfRef.ALU__DOT__s1__DOT____Vtogcov__B = 
            (~ vlSelfRef.__Vcellinp__ALU__in2);
    }
    vlSelfRef.ALU__DOT__a1_carry_flag = (1U & (IData)(
                                                      (1ULL 
                                                       & (((QData)((IData)(vlSelfRef.__Vcellinp__ALU__in2)) 
                                                           + (QData)((IData)(vlSelfRef.__Vcellinp__ALU__in1))) 
                                                          >> 0x00000020U))));
    vlSelfRef.ALU__DOT__a1_out = (vlSelfRef.__Vcellinp__ALU__in1 
                                  + vlSelfRef.__Vcellinp__ALU__in2);
    vlSelfRef.ALU__DOT__s1_carry_flag = (1U & (IData)(
                                                      (1ULL 
                                                       & ((1ULL 
                                                           + 
                                                           ((QData)((IData)(vlSelfRef.__Vcellinp__ALU__in1)) 
                                                            + (QData)((IData)(
                                                                              (~ vlSelfRef.__Vcellinp__ALU__in2))))) 
                                                          >> 0x00000020U))));
    if ((1U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_0 
            = (vlSelfRef.__Vcellinp__ALU__in1 << 1U);
    } else {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_0 
            = vlSelfRef.__Vcellinp__ALU__in1;
    }
    vlSelfRef.ALU__DOT__sll__DOT__s1 = vlSelfRef.ALU__DOT__sll__DOT____VlemCond_0;
    if ((1U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_0 
            = (vlSelfRef.__Vcellinp__ALU__in1 >> 1U);
    } else {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_0 
            = vlSelfRef.__Vcellinp__ALU__in1;
    }
    vlSelfRef.ALU__DOT__srl__DOT__s1 = vlSelfRef.ALU__DOT__srl__DOT____VlemCond_0;
    vlSelfRef.ALU__DOT__s1_out = ((IData)(1U) + (vlSelfRef.__Vcellinp__ALU__in1 
                                                 + 
                                                 (~ vlSelfRef.__Vcellinp__ALU__in2)));
    if ((1U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_0 
            = ((0x80000000U & vlSelfRef.__Vcellinp__ALU__in1) 
               | (vlSelfRef.__Vcellinp__ALU__in1 >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_0 
            = vlSelfRef.__Vcellinp__ALU__in1;
    }
    vlSelfRef.ALU__DOT__sra__DOT__s1 = vlSelfRef.ALU__DOT__sra__DOT____VlemCond_0;
    if (((IData)(vlSelfRef.ALU__DOT__a1_carry_flag) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__a1_carry_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 340, vlSelfRef.ALU__DOT__a1_carry_flag, vlSelfRef.ALU__DOT____Vtogcov__a1_carry_flag);
        vlSelfRef.ALU__DOT____Vtogcov__a1_carry_flag 
            = vlSelfRef.ALU__DOT__a1_carry_flag;
    }
    if ((vlSelfRef.ALU__DOT__a1_out ^ vlSelfRef.ALU__DOT____Vtogcov__a1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 206, vlSelfRef.ALU__DOT__a1_out, vlSelfRef.ALU__DOT____Vtogcov__a1_out);
        vlSelfRef.ALU__DOT____Vtogcov__a1_out = vlSelfRef.ALU__DOT__a1_out;
    }
    VL_ASSIGN_SII(1, vlSelfRef.unsigned_less_than, 
                  (1U & (~ (IData)(vlSelfRef.ALU__DOT__s1_carry_flag))));
    if ((1U ^ ((IData)(vlSelfRef.ALU__DOT__s1_carry_flag) 
               ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__unsigned_less_than)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 202, 
                               (~ (IData)(vlSelfRef.ALU__DOT__s1_carry_flag)), vlSelfRef.ALU__DOT____Vtogcov__unsigned_less_than);
        vlSelfRef.ALU__DOT____Vtogcov__unsigned_less_than 
            = (1U & (~ (IData)(vlSelfRef.ALU__DOT__s1_carry_flag)));
    }
    if (((IData)(vlSelfRef.ALU__DOT__s1_carry_flag) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__s1_carry_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 342, vlSelfRef.ALU__DOT__s1_carry_flag, vlSelfRef.ALU__DOT____Vtogcov__s1_carry_flag);
        vlSelfRef.ALU__DOT____Vtogcov__s1_carry_flag 
            = vlSelfRef.ALU__DOT__s1_carry_flag;
    }
    if ((vlSelfRef.ALU__DOT__sll__DOT__s1 ^ vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 617, vlSelfRef.ALU__DOT__sll__DOT__s1, vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s1);
        vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s1 
            = vlSelfRef.ALU__DOT__sll__DOT__s1;
    }
    if ((2U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_1 
            = (vlSelfRef.ALU__DOT__sll__DOT__s1 << 2U);
    } else {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_1 
            = vlSelfRef.ALU__DOT__sll__DOT__s1;
    }
    vlSelfRef.ALU__DOT__sll__DOT__s2 = vlSelfRef.ALU__DOT__sll__DOT____VlemCond_1;
    if ((vlSelfRef.ALU__DOT__srl__DOT__s1 ^ vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 883, vlSelfRef.ALU__DOT__srl__DOT__s1, vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s1);
        vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s1 
            = vlSelfRef.ALU__DOT__srl__DOT__s1;
    }
    if ((2U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_1 
            = (vlSelfRef.ALU__DOT__srl__DOT__s1 >> 2U);
    } else {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_1 
            = vlSelfRef.ALU__DOT__srl__DOT__s1;
    }
    vlSelfRef.ALU__DOT__srl__DOT__s2 = vlSelfRef.ALU__DOT__srl__DOT____VlemCond_1;
    VL_ASSIGN_SII(1, vlSelfRef.zero_flag, (0U == vlSelfRef.ALU__DOT__s1_out));
    if (((0U == vlSelfRef.ALU__DOT__s1_out) ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__zero_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 200, 
                               (0U == vlSelfRef.ALU__DOT__s1_out), vlSelfRef.ALU__DOT____Vtogcov__zero_flag);
        vlSelfRef.ALU__DOT____Vtogcov__zero_flag = 
            (0U == vlSelfRef.ALU__DOT__s1_out);
    }
    if ((vlSelfRef.ALU__DOT__s1_out ^ vlSelfRef.ALU__DOT____Vtogcov__s1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 270, vlSelfRef.ALU__DOT__s1_out, vlSelfRef.ALU__DOT____Vtogcov__s1_out);
        vlSelfRef.ALU__DOT____Vtogcov__s1_out = vlSelfRef.ALU__DOT__s1_out;
    }
    if (((vlSelfRef.ALU__DOT__s1_out >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__C))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 338, 
                               (vlSelfRef.ALU__DOT__s1_out 
                                >> 0x0000001fU), vlSelfRef.ALU__DOT____Vtogcov__C);
        vlSelfRef.ALU__DOT____Vtogcov__C = (vlSelfRef.ALU__DOT__s1_out 
                                            >> 0x0000001fU);
    }
    vlSelfRef.ALU__DOT__signed_less_than = (1U & ((
                                                   (~ 
                                                    (vlSelfRef.__Vcellinp__ALU__in2 
                                                     >> 0x0000001fU)) 
                                                   & (vlSelfRef.ALU__DOT__s1_out 
                                                      >> 0x0000001fU)) 
                                                  | ((vlSelfRef.__Vcellinp__ALU__in1 
                                                      >> 0x0000001fU) 
                                                     & ((~ 
                                                         (vlSelfRef.__Vcellinp__ALU__in2 
                                                          >> 0x0000001fU)) 
                                                        | (vlSelfRef.ALU__DOT__s1_out 
                                                           >> 0x0000001fU)))));
    if ((vlSelfRef.ALU__DOT__sra__DOT__s1 ^ vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1149, vlSelfRef.ALU__DOT__sra__DOT__s1, vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s1);
        vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s1 
            = vlSelfRef.ALU__DOT__sra__DOT__s1;
    }
    if ((2U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_1 
            = (((- (IData)((vlSelfRef.__Vcellinp__ALU__in1 
                            >> 0x1fU))) << 0x0000001eU) 
               | (vlSelfRef.ALU__DOT__sra__DOT__s1 
                  >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_1 
            = vlSelfRef.ALU__DOT__sra__DOT__s1;
    }
    vlSelfRef.ALU__DOT__sra__DOT__s2 = vlSelfRef.ALU__DOT__sra__DOT____VlemCond_1;
    if ((vlSelfRef.ALU__DOT__sll__DOT__s2 ^ vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 681, vlSelfRef.ALU__DOT__sll__DOT__s2, vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s2);
        vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s2 
            = vlSelfRef.ALU__DOT__sll__DOT__s2;
    }
    if ((4U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_2 
            = (vlSelfRef.ALU__DOT__sll__DOT__s2 << 4U);
    } else {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_2 
            = vlSelfRef.ALU__DOT__sll__DOT__s2;
    }
    vlSelfRef.ALU__DOT__sll__DOT__s3 = vlSelfRef.ALU__DOT__sll__DOT____VlemCond_2;
    if ((vlSelfRef.ALU__DOT__srl__DOT__s2 ^ vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 947, vlSelfRef.ALU__DOT__srl__DOT__s2, vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s2);
        vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s2 
            = vlSelfRef.ALU__DOT__srl__DOT__s2;
    }
    if ((4U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_2 
            = (vlSelfRef.ALU__DOT__srl__DOT__s2 >> 4U);
    } else {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_2 
            = vlSelfRef.ALU__DOT__srl__DOT__s2;
    }
    vlSelfRef.ALU__DOT__srl__DOT__s3 = vlSelfRef.ALU__DOT__srl__DOT____VlemCond_2;
    VL_ASSIGN_SII(1, vlSelfRef.signed_less_than, vlSelfRef.ALU__DOT__signed_less_than);
    if (((IData)(vlSelfRef.ALU__DOT__signed_less_than) 
         ^ (IData)(vlSelfRef.ALU__DOT____Vtogcov__signed_less_than))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 204, vlSelfRef.ALU__DOT__signed_less_than, vlSelfRef.ALU__DOT____Vtogcov__signed_less_than);
        vlSelfRef.ALU__DOT____Vtogcov__signed_less_than 
            = vlSelfRef.ALU__DOT__signed_less_than;
    }
    if ((vlSelfRef.ALU__DOT__sra__DOT__s2 ^ vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1213, vlSelfRef.ALU__DOT__sra__DOT__s2, vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s2);
        vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s2 
            = vlSelfRef.ALU__DOT__sra__DOT__s2;
    }
    if ((4U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_2 
            = (((- (IData)((vlSelfRef.__Vcellinp__ALU__in1 
                            >> 0x1fU))) << 0x0000001cU) 
               | (vlSelfRef.ALU__DOT__sra__DOT__s2 
                  >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_2 
            = vlSelfRef.ALU__DOT__sra__DOT__s2;
    }
    vlSelfRef.ALU__DOT__sra__DOT__s3 = vlSelfRef.ALU__DOT__sra__DOT____VlemCond_2;
    if ((vlSelfRef.ALU__DOT__sll__DOT__s3 ^ vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 745, vlSelfRef.ALU__DOT__sll__DOT__s3, vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s3);
        vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s3 
            = vlSelfRef.ALU__DOT__sll__DOT__s3;
    }
    if ((8U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_3 
            = (vlSelfRef.ALU__DOT__sll__DOT__s3 << 8U);
    } else {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_3 
            = vlSelfRef.ALU__DOT__sll__DOT__s3;
    }
    vlSelfRef.ALU__DOT__sll__DOT__s4 = vlSelfRef.ALU__DOT__sll__DOT____VlemCond_3;
    if ((vlSelfRef.ALU__DOT__srl__DOT__s3 ^ vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1011, vlSelfRef.ALU__DOT__srl__DOT__s3, vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s3);
        vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s3 
            = vlSelfRef.ALU__DOT__srl__DOT__s3;
    }
    if ((8U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_3 
            = (vlSelfRef.ALU__DOT__srl__DOT__s3 >> 8U);
    } else {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_3 
            = vlSelfRef.ALU__DOT__srl__DOT__s3;
    }
    vlSelfRef.ALU__DOT__srl__DOT__s4 = vlSelfRef.ALU__DOT__srl__DOT____VlemCond_3;
    if ((vlSelfRef.ALU__DOT__sra__DOT__s3 ^ vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1277, vlSelfRef.ALU__DOT__sra__DOT__s3, vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s3);
        vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s3 
            = vlSelfRef.ALU__DOT__sra__DOT__s3;
    }
    if ((8U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_3 
            = (((- (IData)((vlSelfRef.__Vcellinp__ALU__in1 
                            >> 0x1fU))) << 0x00000018U) 
               | (vlSelfRef.ALU__DOT__sra__DOT__s3 
                  >> 8U));
    } else {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_3 
            = vlSelfRef.ALU__DOT__sra__DOT__s3;
    }
    vlSelfRef.ALU__DOT__sra__DOT__s4 = vlSelfRef.ALU__DOT__sra__DOT____VlemCond_3;
    if ((vlSelfRef.ALU__DOT__sll__DOT__s4 ^ vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 809, vlSelfRef.ALU__DOT__sll__DOT__s4, vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s4);
        vlSelfRef.ALU__DOT__sll__DOT____Vtogcov__s4 
            = vlSelfRef.ALU__DOT__sll__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_4 
            = (vlSelfRef.ALU__DOT__sll__DOT__s4 << 0x00000010U);
    } else {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.ALU__DOT__sll__DOT____VlemCond_4 
            = vlSelfRef.ALU__DOT__sll__DOT__s4;
    }
    vlSelfRef.ALU__DOT__sll_out = vlSelfRef.ALU__DOT__sll__DOT____VlemCond_4;
    if ((vlSelfRef.ALU__DOT__srl__DOT__s4 ^ vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1075, vlSelfRef.ALU__DOT__srl__DOT__s4, vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s4);
        vlSelfRef.ALU__DOT__srl__DOT____Vtogcov__s4 
            = vlSelfRef.ALU__DOT__srl__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_4 
            = (vlSelfRef.ALU__DOT__srl__DOT__s4 >> 0x10U);
    } else {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelfRef.ALU__DOT__srl__DOT____VlemCond_4 
            = vlSelfRef.ALU__DOT__srl__DOT__s4;
    }
    vlSelfRef.ALU__DOT__srl_out = vlSelfRef.ALU__DOT__srl__DOT____VlemCond_4;
    if ((vlSelfRef.ALU__DOT__sra__DOT__s4 ^ vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1341, vlSelfRef.ALU__DOT__sra__DOT__s4, vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s4);
        vlSelfRef.ALU__DOT__sra__DOT____Vtogcov__s4 
            = vlSelfRef.ALU__DOT__sra__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.__Vcellinp__ALU__in2)) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_4 
            = (((- (IData)((vlSelfRef.__Vcellinp__ALU__in1 
                            >> 0x1fU))) << 0x00000010U) 
               | (vlSelfRef.ALU__DOT__sra__DOT__s4 
                  >> 0x10U));
    } else {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelfRef.ALU__DOT__sra__DOT____VlemCond_4 
            = vlSelfRef.ALU__DOT__sra__DOT__s4;
    }
    vlSelfRef.ALU__DOT__sra_out = vlSelfRef.ALU__DOT__sra__DOT____VlemCond_4;
    if ((vlSelfRef.ALU__DOT__sll_out ^ vlSelfRef.ALU__DOT____Vtogcov__sll_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 344, vlSelfRef.ALU__DOT__sll_out, vlSelfRef.ALU__DOT____Vtogcov__sll_out);
        vlSelfRef.ALU__DOT____Vtogcov__sll_out = vlSelfRef.ALU__DOT__sll_out;
    }
    if ((vlSelfRef.ALU__DOT__srl_out ^ vlSelfRef.ALU__DOT____Vtogcov__srl_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 408, vlSelfRef.ALU__DOT__srl_out, vlSelfRef.ALU__DOT____Vtogcov__srl_out);
        vlSelfRef.ALU__DOT____Vtogcov__srl_out = vlSelfRef.ALU__DOT__srl_out;
    }
    if ((vlSelfRef.ALU__DOT__sra_out ^ vlSelfRef.ALU__DOT____Vtogcov__sra_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 472, vlSelfRef.ALU__DOT__sra_out, vlSelfRef.ALU__DOT____Vtogcov__sra_out);
        vlSelfRef.ALU__DOT____Vtogcov__sra_out = vlSelfRef.ALU__DOT__sra_out;
    }
    vlSelfRef.__Vcellout__ALU__out = 0U;
    if ((8U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
        if ((4U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
            ++(vlSymsp->__Vcoverage[547]);
        } else if ((2U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
            if ((1U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
                ++(vlSymsp->__Vcoverage[547]);
            } else {
                vlSelfRef.__Vcellout__ALU__out = (0xfffffffeU 
                                                  & vlSelfRef.ALU__DOT__a1_out);
                ++(vlSymsp->__Vcoverage[546]);
            }
        } else if ((1U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
            vlSelfRef.__Vcellout__ALU__out = (vlSelfRef.__Vcellinp__ALU__in1 
                                              & vlSelfRef.__Vcellinp__ALU__in2);
            ++(vlSymsp->__Vcoverage[545]);
        } else {
            vlSelfRef.__Vcellout__ALU__out = (vlSelfRef.__Vcellinp__ALU__in1 
                                              | vlSelfRef.__Vcellinp__ALU__in2);
            ++(vlSymsp->__Vcoverage[544]);
        }
    } else if ((4U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
        if ((2U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
            if ((1U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
                vlSelfRef.__Vcellout__ALU__out = vlSelfRef.ALU__DOT__sra_out;
                ++(vlSymsp->__Vcoverage[543]);
            } else {
                vlSelfRef.__Vcellout__ALU__out = vlSelfRef.ALU__DOT__srl_out;
                ++(vlSymsp->__Vcoverage[542]);
            }
        } else if ((1U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
            vlSelfRef.__Vcellout__ALU__out = (vlSelfRef.__Vcellinp__ALU__in1 
                                              ^ vlSelfRef.__Vcellinp__ALU__in2);
            ++(vlSymsp->__Vcoverage[541]);
        } else {
            vlSelfRef.__Vcellout__ALU__out = (1U & 
                                              (~ (IData)(vlSelfRef.ALU__DOT__s1_carry_flag)));
            ++(vlSymsp->__Vcoverage[540]);
        }
    } else if ((2U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
        if ((1U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
            vlSelfRef.__Vcellout__ALU__out = vlSelfRef.ALU__DOT__signed_less_than;
            ++(vlSymsp->__Vcoverage[539]);
        } else {
            vlSelfRef.__Vcellout__ALU__out = vlSelfRef.ALU__DOT__sll_out;
            ++(vlSymsp->__Vcoverage[538]);
        }
    } else if ((1U & (IData)(vlSelfRef.__Vcellinp__ALU__ALU_funct))) {
        vlSelfRef.__Vcellout__ALU__out = vlSelfRef.ALU__DOT__s1_out;
        ++(vlSymsp->__Vcoverage[537]);
    } else {
        vlSelfRef.__Vcellout__ALU__out = vlSelfRef.ALU__DOT__a1_out;
        ++(vlSymsp->__Vcoverage[536]);
    }
    ++(vlSymsp->__Vcoverage[548]);
    VL_ASSIGN_SII(32, vlSelfRef.out, vlSelfRef.__Vcellout__ALU__out);
    if ((vlSelfRef.__Vcellout__ALU__out ^ vlSelfRef.ALU__DOT____Vtogcov__out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 136, vlSelfRef.__Vcellout__ALU__out, vlSelfRef.ALU__DOT____Vtogcov__out);
        vlSelfRef.ALU__DOT____Vtogcov__out = vlSelfRef.__Vcellout__ALU__out;
    }
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Valu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("alu.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Valu___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
