// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

VL_ATTR_COLD void Valu___024root___eval_static(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_static\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu___024root___eval_initial__TOP(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Valu___024root___eval_initial__TOP(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial__TOP\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ALU__DOT__a1__DOT____Vtogcov__Cin) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 549, 0U, vlSelfRef.ALU__DOT__a1__DOT____Vtogcov__Cin);
        vlSelfRef.ALU__DOT__a1__DOT____Vtogcov__Cin = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ALU__DOT__s1__DOT____Vtogcov__Cin)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 615, 1U, vlSelfRef.ALU__DOT__s1__DOT____Vtogcov__Cin);
        vlSelfRef.ALU__DOT__s1__DOT____Vtogcov__Cin = 1U;
    }
}

VL_ATTR_COLD void Valu___024root___eval_final(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_final\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu___024root___eval_phase__stl(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_settle(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_settle\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("alu.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Valu___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Valu___024root___eval_triggers_vec__stl(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers_vec__stl\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Valu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Valu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Valu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__stl\n"); );
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

void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root____Vm_traceActivitySetAll(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_stl(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_stl\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
        Valu___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Valu___024root___eval_phase__stl(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__stl\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Valu___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Valu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Valu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Valu___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root____Vm_traceActivitySetAll(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root____Vm_traceActivitySetAll\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellout__ALU__out = 0;
    vlSelf->__Vcellinp__ALU__in2 = 0;
    vlSelf->__Vcellinp__ALU__in1 = 0;
    vlSelf->__Vcellinp__ALU__ALU_funct = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->ALU__DOT__signed_less_than = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12676055991527533025ull);
    vlSelf->ALU__DOT__a1_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17453937975331098500ull);
    vlSelf->ALU__DOT__s1_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9129947594757107706ull);
    vlSelf->ALU__DOT__a1_carry_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6302034623051950935ull);
    vlSelf->ALU__DOT__s1_carry_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14158631838984696199ull);
    vlSelf->ALU__DOT__sll_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5883045538478963578ull);
    vlSelf->ALU__DOT__srl_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2057193337659866352ull);
    vlSelf->ALU__DOT__sra_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13001740299988641096ull);
    vlSelf->ALU__DOT____Vtogcov__ALU_funct = 0;
    vlSelf->ALU__DOT____Vtogcov__in1 = 0;
    vlSelf->ALU__DOT____Vtogcov__in2 = 0;
    vlSelf->ALU__DOT____Vtogcov__out = 0;
    vlSelf->ALU__DOT____Vtogcov__zero_flag = 0;
    vlSelf->ALU__DOT____Vtogcov__unsigned_less_than = 0;
    vlSelf->ALU__DOT____Vtogcov__signed_less_than = 0;
    vlSelf->ALU__DOT____Vtogcov__a1_out = 0;
    vlSelf->ALU__DOT____Vtogcov__s1_out = 0;
    vlSelf->ALU__DOT____Vtogcov__A = 0;
    vlSelf->ALU__DOT____Vtogcov__B = 0;
    vlSelf->ALU__DOT____Vtogcov__C = 0;
    vlSelf->ALU__DOT____Vtogcov__a1_carry_flag = 0;
    vlSelf->ALU__DOT____Vtogcov__s1_carry_flag = 0;
    vlSelf->ALU__DOT____Vtogcov__sll_out = 0;
    vlSelf->ALU__DOT____Vtogcov__srl_out = 0;
    vlSelf->ALU__DOT____Vtogcov__sra_out = 0;
    vlSelf->ALU__DOT__a1__DOT____Vtogcov__Cin = 0;
    vlSelf->ALU__DOT__s1__DOT____Vtogcov__B = 0;
    vlSelf->ALU__DOT__s1__DOT____Vtogcov__Cin = 0;
    vlSelf->ALU__DOT__sll__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15278715127497663959ull);
    vlSelf->ALU__DOT__sll__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5450270134235340173ull);
    vlSelf->ALU__DOT__sll__DOT__s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17949875343552765454ull);
    vlSelf->ALU__DOT__sll__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3106452675847347322ull);
    vlSelf->ALU__DOT__sll__DOT____Vtogcov__s1 = 0;
    vlSelf->ALU__DOT__sll__DOT____Vtogcov__s2 = 0;
    vlSelf->ALU__DOT__sll__DOT____Vtogcov__s3 = 0;
    vlSelf->ALU__DOT__sll__DOT____Vtogcov__s4 = 0;
    vlSelf->ALU__DOT__srl__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13409482854026994036ull);
    vlSelf->ALU__DOT__srl__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15488200514149813725ull);
    vlSelf->ALU__DOT__srl__DOT__s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9181764661146772962ull);
    vlSelf->ALU__DOT__srl__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14868012869829596318ull);
    vlSelf->ALU__DOT__srl__DOT____Vtogcov__s1 = 0;
    vlSelf->ALU__DOT__srl__DOT____Vtogcov__s2 = 0;
    vlSelf->ALU__DOT__srl__DOT____Vtogcov__s3 = 0;
    vlSelf->ALU__DOT__srl__DOT____Vtogcov__s4 = 0;
    vlSelf->ALU__DOT__sra__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4868935786471089116ull);
    vlSelf->ALU__DOT__sra__DOT__s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17258309674372490182ull);
    vlSelf->ALU__DOT__sra__DOT__s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15338924008091391645ull);
    vlSelf->ALU__DOT__sra__DOT__s4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13449816969463668533ull);
    vlSelf->ALU__DOT__sra__DOT____Vtogcov__s1 = 0;
    vlSelf->ALU__DOT__sra__DOT____Vtogcov__s2 = 0;
    vlSelf->ALU__DOT__sra__DOT____Vtogcov__s3 = 0;
    vlSelf->ALU__DOT__sra__DOT____Vtogcov__s4 = 0;
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

