// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

VL_ATTR_COLD void Vlumi_v1_tb_top_uvm_shim___eval_static__TOP__uvm_shim(Vlumi_v1_tb_top_uvm_shim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vlumi_v1_tb_top_uvm_shim___eval_static__TOP__uvm_shim\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uvm_info_count = 0U;
    vlSelfRef.uvm_error_count = 0U;
}
