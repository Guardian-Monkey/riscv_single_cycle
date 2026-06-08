// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_mem.h for the primary calling header

#ifndef VERILATED_VDATA_MEM___024ROOT_H_
#define VERILATED_VDATA_MEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "verilated_cov.h"


class Vdata_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_mem___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__data_mem__sign_val;
    CData/*1:0*/ __Vcellinp__data_mem__mem_size;
    CData/*0:0*/ __Vcellinp__data_mem__WE_data_mem;
    CData/*0:0*/ __Vcellinp__data_mem__clk;
    CData/*0:0*/ data_mem__DOT____Vtogcov__clk;
    CData/*0:0*/ data_mem__DOT____Vtogcov__WE_data_mem;
    CData/*1:0*/ data_mem__DOT____Vtogcov__mem_size;
    CData/*0:0*/ data_mem__DOT____Vtogcov__sign_val;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__data_mem__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*12:0*/ data_mem__DOT____Vtogcov__data_addr;
    IData/*31:0*/ __Vcellout__data_mem__data_out;
    IData/*31:0*/ __Vcellinp__data_mem__data_in;
    IData/*31:0*/ __Vcellinp__data_mem__addr;
    IData/*31:0*/ data_mem__DOT____VlemCond_1;
    IData/*31:0*/ data_mem__DOT____VlemCond_0;
    IData/*31:0*/ data_mem__DOT____Vtogcov__addr;
    IData/*31:0*/ data_mem__DOT____Vtogcov__data_in;
    IData/*31:0*/ data_mem__DOT____Vtogcov__data_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8192> data_mem__DOT__RAM;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<bool> clk;
    sc_core::sc_in<bool> WE_data_mem;
    sc_core::sc_in<uint32_t> mem_size;
    sc_core::sc_in<bool> sign_val;
    sc_core::sc_in<uint32_t> addr;
    sc_core::sc_in<uint32_t> data_in;
    sc_core::sc_out<uint32_t> data_out;

    // INTERNAL VARIABLES
    Vdata_mem__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdata_mem___024root(Vdata_mem__Syms* symsp, const char* namep);
    ~Vdata_mem___024root();
    VL_UNCOPYABLE(Vdata_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
