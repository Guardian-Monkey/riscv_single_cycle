// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"

VL_ATTR_COLD void Vcontrol_unit___024root___eval_static(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_static\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_initial(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_initial\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_final(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_final\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontrol_unit___024root___eval_phase__stl(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_settle\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("control_unit.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcontrol_unit___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_triggers_vec__stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_triggers_vec__stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vcontrol_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcontrol_unit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcontrol_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_anySet__stl\n"); );
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

void Vcontrol_unit___024root___ico_sequent__TOP__0(Vcontrol_unit___024root* vlSelf);
VL_ATTR_COLD void Vcontrol_unit___024root____Vm_traceActivitySetAll(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcontrol_unit___024root___ico_sequent__TOP__0(vlSelf);
        Vcontrol_unit___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vcontrol_unit___024root___eval_phase__stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcontrol_unit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcontrol_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcontrol_unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcontrol_unit___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_unit___024root____Vm_traceActivitySetAll(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root____Vm_traceActivitySetAll\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcontrol_unit___024root___ctor_var_reset(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ctor_var_reset\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellout__control_unit__sign_val = 0;
    vlSelf->__Vcellout__control_unit__mem_size = 0;
    vlSelf->__Vcellout__control_unit__ALU_funct = 0;
    vlSelf->__Vcellout__control_unit__mux_ALU1 = 0;
    vlSelf->__Vcellout__control_unit__mux_ALU2 = 0;
    vlSelf->__Vcellout__control_unit__WE_data_mem = 0;
    vlSelf->__Vcellout__control_unit__WE_reg_file = 0;
    vlSelf->__Vcellout__control_unit__mux_reg = 0;
    vlSelf->__Vcellout__control_unit__mux_PC = 0;
    vlSelf->__Vcellout__control_unit__mux_adder = 0;
    vlSelf->__Vcellout__control_unit__imm = 0;
    vlSelf->__Vcellout__control_unit__rd = 0;
    vlSelf->__Vcellout__control_unit__rs2 = 0;
    vlSelf->__Vcellout__control_unit__rs1 = 0;
    vlSelf->__Vcellinp__control_unit__signed_less_than = 0;
    vlSelf->__Vcellinp__control_unit__unsigned_less_than = 0;
    vlSelf->__Vcellinp__control_unit__zero_flag = 0;
    vlSelf->__Vcellinp__control_unit__instr = 0;
    vlSelf->control_unit__DOT____Vtogcov__instr = 0;
    vlSelf->control_unit__DOT____Vtogcov__zero_flag = 0;
    vlSelf->control_unit__DOT____Vtogcov__unsigned_less_than = 0;
    vlSelf->control_unit__DOT____Vtogcov__signed_less_than = 0;
    vlSelf->control_unit__DOT____Vtogcov__rs1 = 0;
    vlSelf->control_unit__DOT____Vtogcov__rs2 = 0;
    vlSelf->control_unit__DOT____Vtogcov__rd = 0;
    vlSelf->control_unit__DOT____Vtogcov__imm = 0;
    vlSelf->control_unit__DOT____Vtogcov__mux_adder = 0;
    vlSelf->control_unit__DOT____Vtogcov__mux_PC = 0;
    vlSelf->control_unit__DOT____Vtogcov__mux_reg = 0;
    vlSelf->control_unit__DOT____Vtogcov__WE_reg_file = 0;
    vlSelf->control_unit__DOT____Vtogcov__WE_data_mem = 0;
    vlSelf->control_unit__DOT____Vtogcov__mux_ALU2 = 0;
    vlSelf->control_unit__DOT____Vtogcov__mux_ALU1 = 0;
    vlSelf->control_unit__DOT____Vtogcov__ALU_funct = 0;
    vlSelf->control_unit__DOT____Vtogcov__mem_size = 0;
    vlSelf->control_unit__DOT____Vtogcov__sign_val = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vcontrol_unit___024root___configure_coverage(Vcontrol_unit___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___configure_coverage\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[0]), first, "control_unit.v", 3, 18, ".control_unit", "v_toggle/control_unit", "instr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[64]), first, "control_unit.v", 5, 15, ".control_unit", "v_toggle/control_unit", "zero_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[66]), first, "control_unit.v", 6, 15, ".control_unit", "v_toggle/control_unit", "unsigned_less_than");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[68]), first, "control_unit.v", 7, 15, ".control_unit", "v_toggle/control_unit", "signed_less_than");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[70]), first, "control_unit.v", 9, 22, ".control_unit", "v_toggle/control_unit", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[80]), first, "control_unit.v", 10, 22, ".control_unit", "v_toggle/control_unit", "rs2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[90]), first, "control_unit.v", 11, 22, ".control_unit", "v_toggle/control_unit", "rd");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[100]), first, "control_unit.v", 13, 23, ".control_unit", "v_toggle/control_unit", "imm");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[164]), first, "control_unit.v", 15, 16, ".control_unit", "v_toggle/control_unit", "mux_adder");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[166]), first, "control_unit.v", 16, 16, ".control_unit", "v_toggle/control_unit", "mux_PC");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[168]), first, "control_unit.v", 17, 22, ".control_unit", "v_toggle/control_unit", "mux_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[172]), first, "control_unit.v", 18, 16, ".control_unit", "v_toggle/control_unit", "WE_reg_file");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[174]), first, "control_unit.v", 19, 16, ".control_unit", "v_toggle/control_unit", "WE_data_mem");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[176]), first, "control_unit.v", 20, 22, ".control_unit", "v_toggle/control_unit", "mux_ALU2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[180]), first, "control_unit.v", 21, 16, ".control_unit", "v_toggle/control_unit", "mux_ALU1");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[182]), first, "control_unit.v", 22, 22, ".control_unit", "v_toggle/control_unit", "ALU_funct");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[190]), first, "control_unit.v", 23, 22, ".control_unit", "v_toggle/control_unit", "mem_size");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[194]), first, "control_unit.v", 24, 16, ".control_unit", "v_toggle/control_unit", "sign_val");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "control_unit.v", 80, 33, ".control_unit", "v_line/control_unit", "case", "80", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "control_unit.v", 81, 33, ".control_unit", "v_line/control_unit", "case", "81", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "control_unit.v", 82, 29, ".control_unit", "v_line/control_unit", "case", "82", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "control_unit.v", 78, 27, ".control_unit", "v_line/control_unit", "case", "78-79", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "control_unit.v", 85, 27, ".control_unit", "v_line/control_unit", "case", "85", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "control_unit.v", 86, 27, ".control_unit", "v_line/control_unit", "case", "86", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "control_unit.v", 87, 27, ".control_unit", "v_line/control_unit", "case", "87", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "control_unit.v", 88, 27, ".control_unit", "v_line/control_unit", "case", "88", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "control_unit.v", 91, 33, ".control_unit", "v_line/control_unit", "case", "91", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "control_unit.v", 92, 33, ".control_unit", "v_line/control_unit", "case", "92", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "control_unit.v", 93, 29, ".control_unit", "v_line/control_unit", "case", "93", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "control_unit.v", 89, 27, ".control_unit", "v_line/control_unit", "case", "89-90", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "control_unit.v", 96, 27, ".control_unit", "v_line/control_unit", "case", "96", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "control_unit.v", 97, 27, ".control_unit", "v_line/control_unit", "case", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "control_unit.v", 98, 21, ".control_unit", "v_line/control_unit", "case", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "control_unit.v", 64, 15, ".control_unit", "v_line/control_unit", "case", "64,66-75,77", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "control_unit.v", 114, 27, ".control_unit", "v_line/control_unit", "case", "114", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "control_unit.v", 115, 27, ".control_unit", "v_line/control_unit", "case", "115", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "control_unit.v", 116, 27, ".control_unit", "v_line/control_unit", "case", "116", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "control_unit.v", 117, 27, ".control_unit", "v_line/control_unit", "case", "117", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "control_unit.v", 118, 27, ".control_unit", "v_line/control_unit", "case", "118", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "control_unit.v", 119, 27, ".control_unit", "v_line/control_unit", "case", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "control_unit.v", 120, 27, ".control_unit", "v_line/control_unit", "case", "120-122", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "control_unit.v", 126, 33, ".control_unit", "v_line/control_unit", "case", "126-128", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "control_unit.v", 130, 33, ".control_unit", "v_line/control_unit", "case", "130-132", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "control_unit.v", 134, 29, ".control_unit", "v_line/control_unit", "case", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "control_unit.v", 124, 27, ".control_unit", "v_line/control_unit", "case", "124-125", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "control_unit.v", 101, 19, ".control_unit", "v_line/control_unit", "case", "101-111,113", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "control_unit.v", 151, 27, ".control_unit", "v_line/control_unit", "case", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "control_unit.v", 152, 27, ".control_unit", "v_line/control_unit", "case", "152", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "control_unit.v", 153, 27, ".control_unit", "v_line/control_unit", "case", "153", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "control_unit.v", 154, 21, ".control_unit", "v_line/control_unit", "case", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "control_unit.v", 139, 18, ".control_unit", "v_line/control_unit", "case", "139-141,143-150", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "control_unit.v", 168, 27, ".control_unit", "v_line/control_unit", "case", "168", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "control_unit.v", 169, 27, ".control_unit", "v_line/control_unit", "case", "169", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "control_unit.v", 170, 27, ".control_unit", "v_line/control_unit", "case", "170", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "control_unit.v", 171, 27, ".control_unit", "v_line/control_unit", "case", "171-173", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "control_unit.v", 175, 27, ".control_unit", "v_line/control_unit", "case", "175-177", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "control_unit.v", 179, 21, ".control_unit", "v_line/control_unit", "case", "179", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "control_unit.v", 157, 17, ".control_unit", "v_line/control_unit", "case", "157-159,161-167", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "control_unit.v", 195, 27, ".control_unit", "v_line/control_unit", "case", "195", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "control_unit.v", 196, 41, ".control_unit", "v_expr/control_unit", "(zero_flag==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "control_unit.v", 196, 41, ".control_unit", "v_expr/control_unit", "(zero_flag==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "control_unit.v", 196, 27, ".control_unit", "v_line/control_unit", "case", "196", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "control_unit.v", 197, 27, ".control_unit", "v_line/control_unit", "case", "197", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "control_unit.v", 198, 41, ".control_unit", "v_expr/control_unit", "(signed_less_than==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "control_unit.v", 198, 41, ".control_unit", "v_expr/control_unit", "(signed_less_than==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "control_unit.v", 198, 27, ".control_unit", "v_line/control_unit", "case", "198", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "control_unit.v", 199, 27, ".control_unit", "v_line/control_unit", "case", "199", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "control_unit.v", 200, 41, ".control_unit", "v_expr/control_unit", "(unsigned_less_than==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "control_unit.v", 200, 41, ".control_unit", "v_expr/control_unit", "(unsigned_less_than==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "control_unit.v", 200, 27, ".control_unit", "v_line/control_unit", "case", "200", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "control_unit.v", 201, 21, ".control_unit", "v_line/control_unit", "case", "201", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "control_unit.v", 182, 19, ".control_unit", "v_line/control_unit", "case", "182-194", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "control_unit.v", 204, 17, ".control_unit", "v_line/control_unit", "case", "204-215", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "control_unit.v", 217, 16, ".control_unit", "v_line/control_unit", "case", "217-227", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "control_unit.v", 229, 18, ".control_unit", "v_line/control_unit", "case", "229-239", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "control_unit.v", 241, 16, ".control_unit", "v_line/control_unit", "case", "241-251", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "control_unit.v", 253, 13, ".control_unit", "v_line/control_unit", "case", "253", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "control_unit.v", 44, 5, ".control_unit", "v_line/control_unit", "block", "44-45,47-60,63", "", "", "", "");
}
