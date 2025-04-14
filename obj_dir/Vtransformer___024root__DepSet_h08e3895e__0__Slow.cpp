// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransformer.h for the primary calling header

#include "Vtransformer__pch.h"
#include "Vtransformer__Syms.h"
#include "Vtransformer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__stl(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtransformer___024root___eval_triggers__stl(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_triggers__stl\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtransformer___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
