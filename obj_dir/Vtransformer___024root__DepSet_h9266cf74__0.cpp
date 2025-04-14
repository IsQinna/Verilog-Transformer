// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransformer.h for the primary calling header

#include "Vtransformer__pch.h"
#include "Vtransformer___024root.h"

void Vtransformer___024root___ico_sequent__TOP__0(Vtransformer___024root* vlSelf);

void Vtransformer___024root___eval_ico(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_ico\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtransformer___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtransformer___024root___ico_sequent__TOP__0(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___ico_sequent__TOP__0\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtransformer___024root___eval_triggers__ico(Vtransformer___024root* vlSelf);

bool Vtransformer___024root___eval_phase__ico(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_phase__ico\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtransformer___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtransformer___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtransformer___024root___eval_act(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_act\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtransformer___024root___nba_sequent__TOP__0(Vtransformer___024root* vlSelf);

void Vtransformer___024root___eval_nba(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_nba\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtransformer___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtransformer___024root___nba_sequent__TOP__0(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___nba_sequent__TOP__0\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.transformer__DOT__out00_reg = vlSelfRef.out00;
    vlSelfRef.transformer__DOT__out01_reg = vlSelfRef.out01;
    vlSelfRef.transformer__DOT__out10_reg = vlSelfRef.out10;
    vlSelfRef.transformer__DOT__out11_reg = vlSelfRef.out11;
    vlSelfRef.out00 = vlSelfRef.transformer__DOT__out00_reg;
    vlSelfRef.out01 = vlSelfRef.transformer__DOT__out01_reg;
    vlSelfRef.out10 = vlSelfRef.transformer__DOT__out10_reg;
    vlSelfRef.out11 = vlSelfRef.transformer__DOT__out11_reg;
}

void Vtransformer___024root___eval_triggers__act(Vtransformer___024root* vlSelf);

bool Vtransformer___024root___eval_phase__act(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_phase__act\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtransformer___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtransformer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtransformer___024root___eval_phase__nba(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_phase__nba\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtransformer___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__ico(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__nba(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransformer___024root___dump_triggers__act(Vtransformer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtransformer___024root___eval(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtransformer___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("transformer.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtransformer___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtransformer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("transformer.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtransformer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("transformer.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtransformer___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtransformer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtransformer___024root___eval_debug_assertions(Vtransformer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransformer___024root___eval_debug_assertions\n"); );
    Vtransformer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