VL_ATTR_COLD void Valu___024root___configure_coverage(Valu___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___configure_coverage\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[0]), first, "alu.v", 2, 17, ".ALU", "v_toggle/ALU", "ALU_funct");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "alu.v", 3, 18, ".ALU", "v_toggle/ALU", "in1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[72]), first, "alu.v", 4, 18, ".ALU", "v_toggle/ALU", "in2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[136]), first, "alu.v", 5, 23, ".ALU", "v_toggle/ALU", "out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[200]), first, "alu.v", 6, 12, ".ALU", "v_toggle/ALU", "zero_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[202]), first, "alu.v", 7, 12, ".ALU", "v_toggle/ALU", "unsigned_less_than");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[204]), first, "alu.v", 8, 12, ".ALU", "v_toggle/ALU", "signed_less_than");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[206]), first, "alu.v", 19, 17, ".ALU", "v_toggle/ALU", "a1_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[270]), first, "alu.v", 19, 25, ".ALU", "v_toggle/ALU", "s1_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[334]), first, "alu.v", 20, 10, ".ALU", "v_toggle/ALU", "A");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[336]), first, "alu.v", 20, 13, ".ALU", "v_toggle/ALU", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[338]), first, "alu.v", 20, 16, ".ALU", "v_toggle/ALU", "C");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[340]), first, "alu.v", 20, 19, ".ALU", "v_toggle/ALU", "a1_carry_flag");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[342]), first, "alu.v", 20, 34, ".ALU", "v_toggle/ALU", "s1_carry_flag");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[344]), first, "alu.v", 35, 17, ".ALU", "v_toggle/ALU", "sll_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[408]), first, "alu.v", 35, 26, ".ALU", "v_toggle/ALU", "srl_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[472]), first, "alu.v", 35, 35, ".ALU", "v_toggle/ALU", "sra_out");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "alu.v", 42, 16, ".ALU", "v_line/ALU", "case", "42", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "alu.v", 43, 16, ".ALU", "v_line/ALU", "case", "43", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "alu.v", 44, 16, ".ALU", "v_line/ALU", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "alu.v", 45, 16, ".ALU", "v_line/ALU", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "alu.v", 46, 17, ".ALU", "v_line/ALU", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "alu.v", 47, 16, ".ALU", "v_line/ALU", "case", "47", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "alu.v", 48, 16, ".ALU", "v_line/ALU", "case", "48", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "alu.v", 49, 16, ".ALU", "v_line/ALU", "case", "49", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "alu.v", 50, 15, ".ALU", "v_line/ALU", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "alu.v", 51, 16, ".ALU", "v_line/ALU", "case", "51", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "alu.v", 52, 21, ".ALU", "v_line/ALU", "case", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "alu.v", 53, 13, ".ALU", "v_line/ALU", "case", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "alu.v", 37, 5, ".ALU", "v_line/ALU", "block", "37-39,41", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "alu.v", 74, 18, ".ALU.a1", "v_toggle/adder", "A");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[72]), first, "alu.v", 75, 18, ".ALU.a1", "v_toggle/adder", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[549]), first, "alu.v", 76, 11, ".ALU.a1", "v_toggle/adder", "Cin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[206]), first, "alu.v", 77, 18, ".ALU.a1", "v_toggle/adder", "S");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[340]), first, "alu.v", 78, 12, ".ALU.a1", "v_toggle/adder", "Cout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "alu.v", 74, 18, ".ALU.s1", "v_toggle/adder", "A");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[551]), first, "alu.v", 75, 18, ".ALU.s1", "v_toggle/adder", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[615]), first, "alu.v", 76, 11, ".ALU.s1", "v_toggle/adder", "Cin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[270]), first, "alu.v", 77, 18, ".ALU.s1", "v_toggle/adder", "S");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[342]), first, "alu.v", 78, 12, ".ALU.s1", "v_toggle/adder", "Cout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "alu.v", 137, 24, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[72]), first, "alu.v", 138, 25, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "shamt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[344]), first, "alu.v", 139, 24, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[617]), first, "alu.v", 142, 17, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "s1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[681]), first, "alu.v", 142, 21, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "s2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[745]), first, "alu.v", 142, 25, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "s3");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[809]), first, "alu.v", 142, 29, ".ALU.sll", "v_toggle/SLL_barrel_shifter", "s4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "alu.v", 145, 28, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_then", "145", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "alu.v", 145, 29, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_else", "145", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "alu.v", 148, 28, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_then", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "alu.v", 148, 29, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_else", "148", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "alu.v", 151, 28, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_then", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "alu.v", 151, 29, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_else", "151", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "alu.v", 154, 28, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_then", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "alu.v", 154, 29, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_else", "154", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "alu.v", 157, 29, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_then", "157", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "alu.v", 157, 30, ".ALU.sll", "v_branch/SLL_barrel_shifter", "cond_else", "157", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "alu.v", 86, 18, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[72]), first, "alu.v", 87, 18, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "shamt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[408]), first, "alu.v", 88, 19, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[883]), first, "alu.v", 91, 17, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "s1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[947]), first, "alu.v", 91, 21, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "s2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1011]), first, "alu.v", 91, 25, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "s3");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1075]), first, "alu.v", 91, 29, ".ALU.srl", "v_toggle/SRL_barrel_shifter", "s4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1139]), first, "alu.v", 94, 28, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_then", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1140]), first, "alu.v", 94, 29, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_else", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1141]), first, "alu.v", 97, 28, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_then", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1142]), first, "alu.v", 97, 29, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_else", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1143]), first, "alu.v", 100, 28, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_then", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1144]), first, "alu.v", 100, 29, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_else", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1145]), first, "alu.v", 103, 28, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_then", "103", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1146]), first, "alu.v", 103, 29, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_else", "103", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1147]), first, "alu.v", 106, 29, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_then", "106", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1148]), first, "alu.v", 106, 30, ".ALU.srl", "v_branch/SRL_barrel_shifter", "cond_else", "106", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[8]), first, "alu.v", 111, 18, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[72]), first, "alu.v", 112, 18, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "shamt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[472]), first, "alu.v", 113, 19, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1149]), first, "alu.v", 116, 17, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "s1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1213]), first, "alu.v", 116, 21, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "s2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1277]), first, "alu.v", 116, 25, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "s3");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1341]), first, "alu.v", 116, 29, ".ALU.sra", "v_toggle/SRA_barrel_shifter", "s4");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "alu.v", 119, 28, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_then", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "alu.v", 119, 29, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_else", "119", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "alu.v", 122, 28, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_then", "122", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "alu.v", 122, 29, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_else", "122", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "alu.v", 125, 28, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_then", "125", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "alu.v", 125, 29, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_else", "125", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "alu.v", 128, 28, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_then", "128", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "alu.v", 128, 29, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_else", "128", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "alu.v", 131, 29, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_then", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "alu.v", 131, 30, ".ALU.sra", "v_branch/SRA_barrel_shifter", "cond_else", "131", "", "", "", "");
}
