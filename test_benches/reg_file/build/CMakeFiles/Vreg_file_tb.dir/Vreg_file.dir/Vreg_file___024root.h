// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg_file.h for the primary calling header

#ifndef VERILATED_VREG_FILE___024ROOT_H_
#define VERILATED_VREG_FILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "verilated_cov.h"


class Vreg_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreg_file___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__reg_file__WE_reg_file;
    CData/*4:0*/ __Vcellinp__reg_file__rd;
    CData/*4:0*/ __Vcellinp__reg_file__rs2;
    CData/*4:0*/ __Vcellinp__reg_file__rs1;
    CData/*0:0*/ __Vcellinp__reg_file__clk;
    CData/*0:0*/ reg_file__DOT____Vtogcov__clk;
    CData/*4:0*/ reg_file__DOT____Vtogcov__rs1;
    CData/*4:0*/ reg_file__DOT____Vtogcov__rs2;
    CData/*4:0*/ reg_file__DOT____Vtogcov__rd;
    CData/*0:0*/ reg_file__DOT____Vtogcov__WE_reg_file;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__reg_file__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __Vcellout__reg_file__rs2_out;
    IData/*31:0*/ __Vcellout__reg_file__rs1_out;
    IData/*31:0*/ __Vcellinp__reg_file__data_in;
    IData/*31:0*/ reg_file__DOT____Vlvbound_h0df2320c__0;
    IData/*31:0*/ reg_file__DOT____Vtogcov__data_in;
    IData/*31:0*/ reg_file__DOT____Vtogcov__rs1_out;
    IData/*31:0*/ reg_file__DOT____Vtogcov__rs2_out;
    IData/*31:0*/ reg_file__DOT____Vtogcov__r0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 31> reg_file__DOT__registers;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<bool> clk;
    sc_core::sc_in<uint32_t> rs1;
    sc_core::sc_in<uint32_t> rs2;
    sc_core::sc_in<uint32_t> rd;
    sc_core::sc_in<bool> WE_reg_file;
    sc_core::sc_in<uint32_t> data_in;
    sc_core::sc_out<uint32_t> rs1_out;
    sc_core::sc_out<uint32_t> rs2_out;

    // INTERNAL VARIABLES
    Vreg_file__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vreg_file___024root(Vreg_file__Syms* symsp, const char* namep);
    ~Vreg_file___024root();
    VL_UNCOPYABLE(Vreg_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
