// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::init(Vlumi_v1_tb_top__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_name = name;
}

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::__VnoInFunc_get_name(Vlumi_v1_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_name;
}

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::_ctor_var_reset(Vlumi_v1_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::~Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::~\n"); );
}

std::string Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_name:" + VL_TO_STRING(__PVT__m_name);
    return (out);
}
