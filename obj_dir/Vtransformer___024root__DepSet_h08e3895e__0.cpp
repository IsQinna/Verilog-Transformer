// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransformer.h for the primary calling header

#include "Vtransformer__pch.h"
#include "Vtransformer__Syms.h"
#include "Vtransformer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__ico(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtransformer___024root___eval_triggers__ico(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_triggers__ico\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtransformer___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__act(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtransformer___024root___eval_triggers__act(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_triggers__act\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtransformer___024root___dump_triggers__act(vlSelf);
    }
#endif
}
