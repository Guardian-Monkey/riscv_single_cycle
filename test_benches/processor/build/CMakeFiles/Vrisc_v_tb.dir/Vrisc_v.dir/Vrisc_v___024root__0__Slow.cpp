// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "Vrisc_v__pch.h"

VL_ATTR_COLD void Vrisc_v___024root___eval_static(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_static\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__risc_v__clk__0 
        = vlSelfRef.__Vcellinp__risc_v__clk;
}

VL_ATTR_COLD void Vrisc_v___024root___eval_initial__TOP(Vrisc_v___024root* vlSelf);
VL_ATTR_COLD void Vrisc_v___024root____Vm_traceActivitySetAll(Vrisc_v___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_initial\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrisc_v___024root___eval_initial__TOP(vlSelf);
    Vrisc_v___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vrisc_v___024root___eval_initial__TOP(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_initial__TOP\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__Cin) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 868, 0U, vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__Cin);
        vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__Cin = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__Cin)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1404, 1U, vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__Cin);
        vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__Cin = 1U;
    }
    if (vlSelfRef.risc_v__DOT__REG_FILE__DOT____Vtogcov__r0) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2251, 0U, vlSelfRef.risc_v__DOT__REG_FILE__DOT____Vtogcov__r0);
        vlSelfRef.risc_v__DOT__REG_FILE__DOT____Vtogcov__r0 = 0U;
    }
    VL_READMEM_N(true, 32, 8192, 0, "../../../memory/instr.mem"s
                 ,  &(vlSelfRef.risc_v__DOT__instr_mem)
                 , 0, ~0ULL);
    vlSelfRef.risc_v__DOT__pc = 0U;
    ++(vlSymsp->__Vcoverage[786]);
    VL_READMEM_N(true, 8, 8192, 0, "../../../memory/data.mem"s
                 ,  &(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[2204]);
}

