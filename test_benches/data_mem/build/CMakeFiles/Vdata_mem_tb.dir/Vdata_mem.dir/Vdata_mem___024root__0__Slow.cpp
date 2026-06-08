// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"

VL_ATTR_COLD void Vdata_mem___024root___eval_static(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_static\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__data_mem__clk__0 
        = vlSelfRef.__Vcellinp__data_mem__clk;
}

VL_ATTR_COLD void Vdata_mem___024root___eval_initial(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_initial\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdata_mem___024root___eval_final(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_final\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdata_mem___024root___eval_phase__stl(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem___024root___eval_settle(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_settle\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdata_mem___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("data_mem.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vdata_mem___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vdata_mem___024root___eval_triggers_vec__stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_triggers_vec__stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vdata_mem___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdata_mem___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdata_mem___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vdata_mem___024root___stl_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___stl_sequent__TOP__0\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__data_mem__WE_data_mem, vlSelfRef.WE_data_mem);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__data_mem__data_in, vlSelfRef.data_in);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__data_mem__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__data_mem__sign_val, vlSelfRef.sign_val);
    VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__data_mem__mem_size, vlSelfRef.mem_size);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__data_mem__addr, vlSelfRef.addr);
    if (((IData)(vlSelfRef.__Vcellinp__data_mem__WE_data_mem) 
         ^ (IData)(vlSelfRef.data_mem__DOT____Vtogcov__WE_data_mem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 194, vlSelfRef.__Vcellinp__data_mem__WE_data_mem, vlSelfRef.data_mem__DOT____Vtogcov__WE_data_mem);
        vlSelfRef.data_mem__DOT____Vtogcov__WE_data_mem 
            = vlSelfRef.__Vcellinp__data_mem__WE_data_mem;
    }
    if ((vlSelfRef.__Vcellinp__data_mem__data_in ^ vlSelfRef.data_mem__DOT____Vtogcov__data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 66, vlSelfRef.__Vcellinp__data_mem__data_in, vlSelfRef.data_mem__DOT____Vtogcov__data_in);
        vlSelfRef.data_mem__DOT____Vtogcov__data_in 
            = vlSelfRef.__Vcellinp__data_mem__data_in;
    }
    if (((IData)(vlSelfRef.__Vcellinp__data_mem__clk) 
         ^ (IData)(vlSelfRef.data_mem__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__data_mem__clk, vlSelfRef.data_mem__DOT____Vtogcov__clk);
        vlSelfRef.data_mem__DOT____Vtogcov__clk = vlSelfRef.__Vcellinp__data_mem__clk;
    }
    if (((IData)(vlSelfRef.__Vcellinp__data_mem__sign_val) 
         ^ (IData)(vlSelfRef.data_mem__DOT____Vtogcov__sign_val))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 200, vlSelfRef.__Vcellinp__data_mem__sign_val, vlSelfRef.data_mem__DOT____Vtogcov__sign_val);
        vlSelfRef.data_mem__DOT____Vtogcov__sign_val 
            = vlSelfRef.__Vcellinp__data_mem__sign_val;
    }
    if (((IData)(vlSelfRef.__Vcellinp__data_mem__mem_size) 
         ^ (IData)(vlSelfRef.data_mem__DOT____Vtogcov__mem_size))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 196, vlSelfRef.__Vcellinp__data_mem__mem_size, vlSelfRef.data_mem__DOT____Vtogcov__mem_size);
        vlSelfRef.data_mem__DOT____Vtogcov__mem_size 
            = vlSelfRef.__Vcellinp__data_mem__mem_size;
    }
    if ((vlSelfRef.__Vcellinp__data_mem__addr ^ vlSelfRef.data_mem__DOT____Vtogcov__addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2, vlSelfRef.__Vcellinp__data_mem__addr, vlSelfRef.data_mem__DOT____Vtogcov__addr);
        vlSelfRef.data_mem__DOT____Vtogcov__addr = vlSelfRef.__Vcellinp__data_mem__addr;
    }
    if ((0x00001fffU & (vlSelfRef.__Vcellinp__data_mem__addr 
                        ^ (IData)(vlSelfRef.data_mem__DOT____Vtogcov__data_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(13, vlSymsp->__Vcoverage + 202, vlSelfRef.__Vcellinp__data_mem__addr, vlSelfRef.data_mem__DOT____Vtogcov__data_addr);
        vlSelfRef.data_mem__DOT____Vtogcov__data_addr 
            = (0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr);
    }
    vlSelfRef.__Vcellout__data_mem__data_out = 0U;
    if ((0U == (IData)(vlSelfRef.__Vcellinp__data_mem__mem_size))) {
        if (vlSelfRef.__Vcellinp__data_mem__sign_val) {
            ++(vlSymsp->__Vcoverage[230]);
            vlSelfRef.data_mem__DOT____VlemCond_0 = 
                (((- (IData)((1U & (vlSelfRef.data_mem__DOT__RAM
                                    [(0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr)] 
                                    >> 7U)))) << 8U) 
                 | vlSelfRef.data_mem__DOT__RAM[(0x00001fffU 
                                                 & vlSelfRef.__Vcellinp__data_mem__addr)]);
        } else {
            ++(vlSymsp->__Vcoverage[231]);
            vlSelfRef.data_mem__DOT____VlemCond_0 = vlSelfRef.data_mem__DOT__RAM
                [(0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr)];
        }
        vlSelfRef.__Vcellout__data_mem__data_out = vlSelfRef.data_mem__DOT____VlemCond_0;
        ++(vlSymsp->__Vcoverage[232]);
    } else if ((1U == (IData)(vlSelfRef.__Vcellinp__data_mem__mem_size))) {
        if (vlSelfRef.__Vcellinp__data_mem__sign_val) {
            ++(vlSymsp->__Vcoverage[235]);
            vlSelfRef.data_mem__DOT____VlemCond_1 = 
                (((- (IData)((1U & (vlSelfRef.data_mem__DOT__RAM
                                    [(0x00001fffU & 
                                      ((IData)(1U) 
                                       + vlSelfRef.__Vcellinp__data_mem__addr))] 
                                    >> 7U)))) << 0x00000010U) 
                 | (((IData)(vlSelfRef.data_mem__DOT__RAM
                             [(0x00001fffU & ((IData)(1U) 
                                              + vlSelfRef.__Vcellinp__data_mem__addr))]) 
                     << 8U) | vlSelfRef.data_mem__DOT__RAM
                    [(0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr)]));
        } else {
            ++(vlSymsp->__Vcoverage[236]);
            vlSelfRef.data_mem__DOT____VlemCond_1 = 
                ((vlSelfRef.data_mem__DOT__RAM[(0x00001fffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.__Vcellinp__data_mem__addr))] 
                  << 8U) | vlSelfRef.data_mem__DOT__RAM
                 [(0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr)]);
        }
        vlSelfRef.__Vcellout__data_mem__data_out = vlSelfRef.data_mem__DOT____VlemCond_1;
        ++(vlSymsp->__Vcoverage[237]);
    } else if ((2U == (IData)(vlSelfRef.__Vcellinp__data_mem__mem_size))) {
        vlSelfRef.__Vcellout__data_mem__data_out = 
            (((((IData)(vlSelfRef.data_mem__DOT__RAM
                        [(0x00001fffU & ((IData)(3U) 
                                         + vlSelfRef.__Vcellinp__data_mem__addr))]) 
                << 8U) | vlSelfRef.data_mem__DOT__RAM
               [(0x00001fffU & ((IData)(2U) + vlSelfRef.__Vcellinp__data_mem__addr))]) 
              << 0x00000010U) | (((IData)(vlSelfRef.data_mem__DOT__RAM
                                          [(0x00001fffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.__Vcellinp__data_mem__addr))]) 
                                  << 8U) | vlSelfRef.data_mem__DOT__RAM
                                 [(0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr)]));
        ++(vlSymsp->__Vcoverage[238]);
    } else {
        ++(vlSymsp->__Vcoverage[239]);
    }
    if (vlSelfRef.__Vcellinp__data_mem__sign_val) {
        ++(vlSymsp->__Vcoverage[228]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__data_mem__sign_val)))) {
        ++(vlSymsp->__Vcoverage[229]);
    }
    if (vlSelfRef.__Vcellinp__data_mem__sign_val) {
        ++(vlSymsp->__Vcoverage[233]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__data_mem__sign_val)))) {
        ++(vlSymsp->__Vcoverage[234]);
    }
    ++(vlSymsp->__Vcoverage[240]);
    VL_ASSIGN_SII(32, vlSelfRef.data_out, vlSelfRef.__Vcellout__data_mem__data_out);
    if ((vlSelfRef.__Vcellout__data_mem__data_out ^ vlSelfRef.data_mem__DOT____Vtogcov__data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 130, vlSelfRef.__Vcellout__data_mem__data_out, vlSelfRef.data_mem__DOT____Vtogcov__data_out);
        vlSelfRef.data_mem__DOT____Vtogcov__data_out 
            = vlSelfRef.__Vcellout__data_mem__data_out;
    }
}

