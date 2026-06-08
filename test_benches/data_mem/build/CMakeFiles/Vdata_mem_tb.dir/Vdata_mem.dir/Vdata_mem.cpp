// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_mem__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vdata_mem::Vdata_mem(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vdata_mem__Syms(contextp(), name(), this)}
    , clk{vlSymsp->TOP.clk}
    , WE_data_mem{vlSymsp->TOP.WE_data_mem}
    , mem_size{vlSymsp->TOP.mem_size}
    , sign_val{vlSymsp->TOP.sign_val}
    , addr{vlSymsp->TOP.addr}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << WE_data_mem;
    sensitive << mem_size;
    sensitive << sign_val;
    sensitive << addr;
    sensitive << data_in;

}

//============================================================
// Destructor

Vdata_mem::~Vdata_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_mem___024root___eval_static(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval_initial(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval_settle(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf);

void Vdata_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_mem___024root___eval_static(&(vlSymsp->TOP));
        Vdata_mem___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_mem___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_mem::eventsPending() { return false; }

uint64_t Vdata_mem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vdata_mem___024root___eval_final(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem::final() {
    contextp()->executingFinal(true);
    Vdata_mem___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_mem::hierName() const { return vlSymsp->name(); }
const char* Vdata_mem::modelName() const { return "Vdata_mem"; }
unsigned Vdata_mem::threads() const { return 1; }
void Vdata_mem::prepareClone() const { contextp()->prepareClone(); }
void Vdata_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdata_mem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vdata_mem___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdata_mem___024root__trace_init_top(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vdata_mem___024root__trace_decl_types(tracep);
    Vdata_mem___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdata_mem___024root__trace_register(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdata_mem::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vdata_mem::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdata_mem::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 11);
    Vdata_mem___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
