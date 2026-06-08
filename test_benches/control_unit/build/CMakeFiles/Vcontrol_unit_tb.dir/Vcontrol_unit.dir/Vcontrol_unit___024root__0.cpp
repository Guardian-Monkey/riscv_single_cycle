// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"

void Vcontrol_unit___024root___eval_triggers_vec__ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_triggers_vec__ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vcontrol_unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_anySet__ico\n"); );
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

void Vcontrol_unit___024root___ico_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ico_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__control_unit__signed_less_than, vlSelfRef.signed_less_than);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__control_unit__unsigned_less_than, vlSelfRef.unsigned_less_than);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__control_unit__zero_flag, vlSelfRef.zero_flag);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__control_unit__instr, vlSelfRef.instr);
    if (((IData)(vlSelfRef.__Vcellinp__control_unit__signed_less_than) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__signed_less_than))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 68, vlSelfRef.__Vcellinp__control_unit__signed_less_than, vlSelfRef.control_unit__DOT____Vtogcov__signed_less_than);
        vlSelfRef.control_unit__DOT____Vtogcov__signed_less_than 
            = vlSelfRef.__Vcellinp__control_unit__signed_less_than;
    }
    if (((IData)(vlSelfRef.__Vcellinp__control_unit__unsigned_less_than) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__unsigned_less_than))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 66, vlSelfRef.__Vcellinp__control_unit__unsigned_less_than, vlSelfRef.control_unit__DOT____Vtogcov__unsigned_less_than);
        vlSelfRef.control_unit__DOT____Vtogcov__unsigned_less_than 
            = vlSelfRef.__Vcellinp__control_unit__unsigned_less_than;
    }
    if (((IData)(vlSelfRef.__Vcellinp__control_unit__zero_flag) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__zero_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 64, vlSelfRef.__Vcellinp__control_unit__zero_flag, vlSelfRef.control_unit__DOT____Vtogcov__zero_flag);
        vlSelfRef.control_unit__DOT____Vtogcov__zero_flag 
            = vlSelfRef.__Vcellinp__control_unit__zero_flag;
    }
    if ((vlSelfRef.__Vcellinp__control_unit__instr 
         ^ vlSelfRef.control_unit__DOT____Vtogcov__instr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__control_unit__instr, vlSelfRef.control_unit__DOT____Vtogcov__instr);
        vlSelfRef.control_unit__DOT____Vtogcov__instr 
            = vlSelfRef.__Vcellinp__control_unit__instr;
    }
    vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
    vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
    vlSelfRef.__Vcellout__control_unit__mux_reg = 0U;
    vlSelfRef.__Vcellout__control_unit__WE_reg_file = 0U;
    vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
    vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
    vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 0U;
    vlSelfRef.__Vcellout__control_unit__rs1 = 0U;
    vlSelfRef.__Vcellout__control_unit__rs2 = 0U;
    vlSelfRef.__Vcellout__control_unit__rd = 0U;
    vlSelfRef.__Vcellout__control_unit__imm = 0U;
    vlSelfRef.__Vcellout__control_unit__ALU_funct = 9U;
    vlSelfRef.__Vcellout__control_unit__mem_size = 2U;
    vlSelfRef.__Vcellout__control_unit__sign_val = 1U;
    if ((0x00000040U & vlSelfRef.__Vcellinp__control_unit__instr)) {
        if ((0x00000020U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            if ((0x00000010U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                ++(vlSymsp->__Vcoverage[254]);
            } else if ((8U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((4U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                            vlSelfRef.__Vcellout__control_unit__mux_PC = 0U;
                            vlSelfRef.__Vcellout__control_unit__mux_reg = 1U;
                            vlSelfRef.__Vcellout__control_unit__WE_reg_file = 1U;
                            vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                            vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 2U;
                            vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
                            vlSelfRef.__Vcellout__control_unit__rd 
                                = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                  >> 7U));
                            vlSelfRef.__Vcellout__control_unit__imm 
                                = (((- (IData)((vlSelfRef.__Vcellinp__control_unit__instr 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.__Vcellinp__control_unit__instr 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.__Vcellinp__control_unit__instr 
                                            >> 0x00000014U))));
                            ++(vlSymsp->__Vcoverage[251]);
                        } else {
                            ++(vlSymsp->__Vcoverage[254]);
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[254]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[254]);
                }
            } else if ((4U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                        vlSelfRef.__Vcellout__control_unit__mux_PC = 0U;
                        vlSelfRef.__Vcellout__control_unit__mux_reg = 1U;
                        vlSelfRef.__Vcellout__control_unit__WE_reg_file = 1U;
                        vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                        vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
                        vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
                        vlSelfRef.__Vcellout__control_unit__ALU_funct = 0x0aU;
                        vlSelfRef.__Vcellout__control_unit__rd 
                            = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                              >> 7U));
                        vlSelfRef.__Vcellout__control_unit__rs1 
                            = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                              >> 0x0fU));
                        vlSelfRef.__Vcellout__control_unit__imm 
                            = (((- (IData)((vlSelfRef.__Vcellinp__control_unit__instr 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.__Vcellinp__control_unit__instr 
                                                   >> 0x14U));
                        ++(vlSymsp->__Vcoverage[250]);
                    } else {
                        ++(vlSymsp->__Vcoverage[254]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[254]);
                }
            } else if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
                    vlSelfRef.__Vcellout__control_unit__mux_reg = 0U;
                    vlSelfRef.__Vcellout__control_unit__WE_reg_file = 0U;
                    vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 0U;
                    vlSelfRef.__Vcellout__control_unit__rs1 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 0x0fU));
                    vlSelfRef.__Vcellout__control_unit__rs2 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 0x14U));
                    vlSelfRef.__Vcellout__control_unit__ALU_funct = 1U;
                    vlSelfRef.__Vcellout__control_unit__imm 
                        = (((- (IData)((vlSelfRef.__Vcellinp__control_unit__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                        >> 7U)))));
                    if ((0x00004000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                                vlSelfRef.__Vcellout__control_unit__mux_adder 
                                    = (1U & (~ (IData)(vlSelfRef.__Vcellinp__control_unit__unsigned_less_than)));
                                ++(vlSymsp->__Vcoverage[247]);
                            } else {
                                vlSelfRef.__Vcellout__control_unit__mux_adder 
                                    = vlSelfRef.__Vcellinp__control_unit__unsigned_less_than;
                                ++(vlSymsp->__Vcoverage[244]);
                            }
                        } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            vlSelfRef.__Vcellout__control_unit__mux_adder 
                                = (1U & (~ (IData)(vlSelfRef.__Vcellinp__control_unit__signed_less_than)));
                            ++(vlSymsp->__Vcoverage[243]);
                        } else {
                            vlSelfRef.__Vcellout__control_unit__mux_adder 
                                = vlSelfRef.__Vcellinp__control_unit__signed_less_than;
                            ++(vlSymsp->__Vcoverage[240]);
                        }
                    } else if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        ++(vlSymsp->__Vcoverage[248]);
                    } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        vlSelfRef.__Vcellout__control_unit__mux_adder 
                            = (1U & (~ (IData)(vlSelfRef.__Vcellinp__control_unit__zero_flag)));
                        ++(vlSymsp->__Vcoverage[239]);
                    } else {
                        vlSelfRef.__Vcellout__control_unit__mux_adder 
                            = vlSelfRef.__Vcellinp__control_unit__zero_flag;
                        ++(vlSymsp->__Vcoverage[236]);
                    }
                    ++(vlSymsp->__Vcoverage[249]);
                } else {
                    ++(vlSymsp->__Vcoverage[254]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[254]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[254]);
        }
    } else if ((0x00000020U & vlSelfRef.__Vcellinp__control_unit__instr)) {
        if ((0x00000010U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            if ((8U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                ++(vlSymsp->__Vcoverage[254]);
            } else if ((4U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                        vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
                        vlSelfRef.__Vcellout__control_unit__mux_reg = 0U;
                        vlSelfRef.__Vcellout__control_unit__WE_reg_file = 1U;
                        vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                        vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 1U;
                        vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
                        vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
                        vlSelfRef.__Vcellout__control_unit__rd 
                            = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                              >> 7U));
                        vlSelfRef.__Vcellout__control_unit__imm 
                            = (0xfffff000U & vlSelfRef.__Vcellinp__control_unit__instr);
                        ++(vlSymsp->__Vcoverage[253]);
                    } else {
                        ++(vlSymsp->__Vcoverage[254]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[254]);
                }
            } else if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
                    vlSelfRef.__Vcellout__control_unit__mux_reg = 0U;
                    vlSelfRef.__Vcellout__control_unit__WE_reg_file = 1U;
                    vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 0U;
                    vlSelfRef.__Vcellout__control_unit__rd 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 7U));
                    vlSelfRef.__Vcellout__control_unit__rs1 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 0x0fU));
                    vlSelfRef.__Vcellout__control_unit__rs2 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 0x14U));
                    if ((0x00004000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                                vlSelfRef.__Vcellout__control_unit__ALU_funct = 9U;
                                ++(vlSymsp->__Vcoverage[209]);
                            } else {
                                vlSelfRef.__Vcellout__control_unit__ALU_funct = 8U;
                                ++(vlSymsp->__Vcoverage[208]);
                            }
                        } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            if ((0x40000000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                                vlSelfRef.__Vcellout__control_unit__ALU_funct = 7U;
                                ++(vlSymsp->__Vcoverage[205]);
                            } else {
                                vlSelfRef.__Vcellout__control_unit__ALU_funct = 6U;
                                ++(vlSymsp->__Vcoverage[204]);
                            }
                            ++(vlSymsp->__Vcoverage[207]);
                        } else {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 5U;
                            ++(vlSymsp->__Vcoverage[203]);
                        }
                    } else if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 4U;
                            ++(vlSymsp->__Vcoverage[202]);
                        } else {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 3U;
                            ++(vlSymsp->__Vcoverage[201]);
                        }
                    } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        vlSelfRef.__Vcellout__control_unit__ALU_funct = 2U;
                        ++(vlSymsp->__Vcoverage[200]);
                    } else {
                        if ((0x40000000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 1U;
                            ++(vlSymsp->__Vcoverage[197]);
                        } else {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
                            ++(vlSymsp->__Vcoverage[196]);
                        }
                        ++(vlSymsp->__Vcoverage[199]);
                    }
                    ++(vlSymsp->__Vcoverage[211]);
                } else {
                    ++(vlSymsp->__Vcoverage[254]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[254]);
            }
        } else if ((8U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            ++(vlSymsp->__Vcoverage[254]);
        } else if ((4U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            ++(vlSymsp->__Vcoverage[254]);
        } else if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
                vlSelfRef.__Vcellout__control_unit__WE_data_mem = 1U;
                vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
                vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
                vlSelfRef.__Vcellout__control_unit__rs1 
                    = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                      >> 0x0fU));
                vlSelfRef.__Vcellout__control_unit__rs2 
                    = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                      >> 0x14U));
                vlSelfRef.__Vcellout__control_unit__imm 
                    = (((- (IData)((vlSelfRef.__Vcellinp__control_unit__instr 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                            >> 7U))));
                vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
                if ((0U == (7U & (vlSelfRef.__Vcellinp__control_unit__instr 
                                  >> 0x0cU)))) {
                    vlSelfRef.__Vcellout__control_unit__mem_size = 0U;
                    ++(vlSymsp->__Vcoverage[224]);
                } else if ((1U == (7U & (vlSelfRef.__Vcellinp__control_unit__instr 
                                         >> 0x0cU)))) {
                    vlSelfRef.__Vcellout__control_unit__mem_size = 1U;
                    ++(vlSymsp->__Vcoverage[225]);
                } else if ((2U == (7U & (vlSelfRef.__Vcellinp__control_unit__instr 
                                         >> 0x0cU)))) {
                    vlSelfRef.__Vcellout__control_unit__mem_size = 2U;
                    ++(vlSymsp->__Vcoverage[226]);
                } else {
                    ++(vlSymsp->__Vcoverage[227]);
                }
                ++(vlSymsp->__Vcoverage[228]);
            } else {
                ++(vlSymsp->__Vcoverage[254]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[254]);
        }
    } else if ((0x00000010U & vlSelfRef.__Vcellinp__control_unit__instr)) {
        if ((8U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            ++(vlSymsp->__Vcoverage[254]);
        } else if ((4U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
                    vlSelfRef.__Vcellout__control_unit__mux_reg = 0U;
                    vlSelfRef.__Vcellout__control_unit__WE_reg_file = 1U;
                    vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                    vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 2U;
                    vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
                    vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
                    vlSelfRef.__Vcellout__control_unit__rd 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 7U));
                    vlSelfRef.__Vcellout__control_unit__imm 
                        = (0xfffff000U & vlSelfRef.__Vcellinp__control_unit__instr);
                    ++(vlSymsp->__Vcoverage[252]);
                } else {
                    ++(vlSymsp->__Vcoverage[254]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[254]);
            }
        } else if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
                vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
                vlSelfRef.__Vcellout__control_unit__mux_reg = 0U;
                vlSelfRef.__Vcellout__control_unit__WE_reg_file = 1U;
                vlSelfRef.__Vcellout__control_unit__WE_data_mem = 0U;
                vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
                vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
                vlSelfRef.__Vcellout__control_unit__rd 
                    = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                      >> 7U));
                vlSelfRef.__Vcellout__control_unit__rs1 
                    = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                      >> 0x0fU));
                vlSelfRef.__Vcellout__control_unit__imm 
                    = (((- (IData)((vlSelfRef.__Vcellinp__control_unit__instr 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.__Vcellinp__control_unit__instr 
                          >> 0x14U));
                if ((0x00004000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 9U;
                            ++(vlSymsp->__Vcoverage[217]);
                        } else {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 8U;
                            ++(vlSymsp->__Vcoverage[216]);
                        }
                    } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        if ((0x40000000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 7U;
                            vlSelfRef.__Vcellout__control_unit__imm 
                                = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                  >> 0x14U));
                            ++(vlSymsp->__Vcoverage[220]);
                        } else {
                            vlSelfRef.__Vcellout__control_unit__ALU_funct = 6U;
                            vlSelfRef.__Vcellout__control_unit__imm 
                                = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                                  >> 0x14U));
                            ++(vlSymsp->__Vcoverage[219]);
                        }
                        ++(vlSymsp->__Vcoverage[222]);
                    } else {
                        vlSelfRef.__Vcellout__control_unit__ALU_funct = 5U;
                        ++(vlSymsp->__Vcoverage[215]);
                    }
                } else if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                        vlSelfRef.__Vcellout__control_unit__ALU_funct = 4U;
                        ++(vlSymsp->__Vcoverage[214]);
                    } else {
                        vlSelfRef.__Vcellout__control_unit__ALU_funct = 3U;
                        ++(vlSymsp->__Vcoverage[213]);
                    }
                } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    vlSelfRef.__Vcellout__control_unit__ALU_funct = 2U;
                    vlSelfRef.__Vcellout__control_unit__imm 
                        = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                          >> 0x14U));
                    ++(vlSymsp->__Vcoverage[218]);
                } else {
                    vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
                    ++(vlSymsp->__Vcoverage[212]);
                }
                ++(vlSymsp->__Vcoverage[223]);
            } else {
                ++(vlSymsp->__Vcoverage[254]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[254]);
        }
    } else if ((8U & vlSelfRef.__Vcellinp__control_unit__instr)) {
        ++(vlSymsp->__Vcoverage[254]);
    } else if ((4U & vlSelfRef.__Vcellinp__control_unit__instr)) {
        ++(vlSymsp->__Vcoverage[254]);
    } else if ((2U & vlSelfRef.__Vcellinp__control_unit__instr)) {
        if ((1U & vlSelfRef.__Vcellinp__control_unit__instr)) {
            vlSelfRef.__Vcellout__control_unit__mux_adder = 0U;
            vlSelfRef.__Vcellout__control_unit__mux_PC = 1U;
            vlSelfRef.__Vcellout__control_unit__mux_ALU2 = 0U;
            vlSelfRef.__Vcellout__control_unit__mux_ALU1 = 1U;
            vlSelfRef.__Vcellout__control_unit__rd 
                = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                  >> 7U));
            vlSelfRef.__Vcellout__control_unit__rs1 
                = (0x0000001fU & (vlSelfRef.__Vcellinp__control_unit__instr 
                                  >> 0x0fU));
            vlSelfRef.__Vcellout__control_unit__imm 
                = (((- (IData)((vlSelfRef.__Vcellinp__control_unit__instr 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.__Vcellinp__control_unit__instr 
                      >> 0x14U));
            vlSelfRef.__Vcellout__control_unit__ALU_funct = 0U;
            if ((0x00004000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    ++(vlSymsp->__Vcoverage[234]);
                } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    vlSelfRef.__Vcellout__control_unit__mem_size = 1U;
                    vlSelfRef.__Vcellout__control_unit__sign_val = 0U;
                    ++(vlSymsp->__Vcoverage[233]);
                } else {
                    vlSelfRef.__Vcellout__control_unit__mem_size = 0U;
                    vlSelfRef.__Vcellout__control_unit__sign_val = 0U;
                    ++(vlSymsp->__Vcoverage[232]);
                }
            } else if ((0x00002000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                    ++(vlSymsp->__Vcoverage[234]);
                } else {
                    vlSelfRef.__Vcellout__control_unit__mem_size = 2U;
                    ++(vlSymsp->__Vcoverage[231]);
                }
            } else if ((0x00001000U & vlSelfRef.__Vcellinp__control_unit__instr)) {
                vlSelfRef.__Vcellout__control_unit__mem_size = 1U;
                ++(vlSymsp->__Vcoverage[230]);
            } else {
                vlSelfRef.__Vcellout__control_unit__mem_size = 0U;
                ++(vlSymsp->__Vcoverage[229]);
            }
            ++(vlSymsp->__Vcoverage[235]);
        } else {
            ++(vlSymsp->__Vcoverage[254]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[254]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__control_unit__zero_flag)))) {
        ++(vlSymsp->__Vcoverage[237]);
    }
    if (vlSelfRef.__Vcellinp__control_unit__zero_flag) {
        ++(vlSymsp->__Vcoverage[238]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__control_unit__signed_less_than)))) {
        ++(vlSymsp->__Vcoverage[241]);
    }
    if (vlSelfRef.__Vcellinp__control_unit__signed_less_than) {
        ++(vlSymsp->__Vcoverage[242]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__control_unit__unsigned_less_than)))) {
        ++(vlSymsp->__Vcoverage[245]);
    }
    if (vlSelfRef.__Vcellinp__control_unit__unsigned_less_than) {
        ++(vlSymsp->__Vcoverage[246]);
    }
    ++(vlSymsp->__Vcoverage[255]);
    VL_ASSIGN_SII(1, vlSelfRef.mux_adder, vlSelfRef.__Vcellout__control_unit__mux_adder);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__mux_adder) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__mux_adder))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 164, vlSelfRef.__Vcellout__control_unit__mux_adder, vlSelfRef.control_unit__DOT____Vtogcov__mux_adder);
        vlSelfRef.control_unit__DOT____Vtogcov__mux_adder 
            = vlSelfRef.__Vcellout__control_unit__mux_adder;
    }
    VL_ASSIGN_SII(1, vlSelfRef.mux_PC, vlSelfRef.__Vcellout__control_unit__mux_PC);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__mux_PC) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__mux_PC))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 166, vlSelfRef.__Vcellout__control_unit__mux_PC, vlSelfRef.control_unit__DOT____Vtogcov__mux_PC);
        vlSelfRef.control_unit__DOT____Vtogcov__mux_PC 
            = vlSelfRef.__Vcellout__control_unit__mux_PC;
    }
    VL_ASSIGN_SII(2, vlSelfRef.mux_reg, vlSelfRef.__Vcellout__control_unit__mux_reg);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__mux_reg) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__mux_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 168, vlSelfRef.__Vcellout__control_unit__mux_reg, vlSelfRef.control_unit__DOT____Vtogcov__mux_reg);
        vlSelfRef.control_unit__DOT____Vtogcov__mux_reg 
            = vlSelfRef.__Vcellout__control_unit__mux_reg;
    }
    VL_ASSIGN_SII(1, vlSelfRef.WE_reg_file, vlSelfRef.__Vcellout__control_unit__WE_reg_file);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__WE_reg_file) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__WE_reg_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 172, vlSelfRef.__Vcellout__control_unit__WE_reg_file, vlSelfRef.control_unit__DOT____Vtogcov__WE_reg_file);
        vlSelfRef.control_unit__DOT____Vtogcov__WE_reg_file 
            = vlSelfRef.__Vcellout__control_unit__WE_reg_file;
    }
    VL_ASSIGN_SII(1, vlSelfRef.WE_data_mem, vlSelfRef.__Vcellout__control_unit__WE_data_mem);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__WE_data_mem) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__WE_data_mem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 174, vlSelfRef.__Vcellout__control_unit__WE_data_mem, vlSelfRef.control_unit__DOT____Vtogcov__WE_data_mem);
        vlSelfRef.control_unit__DOT____Vtogcov__WE_data_mem 
            = vlSelfRef.__Vcellout__control_unit__WE_data_mem;
    }
    VL_ASSIGN_SII(2, vlSelfRef.mux_ALU2, vlSelfRef.__Vcellout__control_unit__mux_ALU2);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__mux_ALU2) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__mux_ALU2))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 176, vlSelfRef.__Vcellout__control_unit__mux_ALU2, vlSelfRef.control_unit__DOT____Vtogcov__mux_ALU2);
        vlSelfRef.control_unit__DOT____Vtogcov__mux_ALU2 
            = vlSelfRef.__Vcellout__control_unit__mux_ALU2;
    }
    VL_ASSIGN_SII(1, vlSelfRef.mux_ALU1, vlSelfRef.__Vcellout__control_unit__mux_ALU1);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__mux_ALU1) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__mux_ALU1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 180, vlSelfRef.__Vcellout__control_unit__mux_ALU1, vlSelfRef.control_unit__DOT____Vtogcov__mux_ALU1);
        vlSelfRef.control_unit__DOT____Vtogcov__mux_ALU1 
            = vlSelfRef.__Vcellout__control_unit__mux_ALU1;
    }
    VL_ASSIGN_SII(5, vlSelfRef.rs1, vlSelfRef.__Vcellout__control_unit__rs1);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__rs1) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 70, vlSelfRef.__Vcellout__control_unit__rs1, vlSelfRef.control_unit__DOT____Vtogcov__rs1);
        vlSelfRef.control_unit__DOT____Vtogcov__rs1 
            = vlSelfRef.__Vcellout__control_unit__rs1;
    }
    VL_ASSIGN_SII(5, vlSelfRef.rs2, vlSelfRef.__Vcellout__control_unit__rs2);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__rs2) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 80, vlSelfRef.__Vcellout__control_unit__rs2, vlSelfRef.control_unit__DOT____Vtogcov__rs2);
        vlSelfRef.control_unit__DOT____Vtogcov__rs2 
            = vlSelfRef.__Vcellout__control_unit__rs2;
    }
    VL_ASSIGN_SII(5, vlSelfRef.rd, vlSelfRef.__Vcellout__control_unit__rd);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__rd) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 90, vlSelfRef.__Vcellout__control_unit__rd, vlSelfRef.control_unit__DOT____Vtogcov__rd);
        vlSelfRef.control_unit__DOT____Vtogcov__rd 
            = vlSelfRef.__Vcellout__control_unit__rd;
    }
    VL_ASSIGN_SII(32, vlSelfRef.imm, vlSelfRef.__Vcellout__control_unit__imm);
    if ((vlSelfRef.__Vcellout__control_unit__imm ^ vlSelfRef.control_unit__DOT____Vtogcov__imm)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 100, vlSelfRef.__Vcellout__control_unit__imm, vlSelfRef.control_unit__DOT____Vtogcov__imm);
        vlSelfRef.control_unit__DOT____Vtogcov__imm 
            = vlSelfRef.__Vcellout__control_unit__imm;
    }
    VL_ASSIGN_SII(4, vlSelfRef.ALU_funct, vlSelfRef.__Vcellout__control_unit__ALU_funct);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__ALU_funct) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__ALU_funct))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 182, vlSelfRef.__Vcellout__control_unit__ALU_funct, vlSelfRef.control_unit__DOT____Vtogcov__ALU_funct);
        vlSelfRef.control_unit__DOT____Vtogcov__ALU_funct 
            = vlSelfRef.__Vcellout__control_unit__ALU_funct;
    }
    VL_ASSIGN_SII(2, vlSelfRef.mem_size, vlSelfRef.__Vcellout__control_unit__mem_size);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__mem_size) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__mem_size))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 190, vlSelfRef.__Vcellout__control_unit__mem_size, vlSelfRef.control_unit__DOT____Vtogcov__mem_size);
        vlSelfRef.control_unit__DOT____Vtogcov__mem_size 
            = vlSelfRef.__Vcellout__control_unit__mem_size;
    }
    VL_ASSIGN_SII(1, vlSelfRef.sign_val, vlSelfRef.__Vcellout__control_unit__sign_val);
    if (((IData)(vlSelfRef.__Vcellout__control_unit__sign_val) 
         ^ (IData)(vlSelfRef.control_unit__DOT____Vtogcov__sign_val))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 194, vlSelfRef.__Vcellout__control_unit__sign_val, vlSelfRef.control_unit__DOT____Vtogcov__sign_val);
        vlSelfRef.control_unit__DOT____Vtogcov__sign_val 
            = vlSelfRef.__Vcellout__control_unit__sign_val;
    }
}

void Vcontrol_unit___024root___eval_ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vcontrol_unit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcontrol_unit___024root___eval_phase__ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcontrol_unit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vcontrol_unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("control_unit.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcontrol_unit___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_debug_assertions\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
