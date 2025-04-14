// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransformer.h for the primary calling header

#include "Vtransformer__pch.h"
#include "Vtransformer___024root.h"

VL_ATTR_COLD void Vtransformer___024root___eval_static(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_static\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtransformer___024root___eval_initial(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_initial\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtransformer___024root___eval_final(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_final\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__stl(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtransformer___024root___eval_phase__stl(Vtransformer___024root* vlSelf);

VL_ATTR_COLD void Vtransformer___024root___eval_settle(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_settle\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtransformer___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("transformer.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtransformer___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__stl(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___dump_triggers__stl\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtransformer___024root___stl_sequent__TOP__0(Vtransformer___024root* vlSelf);
VL_ATTR_COLD void Vtransformer___024root____Vm_traceActivitySetAll(Vtransformer___024root* vlSelf);

VL_ATTR_COLD void Vtransformer___024root___eval_stl(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_stl\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtransformer___024root___stl_sequent__TOP__0(vlSelf);
        Vtransformer___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtransformer___024root___stl_sequent__TOP__0(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___stl_sequent__TOP__0\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out00 = vlSelfRef.transformer__DOT__out00_reg;
    vlSelfRef.out01 = vlSelfRef.transformer__DOT__out01_reg;
    vlSelfRef.out10 = vlSelfRef.transformer__DOT__out10_reg;
    vlSelfRef.out11 = vlSelfRef.transformer__DOT__out11_reg;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m00_0 = 0U;
    if (((0U != (IData)(vlSelfRef.q00)) & (0U != (IData)(vlSelfRef.k00)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q00) ^ (IData)(vlSelfRef.k00)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q00) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k00) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q00)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k00)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m00_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m00_1 = 0U;
    if (((0U != (IData)(vlSelfRef.q01)) & (0U != (IData)(vlSelfRef.k10)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q01) ^ (IData)(vlSelfRef.k10)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q01) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k10) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q01)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k10)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m00_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul00_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m01_0 = 0U;
    if (((0U != (IData)(vlSelfRef.q00)) & (0U != (IData)(vlSelfRef.k01)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q00) ^ (IData)(vlSelfRef.k01)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q00) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k01) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q00)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k01)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m01_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m01_1 = 0U;
    if (((0U != (IData)(vlSelfRef.q01)) & (0U != (IData)(vlSelfRef.k11)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q01) ^ (IData)(vlSelfRef.k11)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q01) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k11) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q01)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k11)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m01_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul01_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m10_0 = 0U;
    if (((0U != (IData)(vlSelfRef.q10)) & (0U != (IData)(vlSelfRef.k00)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q10) ^ (IData)(vlSelfRef.k00)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q10) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k00) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q10)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k00)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m10_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m10_1 = 0U;
    if (((0U != (IData)(vlSelfRef.q11)) & (0U != (IData)(vlSelfRef.k10)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q11) ^ (IData)(vlSelfRef.k10)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q11) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k10) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q11)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k10)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m10_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul10_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m11_0 = 0U;
    if (((0U != (IData)(vlSelfRef.q10)) & (0U != (IData)(vlSelfRef.k01)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q10) ^ (IData)(vlSelfRef.k01)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q10) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k01) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q10)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k01)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m11_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__m11_1 = 0U;
    if (((0U != (IData)(vlSelfRef.q11)) & (0U != (IData)(vlSelfRef.k11)))) {
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.q11) ^ (IData)(vlSelfRef.k11)) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.q11) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.k11) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.q11)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.k11)));
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mma__DOT__m11_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__mul11_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_1)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0))) {
        vlSelfRef.transformer__DOT__qk00_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m00_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_1))) {
        vlSelfRef.transformer__DOT__qk00_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m00_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_1)) 
                   >> 0xfU))) {
        vlSelfRef.transformer__DOT__qk00_raw = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m00_0))) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__fraction));
        vlSelfRef.transformer__DOT__qk00_raw = ((0x20U 
                                                 & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__sign) 
                                                  << 0xfU) 
                                                 | ((0x7c00U 
                                                     & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__exponent) 
                                                        << 0xaU)) 
                                                    | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add00__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_1)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0))) {
        vlSelfRef.transformer__DOT__qk01_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m01_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_1))) {
        vlSelfRef.transformer__DOT__qk01_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m01_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_1)) 
                   >> 0xfU))) {
        vlSelfRef.transformer__DOT__qk01_raw = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m01_0))) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__fraction));
        vlSelfRef.transformer__DOT__qk01_raw = ((0x20U 
                                                 & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__sign) 
                                                  << 0xfU) 
                                                 | ((0x7c00U 
                                                     & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__exponent) 
                                                        << 0xaU)) 
                                                    | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add01__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_1)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0))) {
        vlSelfRef.transformer__DOT__qk10_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m10_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_1))) {
        vlSelfRef.transformer__DOT__qk10_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m10_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_1)) 
                   >> 0xfU))) {
        vlSelfRef.transformer__DOT__qk10_raw = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m10_0))) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__fraction));
        vlSelfRef.transformer__DOT__qk10_raw = ((0x20U 
                                                 & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__sign) 
                                                  << 0xfU) 
                                                 | ((0x7c00U 
                                                     & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__exponent) 
                                                        << 0xaU)) 
                                                    | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add10__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_1)));
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0))) {
        vlSelfRef.transformer__DOT__qk11_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m11_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_1))) {
        vlSelfRef.transformer__DOT__qk11_raw = vlSelfRef.transformer__DOT__u_mma__DOT__m11_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_1)) 
                   >> 0xfU))) {
        vlSelfRef.transformer__DOT__qk11_raw = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__m11_0))) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__fraction));
        vlSelfRef.transformer__DOT__qk11_raw = ((0x20U 
                                                 & (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__sign) 
                                                  << 0xfU) 
                                                 | ((0x7c00U 
                                                     & ((IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__exponent) 
                                                        << 0xaU)) 
                                                    | (IData)(vlSelfRef.transformer__DOT__u_mma__DOT__add11__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mul00__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mul00__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mul00__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mul00__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mul00__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mul00__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__qk00 = 0U;
    if ((0U != (IData)(vlSelfRef.transformer__DOT__qk00_raw))) {
        vlSelfRef.transformer__DOT__u_mul00__DOT__fractionB = 0x400U;
        vlSelfRef.transformer__DOT__u_mul00__DOT__sign 
            = (1U & ((IData)(vlSelfRef.transformer__DOT__qk00_raw) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
            = (0x3fU & ((IData)(1U) + (0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk00_raw) 
                                                >> 0xaU))));
        vlSelfRef.transformer__DOT__u_mul00__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk00_raw)));
        vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
            = (0x3fffffU & VL_SHIFTL_III(22,22,32, (IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__fractionA), 0xaU));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mul00__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul00__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mul00__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mul00__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mul00__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__qk00 = ((0x20U 
                                             & (IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent))
                                             ? 0U : 
                                            (((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__sign) 
                                              << 0xfU) 
                                             | ((0x7c00U 
                                                 & ((IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__exponent) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelfRef.transformer__DOT__u_mul00__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mul01__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mul01__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mul01__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mul01__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mul01__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mul01__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__qk01 = 0U;
    if ((0U != (IData)(vlSelfRef.transformer__DOT__qk01_raw))) {
        vlSelfRef.transformer__DOT__u_mul01__DOT__fractionB = 0x400U;
        vlSelfRef.transformer__DOT__u_mul01__DOT__sign 
            = (1U & ((IData)(vlSelfRef.transformer__DOT__qk01_raw) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
            = (0x3fU & ((IData)(1U) + (0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk01_raw) 
                                                >> 0xaU))));
        vlSelfRef.transformer__DOT__u_mul01__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk01_raw)));
        vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
            = (0x3fffffU & VL_SHIFTL_III(22,22,32, (IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__fractionA), 0xaU));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mul01__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul01__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mul01__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mul01__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mul01__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__qk01 = ((0x20U 
                                             & (IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent))
                                             ? 0U : 
                                            (((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__sign) 
                                              << 0xfU) 
                                             | ((0x7c00U 
                                                 & ((IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__exponent) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelfRef.transformer__DOT__u_mul01__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mul10__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mul10__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mul10__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mul10__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mul10__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mul10__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__qk10 = 0U;
    if ((0U != (IData)(vlSelfRef.transformer__DOT__qk10_raw))) {
        vlSelfRef.transformer__DOT__u_mul10__DOT__fractionB = 0x400U;
        vlSelfRef.transformer__DOT__u_mul10__DOT__sign 
            = (1U & ((IData)(vlSelfRef.transformer__DOT__qk10_raw) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
            = (0x3fU & ((IData)(1U) + (0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk10_raw) 
                                                >> 0xaU))));
        vlSelfRef.transformer__DOT__u_mul10__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk10_raw)));
        vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
            = (0x3fffffU & VL_SHIFTL_III(22,22,32, (IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__fractionA), 0xaU));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mul10__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul10__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mul10__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mul10__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mul10__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__qk10 = ((0x20U 
                                             & (IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent))
                                             ? 0U : 
                                            (((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__sign) 
                                              << 0xfU) 
                                             | ((0x7c00U 
                                                 & ((IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__exponent) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelfRef.transformer__DOT__u_mul10__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mul11__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mul11__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mul11__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mul11__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mul11__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mul11__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__qk11 = 0U;
    if ((0U != (IData)(vlSelfRef.transformer__DOT__qk11_raw))) {
        vlSelfRef.transformer__DOT__u_mul11__DOT__fractionB = 0x400U;
        vlSelfRef.transformer__DOT__u_mul11__DOT__sign 
            = (1U & ((IData)(vlSelfRef.transformer__DOT__qk11_raw) 
                     >> 0xfU));
        vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
            = (0x3fU & ((IData)(1U) + (0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk11_raw) 
                                                >> 0xaU))));
        vlSelfRef.transformer__DOT__u_mul11__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk11_raw)));
        vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
            = (0x3fffffU & VL_SHIFTL_III(22,22,32, (IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__fractionA), 0xaU));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mul11__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mul11__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mul11__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mul11__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mul11__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__qk11 = ((0x20U 
                                             & (IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent))
                                             ? 0U : 
                                            (((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__sign) 
                                              << 0xfU) 
                                             | ((0x7c00U 
                                                 & ((IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__exponent) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelfRef.transformer__DOT__u_mul11__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk00)) 
         & (0U != (IData)(vlSelfRef.v00)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk00) 
                      ^ (IData)(vlSelfRef.v00)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk00) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v00) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk00)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v00)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk00)) 
         & (0U != (IData)(vlSelfRef.v01)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk00) 
                      ^ (IData)(vlSelfRef.v01)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk00) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v01) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk00)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v01)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk01)) 
         & (0U != (IData)(vlSelfRef.v10)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk01) 
                      ^ (IData)(vlSelfRef.v10)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk01) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v10) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk01)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v10)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul00_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk01)) 
         & (0U != (IData)(vlSelfRef.v11)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk01) 
                      ^ (IData)(vlSelfRef.v11)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk01) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v11) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk01)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v11)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul01_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk10)) 
         & (0U != (IData)(vlSelfRef.v00)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk10) 
                      ^ (IData)(vlSelfRef.v00)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk10) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v00) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk10)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v00)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk10)) 
         & (0U != (IData)(vlSelfRef.v01)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk10) 
                      ^ (IData)(vlSelfRef.v01)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk10) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v01) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk10)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v01)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_0__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk11)) 
         & (0U != (IData)(vlSelfRef.v10)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk11) 
                      ^ (IData)(vlSelfRef.v10)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk11) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v10) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk11)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v10)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul10_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionA = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionB = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1 = 0U;
    if (((0U != (IData)(vlSelfRef.transformer__DOT__qk11)) 
         & (0U != (IData)(vlSelfRef.v11)))) {
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__sign 
            = (1U & (((IData)(vlSelfRef.transformer__DOT__qk11) 
                      ^ (IData)(vlSelfRef.v11)) >> 0xfU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
            = (0x3fU & ((IData)(2U) + (((0x1fU & ((IData)(vlSelfRef.transformer__DOT__qk11) 
                                                  >> 0xaU)) 
                                        + (0x1fU & 
                                           ((IData)(vlSelfRef.v11) 
                                            >> 0xaU))) 
                                       - (IData)(0xfU))));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__qk11)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.v11)));
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionA) 
                            * (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 1U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(1U)));
        } else if ((0x100000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 2U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(2U)));
        } else if ((0x80000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 3U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(3U)));
        } else if ((0x40000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 4U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(4U)));
        } else if ((0x20000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 5U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(5U)));
        } else if ((0x10000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 6U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(6U)));
        } else if ((0x8000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 7U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(7U)));
        } else if ((0x4000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 8U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(8U)));
        } else if ((0x2000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 9U));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(9U)));
        } else if ((0x1000U & vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction)) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction, 0xaU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent 
                = (0x3fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                            - (IData)(0xaU)));
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1 
            = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__mul11_1__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0))) {
        vlSelfRef.out00 = vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1))) {
        vlSelfRef.out00 = vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1)) 
                   >> 0xfU))) {
        vlSelfRef.out00 = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m00_0))) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__fraction));
        vlSelfRef.out00 = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent))
                            ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__sign) 
                                     << 0xfU) | ((0x7c00U 
                                                  & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__exponent) 
                                                     << 0xaU)) 
                                                 | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add00__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0))) {
        vlSelfRef.out01 = vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1))) {
        vlSelfRef.out01 = vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1)) 
                   >> 0xfU))) {
        vlSelfRef.out01 = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m01_0))) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__fraction));
        vlSelfRef.out01 = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent))
                            ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__sign) 
                                     << 0xfU) | ((0x7c00U 
                                                  & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__exponent) 
                                                     << 0xaU)) 
                                                 | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add01__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0))) {
        vlSelfRef.out10 = vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1))) {
        vlSelfRef.out10 = vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1)) 
                   >> 0xfU))) {
        vlSelfRef.out10 = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m10_0))) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__fraction));
        vlSelfRef.out10 = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent))
                            ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__sign) 
                                     << 0xfU) | ((0x7c00U 
                                                  & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__exponent) 
                                                     << 0xaU)) 
                                                 | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add10__DOT__mantissa))));
    }
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1) 
                    >> 0xaU));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1)));
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__shiftAmount = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__sign = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__mantissa = 0U;
    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
        = vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0))) {
        vlSelfRef.out11 = vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1;
    } else if ((0U == (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1))) {
        vlSelfRef.out11 = vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0;
    } else if ((((0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0)) 
                 == (0x7fffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1))) 
                & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0) 
                    ^ (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1)) 
                   >> 0xfU))) {
        vlSelfRef.out11 = 0U;
    } else {
        if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentB) 
             > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentB;
        } else if (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA) 
                    > (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentB))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__shiftAmount 
                = (0xffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentB) 
                            - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,8, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB), (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__shiftAmount)));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                = vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_1) 
                                        >> 0xfU)))) {
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout 
                = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA) 
                          + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__sign 
                = (1U & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0) 
                         >> 0xfU));
            vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA) 
                             + (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB)));
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT____Vconcswap_1_h8e53a22f__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent))));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT____Vconcswap_1_h55214352__0 
                    = (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT____Vconcswap_1_h8e53a22f__0;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                    = vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT____Vconcswap_1_h55214352__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__m11_0))) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA) 
                              - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionA) 
                                 - (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fractionB)));
            }
            if (vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__cout) {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__sign = 1U;
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction)));
            } else {
                vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 1U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 2U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 3U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 4U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 5U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 6U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 7U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 8U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 9U));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction))) {
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction), 0xaU));
                    vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
        }
        vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__fraction));
        vlSelfRef.out11 = ((0x20U & (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent))
                            ? 0U : (((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__sign) 
                                     << 0xfU) | ((0x7c00U 
                                                  & ((IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__exponent) 
                                                     << 0xaU)) 
                                                 | (IData)(vlSelfRef.transformer__DOT__u_mmd__DOT__add11__DOT__mantissa))));
    }
}

