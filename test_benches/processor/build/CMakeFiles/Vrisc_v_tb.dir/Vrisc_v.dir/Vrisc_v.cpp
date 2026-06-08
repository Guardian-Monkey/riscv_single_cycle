// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrisc_v__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vrisc_v::Vrisc_v(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vrisc_v__Syms(contextp(), name(), this)}
    , clk{vlSymsp->TOP.clk}
    , RS1{vlSymsp->TOP.RS1}
    , RS2{vlSymsp->TOP.RS2}
    , RD{vlSymsp->TOP.RD}
    , ALU_FUNCT{vlSymsp->TOP.ALU_FUNCT}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;

}

//============================================================
// Destructor

Vrisc_v::~Vrisc_v() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG
void Vrisc_v___024root___eval_static(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf);

void Vrisc_v::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrisc_v::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrisc_v___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrisc_v___024root___eval_static(&(vlSymsp->TOP));
        Vrisc_v___024root___eval_initial(&(vlSymsp->TOP));
        Vrisc_v___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrisc_v___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrisc_v::eventsPending() { return false; }

uint64_t Vrisc_v::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vrisc_v___024root___eval_final(Vrisc_v___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v::final() {
    contextp()->executingFinal(true);
    Vrisc_v___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrisc_v::hierName() const { return vlSymsp->name(); }
const char* Vrisc_v::modelName() const { return "Vrisc_v"; }
unsigned Vrisc_v::threads() const { return 1; }
void Vrisc_v::prepareClone() const { contextp()->prepareClone(); }
void Vrisc_v::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrisc_v::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vrisc_v___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrisc_v___024root__trace_init_top(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vrisc_v___024root__trace_decl_types(tracep);
    Vrisc_v___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrisc_v___024root__trace_register(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrisc_v::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vrisc_v::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrisc_v::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 119);
    Vrisc_v___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