VL_ATTR_COLD void Vrisc_v___024root___eval_final(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_final\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrisc_v___024root___eval_phase__stl(Vrisc_v___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_settle\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_v___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("risc_v.v", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vrisc_v___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vrisc_v___024root___eval_triggers_vec__stl(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_triggers_vec__stl\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vrisc_v___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vrisc_v___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vrisc_v___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vrisc_v___024root___stl_sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___stl_sequent__TOP__0\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SII(4, vlSelfRef.ALU_FUNCT, vlSelfRef.__Vcellout__risc_v__ALU_FUNCT);
    VL_ASSIGN_SII(5, vlSelfRef.RD, vlSelfRef.__Vcellout__risc_v__RD);
    VL_ASSIGN_SII(5, vlSelfRef.RS2, vlSelfRef.__Vcellout__risc_v__RS2);
    VL_ASSIGN_SII(5, vlSelfRef.RS1, vlSelfRef.__Vcellout__risc_v__RS1);
    if (((IData)(vlSelfRef.__Vcellout__risc_v__RS1) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__RS1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 2, vlSelfRef.__Vcellout__risc_v__RS1, vlSelfRef.risc_v__DOT____Vtogcov__RS1);
        vlSelfRef.risc_v__DOT____Vtogcov__RS1 = vlSelfRef.__Vcellout__risc_v__RS1;
    }
    if (((IData)(vlSelfRef.__Vcellout__risc_v__RS2) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__RS2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 12, vlSelfRef.__Vcellout__risc_v__RS2, vlSelfRef.risc_v__DOT____Vtogcov__RS2);
        vlSelfRef.risc_v__DOT____Vtogcov__RS2 = vlSelfRef.__Vcellout__risc_v__RS2;
    }
    if (((IData)(vlSelfRef.__Vcellout__risc_v__RD) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__RD))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 22, vlSelfRef.__Vcellout__risc_v__RD, vlSelfRef.risc_v__DOT____Vtogcov__RD);
        vlSelfRef.risc_v__DOT____Vtogcov__RD = vlSelfRef.__Vcellout__risc_v__RD;
    }
    if (((IData)(vlSelfRef.__Vcellout__risc_v__ALU_FUNCT) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__ALU_FUNCT))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 32, vlSelfRef.__Vcellout__risc_v__ALU_FUNCT, vlSelfRef.risc_v__DOT____Vtogcov__ALU_FUNCT);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_FUNCT 
            = vlSelfRef.__Vcellout__risc_v__ALU_FUNCT;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__pc) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__pc))) {
        VL_COV_TOGGLE_CHG_ST_I(13, vlSymsp->__Vcoverage + 40, vlSelfRef.risc_v__DOT__pc, vlSelfRef.risc_v__DOT____Vtogcov__pc);
        vlSelfRef.risc_v__DOT____Vtogcov__pc = vlSelfRef.risc_v__DOT__pc;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mux_adder) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_adder))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 166, vlSelfRef.risc_v__DOT__mux_adder, vlSelfRef.risc_v__DOT____Vtogcov__mux_adder);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_adder 
            = vlSelfRef.risc_v__DOT__mux_adder;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__pc) ^ vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__B)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 804, vlSelfRef.risc_v__DOT__pc, vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__B);
        vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__B 
            = vlSelfRef.risc_v__DOT__pc;
    }
    if ((vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc] 
         ^ vlSelfRef.risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 886, vlSelfRef.risc_v__DOT__instr_mem
                               [vlSelfRef.risc_v__DOT__pc], vlSelfRef.risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr);
        vlSelfRef.risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr 
            = vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc];
    }
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__risc_v__clk, vlSelfRef.clk);
    vlSelfRef.risc_v__DOT__mux_PC = 1U;
    vlSelfRef.risc_v__DOT__mux_reg = 0U;
    vlSelfRef.risc_v__DOT__WE_reg_file = 0U;
    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
    vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
    vlSelfRef.risc_v__DOT__mux_ALU1 = 0U;
    vlSelfRef.risc_v__DOT__rs1 = 0U;
    vlSelfRef.risc_v__DOT__rs2 = 0U;
    vlSelfRef.risc_v__DOT__rd = 0U;
    vlSelfRef.risc_v__DOT__imm = 0U;
    vlSelfRef.risc_v__DOT__ALU_funct = 9U;
    vlSelfRef.risc_v__DOT__mem_size = 2U;
    vlSelfRef.risc_v__DOT__sign_val = 1U;
    vlSelfRef.risc_v__DOT__branch_decoder_on = 0U;
    vlSelfRef.risc_v__DOT__branch_op = 0U;
    if ((0x00000040U & vlSelfRef.risc_v__DOT__instr_mem
         [vlSelfRef.risc_v__DOT__pc])) {
        if ((0x00000020U & vlSelfRef.risc_v__DOT__instr_mem
             [vlSelfRef.risc_v__DOT__pc])) {
            if ((0x00000010U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                ++(vlSymsp->__Vcoverage[995]);
            } else if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            vlSelfRef.risc_v__DOT__mux_PC = 0U;
                            vlSelfRef.risc_v__DOT__mux_reg = 1U;
                            vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                            vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                            vlSelfRef.risc_v__DOT__mux_ALU2 = 2U;
                            vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                            vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                            vlSelfRef.risc_v__DOT__rd 
                                = (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                                  [vlSelfRef.risc_v__DOT__pc] 
                                                  >> 7U));
                            vlSelfRef.risc_v__DOT__imm 
                                = (((- (IData)((vlSelfRef.risc_v__DOT__instr_mem
                                                [vlSelfRef.risc_v__DOT__pc] 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 0x00000014U))));
                            ++(vlSymsp->__Vcoverage[992]);
                        } else {
                            ++(vlSymsp->__Vcoverage[995]);
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[995]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__mux_PC = 0U;
                        vlSelfRef.risc_v__DOT__mux_reg = 1U;
                        vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                        vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                        vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                        vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                        vlSelfRef.risc_v__DOT__ALU_funct = 0x0aU;
                        vlSelfRef.risc_v__DOT__rd = 
                            (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 7U));
                        vlSelfRef.risc_v__DOT__rs1 
                            = (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                              [vlSelfRef.risc_v__DOT__pc] 
                                              >> 0x0fU));
                        vlSelfRef.risc_v__DOT__imm 
                            = (((- (IData)((vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.risc_v__DOT__instr_mem
                                                   [vlSelfRef.risc_v__DOT__pc] 
                                                   >> 0x14U));
                        ++(vlSymsp->__Vcoverage[991]);
                    } else {
                        ++(vlSymsp->__Vcoverage[995]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mux_PC = 1U;
                    vlSelfRef.risc_v__DOT__mux_reg = 0U;
                    vlSelfRef.risc_v__DOT__WE_reg_file = 0U;
                    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU1 = 0U;
                    vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x0fU));
                    vlSelfRef.risc_v__DOT__rs2 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x14U));
                    vlSelfRef.risc_v__DOT__ALU_funct = 1U;
                    vlSelfRef.risc_v__DOT__imm = ((
                                                   (- (IData)(
                                                              (vlSelfRef.risc_v__DOT__instr_mem
                                                               [vlSelfRef.risc_v__DOT__pc] 
                                                               >> 0x1fU))) 
                                                   << 0x0000000cU) 
                                                  | ((0x00000800U 
                                                      & (vlSelfRef.risc_v__DOT__instr_mem
                                                         [vlSelfRef.risc_v__DOT__pc] 
                                                         << 4U)) 
                                                     | ((0x000007e0U 
                                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                                            [vlSelfRef.risc_v__DOT__pc] 
                                                            >> 0x00000014U)) 
                                                        | (0x0000001eU 
                                                           & (vlSelfRef.risc_v__DOT__instr_mem
                                                              [vlSelfRef.risc_v__DOT__pc] 
                                                              >> 7U)))));
                    vlSelfRef.risc_v__DOT__branch_decoder_on = 1U;
                    vlSelfRef.risc_v__DOT__branch_op 
                        = (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc] 
                                 >> 0x0cU));
                    ++(vlSymsp->__Vcoverage[990]);
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else if ((0x00000020U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        if ((0x00000010U & vlSelfRef.risc_v__DOT__instr_mem
             [vlSelfRef.risc_v__DOT__pc])) {
            if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                ++(vlSymsp->__Vcoverage[995]);
            } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__mux_PC = 1U;
                        vlSelfRef.risc_v__DOT__mux_reg = 0U;
                        vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                        vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                        vlSelfRef.risc_v__DOT__mux_ALU2 = 1U;
                        vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                        vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                        vlSelfRef.risc_v__DOT__rd = 
                            (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 7U));
                        vlSelfRef.risc_v__DOT__imm 
                            = (0xfffff000U & vlSelfRef.risc_v__DOT__instr_mem
                               [vlSelfRef.risc_v__DOT__pc]);
                        ++(vlSymsp->__Vcoverage[994]);
                    } else {
                        ++(vlSymsp->__Vcoverage[995]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mux_PC = 1U;
                    vlSelfRef.risc_v__DOT__mux_reg = 0U;
                    vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU1 = 0U;
                    vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                                 & (vlSelfRef.risc_v__DOT__instr_mem
                                                    [vlSelfRef.risc_v__DOT__pc] 
                                                    >> 7U));
                    vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x0fU));
                    vlSelfRef.risc_v__DOT__rs2 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x14U));
                    if ((0x00004000U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                vlSelfRef.risc_v__DOT__ALU_funct = 9U;
                                ++(vlSymsp->__Vcoverage[963]);
                            } else {
                                vlSelfRef.risc_v__DOT__ALU_funct = 8U;
                                ++(vlSymsp->__Vcoverage[962]);
                            }
                        } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                    [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                     [vlSelfRef.risc_v__DOT__pc])) {
                                    vlSelfRef.risc_v__DOT__ALU_funct = 7U;
                                    ++(vlSymsp->__Vcoverage[959]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[960]);
                                }
                            } else {
                                vlSelfRef.risc_v__DOT__ALU_funct = 6U;
                                ++(vlSymsp->__Vcoverage[958]);
                            }
                            ++(vlSymsp->__Vcoverage[961]);
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 5U;
                            ++(vlSymsp->__Vcoverage[957]);
                        }
                    } else if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            vlSelfRef.risc_v__DOT__ALU_funct = 4U;
                            ++(vlSymsp->__Vcoverage[956]);
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 3U;
                            ++(vlSymsp->__Vcoverage[955]);
                        }
                    } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__ALU_funct = 2U;
                        ++(vlSymsp->__Vcoverage[954]);
                    } else {
                        if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                vlSelfRef.risc_v__DOT__ALU_funct = 1U;
                                ++(vlSymsp->__Vcoverage[951]);
                            } else {
                                ++(vlSymsp->__Vcoverage[952]);
                            }
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                            ++(vlSymsp->__Vcoverage[950]);
                        }
                        ++(vlSymsp->__Vcoverage[953]);
                    }
                    ++(vlSymsp->__Vcoverage[965]);
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                vlSelfRef.risc_v__DOT__mux_PC = 1U;
                vlSelfRef.risc_v__DOT__WE_data_mem = 1U;
                vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                              & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x0fU));
                vlSelfRef.risc_v__DOT__rs2 = (0x0000001fU 
                                              & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x14U));
                vlSelfRef.risc_v__DOT__imm = (((- (IData)(
                                                          (vlSelfRef.risc_v__DOT__instr_mem
                                                           [vlSelfRef.risc_v__DOT__pc] 
                                                           >> 0x1fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000fe0U 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.risc_v__DOT__instr_mem
                                                       [vlSelfRef.risc_v__DOT__pc] 
                                                       >> 7U))));
                vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                if ((0U == (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                  [vlSelfRef.risc_v__DOT__pc] 
                                  >> 0x0cU)))) {
                    vlSelfRef.risc_v__DOT__mem_size = 0U;
                    ++(vlSymsp->__Vcoverage[978]);
                } else if ((1U == (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                         [vlSelfRef.risc_v__DOT__pc] 
                                         >> 0x0cU)))) {
                    vlSelfRef.risc_v__DOT__mem_size = 1U;
                    ++(vlSymsp->__Vcoverage[979]);
                } else if ((2U == (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                         [vlSelfRef.risc_v__DOT__pc] 
                                         >> 0x0cU)))) {
                    vlSelfRef.risc_v__DOT__mem_size = 2U;
                    ++(vlSymsp->__Vcoverage[980]);
                } else {
                    ++(vlSymsp->__Vcoverage[981]);
                }
                ++(vlSymsp->__Vcoverage[982]);
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else if ((0x00000010U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        if ((8U & vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc])) {
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mux_PC = 1U;
                    vlSelfRef.risc_v__DOT__mux_reg = 0U;
                    vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU2 = 2U;
                    vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                    vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                    vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                                 & (vlSelfRef.risc_v__DOT__instr_mem
                                                    [vlSelfRef.risc_v__DOT__pc] 
                                                    >> 7U));
                    vlSelfRef.risc_v__DOT__imm = (0xfffff000U 
                                                  & vlSelfRef.risc_v__DOT__instr_mem
                                                  [vlSelfRef.risc_v__DOT__pc]);
                    ++(vlSymsp->__Vcoverage[993]);
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                vlSelfRef.risc_v__DOT__mux_PC = 1U;
                vlSelfRef.risc_v__DOT__mux_reg = 0U;
                vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                             & (vlSelfRef.risc_v__DOT__instr_mem
                                                [vlSelfRef.risc_v__DOT__pc] 
                                                >> 7U));
                vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                              & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x0fU));
                vlSelfRef.risc_v__DOT__imm = (((- (IData)(
                                                          (vlSelfRef.risc_v__DOT__instr_mem
                                                           [vlSelfRef.risc_v__DOT__pc] 
                                                           >> 0x1fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x14U));
                if ((0x00004000U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            vlSelfRef.risc_v__DOT__ALU_funct = 9U;
                            ++(vlSymsp->__Vcoverage[971]);
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 8U;
                            ++(vlSymsp->__Vcoverage[970]);
                        }
                    } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                vlSelfRef.risc_v__DOT__ALU_funct = 7U;
                                vlSelfRef.risc_v__DOT__imm 
                                    = (0x0000001fU 
                                       & (vlSelfRef.risc_v__DOT__instr_mem
                                          [vlSelfRef.risc_v__DOT__pc] 
                                          >> 0x14U));
                                ++(vlSymsp->__Vcoverage[974]);
                            } else {
                                ++(vlSymsp->__Vcoverage[975]);
                            }
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 6U;
                            vlSelfRef.risc_v__DOT__imm 
                                = (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                                  [vlSelfRef.risc_v__DOT__pc] 
                                                  >> 0x14U));
                            ++(vlSymsp->__Vcoverage[973]);
                        }
                        ++(vlSymsp->__Vcoverage[976]);
                    } else {
                        vlSelfRef.risc_v__DOT__ALU_funct = 5U;
                        ++(vlSymsp->__Vcoverage[969]);
                    }
                } else if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                            [vlSelfRef.risc_v__DOT__pc])) {
                    if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__ALU_funct = 4U;
                        ++(vlSymsp->__Vcoverage[968]);
                    } else {
                        vlSelfRef.risc_v__DOT__ALU_funct = 3U;
                        ++(vlSymsp->__Vcoverage[967]);
                    }
                } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                            [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__ALU_funct = 2U;
                    vlSelfRef.risc_v__DOT__imm = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x14U));
                    ++(vlSymsp->__Vcoverage[972]);
                } else {
                    vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                    ++(vlSymsp->__Vcoverage[966]);
                }
                ++(vlSymsp->__Vcoverage[977]);
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        ++(vlSymsp->__Vcoverage[995]);
    } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        ++(vlSymsp->__Vcoverage[995]);
    } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        if ((1U & vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc])) {
            vlSelfRef.risc_v__DOT__mux_PC = 1U;
            vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
            vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
            vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 7U));
            vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                          & (vlSelfRef.risc_v__DOT__instr_mem
                                             [vlSelfRef.risc_v__DOT__pc] 
                                             >> 0x0fU));
            vlSelfRef.risc_v__DOT__imm = (((- (IData)(
                                                      (vlSelfRef.risc_v__DOT__instr_mem
                                                       [vlSelfRef.risc_v__DOT__pc] 
                                                       >> 0x1fU))) 
                                           << 0x0000000cU) 
                                          | (vlSelfRef.risc_v__DOT__instr_mem
                                             [vlSelfRef.risc_v__DOT__pc] 
                                             >> 0x14U));
            vlSelfRef.risc_v__DOT__ALU_funct = 0U;
            if ((0x00004000U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    ++(vlSymsp->__Vcoverage[988]);
                } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                            [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mem_size = 1U;
                    vlSelfRef.risc_v__DOT__sign_val = 0U;
                    ++(vlSymsp->__Vcoverage[987]);
                } else {
                    vlSelfRef.risc_v__DOT__mem_size = 0U;
                    vlSelfRef.risc_v__DOT__sign_val = 0U;
                    ++(vlSymsp->__Vcoverage[986]);
                }
            } else if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    ++(vlSymsp->__Vcoverage[988]);
                } else {
                    vlSelfRef.risc_v__DOT__mem_size = 2U;
                    ++(vlSymsp->__Vcoverage[985]);
                }
            } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                vlSelfRef.risc_v__DOT__mem_size = 1U;
                ++(vlSymsp->__Vcoverage[984]);
            } else {
                vlSelfRef.risc_v__DOT__mem_size = 0U;
                ++(vlSymsp->__Vcoverage[983]);
            }
            ++(vlSymsp->__Vcoverage[989]);
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[995]);
    }
    ++(vlSymsp->__Vcoverage[996]);
    if (((IData)(vlSelfRef.__Vcellinp__risc_v__clk) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__risc_v__clk, vlSelfRef.risc_v__DOT____Vtogcov__clk);
        vlSelfRef.risc_v__DOT____Vtogcov__clk = vlSelfRef.__Vcellinp__risc_v__clk;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mux_PC) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_PC))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 168, vlSelfRef.risc_v__DOT__mux_PC, vlSelfRef.risc_v__DOT____Vtogcov__mux_PC);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_PC = vlSelfRef.risc_v__DOT__mux_PC;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__WE_reg_file) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__WE_reg_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 170, vlSelfRef.risc_v__DOT__WE_reg_file, vlSelfRef.risc_v__DOT____Vtogcov__WE_reg_file);
        vlSelfRef.risc_v__DOT____Vtogcov__WE_reg_file 
            = vlSelfRef.risc_v__DOT__WE_reg_file;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__WE_data_mem) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__WE_data_mem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 172, vlSelfRef.risc_v__DOT__WE_data_mem, vlSelfRef.risc_v__DOT____Vtogcov__WE_data_mem);
        vlSelfRef.risc_v__DOT____Vtogcov__WE_data_mem 
            = vlSelfRef.risc_v__DOT__WE_data_mem;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__rd) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 92, vlSelfRef.risc_v__DOT__rd, vlSelfRef.risc_v__DOT____Vtogcov__rd);
        vlSelfRef.risc_v__DOT____Vtogcov__rd = vlSelfRef.risc_v__DOT__rd;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mux_reg) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 178, vlSelfRef.risc_v__DOT__mux_reg, vlSelfRef.risc_v__DOT____Vtogcov__mux_reg);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_reg = vlSelfRef.risc_v__DOT__mux_reg;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mem_size) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mem_size))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 186, vlSelfRef.risc_v__DOT__mem_size, vlSelfRef.risc_v__DOT____Vtogcov__mem_size);
        vlSelfRef.risc_v__DOT____Vtogcov__mem_size 
            = vlSelfRef.risc_v__DOT__mem_size;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__sign_val) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__sign_val))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 176, vlSelfRef.risc_v__DOT__sign_val, vlSelfRef.risc_v__DOT____Vtogcov__sign_val);
        vlSelfRef.risc_v__DOT____Vtogcov__sign_val 
            = vlSelfRef.risc_v__DOT__sign_val;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__branch_decoder_on) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__branch_decoder_on))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 776, vlSelfRef.risc_v__DOT__branch_decoder_on, vlSelfRef.risc_v__DOT____Vtogcov__branch_decoder_on);
        vlSelfRef.risc_v__DOT____Vtogcov__branch_decoder_on 
            = vlSelfRef.risc_v__DOT__branch_decoder_on;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__branch_op) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__branch_op))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 778, vlSelfRef.risc_v__DOT__branch_op, vlSelfRef.risc_v__DOT____Vtogcov__branch_op);
        vlSelfRef.risc_v__DOT____Vtogcov__branch_op 
            = vlSelfRef.risc_v__DOT__branch_op;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__ALU_funct) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__ALU_funct))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 190, vlSelfRef.risc_v__DOT__ALU_funct, vlSelfRef.risc_v__DOT____Vtogcov__ALU_funct);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_funct 
            = vlSelfRef.risc_v__DOT__ALU_funct;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mux_ALU2) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU2))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 182, vlSelfRef.risc_v__DOT__mux_ALU2, vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU2);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU2 
            = vlSelfRef.risc_v__DOT__mux_ALU2;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__rs1) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 72, vlSelfRef.risc_v__DOT__rs1, vlSelfRef.risc_v__DOT____Vtogcov__rs1);
        vlSelfRef.risc_v__DOT____Vtogcov__rs1 = vlSelfRef.risc_v__DOT__rs1;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__rs1))) {
        vlSelfRef.risc_v__DOT__rs1_out = 0U;
        ++(vlSymsp->__Vcoverage[2315]);
    } else {
        vlSelfRef.risc_v__DOT__rs1_out = ((0x1eU >= 
                                           (0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs1) 
                                               - (IData)(1U))))
                                           ? vlSelfRef.risc_v__DOT__REG_FILE__DOT__registers
                                          [(0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs1) 
                                               - (IData)(1U)))]
                                           : 0U);
        ++(vlSymsp->__Vcoverage[2316]);
    }
    ++(vlSymsp->__Vcoverage[2317]);
    if (((IData)(vlSelfRef.risc_v__DOT__mux_ALU1) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 174, vlSelfRef.risc_v__DOT__mux_ALU1, vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU1);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU1 
            = vlSelfRef.risc_v__DOT__mux_ALU1;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__rs2) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 82, vlSelfRef.risc_v__DOT__rs2, vlSelfRef.risc_v__DOT____Vtogcov__rs2);
        vlSelfRef.risc_v__DOT____Vtogcov__rs2 = vlSelfRef.risc_v__DOT__rs2;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__rs2))) {
        vlSelfRef.risc_v__DOT__rs2_out = 0U;
        ++(vlSymsp->__Vcoverage[2318]);
    } else {
        vlSelfRef.risc_v__DOT__rs2_out = ((0x1eU >= 
                                           (0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs2) 
                                               - (IData)(1U))))
                                           ? vlSelfRef.risc_v__DOT__REG_FILE__DOT__registers
                                          [(0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs2) 
                                               - (IData)(1U)))]
                                           : 0U);
        ++(vlSymsp->__Vcoverage[2319]);
    }
    ++(vlSymsp->__Vcoverage[2320]);
    if ((vlSelfRef.risc_v__DOT__imm ^ vlSelfRef.risc_v__DOT____Vtogcov__imm)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 102, vlSelfRef.risc_v__DOT__imm, vlSelfRef.risc_v__DOT____Vtogcov__imm);
        vlSelfRef.risc_v__DOT____Vtogcov__imm = vlSelfRef.risc_v__DOT__imm;
    }
    if ((vlSelfRef.risc_v__DOT__rs1_out ^ vlSelfRef.risc_v__DOT____Vtogcov__rs1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 454, vlSelfRef.risc_v__DOT__rs1_out, vlSelfRef.risc_v__DOT____Vtogcov__rs1_out);
        vlSelfRef.risc_v__DOT____Vtogcov__rs1_out = vlSelfRef.risc_v__DOT__rs1_out;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__mux_ALU2))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.risc_v__DOT____VlemCond_2 = vlSelfRef.risc_v__DOT__rs1_out;
    } else {
        ++(vlSymsp->__Vcoverage[796]);
        if ((1U == (IData)(vlSelfRef.risc_v__DOT__mux_ALU2))) {
            ++(vlSymsp->__Vcoverage[794]);
            vlSelfRef.risc_v__DOT____VlemCond_2 = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[795]);
            vlSelfRef.risc_v__DOT____VlemCond_2 = vlSelfRef.risc_v__DOT__pc;
        }
    }
    vlSelfRef.risc_v__DOT__ALU_in1 = vlSelfRef.risc_v__DOT____VlemCond_2;
    if ((vlSelfRef.risc_v__DOT__rs2_out ^ vlSelfRef.risc_v__DOT____Vtogcov__rs2_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 518, vlSelfRef.risc_v__DOT__rs2_out, vlSelfRef.risc_v__DOT____Vtogcov__rs2_out);
        vlSelfRef.risc_v__DOT____Vtogcov__rs2_out = vlSelfRef.risc_v__DOT__rs2_out;
    }
    if (vlSelfRef.risc_v__DOT__mux_ALU1) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.risc_v__DOT____VlemCond_3 = vlSelfRef.risc_v__DOT__imm;
    } else {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.risc_v__DOT____VlemCond_3 = vlSelfRef.risc_v__DOT__rs2_out;
    }
    vlSelfRef.risc_v__DOT__ALU_in2 = vlSelfRef.risc_v__DOT____VlemCond_3;
    if ((vlSelfRef.risc_v__DOT__ALU_in1 ^ vlSelfRef.risc_v__DOT____Vtogcov__ALU_in1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 198, vlSelfRef.risc_v__DOT__ALU_in1, vlSelfRef.risc_v__DOT____Vtogcov__ALU_in1);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_in1 = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    if (((vlSelfRef.risc_v__DOT__ALU_in1 >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__A))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1125, 
                               (vlSelfRef.risc_v__DOT__ALU_in1 
                                >> 0x0000001fU), vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__A);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__A 
            = (vlSelfRef.risc_v__DOT__ALU_in1 >> 0x0000001fU);
    }
    if ((vlSelfRef.risc_v__DOT__ALU_in2 ^ vlSelfRef.risc_v__DOT____Vtogcov__ALU_in2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 262, vlSelfRef.risc_v__DOT__ALU_in2, vlSelfRef.risc_v__DOT____Vtogcov__ALU_in2);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_in2 = vlSelfRef.risc_v__DOT__ALU_in2;
    }
    if (((vlSelfRef.risc_v__DOT__ALU_in2 >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__B))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1127, 
                               (vlSelfRef.risc_v__DOT__ALU_in2 
                                >> 0x0000001fU), vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__B);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__B 
            = (vlSelfRef.risc_v__DOT__ALU_in2 >> 0x0000001fU);
    }
    if (((~ vlSelfRef.risc_v__DOT__ALU_in2) ^ vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1340, 
                               (~ vlSelfRef.risc_v__DOT__ALU_in2), vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B);
        vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B 
            = (~ vlSelfRef.risc_v__DOT__ALU_in2);
    }
    vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.risc_v__DOT__ALU_in2)) 
                                  + (QData)((IData)(vlSelfRef.risc_v__DOT__ALU_in1))) 
                                 >> 0x00000020U))));
    vlSelfRef.risc_v__DOT__alu__DOT__a1_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                               + vlSelfRef.risc_v__DOT__ALU_in2);
    if ((1U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0 
            = (vlSelfRef.risc_v__DOT__ALU_in1 << 1U);
    } else {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0 
            = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0;
    if ((1U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0 
            = (vlSelfRef.risc_v__DOT__ALU_in1 >> 1U);
    } else {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0 
            = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0;
    if ((1U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0 
            = ((0x80000000U & vlSelfRef.risc_v__DOT__ALU_in1) 
               | (vlSelfRef.risc_v__DOT__ALU_in1 >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0 
            = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0;
    vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag 
        = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelfRef.risc_v__DOT__ALU_in1)) 
                                          + (QData)((IData)(
                                                            (~ vlSelfRef.risc_v__DOT__ALU_in2))))) 
                                 >> 0x00000020U))));
    vlSelfRef.risc_v__DOT__alu__DOT__s1_out = ((IData)(1U) 
                                               + (vlSelfRef.risc_v__DOT__ALU_in1 
                                                  + 
                                                  (~ vlSelfRef.risc_v__DOT__ALU_in2)));
    if (((IData)(vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1131, vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag 
            = vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__a1_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 997, vlSelfRef.risc_v__DOT__alu__DOT__a1_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__a1_out;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1406, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1;
    }
    if ((2U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1 
               << 2U);
    } else {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1672, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1;
    }
    if ((2U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1 
               >> 2U);
    } else {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1938, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1;
    }
    if ((2U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x0000001eU) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1 
                  >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1;
    if ((1U ^ ((IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag) 
               ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__unsigned_less_than)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 68, 
                               (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)), vlSelfRef.risc_v__DOT____Vtogcov__unsigned_less_than);
        vlSelfRef.risc_v__DOT____Vtogcov__unsigned_less_than 
            = (1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)));
    }
    if (((IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1133, vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag 
            = vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag;
    }
    if (((0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__zero_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 66, 
                               (0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out), vlSelfRef.risc_v__DOT____Vtogcov__zero_flag);
        vlSelfRef.risc_v__DOT____Vtogcov__zero_flag 
            = (0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out);
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__s1_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1061, vlSelfRef.risc_v__DOT__alu__DOT__s1_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__s1_out;
    }
    if (((vlSelfRef.risc_v__DOT__alu__DOT__s1_out >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__C))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1129, 
                               (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                                >> 0x0000001fU), vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__C);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__C 
            = (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
               >> 0x0000001fU);
    }
    vlSelfRef.risc_v__DOT__signed_less_than = (1U & 
                                               (((~ 
                                                  (vlSelfRef.risc_v__DOT__ALU_in2 
                                                   >> 0x0000001fU)) 
                                                 & (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                                                    >> 0x0000001fU)) 
                                                | ((vlSelfRef.risc_v__DOT__ALU_in1 
                                                    >> 0x0000001fU) 
                                                   & ((~ 
                                                       (vlSelfRef.risc_v__DOT__ALU_in2 
                                                        >> 0x0000001fU)) 
                                                      | (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                                                         >> 0x0000001fU)))));
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1470, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2;
    }
    if ((4U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2 
               << 4U);
    } else {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1736, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2;
    }
    if ((4U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2 
               >> 4U);
    } else {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2002, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2;
    }
    if ((4U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x0000001cU) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2 
                  >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2;
    if (((IData)(vlSelfRef.risc_v__DOT__signed_less_than) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__signed_less_than))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 70, vlSelfRef.risc_v__DOT__signed_less_than, vlSelfRef.risc_v__DOT____Vtogcov__signed_less_than);
        vlSelfRef.risc_v__DOT____Vtogcov__signed_less_than 
            = vlSelfRef.risc_v__DOT__signed_less_than;
    }
    if (vlSelfRef.risc_v__DOT__branch_decoder_on) {
        vlSelfRef.risc_v__DOT__branch_decision = 0U;
        if ((4U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
            if ((2U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
                if ((1U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
                    vlSelfRef.risc_v__DOT__branch_decision 
                        = vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag;
                    ++(vlSymsp->__Vcoverage[881]);
                } else {
                    vlSelfRef.risc_v__DOT__branch_decision 
                        = (1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)));
                    ++(vlSymsp->__Vcoverage[878]);
                }
            } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
                vlSelfRef.risc_v__DOT__branch_decision 
                    = (1U & (~ (IData)(vlSelfRef.risc_v__DOT__signed_less_than)));
                ++(vlSymsp->__Vcoverage[877]);
            } else {
                vlSelfRef.risc_v__DOT__branch_decision 
                    = vlSelfRef.risc_v__DOT__signed_less_than;
                ++(vlSymsp->__Vcoverage[874]);
            }
        } else if ((2U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
            ++(vlSymsp->__Vcoverage[882]);
        } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
            vlSelfRef.risc_v__DOT__branch_decision 
                = (0U != vlSelfRef.risc_v__DOT__alu__DOT__s1_out);
            ++(vlSymsp->__Vcoverage[873]);
        } else {
            vlSelfRef.risc_v__DOT__branch_decision 
                = (0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out);
            ++(vlSymsp->__Vcoverage[870]);
        }
        if ((0U != vlSelfRef.risc_v__DOT__alu__DOT__s1_out)) {
            ++(vlSymsp->__Vcoverage[871]);
        }
        if ((0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out)) {
            ++(vlSymsp->__Vcoverage[872]);
        }
        if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__signed_less_than)))) {
            ++(vlSymsp->__Vcoverage[875]);
        }
        if (vlSelfRef.risc_v__DOT__signed_less_than) {
            ++(vlSymsp->__Vcoverage[876]);
        }
        if (vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag) {
            ++(vlSymsp->__Vcoverage[879]);
        }
        if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)))) {
            ++(vlSymsp->__Vcoverage[880]);
        }
        ++(vlSymsp->__Vcoverage[883]);
    } else {
        vlSelfRef.risc_v__DOT__branch_decision = 0U;
        ++(vlSymsp->__Vcoverage[884]);
    }
    ++(vlSymsp->__Vcoverage[885]);
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1534, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3;
    }
    if ((8U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3 
               << 8U);
    } else {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1800, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3;
    }
    if ((8U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3 
               >> 8U);
    } else {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2066, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3;
    }
    if ((8U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x00000018U) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3 
                  >> 8U));
    } else {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3;
    if (((IData)(vlSelfRef.risc_v__DOT__branch_decision) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__branch_decision))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 784, vlSelfRef.risc_v__DOT__branch_decision, vlSelfRef.risc_v__DOT____Vtogcov__branch_decision);
        vlSelfRef.risc_v__DOT____Vtogcov__branch_decision 
            = vlSelfRef.risc_v__DOT__branch_decision;
    }
    if (vlSelfRef.risc_v__DOT__branch_decision) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.risc_v__DOT____VlemCond_0 = vlSelfRef.risc_v__DOT__imm;
    } else {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.risc_v__DOT____VlemCond_0 = 0U;
    }
    vlSelfRef.risc_v__DOT__adder_in1 = vlSelfRef.risc_v__DOT____VlemCond_0;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1598, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4 
               << 0x00000010U);
    } else {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll_out = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1864, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4 
               >> 0x10U);
    } else {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl_out = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2130, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x00000010U) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4 
                  >> 0x10U));
    } else {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra_out = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4;
    if ((vlSelfRef.risc_v__DOT__adder_in1 ^ vlSelfRef.risc_v__DOT____Vtogcov__adder_in1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 646, vlSelfRef.risc_v__DOT__adder_in1, vlSelfRef.risc_v__DOT____Vtogcov__adder_in1);
        vlSelfRef.risc_v__DOT____Vtogcov__adder_in1 
            = vlSelfRef.risc_v__DOT__adder_in1;
    }
    vlSelfRef.risc_v__DOT__adder_cout = (1U & (IData)(
                                                      (1ULL 
                                                       & (((QData)((IData)(vlSelfRef.risc_v__DOT__adder_in1)) 
                                                           + (QData)((IData)(vlSelfRef.risc_v__DOT__pc))) 
                                                          >> 0x00000020U))));
    vlSelfRef.risc_v__DOT__adder_out = (vlSelfRef.risc_v__DOT__adder_in1 
                                        + (IData)(vlSelfRef.risc_v__DOT__pc));
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sll_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1135, vlSelfRef.risc_v__DOT__alu__DOT__sll_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sll_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sll_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll_out;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__srl_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1199, vlSelfRef.risc_v__DOT__alu__DOT__srl_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__srl_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__srl_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl_out;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sra_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1263, vlSelfRef.risc_v__DOT__alu__DOT__sra_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sra_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sra_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra_out;
    }
    vlSelfRef.risc_v__DOT__ALU_out = 0U;
    if ((8U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        if ((4U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            ++(vlSymsp->__Vcoverage[1338]);
        } else if ((2U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
                ++(vlSymsp->__Vcoverage[1338]);
            } else {
                vlSelfRef.risc_v__DOT__ALU_out = (0xfffffffeU 
                                                  & vlSelfRef.risc_v__DOT__alu__DOT__a1_out);
                ++(vlSymsp->__Vcoverage[1337]);
            }
        } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            vlSelfRef.risc_v__DOT__ALU_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                              & vlSelfRef.risc_v__DOT__ALU_in2);
            ++(vlSymsp->__Vcoverage[1336]);
        } else {
            vlSelfRef.risc_v__DOT__ALU_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                              | vlSelfRef.risc_v__DOT__ALU_in2);
            ++(vlSymsp->__Vcoverage[1335]);
        }
    } else if ((4U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        if ((2U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
                vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__sra_out;
                ++(vlSymsp->__Vcoverage[1334]);
            } else {
                vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__srl_out;
                ++(vlSymsp->__Vcoverage[1333]);
            }
        } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            vlSelfRef.risc_v__DOT__ALU_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                              ^ vlSelfRef.risc_v__DOT__ALU_in2);
            ++(vlSymsp->__Vcoverage[1332]);
        } else {
            vlSelfRef.risc_v__DOT__ALU_out = (1U & 
                                              (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)));
            ++(vlSymsp->__Vcoverage[1331]);
        }
    } else if ((2U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__signed_less_than;
            ++(vlSymsp->__Vcoverage[1330]);
        } else {
            vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__sll_out;
            ++(vlSymsp->__Vcoverage[1329]);
        }
    } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__s1_out;
        ++(vlSymsp->__Vcoverage[1328]);
    } else {
        vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__a1_out;
        ++(vlSymsp->__Vcoverage[1327]);
    }
    ++(vlSymsp->__Vcoverage[1339]);
    if (((IData)(vlSelfRef.risc_v__DOT__adder_cout) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__adder_cout))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 774, vlSelfRef.risc_v__DOT__adder_cout, vlSelfRef.risc_v__DOT____Vtogcov__adder_cout);
        vlSelfRef.risc_v__DOT____Vtogcov__adder_cout 
            = vlSelfRef.risc_v__DOT__adder_cout;
    }
    if ((vlSelfRef.risc_v__DOT__adder_out ^ vlSelfRef.risc_v__DOT____Vtogcov__adder_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 710, vlSelfRef.risc_v__DOT__adder_out, vlSelfRef.risc_v__DOT____Vtogcov__adder_out);
        vlSelfRef.risc_v__DOT____Vtogcov__adder_out 
            = vlSelfRef.risc_v__DOT__adder_out;
    }
    if ((vlSelfRef.risc_v__DOT__ALU_out ^ vlSelfRef.risc_v__DOT____Vtogcov__ALU_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 326, vlSelfRef.risc_v__DOT__ALU_out, vlSelfRef.risc_v__DOT____Vtogcov__ALU_out);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_out = vlSelfRef.risc_v__DOT__ALU_out;
    }
    if ((0x00001fffU & (vlSelfRef.risc_v__DOT__ALU_out 
                        ^ (IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(13, vlSymsp->__Vcoverage + 2205, vlSelfRef.risc_v__DOT__ALU_out, vlSelfRef.risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr);
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr 
            = (0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out);
    }
    vlSelfRef.risc_v__DOT__data_mem_out = 0U;
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
        if (vlSelfRef.risc_v__DOT__sign_val) {
            ++(vlSymsp->__Vcoverage[2233]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_0 
                = (((- (IData)((1U & (vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                      [(0x00001fffU 
                                        & vlSelfRef.risc_v__DOT__ALU_out)] 
                                      >> 7U)))) << 8U) 
                   | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                   [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)]);
        } else {
            ++(vlSymsp->__Vcoverage[2234]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_0 
                = vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)];
        }
        vlSelfRef.risc_v__DOT__data_mem_out = vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_0;
        ++(vlSymsp->__Vcoverage[2235]);
    } else if ((1U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
        if (vlSelfRef.risc_v__DOT__sign_val) {
            ++(vlSymsp->__Vcoverage[2238]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_1 
                = (((- (IData)((1U & (vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                      [(0x00001fffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.risc_v__DOT__ALU_out))] 
                                      >> 7U)))) << 0x00000010U) 
                   | (((IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                               [(0x00001fffU & ((IData)(1U) 
                                                + vlSelfRef.risc_v__DOT__ALU_out))]) 
                       << 8U) | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                      [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)]));
        } else {
            ++(vlSymsp->__Vcoverage[2239]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_1 
                = ((vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                    [(0x00001fffU & ((IData)(1U) + vlSelfRef.risc_v__DOT__ALU_out))] 
                    << 8U) | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                   [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)]);
        }
        vlSelfRef.risc_v__DOT__data_mem_out = vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_1;
        ++(vlSymsp->__Vcoverage[2240]);
    } else if ((2U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
        vlSelfRef.risc_v__DOT__data_mem_out = (((((IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                          [
                                                          (0x00001fffU 
                                                           & ((IData)(3U) 
                                                              + vlSelfRef.risc_v__DOT__ALU_out))]) 
                                                  << 8U) 
                                                 | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                 [(0x00001fffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.risc_v__DOT__ALU_out))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                           [
                                                           (0x00001fffU 
                                                            & ((IData)(1U) 
                                                               + vlSelfRef.risc_v__DOT__ALU_out))]) 
                                                   << 8U) 
                                                  | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                  [
                                                  (0x00001fffU 
                                                   & vlSelfRef.risc_v__DOT__ALU_out)]));
        ++(vlSymsp->__Vcoverage[2241]);
    } else {
        ++(vlSymsp->__Vcoverage[2242]);
    }
    if (vlSelfRef.risc_v__DOT__sign_val) {
        ++(vlSymsp->__Vcoverage[2231]);
    }
    if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__sign_val)))) {
        ++(vlSymsp->__Vcoverage[2232]);
    }
    if (vlSelfRef.risc_v__DOT__sign_val) {
        ++(vlSymsp->__Vcoverage[2236]);
    }
    if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__sign_val)))) {
        ++(vlSymsp->__Vcoverage[2237]);
    }
    ++(vlSymsp->__Vcoverage[2243]);
    if ((vlSelfRef.risc_v__DOT__data_mem_out ^ vlSelfRef.risc_v__DOT____Vtogcov__data_mem_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 582, vlSelfRef.risc_v__DOT__data_mem_out, vlSelfRef.risc_v__DOT____Vtogcov__data_mem_out);
        vlSelfRef.risc_v__DOT____Vtogcov__data_mem_out 
            = vlSelfRef.risc_v__DOT__data_mem_out;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__mux_reg))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.risc_v__DOT____VlemCond_1 = vlSelfRef.risc_v__DOT__ALU_out;
    } else {
        ++(vlSymsp->__Vcoverage[792]);
        if ((1U == (IData)(vlSelfRef.risc_v__DOT__mux_reg))) {
            ++(vlSymsp->__Vcoverage[790]);
            vlSelfRef.risc_v__DOT____VlemCond_1 = vlSelfRef.risc_v__DOT__adder_out;
        } else {
            ++(vlSymsp->__Vcoverage[791]);
            vlSelfRef.risc_v__DOT____VlemCond_1 = vlSelfRef.risc_v__DOT__data_mem_out;
        }
    }
    vlSelfRef.risc_v__DOT__reg_data_in = vlSelfRef.risc_v__DOT____VlemCond_1;
    if ((vlSelfRef.risc_v__DOT__reg_data_in ^ vlSelfRef.risc_v__DOT____Vtogcov__reg_data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 390, vlSelfRef.risc_v__DOT__reg_data_in, vlSelfRef.risc_v__DOT____Vtogcov__reg_data_in);
        vlSelfRef.risc_v__DOT____Vtogcov__reg_data_in 
            = vlSelfRef.risc_v__DOT__reg_data_in;
    }
}

