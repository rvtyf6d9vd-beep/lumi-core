// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"


Vlumi_v1_tb_top_uvm_shim::Vlumi_v1_tb_top_uvm_shim() = default;
Vlumi_v1_tb_top_uvm_shim::~Vlumi_v1_tb_top_uvm_shim() = default;

void Vlumi_v1_tb_top_uvm_shim::ctor(Vlumi_v1_tb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vlumi_v1_tb_top_uvm_shim::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vlumi_v1_tb_top_uvm_shim::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
