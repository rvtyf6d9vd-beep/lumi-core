// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top___024root___ctor_var_reset(Vlumi_v1_tb_top___024root* vlSelf);

Vlumi_v1_tb_top___024root::Vlumi_v1_tb_top___024root(Vlumi_v1_tb_top__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vlumi_v1_tb_top___024root___ctor_var_reset(this);
}

void Vlumi_v1_tb_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlumi_v1_tb_top___024root::~Vlumi_v1_tb_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
