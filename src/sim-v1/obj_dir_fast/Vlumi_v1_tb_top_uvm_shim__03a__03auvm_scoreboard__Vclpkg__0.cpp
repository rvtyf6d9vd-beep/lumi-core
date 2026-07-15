// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::init(Vlumi_v1_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::init(vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::new\n"); );
    // Body
    /*super.new*/;
}

Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::~Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::~\n"); );
}

std::string Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component::to_string_middle();
    return (out);
}
