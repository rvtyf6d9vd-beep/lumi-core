// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top___024root___act_comb__TOP__1(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___act_comb__TOP__1\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r)))) {
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r)))) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1 = 1U;
                    }
                }
            } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                        & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])))) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1 = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 3U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 0U;
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
        }
    } else {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U];
        } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                    & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 3U;
            }
        } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                    & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])))) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 3U;
            }
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 3U;
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 0U;
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r)))) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
                }
            } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                        & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])))) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
                }
            } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
                }
            }
        }
    }
    if ((3U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_reg))) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy 
            = (1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)));
    }
}

void Vlumi_v1_tb_top___024root___act_comb__TOP__2(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___act_comb__TOP__2\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*3:0*/, 3> lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[__Vi0] = 0;
    }
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0 = 0;
    CData/*3:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0 = 0;
    QData/*32:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
    QData/*32:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0 = 0;
    CData/*4:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v = 0;
    CData/*4:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 3> __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v = 0;
    // Body
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 0U;
    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__post_flush_block_r)))) {
        if ((1U & (~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 0U;
            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                   >> 7U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r))) 
                 & (3U > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                              >> 3U)))))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 0U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U)))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 1U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                              >> 3U)))))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U)))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 2U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                              >> 3U)))))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 2U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U)))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 3U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                              >> 3U)))))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 3U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U)))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 4U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                              >> 3U)))))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 4U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U)))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 5U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                              >> 3U)))))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 5U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U)))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 0U;
            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                   >> 7U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r))) 
                 & (3U > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 0U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 1U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 2U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 2U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 3U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 3U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 4U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 4U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 5U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 5U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 0U;
            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                   >> 7U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r))) 
                 & (3U > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if (((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 0U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 1U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if (((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 2U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if (((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 2U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 3U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if (((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 3U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 4U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if (((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 4U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                      >> 7U)) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                    >> 5U))) & (3U 
                                                > (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                if (((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if (((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                     & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = (1U & (~ ((9U >= (0x0000000fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U))) 
                                    && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                               << 3U) 
                                              >> (0x0000000fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                                     >> 3U)))))));
                    if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                               : 0U)][2U];
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[0U] 
                             & (0U != (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                       >> 0x0000001bU)))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                 >> 0x0000001bU))) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev[1U] 
                                                   >> 0x0000001bU))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 5U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        if ((6U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                                   >> 3U)))) {
                            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available)) 
                                      | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 1U;
                        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid) {
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    >> 7U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 0U;
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
            }
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 1U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 0U;
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
            }
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 2U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 0U;
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
            }
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 3U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 0U;
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
            }
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 4U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 0U;
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                 & (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                 & (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
                 & (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
            }
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 5U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 0U;
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                 & (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                 & (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
                 & (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_selected)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
            }
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h809700db__0) 
              << 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next = 0U;
    } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__post_flush_block_r) 
                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next = 0U;
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__post_flush_block_r) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next = 0U;
    } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid) 
                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r 
                   != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_r))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next = 0U;
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 1U;
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    >> 7U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 1U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 2U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 3U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 4U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 5U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued = 0U;
        }
        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__unnamedblk13__DOT__all_valid_issued) 
             & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next = 0U;
        } else {
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h453cb53a__0 = 1U;
                if ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next 
                        = (((~ ((IData)(1U) << vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])) 
                            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next)) 
                           | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h453cb53a__0) 
                                       << vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])));
                }
            }
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h453cb53a__0 = 1U;
                if ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next 
                        = (((~ ((IData)(1U) << vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])) 
                            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next)) 
                           | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h453cb53a__0) 
                                       << vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])));
                }
            }
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U]) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h453cb53a__0 = 1U;
                if ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next 
                        = (((~ ((IData)(1U) << vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])) 
                            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_next)) 
                           | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h453cb53a__0) 
                                       << vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])));
                }
            }
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U] 
        = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U]) 
           | (0x03ffffffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0) 
                             << 0x00000019U)));
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
               : 0U)][0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
               : 0U)][1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
               : 0U)][2U];
        if ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0 = 0U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U] 
            = ((0x02000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U]) 
               | (0x03ffffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                                 >> 7U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U] 
            = ((0xfe000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                  >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = ((0xfffe0001U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0) 
                  << 1U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c7c38b__0 
            = ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
               && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed) 
                         >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = ((0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c7c38b__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab7a2__0 
            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                   >> 0x0000001bU) : 0U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xfe0fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab7a2__0) 
                  << 0x00000014U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab76e__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xfff07fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab76e__0) 
                  << 0x0000000fU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab72a__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xffff83ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab72a__0) 
                  << 0x0000000aU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h73eada6a__0 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                     >> 0x00000018U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xfffffc7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h73eada6a__0) 
                  << 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h757d4716__0 
            = (0x0000007fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h757d4716__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75553565__0 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                << 0x00000019U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                                   >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75553565__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h993b0206__0 
            = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                              >> 3U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h993b0206__0) 
                  << 0x0000001cU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = (0xf0ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = (0x00c00000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = (0xffdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]);
        if (((0U == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U])) 
             & (~ ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
                   && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
                             >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
                = (0x00040000U | (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]));
        }
        if ((((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
              && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
                        >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]))) 
             & ((0x0fU == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U])) 
                & (2U == (7U & (((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst
                                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]]
                                  : 0U) >> 0x0cU)))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
                = (0x00040000U | (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[0U] 
            = ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? 0U : ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                         ? ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                             ? ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                 ? 7U : 6U) : ((8U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                                ? 0U
                                                : 4U))
                         : ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                             ? ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                 ? 3U : 2U) : ((8U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                                ? 1U
                                                : 0U))));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd487ae3a__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                 : 0U)][1U] >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd487ae3a__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h3c5fdcb3__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                 : 0U)][1U] >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h3c5fdcb3__0;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U] = 0U;
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U] 
        = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U]) 
           | (0x03ffffffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0) 
                             << 0x00000019U)));
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
               : 0U)][0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
               : 0U)][1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
               : 0U)][2U];
        if ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0 = 0U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U] 
            = ((0x02000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U]) 
               | (0x03ffffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                                 >> 7U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U] 
            = ((0xfe000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                  >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = ((0xfffe0001U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0) 
                  << 1U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c7c38b__0 
            = ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
               && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed) 
                         >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = ((0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c7c38b__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab7a2__0 
            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                   >> 0x0000001bU) : 0U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xfe0fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab7a2__0) 
                  << 0x00000014U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab76e__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xfff07fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab76e__0) 
                  << 0x0000000fU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab72a__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xffff83ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab72a__0) 
                  << 0x0000000aU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h73eada6a__0 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                     >> 0x00000018U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xfffffc7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h73eada6a__0) 
                  << 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h757d4716__0 
            = (0x0000007fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h757d4716__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75553565__0 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                << 0x00000019U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                                   >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75553565__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h993b0206__0 
            = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                              >> 3U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h993b0206__0) 
                  << 0x0000001cU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = (0xf0ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = (0x00c00000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = (0xffdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]);
        if (((0U == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U])) 
             & (~ ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
                   && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
                             >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
                = (0x00040000U | (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]));
        }
        if ((((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
              && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
                        >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]))) 
             & ((0x0fU == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U])) 
                & (2U == (7U & (((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst
                                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]]
                                  : 0U) >> 0x0cU)))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
                = (0x00040000U | (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[1U] 
            = ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? 0U : ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                         ? ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                             ? ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                 ? 7U : 6U) : ((8U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                                ? 0U
                                                : 4U))
                         : ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                             ? ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                 ? 3U : 2U) : ((8U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                                ? 1U
                                                : 0U))));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd487ae3a__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                 : 0U)][1U] >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd487ae3a__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h3c5fdcb3__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                 : 0U)][1U] >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h3c5fdcb3__0;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U] = 0U;
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U] 
        = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U]) 
           | (0x03ffffffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c8250a__0) 
                             << 0x00000019U)));
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
               : 0U)][0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
               : 0U)][1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
            [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
               ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
               : 0U)][2U];
        if ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0 = 0U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U] 
            = ((0x02000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U]) 
               | (0x03ffffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75552f8c__0 
                                 >> 7U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U] 
            = ((0xfe000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75558664__0 
                  >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = ((0xfffe0001U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h743a990d__0) 
                  << 1U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c7c38b__0 
            = ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]) 
               && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed) 
                         >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = ((0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75c7c38b__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab7a2__0 
            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                   >> 0x0000001bU) : 0U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xfe0fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab7a2__0) 
                  << 0x00000014U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab76e__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xfff07fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab76e__0) 
                  << 0x0000000fU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab72a__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xffff83ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h741ab72a__0) 
                  << 0x0000000aU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h73eada6a__0 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                     >> 0x00000018U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xfffffc7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h73eada6a__0) 
                  << 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h757d4716__0 
            = (0x0000007fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h757d4716__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75553565__0 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                << 0x00000019U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                                   >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h75553565__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h993b0206__0 
            = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                              >> 3U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h993b0206__0) 
                  << 0x0000001cU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = (0xf0ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = (0x00c00000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = (0xffdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]);
        if (((0U == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U])) 
             & (~ ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]) 
                   && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
                             >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
                = (0x00040000U | (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]));
        }
        if ((((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]) 
              && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
                        >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]))) 
             & ((0x0fU == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[2U])) 
                & (2U == (7U & (((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst
                                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]]
                                  : 0U) >> 0x0cU)))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
                = (0x00040000U | (0xffe1ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[2U] 
            = ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? 0U : ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                         ? ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                             ? ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                 ? 7U : 6U) : ((8U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                                ? 0U
                                                : 4U))
                         : ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                             ? ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                 ? 3U : 2U) : ((8U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                                                ? 1U
                                                : 0U))));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd487ae3a__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                                 : 0U)][1U] >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd487ae3a__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h3c5fdcb3__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                                 : 0U)][1U] >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h3c5fdcb3__0;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U] = 0U;
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0 
        = ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U])
            ? 0U : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem
           [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U]]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U])) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr) 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U])) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2;
    }
    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0 
        = ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U])
            ? 0U : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem
           [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U]]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U])) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr) 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U])) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2;
    }
    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0 
        = ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U])
            ? 0U : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem
           [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U]]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__0;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U])) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr) 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U])) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2;
    }
    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[2U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0 
        = ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U])
            ? 0U : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem
           [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U]]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U])) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr) 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U])) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2;
    }
    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0 
        = ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U])
            ? 0U : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem
           [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U]]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U])) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr) 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U])) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2;
    }
    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0 
        = ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U])
            ? 0U : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem
           [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U]]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__0;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U])) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr) 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U])) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2;
    }
    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[2U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U];
    {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
        vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0ULL;
        if ((0U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0ULL;
            goto __Vlabel0;
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[0U])));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result;
        __Vlabel0: ;
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U];
    {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
        vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0ULL;
        if ((0U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0ULL;
            goto __Vlabel1;
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[0U])));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result;
        __Vlabel1: ;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0 
        = (1U & (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match 
                         >> 0x20U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0 
        = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0 
        = (1U & (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match 
                         >> 0x20U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0 
        = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U];
    {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
        vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0ULL;
        if ((0U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0ULL;
            goto __Vlabel2;
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[0U])));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result;
        __Vlabel2: ;
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U];
    {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
        vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0ULL;
        if ((0U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0ULL;
            goto __Vlabel3;
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[0U])));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result;
        __Vlabel3: ;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0 
        = (1U & (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match 
                         >> 0x20U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0 
        = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0 
        = (1U & (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match 
                         >> 0x20U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0 
        = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U];
    {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0;
        vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0ULL;
        if ((0U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match = 0ULL;
            goto __Vlabel4;
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__w_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__m_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__e1_res[0U])));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result;
        __Vlabel4: ;
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U];
    {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0;
        vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0ULL;
        if ((0U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match = 0ULL;
            goto __Vlabel5;
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__w_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__m_res[0U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
              >> 2U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[2U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[2U])));
        }
        if ((((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
              >> 1U) & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[1U] 
                        == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[1U])));
        }
        if (((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_v) 
             & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_r[0U] 
                == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__query_reg)))) {
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result 
                = (0x0000000100000000ULL | (QData)((IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__e1_res[0U])));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result;
        __Vlabel5: ;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0 
        = (1U & (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match 
                         >> 0x20U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h96dcf68c__0) 
              << 2U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0 
        = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs1_match);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hf792171e__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0 
        = (1U & (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match 
                         >> 0x20U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_h964b7fac__0) 
              << 2U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0 
        = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rs2_match);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT____Vlvbound_hae101270__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0 
        = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[0U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                  : 0U)][0U] >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0 
        = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[1U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                  : 0U)][0U] >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0 
        = ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[2U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[2U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hbddd1c08__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                  : 0U)][0U] >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[2U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0 
        = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[0U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                  : 0U)][0U] >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0 
        = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[1U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                  : 0U)][0U] >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0 
        = ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[2U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[2U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0d215c46__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                  : 0U)][0U] >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[2U] = 0U;
    }
}

void Vlumi_v1_tb_top___024root___act_sequent__TOP__0(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___act_sequent__TOP__1(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___act_comb__TOP__0(Vlumi_v1_tb_top___024root* vlSelf);

void Vlumi_v1_tb_top___024root___eval_act(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_act\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[0U])) {
        Vlumi_v1_tb_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vlumi_v1_tb_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000087ULL & vlSelfRef.__VactTriggered[0U])) {
        Vlumi_v1_tb_top___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000088ULL & vlSelfRef.__VactTriggered[0U])) {
        Vlumi_v1_tb_top___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000008fULL & vlSelfRef.__VactTriggered[0U])) {
        Vlumi_v1_tb_top___024root___act_comb__TOP__2(vlSelf);
    }
}

void Vlumi_v1_tb_top___024root___nba_sequent__TOP__0(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___nba_sequent__TOP__0\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst;
    __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst;
    __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst;
    __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__cycle_count;
    __Vdly__lumi_v1_tb_top__DOT__cycle_count = 0;
    IData/*31:0*/ __VdlyMask__lumi_v1_tb_top__DOT__cycle_count;
    __VdlyMask__lumi_v1_tb_top__DOT__cycle_count = 0;
    QData/*63:0*/ __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired = 0;
    QData/*63:0*/ __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps = 0;
    QData/*63:0*/ __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs = 0;
    QData/*63:0*/ __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count = 0;
    QData/*63:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count = 0;
    CData/*7:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 = 0;
    SData/*15:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 = 0;
    SData/*15:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 = 0;
    SData/*15:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 = 0;
    SData/*15:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 = 0;
    CData/*3:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v2;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v2 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v3;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v3 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 = 0;
    CData/*3:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 = 0;
    CData/*3:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v10;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v10 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v11;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v11 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v12;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v12 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v13;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v13 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v14;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v14 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v15;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v15 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v16;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v16 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v17;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v17 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v18;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v18 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v19;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v19 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v20;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v20 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v21;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v21 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v22;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v22 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v23;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v23 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v24;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v24 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v25;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v25 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v26;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v26 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v27;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v27 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v28;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v28 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v29;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v29 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v30;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v30 = 0;
    IData/*31:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v31;
    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v31 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32 = 0;
    // Body
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__restart_count;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 = 0U;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__spin_count;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 = 0U;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_retired;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_traps;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr;
    __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
        __Vdly__lumi_v1_tb_top__DOT__cycle_count = 
            ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__cycle_count);
        __VdlyMask__lumi_v1_tb_top__DOT__cycle_count = 0xffffffffU;
        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
             & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U])) {
            if ((0U == (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed)))) {
                if ((0U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                } else if ((2U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x0dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                } else if ((6U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x0dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed)))) {
                if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                   >> 0x0000000fU)))) {
                    if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                       >> 0x0000000eU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000000dU)))
                                ? (0x00000100U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)));
                    } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000000dU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000000eU)))
                            ? ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000000dU)))
                                ? (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)))
                            : ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000000dU)))
                                ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))));
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed)))) {
                if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                   >> 0x0000000fU)))) {
                    if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                       >> 0x0000000eU)))) {
                        if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000000dU))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                                = (0x00000800U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                        }
                    } else if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x0000000dU))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000400U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000000eU)))) {
                    if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000000dU))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000200U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x0000000dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (0x00000200U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                }
            }
            if ((IData)((0x00008000U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x00008400U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x0000b062U == (0x0000f063U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x0000ac02U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
        }
        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
              >> 1U) & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U])) {
            if ((0U == (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                      >> 0x10U))))) {
                if ((0U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x1dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                } else if ((2U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x1dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                } else if ((6U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x1dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                }
            } else if ((1U == (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x10U))))) {
                if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                   >> 0x0000001fU)))) {
                    if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                       >> 0x0000001eU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000001dU)))
                                ? (0x00000100U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)));
                    } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000001dU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000001eU)))
                            ? ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000001dU)))
                                ? (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)))
                            : ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000001dU)))
                                ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))));
                }
            } else if ((2U == (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x10U))))) {
                if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                   >> 0x0000001fU)))) {
                    if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                       >> 0x0000001eU)))) {
                        if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000001dU))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                                = (0x00000800U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                        }
                    } else if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x0000001dU))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000400U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000001eU)))) {
                    if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000001dU))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000200U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x0000001dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (0x00000200U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                }
            }
            if ((IData)((0x00008000U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x00008400U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x0000b062U == (0x0000f063U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x0000ac02U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
        }
        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
              >> 2U) & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U])) {
            if ((0U == (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                      >> 0x20U))))) {
                if ((0U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x2dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                } else if ((2U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x2dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                } else if ((6U == (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x2dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                }
            } else if ((1U == (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x20U))))) {
                if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                   >> 0x0000002fU)))) {
                    if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                       >> 0x0000002eU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000002dU)))
                                ? (0x00000100U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)));
                    } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000002dU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000002eU)))
                            ? ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000002dU)))
                                ? (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)))
                            : ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000002dU)))
                                ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                                : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))));
                }
            } else if ((2U == (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x20U))))) {
                if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                   >> 0x0000002fU)))) {
                    if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                       >> 0x0000002eU)))) {
                        if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                              >> 0x0000002dU))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                                = (0x00000800U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                        }
                    } else if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                                 >> 0x0000002dU))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000400U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000002eU)))) {
                    if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                          >> 0x0000002dU))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                            = (0x00000200U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                    }
                } else if ((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                             >> 0x0000002dU))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit 
                        = (0x00000200U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
                }
            }
            if ((IData)((0x00008000U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x00008400U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x0000b062U == (0x0000f063U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
            if ((IData)((0x0000ac02U == (0x0000fc03U 
                                         & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
            }
        }
        if ((1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                   & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))))) {
            if ((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                              >> 6U)))) {
                    if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                            = 
                                                            (0x00008000U 
                                                             | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (0x00000040U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                             >> 3U)))) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (0x00004000U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
                                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                = (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                                    ? 
                                                   (8U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000010U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)));
                                        } else if (
                                                   (1U 
                                                    & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                = (0x00000020U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
                                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                            if ((2U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (4U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                    = 
                                                    (2U 
                                                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                            if ((1U 
                                                 & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                         >> 3U)))) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = ((2U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                                    ? 
                                                   (0x00000400U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000200U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                                    ? 
                                                   (0x00000100U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000080U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))));
                                    } else if ((2U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = ((1U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                                ? (0x00002000U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                : (0x00001000U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)));
                                    } else if ((1U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = (0x00000800U 
                                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x63U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x17U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x37U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x6fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x67U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                  >> 1U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                ? (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                                : (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)));
                    }
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                            = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                            : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)));
                }
            } else if ((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                } else if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                }
            }
            if ((0x2fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                    if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = ((0U 
                                                == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                                ? (0x0000002000000000ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                : (0x0000004000000000ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                                    }
                                }
                            }
                        }
                    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000200000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000400000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                            ? (0x0000000010000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000008000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))
                                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                            ? (0x0000000004000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000002000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)));
                            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                                 >> 1U)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                        ? (0x0000000001000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                        : (0x0000000000800000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                            }
                        }
                    }
                }
            } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000080000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                if (((((((((0U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) 
                                           | (0x0100U 
                                              == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                   << 3U) 
                                                  | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) 
                                          | (1U == 
                                             (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                               << 3U) 
                                              | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) 
                                         | (2U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) 
                                        | (3U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                   << 3U) 
                                                  | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) 
                                       | (4U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                  << 3U) 
                                                 | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) 
                                      | (5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                 << 3U) 
                                                | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) 
                                     | (0x0105U == 
                                        (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                          << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = ((0U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                            ? (1ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : ((0x0100U 
                                                == 
                                                (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                  << 3U) 
                                                 | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                                ? (2ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                      << 3U) 
                                                     | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                                    ? 
                                                   (4ULL 
                                                    | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                       << 3U) 
                                                      | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                                     ? 
                                                    (8ULL 
                                                     | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                        << 3U) 
                                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                                      ? 
                                                     (0x0000000000000010ULL 
                                                      | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                         << 3U) 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                                       ? 
                                                      (0x0000000000000020ULL 
                                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                          << 3U) 
                                                         | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))
                                                        ? 
                                                       (0x0000000000000040ULL 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                        : 
                                                       (0x0000000000000080ULL 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))))))));
                                } else if ((6U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000000100ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((7U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000000200ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000400000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000800000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000001000000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000000000100000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        }
                    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                            ? (0x0000000000040000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000020000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                                } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = (0x0000000000008000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                    }
                                    if ((0x20U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = (0x0000000000010000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                    }
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000004000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                            ? (0x0000000000002000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000001000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))
                                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                            ? (0x0000000000000800ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000000400ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)));
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                            if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000008000000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
                                 >> 2U)))) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
                                          >> 1U)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                        ? (0x0000000200000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                        : (0x0000000100000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                            }
                        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                            if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000000080000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                                    ? (0x0000000040000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                    : (0x0000000020000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                        }
                    }
                }
            }
            if ((0x13U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) {
                if ((0x0181U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                  << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x0185U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x01a5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x00a5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
            }
            if (((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (0x30U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
                if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
                if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
            }
            if ((IData)(((0U == (0x01f00000U & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((IData)(((0x00100000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                  & (0x03a0U <= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                 >> 0x00000014U))) 
                 & (0x03efU >= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                  & (0x0f11U <= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                 >> 0x00000014U))) 
                 & (0x0f14U >= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((IData)(((0x00500000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if ((IData)(((0x00200000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                            & (0x18U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
        }
        if ((1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                    >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))))) {
            if ((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                              >> 6U)))) {
                    if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                            = 
                                                            (0x00008000U 
                                                             | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (0x00000040U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                             >> 3U)))) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (0x00004000U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
                                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                = (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                                    ? 
                                                   (8U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000010U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)));
                                        } else if (
                                                   (1U 
                                                    & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                = (0x00000020U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
                                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                            if ((2U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (4U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                    = 
                                                    (2U 
                                                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                            if ((1U 
                                                 & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                         >> 3U)))) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = ((2U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                                    ? 
                                                   (0x00000400U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000200U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                                    ? 
                                                   (0x00000100U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000080U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))));
                                    } else if ((2U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = ((1U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                                ? (0x00002000U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                : (0x00001000U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)));
                                    } else if ((1U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = (0x00000800U 
                                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x63U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x17U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x37U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x6fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x67U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                  >> 1U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                ? (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                                : (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)));
                    }
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                            = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                            : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)));
                }
            } else if ((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                } else if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                }
            }
            if ((0x2fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                    if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = ((0U 
                                                == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                                ? (0x0000002000000000ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                : (0x0000004000000000ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                                    }
                                }
                            }
                        }
                    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000200000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000400000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                            ? (0x0000000010000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000008000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))
                                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                            ? (0x0000000004000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000002000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)));
                            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                                 >> 1U)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                        ? (0x0000000001000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                        : (0x0000000000800000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                            }
                        }
                    }
                }
            } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000080000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                if (((((((((0U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) 
                                           | (0x0100U 
                                              == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                   << 3U) 
                                                  | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) 
                                          | (1U == 
                                             (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                               << 3U) 
                                              | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) 
                                         | (2U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) 
                                        | (3U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                   << 3U) 
                                                  | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) 
                                       | (4U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                  << 3U) 
                                                 | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) 
                                      | (5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                 << 3U) 
                                                | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) 
                                     | (0x0105U == 
                                        (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                          << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = ((0U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                            ? (1ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : ((0x0100U 
                                                == 
                                                (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                  << 3U) 
                                                 | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                                ? (2ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                      << 3U) 
                                                     | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                                    ? 
                                                   (4ULL 
                                                    | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                       << 3U) 
                                                      | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                                     ? 
                                                    (8ULL 
                                                     | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                        << 3U) 
                                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                                      ? 
                                                     (0x0000000000000010ULL 
                                                      | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                         << 3U) 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                                       ? 
                                                      (0x0000000000000020ULL 
                                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                          << 3U) 
                                                         | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))
                                                        ? 
                                                       (0x0000000000000040ULL 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                        : 
                                                       (0x0000000000000080ULL 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))))))));
                                } else if ((6U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000000100ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((7U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000000200ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000400000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000800000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000001000000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000000000100000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        }
                    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                            ? (0x0000000000040000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000020000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                                } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = (0x0000000000008000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                    }
                                    if ((0x20U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = (0x0000000000010000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                    }
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000004000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                            ? (0x0000000000002000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000001000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))
                                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                            ? (0x0000000000000800ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000000400ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)));
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                            if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000008000000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
                                 >> 2U)))) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
                                          >> 1U)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                        ? (0x0000000200000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                        : (0x0000000100000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                            }
                        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                            if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000000080000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                                    ? (0x0000000040000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                    : (0x0000000020000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                        }
                    }
                }
            }
            if ((0x13U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) {
                if ((0x0181U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                  << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x0185U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x01a5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x00a5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
            }
            if (((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (0x30U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
                if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
                if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
            }
            if ((IData)(((0U == (0x01f00000U & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((IData)(((0x00100000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                  & (0x03a0U <= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                 >> 0x00000014U))) 
                 & (0x03efU >= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                  & (0x0f11U <= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                 >> 0x00000014U))) 
                 & (0x0f14U >= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((IData)(((0x00500000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if ((IData)(((0x00200000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                            & (0x18U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
        }
        if ((IData)((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                      >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))))) {
            if ((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                              >> 6U)))) {
                    if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                            = 
                                                            (0x00008000U 
                                                             | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                                   >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (0x00000040U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                             >> 3U)))) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (0x00004000U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
                                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                = (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                                    ? 
                                                   (8U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000010U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)));
                                        } else if (
                                                   (1U 
                                                    & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                = (0x00000020U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
                                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                            if ((2U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                        = 
                                                        (4U 
                                                         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                    = 
                                                    (2U 
                                                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                            if ((1U 
                                                 & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                         >> 3U)))) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = ((2U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                                    ? 
                                                   (0x00000400U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000200U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                                    ? 
                                                   (0x00000100U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                    : 
                                                   (0x00000080U 
                                                    | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))));
                                    } else if ((2U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = ((1U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                                ? (0x00002000U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                                                : (0x00001000U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)));
                                    } else if ((1U 
                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                                            = (0x00000800U 
                                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x63U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit));
            }
            if ((0x17U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x37U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x6fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((0x67U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit));
            }
            if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                  >> 1U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                ? (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                                : (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)));
                    }
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                            = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                            : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)));
                }
            } else if ((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                } else if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit 
                        = (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
                }
            }
            if ((0x2fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if (((0x23U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit));
            }
            if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                    if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = ((0U 
                                                == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                                ? (0x0000002000000000ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                : (0x0000004000000000ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                                    }
                                }
                            }
                        }
                    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000200000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000400000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                            ? (0x0000000010000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000008000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))
                                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                            ? (0x0000000004000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000002000000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)));
                            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                                 >> 1U)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                        ? (0x0000000001000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                        : (0x0000000000800000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                            }
                        }
                    }
                }
            } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000080000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                if (((((((((0U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) 
                                           | (0x0100U 
                                              == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                   << 3U) 
                                                  | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) 
                                          | (1U == 
                                             (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                               << 3U) 
                                              | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) 
                                         | (2U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) 
                                        | (3U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                   << 3U) 
                                                  | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) 
                                       | (4U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                  << 3U) 
                                                 | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) 
                                      | (5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                 << 3U) 
                                                | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) 
                                     | (0x0105U == 
                                        (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                          << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = ((0U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                            ? (1ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : ((0x0100U 
                                                == 
                                                (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                  << 3U) 
                                                 | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                                ? (2ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                      << 3U) 
                                                     | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                                    ? 
                                                   (4ULL 
                                                    | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                       << 3U) 
                                                      | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                                     ? 
                                                    (8ULL 
                                                     | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                        << 3U) 
                                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                                      ? 
                                                     (0x0000000000000010ULL 
                                                      | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                         << 3U) 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                                       ? 
                                                      (0x0000000000000020ULL 
                                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                          << 3U) 
                                                         | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))
                                                        ? 
                                                       (0x0000000000000040ULL 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                                        : 
                                                       (0x0000000000000080ULL 
                                                        | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))))))));
                                } else if ((6U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000000100ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((7U == (
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                                    << 3U) 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000000200ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000400000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000800000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000001000000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000000000100000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        }
                    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                            ? (0x0000000000040000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000020000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                                } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                    if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = (0x0000000000008000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                    }
                                    if ((0x20U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                            = (0x0000000000010000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                    }
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                        = (0x0000000000004000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                                }
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                            ? (0x0000000000002000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000001000ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit))
                                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                            ? (0x0000000000000800ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                            : (0x0000000000000400ULL 
                                               | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)));
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                            if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000008000000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
                                 >> 2U)))) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                            if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
                                          >> 1U)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                        ? (0x0000000200000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                        : (0x0000000100000000ULL 
                                           | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                            }
                        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                            if ((1U & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                    = (0x0000000080000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
                            }
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                                    ? (0x0000000040000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                                    : (0x0000000020000000ULL 
                                       | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit));
                        }
                    }
                }
            }
            if ((0x13U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) {
                if ((0x0181U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                  << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x0185U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x01a5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                } else if ((0x00a5U == (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]) 
                                         << 3U) | vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
            }
            if (((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (0x30U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
                if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
                if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit 
                        = (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
                }
            }
            if ((IData)(((0U == (0x01f00000U & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((IData)(((0x00100000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                  & (0x03a0U <= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                 >> 0x00000014U))) 
                 & (0x03efU >= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                  & (0x0f11U <= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                 >> 0x00000014U))) 
                 & (0x0f14U >= (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit));
            }
            if ((IData)(((0x00500000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                            & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (0U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if (((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
            if ((IData)(((0x00200000U == (0x01f00000U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])) 
                         & ((0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                            & (0x18U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit));
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit));
            }
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
              & (0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) 
             & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit 
                = ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                    ? ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                            ? (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))
                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                            ? (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))))
                    : ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                            ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))
                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))));
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
              & (0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) 
             & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit 
                = ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                    ? ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                            ? (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))
                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                            ? (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))))
                    : ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                            ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))
                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))));
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
              & (0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) 
             & (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit 
                = ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                    ? ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                            ? (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))
                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                            ? (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))))
                    : ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                        ? ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                            ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))
                        : ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                            : (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)))));
        }
        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
              & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
             & (0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]))) {
            if ((0x0b00U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                             >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0b02U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0c01U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0c81U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0320U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0b80U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            }
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                            ? (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                            : (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)));
                } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])
                        ? (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                        : (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)));
            } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
            } else {
                if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                            >> 0x00000014U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
                if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                            >> 0x00000014U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
            }
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
             & (0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]))) {
            if ((0x0b00U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                             >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0b02U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0c01U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0c81U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0320U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0b80U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            }
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                            ? (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                            : (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)));
                } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])
                        ? (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                        : (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)));
            } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
            } else {
                if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                            >> 0x00000014U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
                if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                            >> 0x00000014U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
            }
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
             & (0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]))) {
            if ((0x0b00U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                             >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0b02U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0c01U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0c81U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0320U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            } else if ((0x0b80U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit 
                    = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
            }
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                            ? (0x00000080U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                            : (0x00000040U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)));
                } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                    = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])
                        ? (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                        : (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)));
            } else if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
            } else {
                if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                            >> 0x00000014U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
                if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                            >> 0x00000014U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
                }
            }
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
              & (0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) 
             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
            if (((((((((0x03a0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U)) 
                       | (0x03a1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                      >> 0x00000014U))) 
                      | (0x03a2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                     >> 0x00000014U))) 
                     | (0x03a3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) 
                    | (0x03b0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                   >> 0x00000014U))) 
                   | (0x03b1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                  >> 0x00000014U))) 
                  | (0x03b2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                 >> 0x00000014U))) 
                 | (0x03b3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit 
                    = ((0x03a0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))
                        ? (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                        : ((0x03a1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                        >> 0x00000014U))
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                            : ((0x03a2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                            >> 0x00000014U))
                                ? (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                : ((0x03a3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                                >> 0x00000014U))
                                    ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                    : ((0x03b0U == 
                                        (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                         >> 0x00000014U))
                                        ? (0x00000010U 
                                           | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                        : ((0x03b1U 
                                            == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                                >> 0x00000014U))
                                            ? (0x00000020U 
                                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                            : ((0x03b2U 
                                                == 
                                                (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                                 >> 0x00000014U))
                                                ? (0x00000040U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                                : (0x00000080U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit)))))))));
            }
            if ((0x0304U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                             >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0344U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0300U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0305U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0342U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0341U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
              & (0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) 
             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
            if (((((((((0x03a0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U)) 
                       | (0x03a1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                      >> 0x00000014U))) 
                      | (0x03a2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                     >> 0x00000014U))) 
                     | (0x03a3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) 
                    | (0x03b0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                   >> 0x00000014U))) 
                   | (0x03b1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                  >> 0x00000014U))) 
                  | (0x03b2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                 >> 0x00000014U))) 
                 | (0x03b3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit 
                    = ((0x03a0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))
                        ? (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                        : ((0x03a1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                        >> 0x00000014U))
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                            : ((0x03a2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                            >> 0x00000014U))
                                ? (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                : ((0x03a3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                                >> 0x00000014U))
                                    ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                    : ((0x03b0U == 
                                        (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                         >> 0x00000014U))
                                        ? (0x00000010U 
                                           | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                        : ((0x03b1U 
                                            == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                                >> 0x00000014U))
                                            ? (0x00000020U 
                                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                            : ((0x03b2U 
                                                == 
                                                (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                                 >> 0x00000014U))
                                                ? (0x00000040U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                                : (0x00000080U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit)))))))));
            }
            if ((0x0304U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                             >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0344U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0300U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0305U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0342U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0341U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
              & (0x73U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) 
             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
            if (((((((((0x03a0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U)) 
                       | (0x03a1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                      >> 0x00000014U))) 
                      | (0x03a2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                     >> 0x00000014U))) 
                     | (0x03a3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) 
                    | (0x03b0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                   >> 0x00000014U))) 
                   | (0x03b1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                  >> 0x00000014U))) 
                  | (0x03b2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                 >> 0x00000014U))) 
                 | (0x03b3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                >> 0x00000014U)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit 
                    = ((0x03a0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))
                        ? (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                        : ((0x03a1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                        >> 0x00000014U))
                            ? (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                            : ((0x03a2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                            >> 0x00000014U))
                                ? (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                : ((0x03a3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                                >> 0x00000014U))
                                    ? (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                    : ((0x03b0U == 
                                        (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                         >> 0x00000014U))
                                        ? (0x00000010U 
                                           | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                        : ((0x03b1U 
                                            == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                                >> 0x00000014U))
                                            ? (0x00000020U 
                                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                            : ((0x03b2U 
                                                == 
                                                (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                                 >> 0x00000014U))
                                                ? (0x00000040U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                                                : (0x00000080U 
                                                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit)))))))));
            }
            if ((0x0304U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                             >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0344U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0300U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0305U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0342U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            } else if ((0x0341U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                                    >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit 
                    = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
            }
        }
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt 
            = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt);
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__total_retired 
                = (vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__total_retired 
                   + (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle)));
            if (((0U < vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle) 
                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__trace_enable))) {
                if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[TRACE] cyc=%0d s=0 pc=0x%08h inst=0x%08h\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]);
                }
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[TRACE] cyc=%0d s=1 pc=0x%08h inst=0x%08h\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]);
                }
                if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[TRACE] cyc=%0d s=2 pc=0x%08h inst=0x%08h\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]);
                }
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[0U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0 = 1U;
            if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
                if ((vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U] 
                     > vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc)) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc 
                        = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
                }
                if (((0x00003a8aU <= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]) 
                     & (0x00003abaU >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]))) {
                    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached)))))) {
                        VL_WRITEF_NX("[SB-DBG] _exit reached! cyc=%0d pc=0x%08h inst=0x%08h\n",3
                                     , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]);
                    }
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached = 1U;
                }
                if ((9U >= (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx))) {
                    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0;
                    __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 
                        = (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx);
                    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0 = 1U;
                }
                if (VL_UNLIKELY(((0x73U == (0x0000007fU 
                                            & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]))))) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count 
                        = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count);
                    VL_WRITEF_NX("[SB-DBG] SYSTEM inst cyc=%0d pc=0x%08h inst=0x%08h\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]);
                }
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx), (IData)(0x0000000aU));
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[1U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1 = 1U;
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v2 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[2U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v3 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[3U];
            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U];
                if ((vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U] 
                     > vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc)) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc 
                        = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U];
                }
                if (((0x00003a8aU <= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]) 
                     & (0x00003abaU >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]))) {
                    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached)))))) {
                        VL_WRITEF_NX("[SB-DBG] _exit reached! cyc=%0d pc=0x%08h inst=0x%08h\n",3
                                     , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]);
                    }
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached = 1U;
                }
                if ((9U >= (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx))) {
                    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0;
                    __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 
                        = (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx);
                    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1 = 1U;
                }
                if (VL_UNLIKELY(((0x73U == (0x0000007fU 
                                            & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]))))) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count 
                        = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count);
                    VL_WRITEF_NX("[SB-DBG] SYSTEM inst cyc=%0d pc=0x%08h inst=0x%08h\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]);
                }
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx), (IData)(0x0000000aU));
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[4U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4 = 1U;
            if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U];
                if ((vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U] 
                     > vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc)) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc 
                        = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U];
                }
                if (((0x00003a8aU <= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]) 
                     & (0x00003abaU >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]))) {
                    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached)))))) {
                        VL_WRITEF_NX("[SB-DBG] _exit reached! cyc=%0d pc=0x%08h inst=0x%08h\n",3
                                     , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]);
                    }
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached = 1U;
                }
                if ((9U >= (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx))) {
                    __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0;
                    __VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 
                        = (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx);
                    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2 = 1U;
                }
                if (VL_UNLIKELY(((0x73U == (0x0000007fU 
                                            & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]))))) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count 
                        = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count);
                    VL_WRITEF_NX("[SB-DBG] SYSTEM inst cyc=%0d pc=0x%08h inst=0x%08h\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]);
                }
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx 
                    = VL_MODDIV_III(32, ((IData)(1U) 
                                         + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx), (IData)(0x0000000aU));
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[5U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5 = 1U;
            if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                   & (0U == vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U])) 
                  & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_had_commit)) 
                 & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_commit_pc))) {
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count 
                    = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__restart_count);
                if (VL_UNLIKELY(((5U > vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__restart_count)))) {
                    VL_WRITEF_NX("[RESTART] cyc=%0d: PC jumped from 0x%08h back to 0x0 (restart #%0d)\n",3
                                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_commit_pc
                                 , '#',32,((IData)(1U) 
                                           + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__restart_count));
                }
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[6U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6 = 1U;
            if (VL_UNLIKELY((vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall))) {
                VL_WRITEF_NX("[SB-DBG] ECALL at cycle=%0d: pc0=0x%08h pc1=0x%08h pc2=0x%08h valid=%b\n",5
                             , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                             , '#',3,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb;
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count = 0U;
                VL_WRITEF_NX("[SB-DBG] ECALL inst0=0x%08h inst1=0x%08h inst2=0x%08h\n[SB] ECALL detected at PC=0x%08h, a0=0x%08h\n",5
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb);
            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                if ((vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U] 
                     == vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_commit_pc)) {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count 
                        = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__spin_count);
                } else {
                    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_commit_pc 
                        = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
                }
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[7U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7 = 1U;
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[8U];
            if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_commit_pc 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_had_commit = 1U;
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[9U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9 = 1U;
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v10 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[10U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v11 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[11U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v12 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[12U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v13 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[13U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v14 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[14U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v15 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[15U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v16 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[16U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v17 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[17U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v18 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[18U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v19 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[19U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v20 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[20U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v21 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[21U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v22 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[22U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v23 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[23U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v24 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[24U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v25 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[25U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v26 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[26U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v27 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[27U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v28 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[28U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v29 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[29U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v30 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[30U];
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v31 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[31U];
        }
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired 
                = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_retired);
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_traps);
            }
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs);
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_0__is_branch 
                = (IData)((0x00000063U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__pc 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal 
                = (IData)((0x0000006fU == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd 
                = (0x0000001fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed));
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr 
                = (IData)((0x00000067U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__is_trap 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request;
            if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_0__is_branch) 
                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal)) 
                 | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr))) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken);
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__is_irq 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq;
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__cycle 
                = (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count));
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr 
                = (0x00003fffU & ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr));
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count 
                = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count);
            if (VL_UNLIKELY(((0U != vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd)))) {
                VL_FWRITEF_NX(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd,"%08h %08h x%02d  %08h %0d\n",5
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]
                              , '#',5,(0x0000001fU 
                                       & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed))
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U]
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count);
            }
        }
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired 
                = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_retired);
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_traps);
            }
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs);
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_0__is_branch 
                = (IData)((0x00000063U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__pc 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U];
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal 
                = (IData)((0x0000006fU == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd 
                = (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                  >> 5U));
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr 
                = (IData)((0x00000067U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__is_trap 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request;
            if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_0__is_branch) 
                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal)) 
                 | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr))) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken);
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__is_irq 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq;
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__cycle 
                = (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count));
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr 
                = (0x00003fffU & ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr));
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count 
                = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count);
            if (VL_UNLIKELY(((0U != vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd)))) {
                VL_FWRITEF_NX(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd,"%08h %08h x%02d  %08h %0d\n",5
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]
                              , '#',5,(0x0000001fU 
                                       & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                          >> 5U)), '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U]
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count);
            }
        }
        if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired 
                = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_retired);
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_traps);
            }
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs);
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_0__is_branch 
                = (IData)((0x00000063U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__66__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__pc 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U];
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal 
                = (IData)((0x0000006fU == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__67__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd 
                = (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                  >> 0x0aU));
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr 
                = (IData)((0x00000067U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__68__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__is_trap 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request;
            if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_0__is_branch) 
                  | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal)) 
                 | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr))) {
                __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken 
                    = (1ULL + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken);
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__is_irq 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq;
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__cycle 
                = (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count));
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr 
                = (0x00003fffU & ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr));
            __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count 
                = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count);
            if (VL_UNLIKELY(((0U != vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd)))) {
                VL_FWRITEF_NX(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd,"%08h %08h x%02d  %08h %0d\n",5
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]
                              , '#',5,(0x0000001fU 
                                       & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                          >> 0x0aU))
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U]
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count);
            }
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit = 0ULL;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__total_retired = 0ULL;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code = 0xffffffffU;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt = 0ULL;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_commit_pc = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_commit_pc = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_had_commit = 0U;
        __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32 = 1U;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken = 0ULL;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid) 
          & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we)) 
         & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__sram_we_count 
            = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__sram_we_count);
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be))) {
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 
                = (0x000000ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata);
            __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 
                = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                  >> 2U));
            __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be))) {
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 
                = (0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                                  >> 8U));
            __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 
                = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                  >> 2U));
            __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be))) {
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 
                = (0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                                  >> 0x10U));
            __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 
                = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                  >> 2U));
            __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be))) {
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 
                = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                   >> 0x18U);
            __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 
                = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                  >> 2U));
            __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 = 1U;
        }
    }
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))) {
        __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
        __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U];
        __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant) 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr)))) {
        __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data;
        __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr;
        __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__cycle_count = ((__Vdly__lumi_v1_tb_top__DOT__cycle_count 
                                                   & __VdlyMask__lumi_v1_tb_top__DOT__cycle_count) 
                                                  | (vlSelfRef.lumi_v1_tb_top__DOT__cycle_count 
                                                     & (~ __VdlyMask__lumi_v1_tb_top__DOT__cycle_count)));
    __VdlyMask__lumi_v1_tb_top__DOT__cycle_count = 0U;
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0] 
            = ((0xffffff00U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
                [__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0]) 
               | (IData)(__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0));
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1] 
            = ((0xffff00ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
                [__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1]) 
               | ((IData)(__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1) 
                  << 8U));
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2] 
            = ((0xff00ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
                [__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2]) 
               | ((IData)(__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3] 
            = ((0x00ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
                [__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3]) 
               | ((IData)(__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__restart_count 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count;
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[__VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v0;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[__VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v1;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[__VdlyDim0__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc__v2;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__spin_count 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count;
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[0U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[1U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[2U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v2;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[3U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v3;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[4U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[5U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[6U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[7U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[8U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[9U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[10U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v10;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[11U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v11;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[12U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v12;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[13U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v13;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[14U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v14;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[15U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v15;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[16U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v16;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[17U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v17;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[18U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v18;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[19U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v19;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[20U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v20;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[21U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v21;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[22U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v22;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[23U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v23;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[24U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v24;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[25U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v25;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[26U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v26;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[27U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v27;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[28U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v28;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[29U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v29;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[30U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v30;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[31U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v31;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[5U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[6U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[7U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[8U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[9U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[10U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[11U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[12U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[13U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[14U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[15U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[16U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[17U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[18U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[19U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[20U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[21U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[22U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[23U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[24U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[25U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[26U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[27U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[28U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[29U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[30U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[31U] = 0U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_retired 
        = __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired;
    vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_traps 
        = __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps;
    vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs 
        = __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs;
    vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken 
        = __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken;
    vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr 
        = __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr;
    vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count 
        = __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count;
}
