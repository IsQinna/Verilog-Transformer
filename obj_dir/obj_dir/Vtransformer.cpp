// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtransformer__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtransformer::Vtransformer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtransformer__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , q00{vlSymsp->TOP.q00}
    , q01{vlSymsp->TOP.q01}
    , q10{vlSymsp->TOP.q10}
    , q11{vlSymsp->TOP.q11}
    , k00{vlSymsp->TOP.k00}
    , k01{vlSymsp->TOP.k01}
    , k10{vlSymsp->TOP.k10}
    , k11{vlSymsp->TOP.k11}
    , v00{vlSymsp->TOP.v00}
    , v01{vlSymsp->TOP.v01}
    , v10{vlSymsp->TOP.v10}
    , v11{vlSymsp->TOP.v11}
    , out00{vlSymsp->TOP.out00}
    , out01{vlSymsp->TOP.out01}
    , out10{vlSymsp->TOP.out10}
    , out11{vlSymsp->TOP.out11}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtransformer::Vtransformer(const char* _vcname__)
    : Vtransformer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtransformer::~Vtransformer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtransformer___024root___eval_debug_assertions(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG
void Vtransformer___024root___eval_static(Vtransformer___024root* vlSelf);
void Vtransformer___024root___eval_initial(Vtransformer___024root* vlSelf);
void Vtransformer___024root___eval_settle(Vtransformer___024root* vlSelf);
void Vtransformer___024root___eval(Vtransformer___024root* vlSelf);

void Vtransformer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtransformer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtransformer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtransformer___024root___eval_static(&(vlSymsp->TOP));
        Vtransformer___024root___eval_initial(&(vlSymsp->TOP));
        Vtransformer___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtransformer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtransformer::eventsPending() { return false; }

uint64_t Vtransformer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtransformer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtransformer___024root___eval_final(Vtransformer___024root* vlSelf);

VL_ATTR_COLD void Vtransformer::final() {
    Vtransformer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtransformer::hierName() const { return vlSymsp->name(); }
const char* Vtransformer::modelName() const { return "Vtransformer"; }
unsigned Vtransformer::threads() const { return 1; }
void Vtransformer::prepareClone() const { contextp()->prepareClone(); }
void Vtransformer::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtransformer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtransformer___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtransformer___024root__trace_init_top(Vtransformer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtransformer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtransformer___024root*>(voidSelf);
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtransformer___024root__trace_decl_types(tracep);
    Vtransformer___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtransformer___024root__trace_register(Vtransformer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtransformer::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtransformer::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtransformer___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
