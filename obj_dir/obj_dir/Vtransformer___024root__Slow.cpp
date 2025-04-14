// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransformer.h for the primary calling header

#include "Vtransformer__pch.h"
#include "Vtransformer__Syms.h"
#include "Vtransformer___024root.h"

void Vtransformer___024root___ctor_var_reset(Vtransformer___024root* vlSelf);

Vtransformer___024root::Vtransformer___024root(Vtransformer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtransformer___024root___ctor_var_reset(this);
}

void Vtransformer___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransformer___024root::~Vtransformer___024root() {
}