VL_ATTR_COLD void Vdata_mem___024root____Vm_traceActivitySetAll(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem___024root___eval_stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vdata_mem___024root___stl_sequent__TOP__0(vlSelf);
        Vdata_mem___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vdata_mem___024root___eval_phase__stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdata_mem___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_mem___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdata_mem___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vdata_mem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vdata_mem___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vdata_mem___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vdata_mem___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdata_mem___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__data_mem__clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdata_mem___024root____Vm_traceActivitySetAll(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root____Vm_traceActivitySetAll\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vdata_mem___024root___ctor_var_reset(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ctor_var_reset\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellinp__data_mem__sign_val = 0;
    vlSelf->__Vcellinp__data_mem__mem_size = 0;
    vlSelf->__Vcellinp__data_mem__WE_data_mem = 0;
    vlSelf->__Vcellout__data_mem__data_out = 0;
    vlSelf->__Vcellinp__data_mem__data_in = 0;
    vlSelf->__Vcellinp__data_mem__addr = 0;
    vlSelf->__Vcellinp__data_mem__clk = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->data_mem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12290668058416775480ull);
    }
    vlSelf->data_mem__DOT____Vtogcov__clk = 0;
    vlSelf->data_mem__DOT____Vtogcov__addr = 0;
    vlSelf->data_mem__DOT____Vtogcov__data_in = 0;
    vlSelf->data_mem__DOT____Vtogcov__data_out = 0;
    vlSelf->data_mem__DOT____Vtogcov__WE_data_mem = 0;
    vlSelf->data_mem__DOT____Vtogcov__mem_size = 0;
    vlSelf->data_mem__DOT____Vtogcov__sign_val = 0;
    vlSelf->data_mem__DOT____Vtogcov__data_addr = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__data_mem__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vdata_mem___024root___configure_coverage(Vdata_mem___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___configure_coverage\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "data_mem.v", 5, 11, ".data_mem", "v_toggle/data_mem", "clk");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2]), first, "data_mem.v", 7, 18, ".data_mem", "v_toggle/data_mem", "addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[66]), first, "data_mem.v", 8, 18, ".data_mem", "v_toggle/data_mem", "data_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[130]), first, "data_mem.v", 9, 23, ".data_mem", "v_toggle/data_mem", "data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[194]), first, "data_mem.v", 11, 11, ".data_mem", "v_toggle/data_mem", "WE_data_mem");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[196]), first, "data_mem.v", 12, 17, ".data_mem", "v_toggle/data_mem", "mem_size");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[200]), first, "data_mem.v", 13, 11, ".data_mem", "v_toggle/data_mem", "sign_val");
    vlSelf->__vlCoverToggleInsert(0, 12, 1, &(vlSymsp->__Vcoverage[202]), first, "data_mem.v", 20, 17, ".data_mem", "v_toggle/data_mem", "data_addr");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "data_mem.v", 31, 30, ".data_mem", "v_expr/data_mem", "(sign_val==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "data_mem.v", 31, 30, ".data_mem", "v_expr/data_mem", "(sign_val==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "data_mem.v", 31, 41, ".data_mem", "v_branch/data_mem", "cond_then", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "data_mem.v", 31, 42, ".data_mem", "v_branch/data_mem", "cond_else", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "data_mem.v", 31, 17, ".data_mem", "v_line/data_mem", "case", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "data_mem.v", 32, 34, ".data_mem", "v_expr/data_mem", "(sign_val==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "data_mem.v", 32, 34, ".data_mem", "v_expr/data_mem", "(sign_val==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "data_mem.v", 32, 45, ".data_mem", "v_branch/data_mem", "cond_then", "32", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "data_mem.v", 32, 46, ".data_mem", "v_branch/data_mem", "cond_else", "32", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "data_mem.v", 32, 21, ".data_mem", "v_line/data_mem", "case", "32", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "data_mem.v", 33, 17, ".data_mem", "v_line/data_mem", "case", "33", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "data_mem.v", 34, 13, ".data_mem", "v_line/data_mem", "case", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "data_mem.v", 26, 5, ".data_mem", "v_line/data_mem", "block", "26-28,30", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "data_mem.v", 45, 21, ".data_mem", "v_line/data_mem", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "data_mem.v", 46, 25, ".data_mem", "v_line/data_mem", "case", "46-48", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "data_mem.v", 50, 21, ".data_mem", "v_line/data_mem", "case", "50-54", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "data_mem.v", 56, 17, ".data_mem", "v_line/data_mem", "case", "56", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "data_mem.v", 42, 9, ".data_mem", "v_branch/data_mem", "if", "42-44", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "data_mem.v", 42, 10, ".data_mem", "v_branch/data_mem", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "data_mem.v", 39, 5, ".data_mem", "v_line/data_mem", "block", "39-40", "", "", "", "");
}