VL_ATTR_COLD void Vrisc_v___024root___eval_stl(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_stl\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vrisc_v___024root___stl_sequent__TOP__0(vlSelf);
        Vrisc_v___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vrisc_v___024root___eval_phase__stl(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__stl\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrisc_v___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_v___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vrisc_v___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vrisc_v___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vrisc_v___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vrisc_v___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vrisc_v___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vrisc_v___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__risc_v__clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrisc_v___024root____Vm_traceActivitySetAll(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root____Vm_traceActivitySetAll\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vrisc_v___024root___ctor_var_reset(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___ctor_var_reset\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellout__risc_v__ALU_FUNCT = 0;
    vlSelf->__Vcellout__risc_v__RD = 0;
    vlSelf->__Vcellout__risc_v__RS2 = 0;
    vlSelf->__Vcellout__risc_v__RS1 = 0;
    vlSelf->__Vcellinp__risc_v__clk = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->risc_v__DOT__instr_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11072880364518649977ull);
    }
    vlSelf->risc_v__DOT__pc = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4969614553421264845ull);
    vlSelf->risc_v__DOT__signed_less_than = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14433682587561697373ull);
    vlSelf->risc_v__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8005668931631401202ull);
    vlSelf->risc_v__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13704908115373242348ull);
    vlSelf->risc_v__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11190842130683536622ull);
    vlSelf->risc_v__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10673011985328893155ull);
    vlSelf->risc_v__DOT__mux_adder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5874856504716510980ull);
    vlSelf->risc_v__DOT__mux_PC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6894091676857843342ull);
    vlSelf->risc_v__DOT__WE_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9827901274755436584ull);
    vlSelf->risc_v__DOT__WE_data_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7707380965197017678ull);
    vlSelf->risc_v__DOT__mux_ALU1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14036140487804380346ull);
    vlSelf->risc_v__DOT__sign_val = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12325925146982497571ull);
    vlSelf->risc_v__DOT__mux_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15545877471029413111ull);
    vlSelf->risc_v__DOT__mux_ALU2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3671411591580602838ull);
    vlSelf->risc_v__DOT__mem_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18026822175123641889ull);
    vlSelf->risc_v__DOT__ALU_funct = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7662886216366262250ull);
    vlSelf->risc_v__DOT__ALU_in1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17719629412547604464ull);
    vlSelf->risc_v__DOT__ALU_in2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12877744454029290361ull);
    vlSelf->risc_v__DOT__ALU_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6321140029664918103ull);
    vlSelf->risc_v__DOT__reg_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7946102747232025664ull);
    vlSelf->risc_v__DOT__rs1_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9982269795777813484ull);
    vlSelf->risc_v__DOT__rs2_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15952506746932511204ull);
    vlSelf->risc_v__DOT__data_mem_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15912156854400191682ull);
    vlSelf->risc_v__DOT__adder_in1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16818155436064261621ull);
    vlSelf->risc_v__DOT__adder_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8734929019252085858ull);
    vlSelf->risc_v__DOT__adder_cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6228774896342330503ull);
    vlSelf->risc_v__DOT__branch_decoder_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10667818690054537006ull);
    vlSelf->risc_v__DOT__branch_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18421890066710235717ull);
    vlSelf->risc_v__DOT__branch_decision = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6351336004377874726ull);
    vlSelf->risc_v__DOT____Vtogcov__clk = 0;
    vlSelf->risc_v__DOT____Vtogcov__RS1 = 0;
    vlSelf->risc_v__DOT____Vtogcov__RS2 = 0;
    vlSelf->risc_v__DOT____Vtogcov__RD = 0;
    vlSelf->risc_v__DOT____Vtogcov__ALU_FUNCT = 0;
    vlSelf->risc_v__DOT____Vtogcov__pc = 0;
    vlSelf->risc_v__DOT____Vtogcov__zero_flag = 0;
    vlSelf->risc_v__DOT____Vtogcov__unsigned_less_than = 0;
    vlSelf->risc_v__DOT____Vtogcov__signed_less_than = 0;
    vlSelf->risc_v__DOT____Vtogcov__rs1 = 0;
    vlSelf->risc_v__DOT____Vtogcov__rs2 = 0;
    vlSelf->risc_v__DOT____Vtogcov__rd = 0;
    vlSelf->risc_v__DOT____Vtogcov__imm = 0;
    vlSelf->risc_v__DOT____Vtogcov__mux_adder = 0;
    vlSelf->risc_v__DOT____Vtogcov__mux_PC = 0;
    vlSelf->risc_v__DOT____Vtogcov__WE_reg_file = 0;
    vlSelf->risc_v__DOT____Vtogcov__WE_data_mem = 0;
    vlSelf->risc_v__DOT____Vtogcov__mux_ALU1 = 0;
    vlSelf->risc_v__DOT____Vtogcov__sign_val = 0;
    vlSelf->risc_v__DOT____Vtogcov__mux_reg = 0;
    vlSelf->risc_v__DOT____Vtogcov__mux_ALU2 = 0;
    vlSelf->risc_v__DOT____Vtogcov__mem_size = 0;
    vlSelf->risc_v__DOT____Vtogcov__ALU_funct = 0;
    vlSelf->risc_v__DOT____Vtogcov__ALU_in1 = 0;
    vlSelf->risc_v__DOT____Vtogcov__ALU_in2 = 0;
    vlSelf->risc_v__DOT____Vtogcov__ALU_out = 0;
    vlSelf->risc_v__DOT____Vtogcov__reg_data_in = 0;
    vlSelf->risc_v__DOT____Vtogcov__rs1_out = 0;
    vlSelf->risc_v__DOT____Vtogcov__rs2_out = 0;
    vlSelf->risc_v__DOT____Vtogcov__data_mem_out = 0;
    vlSelf->risc_v__DOT____Vtogcov__adder_in1 = 0;
    vlSelf->risc_v__DOT____Vtogcov__adder_out = 0;
    vlSelf->risc_v__DOT____Vtogcov__adder_cout = 0;
    vlSelf->risc_v__DOT____Vtogcov__branch_decoder_on = 0;
    vlSelf->risc_v__DOT____Vtogcov__branch_op = 0;
    vlSelf->risc_v__DOT____Vtogcov__branch_decision = 0;
    vlSelf->risc_v__DOT__ADDER__DOT____Vtogcov__B = 0;
    vlSelf->risc_v__DOT__ADDER__DOT____Vtogcov__Cin = 0;
    vlSelf->risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr = 0;
    vlSelf->risc_v__DOT__alu__DOT__a1_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3802635812332274656ull);
    vlSelf->risc_v__DOT__alu__DOT__s1_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16196251821582352349ull);
    vlSelf->risc_v__DOT__alu__DOT__a1_carry_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11997111905033813195ull);
    vlSelf->risc_v__DOT__alu__DOT__s1_carry_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2250789809216313705ull);
    vlSelf->risc_v__DOT__alu__DOT__sll_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13240453263999633163ull);
    vlSelf->risc_v__DOT__alu__DOT__srl_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4640978605575339627ull);
    vlSelf->risc_v__DOT__alu__DOT__sra_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7273850652274930868ull);
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__a1_out = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__s1_out = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__A = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__B = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__C = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__sll_out = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__srl_out = 0;
    vlSelf->risc_v__DOT__alu__DOT____Vtogcov__sra_out = 0;
    vlSelf->risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B = 0;
    vlSelf->risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__Cin = 0;
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9963564915581467563ull);
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12899015038831126074ull);
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT__s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 836815624133639380ull);
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10291721120752020878ull);
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4 = 0;
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3725269008744114022ull);
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18030778069356169192ull);
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT__s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11020476049054988294ull);
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3836454011295555073ull);
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1 = 0;
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2 = 0;
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3 = 0;
    vlSelf->risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13441622815639891535ull);
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6573460988312582695ull);
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT__s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3350033397698782155ull);
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1722336393278970857ull);
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3 = 0;
    vlSelf->risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4 = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->risc_v__DOT__DATA_MEM__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12605023042778145084ull);
    }
    vlSelf->risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr = 0;
    vlSelf->risc_v__DOT__REG_FILE__DOT____Vlvbound_h0df2320c__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->risc_v__DOT__REG_FILE__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17390473549949106986ull);
    }
    vlSelf->risc_v__DOT__REG_FILE__DOT____Vtogcov__r0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__risc_v__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vrisc_v___024root___configure_coverage(Vrisc_v___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___configure_coverage\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "risc_v.v", 8, 11, ".risc_v", "v_toggle/risc_v", "clk");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[2]), first, "risc_v.v", 11, 22, ".risc_v", "v_toggle/risc_v", "RS1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[12]), first, "risc_v.v", 12, 22, ".risc_v", "v_toggle/risc_v", "RS2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[22]), first, "risc_v.v", 13, 22, ".risc_v", "v_toggle/risc_v", "RD");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[32]), first, "risc_v.v", 14, 22, ".risc_v", "v_toggle/risc_v", "ALU_FUNCT");
    vlSelf->__vlCoverToggleInsert(0, 12, 1, &(vlSymsp->__Vcoverage[40]), first, "risc_v.v", 20, 16, ".risc_v", "v_toggle/risc_v", "pc");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[66]), first, "risc_v.v", 23, 10, ".risc_v", "v_toggle/risc_v", "zero_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[68]), first, "risc_v.v", 23, 21, ".risc_v", "v_toggle/risc_v", "unsigned_less_than");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[70]), first, "risc_v.v", 23, 41, ".risc_v", "v_toggle/risc_v", "signed_less_than");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[72]), first, "risc_v.v", 26, 16, ".risc_v", "v_toggle/risc_v", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[82]), first, "risc_v.v", 26, 21, ".risc_v", "v_toggle/risc_v", "rs2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[92]), first, "risc_v.v", 26, 26, ".risc_v", "v_toggle/risc_v", "rd");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[102]), first, "risc_v.v", 29, 17, ".risc_v", "v_toggle/risc_v", "imm");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[166]), first, "risc_v.v", 32, 10, ".risc_v", "v_toggle/risc_v", "mux_adder");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[168]), first, "risc_v.v", 32, 21, ".risc_v", "v_toggle/risc_v", "mux_PC");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[170]), first, "risc_v.v", 32, 29, ".risc_v", "v_toggle/risc_v", "WE_reg_file");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[172]), first, "risc_v.v", 32, 42, ".risc_v", "v_toggle/risc_v", "WE_data_mem");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[174]), first, "risc_v.v", 32, 55, ".risc_v", "v_toggle/risc_v", "mux_ALU1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[176]), first, "risc_v.v", 32, 65, ".risc_v", "v_toggle/risc_v", "sign_val");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[178]), first, "risc_v.v", 33, 16, ".risc_v", "v_toggle/risc_v", "mux_reg");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[182]), first, "risc_v.v", 33, 25, ".risc_v", "v_toggle/risc_v", "mux_ALU2");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[186]), first, "risc_v.v", 33, 35, ".risc_v", "v_toggle/risc_v", "mem_size");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[190]), first, "risc_v.v", 34, 16, ".risc_v", "v_toggle/risc_v", "ALU_funct");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "risc_v.v", 37, 17, ".risc_v", "v_toggle/risc_v", "ALU_in1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[262]), first, "risc_v.v", 37, 26, ".risc_v", "v_toggle/risc_v", "ALU_in2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[326]), first, "risc_v.v", 40, 17, ".risc_v", "v_toggle/risc_v", "ALU_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[390]), first, "risc_v.v", 43, 17, ".risc_v", "v_toggle/risc_v", "reg_data_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[454]), first, "risc_v.v", 43, 30, ".risc_v", "v_toggle/risc_v", "rs1_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[518]), first, "risc_v.v", 43, 39, ".risc_v", "v_toggle/risc_v", "rs2_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[582]), first, "risc_v.v", 46, 17, ".risc_v", "v_toggle/risc_v", "data_mem_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[646]), first, "risc_v.v", 49, 17, ".risc_v", "v_toggle/risc_v", "adder_in1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[710]), first, "risc_v.v", 49, 28, ".risc_v", "v_toggle/risc_v", "adder_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[774]), first, "risc_v.v", 50, 10, ".risc_v", "v_toggle/risc_v", "adder_cout");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[776]), first, "risc_v.v", 53, 10, ".risc_v", "v_toggle/risc_v", "branch_decoder_on");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[778]), first, "risc_v.v", 54, 16, ".risc_v", "v_toggle/risc_v", "branch_op");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[784]), first, "risc_v.v", 55, 10, ".risc_v", "v_toggle/risc_v", "branch_decision");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "risc_v.v", 57, 5, ".risc_v", "v_line/risc_v", "block", "57,59-60", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "risc_v.v", 64, 42, ".risc_v", "v_branch/risc_v", "cond_then", "64", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "risc_v.v", 64, 43, ".risc_v", "v_branch/risc_v", "cond_else", "64", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "risc_v.v", 65, 41, ".risc_v", "v_branch/risc_v", "cond_then", "65", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "risc_v.v", 65, 67, ".risc_v", "v_branch/risc_v", "cond_then", "65", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "risc_v.v", 65, 68, ".risc_v", "v_branch/risc_v", "cond_else", "65", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "risc_v.v", 65, 42, ".risc_v", "v_branch/risc_v", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "risc_v.v", 66, 38, ".risc_v", "v_branch/risc_v", "cond_then", "66", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "risc_v.v", 66, 65, ".risc_v", "v_branch/risc_v", "cond_then", "66", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "risc_v.v", 66, 66, ".risc_v", "v_branch/risc_v", "cond_else", "66", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "risc_v.v", 66, 39, ".risc_v", "v_branch/risc_v", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "risc_v.v", 67, 33, ".risc_v", "v_branch/risc_v", "cond_then", "67", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "risc_v.v", 67, 34, ".risc_v", "v_branch/risc_v", "cond_else", "67", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "risc_v.v", 71, 15, ".risc_v", "v_expr/risc_v", "(mux_PC==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "risc_v.v", 71, 15, ".risc_v", "v_expr/risc_v", "(mux_PC==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "risc_v.v", 71, 33, ".risc_v", "v_branch/risc_v", "cond_then", "71", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "risc_v.v", 71, 34, ".risc_v", "v_branch/risc_v", "cond_else", "71", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "risc_v.v", 69, 5, ".risc_v", "v_line/risc_v", "block", "69-71,73-76", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[646]), first, "risc_v.v", 168, 18, ".risc_v.ADDER", "v_toggle/helper_adder", "A");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[804]), first, "risc_v.v", 169, 18, ".risc_v.ADDER", "v_toggle/helper_adder", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[868]), first, "risc_v.v", 170, 11, ".risc_v.ADDER", "v_toggle/helper_adder", "Cin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[710]), first, "risc_v.v", 171, 18, ".risc_v.ADDER", "v_toggle/helper_adder", "S");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[774]), first, "risc_v.v", 172, 12, ".risc_v.ADDER", "v_toggle/helper_adder", "Cout");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[66]), first, "risc_v.v", 181, 11, ".risc_v.BRANCH_DECODER", "v_toggle/branch_decoder", "zero_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[68]), first, "risc_v.v", 182, 11, ".risc_v.BRANCH_DECODER", "v_toggle/branch_decoder", "unsigned_less_than");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[70]), first, "risc_v.v", 183, 11, ".risc_v.BRANCH_DECODER", "v_toggle/branch_decoder", "signed_less_than");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[776]), first, "risc_v.v", 185, 11, ".risc_v.BRANCH_DECODER", "v_toggle/branch_decoder", "branch_decoder");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[778]), first, "risc_v.v", 186, 17, ".risc_v.BRANCH_DECODER", "v_toggle/branch_decoder", "branch_op");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[784]), first, "risc_v.v", 187, 16, ".risc_v.BRANCH_DECODER", "v_toggle/branch_decoder", "branch_decision");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "risc_v.v", 195, 23, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "195", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "risc_v.v", 196, 43, ".risc_v.BRANCH_DECODER", "v_expr/branch_decoder", "(zero_flag==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "risc_v.v", 196, 43, ".risc_v.BRANCH_DECODER", "v_expr/branch_decoder", "(zero_flag==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "risc_v.v", 196, 23, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "196", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "risc_v.v", 197, 23, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "197", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "risc_v.v", 198, 43, ".risc_v.BRANCH_DECODER", "v_expr/branch_decoder", "(signed_less_than==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "risc_v.v", 198, 43, ".risc_v.BRANCH_DECODER", "v_expr/branch_decoder", "(signed_less_than==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "risc_v.v", 198, 23, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "198", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "risc_v.v", 199, 23, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "199", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "risc_v.v", 200, 43, ".risc_v.BRANCH_DECODER", "v_expr/branch_decoder", "(unsigned_less_than==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "risc_v.v", 200, 43, ".risc_v.BRANCH_DECODER", "v_expr/branch_decoder", "(unsigned_less_than==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "risc_v.v", 200, 23, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "200", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "risc_v.v", 201, 17, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "case", "201", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "risc_v.v", 192, 9, ".risc_v.BRANCH_DECODER", "v_branch/branch_decoder", "if", "192-194", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "risc_v.v", 192, 10, ".risc_v.BRANCH_DECODER", "v_branch/branch_decoder", "else", "204-205", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "risc_v.v", 190, 5, ".risc_v.BRANCH_DECODER", "v_line/branch_decoder", "block", "190-191", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[886]), first, "../../verilog/control_unit.v", 3, 18, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "instr");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[72]), first, "../../verilog/control_unit.v", 5, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[82]), first, "../../verilog/control_unit.v", 6, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "rs2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[92]), first, "../../verilog/control_unit.v", 7, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "rd");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[102]), first, "../../verilog/control_unit.v", 9, 23, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "imm");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[168]), first, "../../verilog/control_unit.v", 11, 16, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "mux_PC");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[178]), first, "../../verilog/control_unit.v", 12, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "mux_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[170]), first, "../../verilog/control_unit.v", 13, 16, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "WE_reg_file");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[172]), first, "../../verilog/control_unit.v", 14, 16, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "WE_data_mem");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[182]), first, "../../verilog/control_unit.v", 15, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "mux_ALU2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[174]), first, "../../verilog/control_unit.v", 16, 16, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "mux_ALU1");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[190]), first, "../../verilog/control_unit.v", 17, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "ALU_funct");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[186]), first, "../../verilog/control_unit.v", 18, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "mem_size");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[176]), first, "../../verilog/control_unit.v", 19, 16, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "sign_val");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[776]), first, "../../verilog/control_unit.v", 20, 16, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "branch_decoder");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[778]), first, "../../verilog/control_unit.v", 21, 22, ".risc_v.CONTROL_UNIT", "v_toggle/control_unit", "branch_op");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[950]), first, "../../verilog/control_unit.v", 77, 33, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "77", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[951]), first, "../../verilog/control_unit.v", 78, 33, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "78", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[952]), first, "../../verilog/control_unit.v", 79, 29, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "79", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[953]), first, "../../verilog/control_unit.v", 75, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "75-76", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[954]), first, "../../verilog/control_unit.v", 82, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "82", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[955]), first, "../../verilog/control_unit.v", 83, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "83", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[956]), first, "../../verilog/control_unit.v", 84, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "84", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[957]), first, "../../verilog/control_unit.v", 85, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "85", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[958]), first, "../../verilog/control_unit.v", 88, 33, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "88", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[959]), first, "../../verilog/control_unit.v", 89, 33, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "89", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[960]), first, "../../verilog/control_unit.v", 90, 29, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "90", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[961]), first, "../../verilog/control_unit.v", 86, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "86-87", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[962]), first, "../../verilog/control_unit.v", 93, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "93", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[963]), first, "../../verilog/control_unit.v", 94, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[964]), first, "../../verilog/control_unit.v", 95, 21, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "95", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[965]), first, "../../verilog/control_unit.v", 62, 15, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "62,64-72,74", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[966]), first, "../../verilog/control_unit.v", 110, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "110", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[967]), first, "../../verilog/control_unit.v", 111, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "111", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[968]), first, "../../verilog/control_unit.v", 112, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "112", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[969]), first, "../../verilog/control_unit.v", 113, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "113", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[970]), first, "../../verilog/control_unit.v", 114, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "114", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[971]), first, "../../verilog/control_unit.v", 115, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "115", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[972]), first, "../../verilog/control_unit.v", 116, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "116-118", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[973]), first, "../../verilog/control_unit.v", 122, 33, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "122-124", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[974]), first, "../../verilog/control_unit.v", 126, 33, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "126-128", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[975]), first, "../../verilog/control_unit.v", 130, 29, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "130", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[976]), first, "../../verilog/control_unit.v", 120, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "120-121", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[977]), first, "../../verilog/control_unit.v", 98, 19, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "98-107,109", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[978]), first, "../../verilog/control_unit.v", 146, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "146", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[979]), first, "../../verilog/control_unit.v", 147, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "147", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[980]), first, "../../verilog/control_unit.v", 148, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[981]), first, "../../verilog/control_unit.v", 149, 21, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "149", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[982]), first, "../../verilog/control_unit.v", 135, 18, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "135-136,138-145", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[983]), first, "../../verilog/control_unit.v", 162, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "162", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[984]), first, "../../verilog/control_unit.v", 163, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "163", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[985]), first, "../../verilog/control_unit.v", 164, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "164", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[986]), first, "../../verilog/control_unit.v", 165, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "165-167", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[987]), first, "../../verilog/control_unit.v", 169, 27, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "169-171", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[988]), first, "../../verilog/control_unit.v", 173, 21, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "173", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[989]), first, "../../verilog/control_unit.v", 152, 17, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "152-153,155-161", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[990]), first, "../../verilog/control_unit.v", 176, 19, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "176-188", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[991]), first, "../../verilog/control_unit.v", 190, 17, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "190-200", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[992]), first, "../../verilog/control_unit.v", 202, 16, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "202-211", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[993]), first, "../../verilog/control_unit.v", 213, 18, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "213-222", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[994]), first, "../../verilog/control_unit.v", 224, 16, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "224-233", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[995]), first, "../../verilog/control_unit.v", 235, 13, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "case", "235", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[996]), first, "../../verilog/control_unit.v", 41, 5, ".risc_v.CONTROL_UNIT", "v_line/control_unit", "block", "41-42,44-58,61", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[190]), first, "../../verilog/alu.v", 2, 17, ".risc_v.alu", "v_toggle/ALU", "ALU_funct");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "../../verilog/alu.v", 3, 18, ".risc_v.alu", "v_toggle/ALU", "in1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[262]), first, "../../verilog/alu.v", 4, 18, ".risc_v.alu", "v_toggle/ALU", "in2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[326]), first, "../../verilog/alu.v", 5, 23, ".risc_v.alu", "v_toggle/ALU", "out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[66]), first, "../../verilog/alu.v", 6, 12, ".risc_v.alu", "v_toggle/ALU", "zero_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[68]), first, "../../verilog/alu.v", 7, 12, ".risc_v.alu", "v_toggle/ALU", "unsigned_less_than");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[70]), first, "../../verilog/alu.v", 8, 12, ".risc_v.alu", "v_toggle/ALU", "signed_less_than");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[997]), first, "../../verilog/alu.v", 19, 17, ".risc_v.alu", "v_toggle/ALU", "a1_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1061]), first, "../../verilog/alu.v", 19, 25, ".risc_v.alu", "v_toggle/ALU", "s1_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1125]), first, "../../verilog/alu.v", 20, 10, ".risc_v.alu", "v_toggle/ALU", "A");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1127]), first, "../../verilog/alu.v", 20, 13, ".risc_v.alu", "v_toggle/ALU", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1129]), first, "../../verilog/alu.v", 20, 16, ".risc_v.alu", "v_toggle/ALU", "C");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1131]), first, "../../verilog/alu.v", 20, 19, ".risc_v.alu", "v_toggle/ALU", "a1_carry_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1133]), first, "../../verilog/alu.v", 20, 34, ".risc_v.alu", "v_toggle/ALU", "s1_carry_flag");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1135]), first, "../../verilog/alu.v", 35, 17, ".risc_v.alu", "v_toggle/ALU", "sll_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1199]), first, "../../verilog/alu.v", 35, 26, ".risc_v.alu", "v_toggle/ALU", "srl_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1263]), first, "../../verilog/alu.v", 35, 35, ".risc_v.alu", "v_toggle/ALU", "sra_out");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "../../verilog/alu.v", 42, 16, ".risc_v.alu", "v_line/ALU", "case", "42", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "../../verilog/alu.v", 43, 16, ".risc_v.alu", "v_line/ALU", "case", "43", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "../../verilog/alu.v", 44, 16, ".risc_v.alu", "v_line/ALU", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "../../verilog/alu.v", 45, 16, ".risc_v.alu", "v_line/ALU", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "../../verilog/alu.v", 46, 17, ".risc_v.alu", "v_line/ALU", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "../../verilog/alu.v", 47, 16, ".risc_v.alu", "v_line/ALU", "case", "47", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "../../verilog/alu.v", 48, 16, ".risc_v.alu", "v_line/ALU", "case", "48", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "../../verilog/alu.v", 49, 16, ".risc_v.alu", "v_line/ALU", "case", "49", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "../../verilog/alu.v", 50, 15, ".risc_v.alu", "v_line/ALU", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "../../verilog/alu.v", 51, 16, ".risc_v.alu", "v_line/ALU", "case", "51", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "../../verilog/alu.v", 52, 21, ".risc_v.alu", "v_line/ALU", "case", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "../../verilog/alu.v", 53, 13, ".risc_v.alu", "v_line/ALU", "case", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "../../verilog/alu.v", 37, 5, ".risc_v.alu", "v_line/ALU", "block", "37-39,41", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "../../verilog/alu.v", 74, 18, ".risc_v.alu.a1", "v_toggle/adder", "A");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[262]), first, "../../verilog/alu.v", 75, 18, ".risc_v.alu.a1", "v_toggle/adder", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[868]), first, "../../verilog/alu.v", 76, 11, ".risc_v.alu.a1", "v_toggle/adder", "Cin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[997]), first, "../../verilog/alu.v", 77, 18, ".risc_v.alu.a1", "v_toggle/adder", "S");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1131]), first, "../../verilog/alu.v", 78, 12, ".risc_v.alu.a1", "v_toggle/adder", "Cout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "../../verilog/alu.v", 74, 18, ".risc_v.alu.s1", "v_toggle/adder", "A");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1340]), first, "../../verilog/alu.v", 75, 18, ".risc_v.alu.s1", "v_toggle/adder", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1404]), first, "../../verilog/alu.v", 76, 11, ".risc_v.alu.s1", "v_toggle/adder", "Cin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1061]), first, "../../verilog/alu.v", 77, 18, ".risc_v.alu.s1", "v_toggle/adder", "S");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1133]), first, "../../verilog/alu.v", 78, 12, ".risc_v.alu.s1", "v_toggle/adder", "Cout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "../../verilog/alu.v", 137, 24, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[262]), first, "../../verilog/alu.v", 138, 25, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "shamt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1135]), first, "../../verilog/alu.v", 139, 24, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1406]), first, "../../verilog/alu.v", 142, 17, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "s1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1470]), first, "../../verilog/alu.v", 142, 21, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "s2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1534]), first, "../../verilog/alu.v", 142, 25, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "s3");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1598]), first, "../../verilog/alu.v", 142, 29, ".risc_v.alu.sll", "v_toggle/SLL_barrel_shifter", "s4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1662]), first, "../../verilog/alu.v", 145, 28, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_then", "145", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1663]), first, "../../verilog/alu.v", 145, 29, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_else", "145", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1664]), first, "../../verilog/alu.v", 148, 28, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_then", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1665]), first, "../../verilog/alu.v", 148, 29, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_else", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1666]), first, "../../verilog/alu.v", 151, 28, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_then", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1667]), first, "../../verilog/alu.v", 151, 29, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_else", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1668]), first, "../../verilog/alu.v", 154, 28, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_then", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1669]), first, "../../verilog/alu.v", 154, 29, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_else", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1670]), first, "../../verilog/alu.v", 157, 29, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_then", "157", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1671]), first, "../../verilog/alu.v", 157, 30, ".risc_v.alu.sll", "v_branch/SLL_barrel_shifter", "cond_else", "157", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "../../verilog/alu.v", 86, 18, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[262]), first, "../../verilog/alu.v", 87, 18, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "shamt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1199]), first, "../../verilog/alu.v", 88, 19, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1672]), first, "../../verilog/alu.v", 91, 17, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "s1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1736]), first, "../../verilog/alu.v", 91, 21, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "s2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1800]), first, "../../verilog/alu.v", 91, 25, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "s3");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1864]), first, "../../verilog/alu.v", 91, 29, ".risc_v.alu.srl", "v_toggle/SRL_barrel_shifter", "s4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1928]), first, "../../verilog/alu.v", 94, 28, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_then", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1929]), first, "../../verilog/alu.v", 94, 29, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_else", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1930]), first, "../../verilog/alu.v", 97, 28, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_then", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1931]), first, "../../verilog/alu.v", 97, 29, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_else", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1932]), first, "../../verilog/alu.v", 100, 28, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_then", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1933]), first, "../../verilog/alu.v", 100, 29, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_else", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1934]), first, "../../verilog/alu.v", 103, 28, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_then", "103", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1935]), first, "../../verilog/alu.v", 103, 29, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_else", "103", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1936]), first, "../../verilog/alu.v", 106, 29, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_then", "106", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1937]), first, "../../verilog/alu.v", 106, 30, ".risc_v.alu.srl", "v_branch/SRL_barrel_shifter", "cond_else", "106", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[198]), first, "../../verilog/alu.v", 111, 18, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[262]), first, "../../verilog/alu.v", 112, 18, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "shamt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1263]), first, "../../verilog/alu.v", 113, 19, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1938]), first, "../../verilog/alu.v", 116, 17, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "s1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2002]), first, "../../verilog/alu.v", 116, 21, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "s2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2066]), first, "../../verilog/alu.v", 116, 25, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "s3");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2130]), first, "../../verilog/alu.v", 116, 29, ".risc_v.alu.sra", "v_toggle/SRA_barrel_shifter", "s4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2194]), first, "../../verilog/alu.v", 119, 28, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_then", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2195]), first, "../../verilog/alu.v", 119, 29, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_else", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2196]), first, "../../verilog/alu.v", 122, 28, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_then", "122", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2197]), first, "../../verilog/alu.v", 122, 29, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_else", "122", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2198]), first, "../../verilog/alu.v", 125, 28, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_then", "125", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2199]), first, "../../verilog/alu.v", 125, 29, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_else", "125", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2200]), first, "../../verilog/alu.v", 128, 28, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_then", "128", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2201]), first, "../../verilog/alu.v", 128, 29, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_else", "128", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2202]), first, "../../verilog/alu.v", 131, 29, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_then", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2203]), first, "../../verilog/alu.v", 131, 30, ".risc_v.alu.sra", "v_branch/SRA_barrel_shifter", "cond_else", "131", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "../../verilog/data_mem.v", 5, 11, ".risc_v.DATA_MEM", "v_toggle/data_mem", "clk");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[326]), first, "../../verilog/data_mem.v", 7, 18, ".risc_v.DATA_MEM", "v_toggle/data_mem", "addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[518]), first, "../../verilog/data_mem.v", 8, 18, ".risc_v.DATA_MEM", "v_toggle/data_mem", "data_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[582]), first, "../../verilog/data_mem.v", 9, 23, ".risc_v.DATA_MEM", "v_toggle/data_mem", "data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[172]), first, "../../verilog/data_mem.v", 11, 11, ".risc_v.DATA_MEM", "v_toggle/data_mem", "WE_data_mem");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[186]), first, "../../verilog/data_mem.v", 12, 17, ".risc_v.DATA_MEM", "v_toggle/data_mem", "mem_size");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[176]), first, "../../verilog/data_mem.v", 13, 11, ".risc_v.DATA_MEM", "v_toggle/data_mem", "sign_val");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2204]), first, "../../verilog/data_mem.v", 20, 5, ".risc_v.DATA_MEM", "v_line/data_mem", "block", "20,22", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 12, 1, &(vlSymsp->__Vcoverage[2205]), first, "../../verilog/data_mem.v", 25, 17, ".risc_v.DATA_MEM", "v_toggle/data_mem", "data_addr");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2231]), first, "../../verilog/data_mem.v", 36, 30, ".risc_v.DATA_MEM", "v_expr/data_mem", "(sign_val==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2232]), first, "../../verilog/data_mem.v", 36, 30, ".risc_v.DATA_MEM", "v_expr/data_mem", "(sign_val==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2233]), first, "../../verilog/data_mem.v", 36, 41, ".risc_v.DATA_MEM", "v_branch/data_mem", "cond_then", "36", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2234]), first, "../../verilog/data_mem.v", 36, 42, ".risc_v.DATA_MEM", "v_branch/data_mem", "cond_else", "36", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2235]), first, "../../verilog/data_mem.v", 36, 17, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "36", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2236]), first, "../../verilog/data_mem.v", 37, 34, ".risc_v.DATA_MEM", "v_expr/data_mem", "(sign_val==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2237]), first, "../../verilog/data_mem.v", 37, 34, ".risc_v.DATA_MEM", "v_expr/data_mem", "(sign_val==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2238]), first, "../../verilog/data_mem.v", 37, 45, ".risc_v.DATA_MEM", "v_branch/data_mem", "cond_then", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2239]), first, "../../verilog/data_mem.v", 37, 46, ".risc_v.DATA_MEM", "v_branch/data_mem", "cond_else", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2240]), first, "../../verilog/data_mem.v", 37, 21, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2241]), first, "../../verilog/data_mem.v", 38, 17, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "38", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2242]), first, "../../verilog/data_mem.v", 39, 13, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "39", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2243]), first, "../../verilog/data_mem.v", 31, 5, ".risc_v.DATA_MEM", "v_line/data_mem", "block", "31-33,35", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2244]), first, "../../verilog/data_mem.v", 50, 21, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2245]), first, "../../verilog/data_mem.v", 51, 25, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "51-53", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2246]), first, "../../verilog/data_mem.v", 55, 21, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "55-59", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2247]), first, "../../verilog/data_mem.v", 61, 17, ".risc_v.DATA_MEM", "v_line/data_mem", "case", "61", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2248]), first, "../../verilog/data_mem.v", 47, 9, ".risc_v.DATA_MEM", "v_branch/data_mem", "if", "47-49", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2249]), first, "../../verilog/data_mem.v", 47, 10, ".risc_v.DATA_MEM", "v_branch/data_mem", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2250]), first, "../../verilog/data_mem.v", 44, 5, ".risc_v.DATA_MEM", "v_line/data_mem", "block", "44-45", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "../../verilog/reg_file.v", 3, 11, ".risc_v.REG_FILE", "v_toggle/reg_file", "clk");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[72]), first, "../../verilog/reg_file.v", 5, 17, ".risc_v.REG_FILE", "v_toggle/reg_file", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[82]), first, "../../verilog/reg_file.v", 6, 17, ".risc_v.REG_FILE", "v_toggle/reg_file", "rs2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[92]), first, "../../verilog/reg_file.v", 7, 17, ".risc_v.REG_FILE", "v_toggle/reg_file", "rd");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[390]), first, "../../verilog/reg_file.v", 8, 18, ".risc_v.REG_FILE", "v_toggle/reg_file", "data_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[454]), first, "../../verilog/reg_file.v", 10, 23, ".risc_v.REG_FILE", "v_toggle/reg_file", "rs1_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[518]), first, "../../verilog/reg_file.v", 11, 23, ".risc_v.REG_FILE", "v_toggle/reg_file", "rs2_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[170]), first, "../../verilog/reg_file.v", 13, 11, ".risc_v.REG_FILE", "v_toggle/reg_file", "WE_reg_file");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2251]), first, "../../verilog/reg_file.v", 15, 17, ".risc_v.REG_FILE", "v_toggle/reg_file", "r0");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2315]), first, "../../verilog/reg_file.v", 23, 9, ".risc_v.REG_FILE", "v_branch/reg_file", "if", "23-24", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2316]), first, "../../verilog/reg_file.v", 23, 10, ".risc_v.REG_FILE", "v_branch/reg_file", "else", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2317]), first, "../../verilog/reg_file.v", 21, 5, ".risc_v.REG_FILE", "v_line/reg_file", "block", "21-22", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2318]), first, "../../verilog/reg_file.v", 32, 9, ".risc_v.REG_FILE", "v_branch/reg_file", "if", "32-33", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2319]), first, "../../verilog/reg_file.v", 32, 10, ".risc_v.REG_FILE", "v_branch/reg_file", "else", "35", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2320]), first, "../../verilog/reg_file.v", 30, 5, ".risc_v.REG_FILE", "v_line/reg_file", "block", "30-31", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2321]), first, "../../verilog/reg_file.v", 43, 13, ".risc_v.REG_FILE", "v_branch/reg_file", "if", "43-44", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2322]), first, "../../verilog/reg_file.v", 43, 14, ".risc_v.REG_FILE", "v_branch/reg_file", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2323]), first, "../../verilog/reg_file.v", 43, 17, ".risc_v.REG_FILE", "v_expr/reg_file", "((rd == 5'h0)==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2324]), first, "../../verilog/reg_file.v", 43, 17, ".risc_v.REG_FILE", "v_expr/reg_file", "((rd == 5'h0)==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2325]), first, "../../verilog/reg_file.v", 41, 9, ".risc_v.REG_FILE", "v_branch/reg_file", "if", "41-42", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2326]), first, "../../verilog/reg_file.v", 41, 10, ".risc_v.REG_FILE", "v_branch/reg_file", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2327]), first, "../../verilog/reg_file.v", 39, 5, ".risc_v.REG_FILE", "v_line/reg_file", "block", "39-40", "", "", "", "");
}
