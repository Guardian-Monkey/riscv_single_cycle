// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file__pch.h"

VL_ATTR_COLD void Vreg_file___024root___eval_static(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_static\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__reg_file__clk__0 
        = vlSelfRef.__Vcellinp__reg_file__clk;
}

VL_ATTR_COLD void Vreg_file___024root___eval_initial__TOP(Vreg_file___024root* vlSelf);

VL_ATTR_COLD void Vreg_file___024root___eval_initial(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_initial\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreg_file___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vreg_file___024root___eval_initial__TOP(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_initial__TOP\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reg_file__DOT____Vtogcov__r0) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 226, 0U, vlSelfRef.reg_file__DOT____Vtogcov__r0);
        vlSelfRef.reg_file__DOT____Vtogcov__r0 = 0U;
    }
}

VL_ATTR_COLD void Vreg_file___024root___eval_final(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_final\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreg_file___024root___eval_phase__stl(Vreg_file___024root* vlSelf);

VL_ATTR_COLD void Vreg_file___024root___eval_settle(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_settle\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vreg_file___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("reg_file.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vreg_file___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vreg_file___024root___eval_triggers_vec__stl(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_triggers_vec__stl\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vreg_file___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vreg_file___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vreg_file___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vreg_file___024root___stl_sequent__TOP__0(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___stl_sequent__TOP__0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__reg_file__WE_reg_file, vlSelfRef.WE_reg_file);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__reg_file__data_in, vlSelfRef.data_in);
    VL_ASSIGN_ISI(5, vlSelfRef.__Vcellinp__reg_file__rd, vlSelfRef.rd);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__reg_file__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(5, vlSelfRef.__Vcellinp__reg_file__rs2, vlSelfRef.rs2);
    VL_ASSIGN_ISI(5, vlSelfRef.__Vcellinp__reg_file__rs1, vlSelfRef.rs1);
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__WE_reg_file) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__WE_reg_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 224, vlSelfRef.__Vcellinp__reg_file__WE_reg_file, vlSelfRef.reg_file__DOT____Vtogcov__WE_reg_file);
        vlSelfRef.reg_file__DOT____Vtogcov__WE_reg_file 
            = vlSelfRef.__Vcellinp__reg_file__WE_reg_file;
    }
    if ((vlSelfRef.__Vcellinp__reg_file__data_in ^ vlSelfRef.reg_file__DOT____Vtogcov__data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 32, vlSelfRef.__Vcellinp__reg_file__data_in, vlSelfRef.reg_file__DOT____Vtogcov__data_in);
        vlSelfRef.reg_file__DOT____Vtogcov__data_in 
            = vlSelfRef.__Vcellinp__reg_file__data_in;
    }
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__rd) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 22, vlSelfRef.__Vcellinp__reg_file__rd, vlSelfRef.reg_file__DOT____Vtogcov__rd);
        vlSelfRef.reg_file__DOT____Vtogcov__rd = vlSelfRef.__Vcellinp__reg_file__rd;
    }
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__clk) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__reg_file__clk, vlSelfRef.reg_file__DOT____Vtogcov__clk);
        vlSelfRef.reg_file__DOT____Vtogcov__clk = vlSelfRef.__Vcellinp__reg_file__clk;
    }
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 12, vlSelfRef.__Vcellinp__reg_file__rs2, vlSelfRef.reg_file__DOT____Vtogcov__rs2);
        vlSelfRef.reg_file__DOT____Vtogcov__rs2 = vlSelfRef.__Vcellinp__reg_file__rs2;
    }
    if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rs2))) {
        vlSelfRef.__Vcellout__reg_file__rs2_out = 0U;
        ++(vlSymsp->__Vcoverage[293]);
    } else {
        vlSelfRef.__Vcellout__reg_file__rs2_out = (
                                                   (0x1eU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.reg_file__DOT__registers
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
                                                       - (IData)(1U)))]
                                                    : 0U);
        ++(vlSymsp->__Vcoverage[294]);
    }
    ++(vlSymsp->__Vcoverage[295]);
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 2, vlSelfRef.__Vcellinp__reg_file__rs1, vlSelfRef.reg_file__DOT____Vtogcov__rs1);
        vlSelfRef.reg_file__DOT____Vtogcov__rs1 = vlSelfRef.__Vcellinp__reg_file__rs1;
    }
    if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rs1))) {
        vlSelfRef.__Vcellout__reg_file__rs1_out = 0U;
        ++(vlSymsp->__Vcoverage[290]);
    } else {
        vlSelfRef.__Vcellout__reg_file__rs1_out = (
                                                   (0x1eU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.reg_file__DOT__registers
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
                                                       - (IData)(1U)))]
                                                    : 0U);
        ++(vlSymsp->__Vcoverage[291]);
    }
    ++(vlSymsp->__Vcoverage[292]);
    VL_ASSIGN_SII(32, vlSelfRef.rs2_out, vlSelfRef.__Vcellout__reg_file__rs2_out);
    if ((vlSelfRef.__Vcellout__reg_file__rs2_out ^ vlSelfRef.reg_file__DOT____Vtogcov__rs2_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 160, vlSelfRef.__Vcellout__reg_file__rs2_out, vlSelfRef.reg_file__DOT____Vtogcov__rs2_out);
        vlSelfRef.reg_file__DOT____Vtogcov__rs2_out 
            = vlSelfRef.__Vcellout__reg_file__rs2_out;
    }
    VL_ASSIGN_SII(32, vlSelfRef.rs1_out, vlSelfRef.__Vcellout__reg_file__rs1_out);
    if ((vlSelfRef.__Vcellout__reg_file__rs1_out ^ vlSelfRef.reg_file__DOT____Vtogcov__rs1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 96, vlSelfRef.__Vcellout__reg_file__rs1_out, vlSelfRef.reg_file__DOT____Vtogcov__rs1_out);
        vlSelfRef.reg_file__DOT____Vtogcov__rs1_out 
            = vlSelfRef.__Vcellout__reg_file__rs1_out;
    }
}

