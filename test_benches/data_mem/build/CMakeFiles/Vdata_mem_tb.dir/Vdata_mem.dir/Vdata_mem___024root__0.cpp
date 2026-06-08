// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"

void Vdata_mem___024root___eval_triggers_vec__ico(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_triggers_vec__ico\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vdata_mem___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___trigger_anySet__ico\n"); );
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

void Vdata_mem___024root___ico_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ico_sequent__TOP__0\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__data_mem__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__data_mem__WE_data_mem, vlSelfRef.WE_data_mem);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__data_mem__data_in, vlSelfRef.data_in);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__data_mem__sign_val, vlSelfRef.sign_val);
    VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__data_mem__mem_size, vlSelfRef.mem_size);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__data_mem__addr, vlSelfRef.addr);
    if (((IData)(vlSelfRef.__Vcellinp__data_mem__clk) 
         ^ (IData)(vlSelfRef.data_mem__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__data_mem__clk, vlSelfRef.data_mem__DOT____Vtogcov__clk);
        vlSelfRef.data_mem__DOT____Vtogcov__clk = vlSelfRef.__Vcellinp__data_mem__clk;
    }
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

void Vdata_mem___024root___eval_ico(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_ico\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vdata_mem___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdata_mem___024root___eval_phase__ico(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__ico\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdata_mem___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_mem___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vdata_mem___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vdata_mem___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdata_mem___024root___eval_triggers_vec__act(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_triggers_vec__act\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.__Vcellinp__data_mem__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__data_mem__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__data_mem__clk__0 
        = vlSelfRef.__Vcellinp__data_mem__clk;
}

bool Vdata_mem___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___trigger_anySet__act\n"); );
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

void Vdata_mem___024root___nba_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___nba_sequent__TOP__0\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v0;
    __VdlyVal__data_mem__DOT__RAM__v0 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v0;
    __VdlyDim0__data_mem__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__data_mem__DOT__RAM__v0;
    __VdlySet__data_mem__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v1;
    __VdlyVal__data_mem__DOT__RAM__v1 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v1;
    __VdlyDim0__data_mem__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__data_mem__DOT__RAM__v1;
    __VdlySet__data_mem__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v2;
    __VdlyVal__data_mem__DOT__RAM__v2 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v2;
    __VdlyDim0__data_mem__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v3;
    __VdlyVal__data_mem__DOT__RAM__v3 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v3;
    __VdlyDim0__data_mem__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__data_mem__DOT__RAM__v3;
    __VdlySet__data_mem__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v4;
    __VdlyVal__data_mem__DOT__RAM__v4 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v4;
    __VdlyDim0__data_mem__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v5;
    __VdlyVal__data_mem__DOT__RAM__v5 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v5;
    __VdlyDim0__data_mem__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__data_mem__DOT__RAM__v6;
    __VdlyVal__data_mem__DOT__RAM__v6 = 0;
    SData/*12:0*/ __VdlyDim0__data_mem__DOT__RAM__v6;
    __VdlyDim0__data_mem__DOT__RAM__v6 = 0;
    // Body
    __VdlySet__data_mem__DOT__RAM__v0 = 0U;
    __VdlySet__data_mem__DOT__RAM__v1 = 0U;
    __VdlySet__data_mem__DOT__RAM__v3 = 0U;
    if (vlSelfRef.__Vcellinp__data_mem__WE_data_mem) {
        if ((0U == (IData)(vlSelfRef.__Vcellinp__data_mem__mem_size))) {
            ++(vlSymsp->__Vcoverage[241]);
            __VdlyVal__data_mem__DOT__RAM__v0 = (0x000000ffU 
                                                 & vlSelfRef.__Vcellinp__data_mem__data_in);
            __VdlyDim0__data_mem__DOT__RAM__v0 = (0x00001fffU 
                                                  & vlSelfRef.__Vcellinp__data_mem__addr);
            __VdlySet__data_mem__DOT__RAM__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.__Vcellinp__data_mem__mem_size))) {
            ++(vlSymsp->__Vcoverage[242]);
            __VdlyVal__data_mem__DOT__RAM__v1 = (0x000000ffU 
                                                 & vlSelfRef.__Vcellinp__data_mem__data_in);
            __VdlyDim0__data_mem__DOT__RAM__v1 = (0x00001fffU 
                                                  & vlSelfRef.__Vcellinp__data_mem__addr);
            __VdlySet__data_mem__DOT__RAM__v1 = 1U;
            __VdlyVal__data_mem__DOT__RAM__v2 = (0x000000ffU 
                                                 & (vlSelfRef.__Vcellinp__data_mem__data_in 
                                                    >> 8U));
            __VdlyDim0__data_mem__DOT__RAM__v2 = (0x00001fffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.__Vcellinp__data_mem__addr));
        } else if ((2U == (IData)(vlSelfRef.__Vcellinp__data_mem__mem_size))) {
            ++(vlSymsp->__Vcoverage[243]);
            __VdlyVal__data_mem__DOT__RAM__v3 = (0x000000ffU 
                                                 & vlSelfRef.__Vcellinp__data_mem__data_in);
            __VdlyDim0__data_mem__DOT__RAM__v3 = (0x00001fffU 
                                                  & vlSelfRef.__Vcellinp__data_mem__addr);
            __VdlySet__data_mem__DOT__RAM__v3 = 1U;
            __VdlyVal__data_mem__DOT__RAM__v4 = (0x000000ffU 
                                                 & (vlSelfRef.__Vcellinp__data_mem__data_in 
                                                    >> 8U));
            __VdlyDim0__data_mem__DOT__RAM__v4 = (0x00001fffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.__Vcellinp__data_mem__addr));
            __VdlyVal__data_mem__DOT__RAM__v5 = (0x000000ffU 
                                                 & (vlSelfRef.__Vcellinp__data_mem__data_in 
                                                    >> 0x10U));
            __VdlyDim0__data_mem__DOT__RAM__v5 = (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.__Vcellinp__data_mem__addr));
            __VdlyVal__data_mem__DOT__RAM__v6 = (vlSelfRef.__Vcellinp__data_mem__data_in 
                                                 >> 0x18U);
            __VdlyDim0__data_mem__DOT__RAM__v6 = (0x00001fffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.__Vcellinp__data_mem__addr));
        } else {
            ++(vlSymsp->__Vcoverage[244]);
        }
        ++(vlSymsp->__Vcoverage[245]);
    } else {
        ++(vlSymsp->__Vcoverage[246]);
    }
    ++(vlSymsp->__Vcoverage[247]);
    if (__VdlySet__data_mem__DOT__RAM__v0) {
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v0] 
            = __VdlyVal__data_mem__DOT__RAM__v0;
    }
    if (__VdlySet__data_mem__DOT__RAM__v1) {
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v1] 
            = __VdlyVal__data_mem__DOT__RAM__v1;
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v2] 
            = __VdlyVal__data_mem__DOT__RAM__v2;
    }
    if (__VdlySet__data_mem__DOT__RAM__v3) {
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v3] 
            = __VdlyVal__data_mem__DOT__RAM__v3;
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v4] 
            = __VdlyVal__data_mem__DOT__RAM__v4;
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v5] 
            = __VdlyVal__data_mem__DOT__RAM__v5;
        vlSelfRef.data_mem__DOT__RAM[__VdlyDim0__data_mem__DOT__RAM__v6] 
            = __VdlyVal__data_mem__DOT__RAM__v6;
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

void Vdata_mem___024root___eval_nba(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_nba\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdata_mem___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdata_mem___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdata_mem___024root___eval_phase__act(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__act\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_mem___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_mem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdata_mem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vdata_mem___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdata_mem___024root___eval_phase__nba(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__nba\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdata_mem___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdata_mem___024root___eval_nba(vlSelf);
        Vdata_mem___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vdata_mem___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("data_mem.v", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vdata_mem___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdata_mem___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("data_mem.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdata_mem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("data_mem.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vdata_mem___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdata_mem___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_debug_assertions\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
