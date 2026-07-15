// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::init(Vlumi_v1_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::init(vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::new\n"); );
    // Body
    /*super.new*/;
}

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_build_phase(Vlumi_v1_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_build_phase\n"); );
}

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_connect_phase(Vlumi_v1_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_connect_phase\n"); );
}

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_run_phase(Vlumi_v1_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_run_phase\n"); );
}

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_report_phase(Vlumi_v1_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::__VnoInFunc_report_phase\n"); );
}

Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::~Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::~\n"); );
}

std::string Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::to_string_middle();
    return (out);
}