VL_ATTR_COLD void Vtransformer___024root___eval_triggers__stl(Vtransformer___024root* vlSelf);

VL_ATTR_COLD bool Vtransformer___024root___eval_phase__stl(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_phase__stl\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtransformer___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtransformer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__ico(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___dump_triggers__ico\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__act(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___dump_triggers__act\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__nba(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___dump_triggers__nba\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtransformer___024root____Vm_traceActivitySetAll(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root____Vm_traceActivitySetAll\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtransformer___024root___ctor_var_reset(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___ctor_var_reset\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->q00 = VL_RAND_RESET_I(16);
    vlSelf->q01 = VL_RAND_RESET_I(16);
    vlSelf->q10 = VL_RAND_RESET_I(16);
    vlSelf->q11 = VL_RAND_RESET_I(16);
    vlSelf->k00 = VL_RAND_RESET_I(16);
    vlSelf->k01 = VL_RAND_RESET_I(16);
    vlSelf->k10 = VL_RAND_RESET_I(16);
    vlSelf->k11 = VL_RAND_RESET_I(16);
    vlSelf->v00 = VL_RAND_RESET_I(16);
    vlSelf->v01 = VL_RAND_RESET_I(16);
    vlSelf->v10 = VL_RAND_RESET_I(16);
    vlSelf->v11 = VL_RAND_RESET_I(16);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->out00 = VL_RAND_RESET_I(16);
    vlSelf->out01 = VL_RAND_RESET_I(16);
    vlSelf->out10 = VL_RAND_RESET_I(16);
    vlSelf->out11 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk00_raw = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk01_raw = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk10_raw = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk11_raw = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk00 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk01 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk10 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__qk11 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__out00_reg = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__out01_reg = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__out10_reg = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__out11_reg = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m00_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m00_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m01_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m01_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m10_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m10_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m11_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__m11_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul00_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul01_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul10_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__mul11_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add00__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add01__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add10__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mma__DOT__add11__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul00__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mul00__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mul00__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mul00__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul00__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul00__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mul01__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mul01__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mul01__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mul01__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul01__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul01__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mul10__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mul10__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mul10__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mul10__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul10__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul10__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mul11__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mul11__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mul11__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mul11__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul11__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mul11__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__m00_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m00_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m01_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m01_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m10_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m10_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m11_0 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__m11_1 = VL_RAND_RESET_I(16);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul00_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul01_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul10_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_0__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_0__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_0__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_0__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__mul11_1__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add00__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add01__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add10__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__exponentA = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__exponentB = VL_RAND_RESET_I(6);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__shiftAmount = VL_RAND_RESET_I(8);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT____Vconcswap_1_h8e53a22f__0 = VL_RAND_RESET_I(1);
    vlSelf->transformer__DOT__u_mmd__DOT__add11__DOT____Vconcswap_1_h55214352__0 = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