VL_ATTR_COLD void Vreg_file___024root____Vm_traceActivitySetAll(Vreg_file___024root* vlSelf);

VL_ATTR_COLD void Vreg_file___024root___eval_stl(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_stl\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vreg_file___024root___stl_sequent__TOP__0(vlSelf);
        Vreg_file___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vreg_file___024root___eval_phase__stl(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__stl\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreg_file___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreg_file___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vreg_file___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vreg_file___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vreg_file___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vreg_file___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vreg_file___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vreg_file___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__reg_file__clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreg_file___024root____Vm_traceActivitySetAll(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root____Vm_traceActivitySetAll\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vreg_file___024root___ctor_var_reset(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___ctor_var_reset\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellinp__reg_file__WE_reg_file = 0;
    vlSelf->__Vcellout__reg_file__rs2_out = 0;
    vlSelf->__Vcellout__reg_file__rs1_out = 0;
    vlSelf->__Vcellinp__reg_file__data_in = 0;
    vlSelf->__Vcellinp__reg_file__rd = 0;
    vlSelf->__Vcellinp__reg_file__rs2 = 0;
    vlSelf->__Vcellinp__reg_file__rs1 = 0;
    vlSelf->__Vcellinp__reg_file__clk = 0;
    vlSelf->reg_file__DOT____Vlvbound_h0df2320c__0 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->reg_file__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18007092902219955582ull);
    }
    vlSelf->reg_file__DOT____Vtogcov__clk = 0;
    vlSelf->reg_file__DOT____Vtogcov__rs1 = 0;
    vlSelf->reg_file__DOT____Vtogcov__rs2 = 0;
    vlSelf->reg_file__DOT____Vtogcov__rd = 0;
    vlSelf->reg_file__DOT____Vtogcov__data_in = 0;
    vlSelf->reg_file__DOT____Vtogcov__rs1_out = 0;
    vlSelf->reg_file__DOT____Vtogcov__rs2_out = 0;
    vlSelf->reg_file__DOT____Vtogcov__WE_reg_file = 0;
    vlSelf->reg_file__DOT____Vtogcov__r0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__reg_file__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vreg_file___024root___configure_coverage(Vreg_file___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___configure_coverage\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "reg_file.v", 3, 11, ".reg_file", "v_toggle/reg_file", "clk");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[2]), first, "reg_file.v", 5, 17, ".reg_file", "v_toggle/reg_file", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[12]), first, "reg_file.v", 6, 17, ".reg_file", "v_toggle/reg_file", "rs2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[22]), first, "reg_file.v", 7, 17, ".reg_file", "v_toggle/reg_file", "rd");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[32]), first, "reg_file.v", 8, 18, ".reg_file", "v_toggle/reg_file", "data_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[96]), first, "reg_file.v", 10, 23, ".reg_file", "v_toggle/reg_file", "rs1_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[160]), first, "reg_file.v", 11, 23, ".reg_file", "v_toggle/reg_file", "rs2_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[224]), first, "reg_file.v", 13, 11, ".reg_file", "v_toggle/reg_file", "WE_reg_file");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[226]), first, "reg_file.v", 15, 17, ".reg_file", "v_toggle/reg_file", "r0");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "reg_file.v", 23, 9, ".reg_file", "v_branch/reg_file", "if", "23-24", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "reg_file.v", 23, 10, ".reg_file", "v_branch/reg_file", "else", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "reg_file.v", 21, 5, ".reg_file", "v_line/reg_file", "block", "21-22", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "reg_file.v", 32, 9, ".reg_file", "v_branch/reg_file", "if", "32-33", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "reg_file.v", 32, 10, ".reg_file", "v_branch/reg_file", "else", "35", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "reg_file.v", 30, 5, ".reg_file", "v_line/reg_file", "block", "30-31", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "reg_file.v", 43, 13, ".reg_file", "v_branch/reg_file", "if", "43-44", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "reg_file.v", 43, 14, ".reg_file", "v_branch/reg_file", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "reg_file.v", 43, 17, ".reg_file", "v_expr/reg_file", "((rd == 5'h0)==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "reg_file.v", 43, 17, ".reg_file", "v_expr/reg_file", "((rd == 5'h0)==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "reg_file.v", 41, 9, ".reg_file", "v_branch/reg_file", "if", "41-42", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "reg_file.v", 41, 10, ".reg_file", "v_branch/reg_file", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "reg_file.v", 39, 5, ".reg_file", "v_line/reg_file", "block", "39-40", "", "", "", "");
}
