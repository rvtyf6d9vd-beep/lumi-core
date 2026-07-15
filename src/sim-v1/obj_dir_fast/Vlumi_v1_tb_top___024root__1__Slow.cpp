// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___stl_sequent__TOP__1(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___stl_sequent__TOP__1\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata;
    lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx;
    lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0 = 0;
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred = 0;
    VlWide<4>/*127:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped;
    VL_ZERO_W(128, lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped);
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__stop_scan;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__stop_scan = 0;
    CData/*3:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0 = 0;
    SData/*15:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken = 0;
    CData/*3:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i = 0;
    CData/*6:0*/ lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0 = 0;
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0 = 0;
    CData/*6:0*/ lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0 = 0;
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle = 0U;
    if ((1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle 
            = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle);
    }
    if ((1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle 
            = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle);
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_pc_out[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_pc_out[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_pc_out[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h5691c9b6__0;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
        = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__1 
                = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__1));
        } else if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                            >> 0x0000001cU)) & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                                >> 0x0000001eU))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__3 
                = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__3));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
        = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__1 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid) 
                         >> 1U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__1) 
                      << 1U));
        } else if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                            >> 0x0000001cU)) & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                                >> 0x0000001eU))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__3 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
                         >> 1U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__3) 
                      << 1U));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
        = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0 
        = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0));
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))) {
        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                      >> 0x0000001fU)))) {
            if ((0x40000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U])) {
                if ((0x20000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U])) {
                    if ((0x10000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U])) {
                        if (((0x0fU == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                                        >> 0x00000019U)) 
                             & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sb_empty)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                                = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid));
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U])) {
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                              >> 0x0000001cU)))) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                            = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3 
                            = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                            = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
                               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3));
                    }
                }
            } else if ((0x10000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1 
                    = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                    = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
                       | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1));
            }
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                 >> 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))) {
        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                      >> 0x0000001fU)))) {
            if ((0x40000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U])) {
                if ((0x20000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U])) {
                    if ((0x10000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U])) {
                        if (((0x0fU == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                                        >> 0x00000019U)) 
                             & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sb_empty)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                                = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid));
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U])) {
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                              >> 0x0000001cU)))) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                            = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3 
                            = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                                     >> 1U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                            = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3) 
                                  << 1U));
                    }
                }
            } else if ((0x10000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1 
                    = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                             >> 1U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                    = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
                       | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1) 
                          << 1U));
            }
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__0) 
              << 2U));
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))) {
        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                      >> 0x0000001fU)))) {
            if ((0x40000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U])) {
                if ((0x20000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U])) {
                    if ((0x10000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U])) {
                        if (((0x0fU == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
                                        >> 0x00000019U)) 
                             & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sb_empty)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                                = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid));
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U])) {
                if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                              >> 0x0000001cU)))) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                            = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3 
                            = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                                     >> 2U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                            = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3) 
                                  << 2U));
                    }
                }
            } else if ((0x10000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1 
                    = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                             >> 2U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid 
                    = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid)) 
                       | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1) 
                          << 2U));
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec 
        = (((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception)) 
            << 2U) | ((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r)) 
                      << 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_need_stall = 0U;
    if ((IData)((((((7U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid)) 
                    & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
                          >> 2U))) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r))) 
                  & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r))) 
                 & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[2U])))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_need_stall = 1U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb8508558__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0;
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[0U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__1;
        } else if ((1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                                     >> 0x0000001cU)) 
                             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                >> 0x0000001eU))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__2 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[0U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__2;
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0;
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__1;
        } else if ((1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                                     >> 0x0000001cU)) 
                             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                >> 0x0000001eU))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__2 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__2;
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__0;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__1 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid) 
                         >> 2U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__1) 
                      << 2U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[2U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__1;
        } else {
            if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                         >> 0x0000001cU)) & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                             >> 0x0000001eU))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                    = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__3 
                    = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
                             >> 2U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                    = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                       | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hbd3787bc__3) 
                          << 2U));
            }
            if ((1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                                  >> 0x0000001cU)) 
                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                             >> 0x0000001eU))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__2 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[2U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[2U] 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h2e371279__2;
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_pop = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_push = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[0U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[0U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[0U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[0U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[0U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[0U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[0U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[0U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[0U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[1U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[1U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[1U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[1U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[1U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[1U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[1U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[1U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[1U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[2U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[2U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[2U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[2U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[2U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[2U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[2U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[2U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[2U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[3U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[3U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[3U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[3U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[3U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[3U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[3U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[3U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[3U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[3U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[4U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[4U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[4U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[4U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[4U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[4U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[4U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[4U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[4U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[4U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[5U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[5U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[5U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[5U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[5U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[5U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[5U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[5U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[5U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[5U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[6U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[6U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[6U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[6U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[6U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[6U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[6U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[6U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[6U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[6U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[7U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[7U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[7U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[7U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[7U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[7U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[7U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[7U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[7U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[7U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[8U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[8U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[8U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[8U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[8U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[8U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[8U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[8U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[8U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[8U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[9U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[9U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[9U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[9U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[9U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[9U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[9U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[9U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[9U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[9U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[10U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[10U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[10U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[10U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[10U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[10U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[10U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[10U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[10U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[10U] = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[11U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[11U]
                 [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[11U]] 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[11U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[11U]
          [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[11U]] 
          >> 0x0000000dU) & ((0x000000ffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[11U]
                                             [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[11U]] 
                                             >> 5U)) 
                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[11U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[11U] = 1U;
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[11U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[11U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[10U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[10U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[9U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[9U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[8U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[8U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[7U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[7U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[6U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[6U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[5U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[5U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[4U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[4U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[3U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[3U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[2U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[2U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[1U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[1U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[0U]) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[0U] 
                     >> 2U));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb = 0U;
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
           & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][0U] 
                     >> 0x0000001cU))) & (0U != (7U 
                                                 & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                                    >> 7U)))) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb 
            = (3U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb 
            = ((0x00000200U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U])
                ? ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U])
                    ? (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                      >> 0x0000000fU))
                    : ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U])
                        ? (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                          >> 0x0000000fU))
                        : 0U)) : ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U])
                                   ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U]
                                   : ((0x00000080U 
                                       & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U])
                                       ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U]
                                       : 0U)));
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0 
        = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][0U] 
                          >> 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0 
        = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][0U] 
                          >> 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0 
        = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][0U] 
                          >> 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h4af8df19__0;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active = 0U;
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
           & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][0U] 
                     >> 0x0000001cU))) & (0U != (7U 
                                                 & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                                    >> 7U)))) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active = 1U;
    }
    if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
            >> 1U) & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][0U] 
                             >> 0x0000001cU))) & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                                                      >> 7U)))) 
         & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
               >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb 
            = (3U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb 
            = ((0x00000200U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U])
                ? ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U])
                    ? (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                                      >> 0x0000000fU))
                    : ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U])
                        ? (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                                          >> 0x0000000fU))
                        : 0U)) : ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U])
                                   ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U]
                                   : ((0x00000080U 
                                       & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U])
                                       ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U]
                                       : 0U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active = 1U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0 
        = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][3U] 
            << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                      >> 0x00000019U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0 
        = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][3U] 
            << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                      >> 0x00000019U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0 
        = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][3U] 
            << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                      >> 0x00000019U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_h958deec2__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i = 0U;
    if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
            >> 2U) & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][0U] 
                             >> 0x0000001cU))) & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                                                      >> 7U)))) 
         & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
               >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb 
            = (3U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb 
            = ((0x00000200U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U])
                ? ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U])
                    ? (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                                      >> 0x0000000fU))
                    : ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U])
                        ? (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                                          >> 0x0000000fU))
                        : 0U)) : ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U])
                                   ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U]
                                   : ((0x00000080U 
                                       & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U])
                                       ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U]
                                       : 0U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active = 1U;
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_ret) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_pop = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_ret)))) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_call) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_push = 1U;
            }
        }
    }
    if ((IData)((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                  >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle 
            = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle);
    }
    {
        while (VL_GTS_III(32, 3U, lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i)) {
            if ((((2U >= (3U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i)) 
                  && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
                            >> (3U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i)))) 
                 & ((2U >= (3U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i)) 
                    && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
                              >> (3U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i)))))) {
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request = 1U;
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause 
                    = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out
                                      [((2U >= (3U 
                                                & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i))
                                         ? (3U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i)
                                         : 0U)][0U] 
                                      >> 0x00000011U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r;
                goto __Vlabel0;
            }
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__unnamedblk2__DOT__i);
        }
        __Vlabel0: ;
    }
    if (((~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken)) 
         & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request = 1U;
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause = 0x0bU;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb = 0U;
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
           & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][0U] 
                     >> 0x0000001cU))) & (0U != (7U 
                                                 & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                                    >> 7U)))) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb 
            = (0x00000fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][1U]);
    }
    if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
            >> 1U) & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][0U] 
                             >> 0x0000001cU))) & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                                                      >> 7U)))) 
         & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
               >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb 
            = (0x00000fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][1U]);
    }
    if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
            >> 2U) & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][0U] 
                             >> 0x0000001cU))) & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                                                      >> 7U)))) 
         & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
               >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb 
            = (0x00000fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][1U]);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data 
        = ((7ULL & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data) 
           | (0x0020000000000000ULL | (((QData)((IData)(
                                                        (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_pc 
                                                         >> 0x0eU))) 
                                        << 0x00000023U) 
                                       | ((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target)) 
                                          << 3U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data 
        = (0x003ffffffffffff8ULL & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_jal)
            ? ((0x003ffffffffffff8ULL & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data) 
               | (IData)((IData)(((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_call) 
                                  << 2U)))) : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_jalr)
                                                ? (
                                                   (0x003ffffffffffff8ULL 
                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data) 
                                                   | (IData)((IData)(
                                                                     (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_call) 
                                                                       << 2U) 
                                                                      | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_ret) 
                                                                         << 1U)))))
                                                : (1ULL 
                                                   | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) {
        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
              & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                        >> 0x0000001cU))) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[0U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd = 1U;
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
               >> 1U) & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                                >> 0x0000001cU))) & 
             (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[1U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd = 1U;
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
               >> 2U) & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                                >> 0x0000001cU))) & 
             (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[2U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd = 1U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid 
        = ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict)) 
           & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_valid_r));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wlast_core = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
    } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
        if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_empty)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wlast_core = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_full)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0x0fU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_full)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0x0eU;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_empty)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wlast_core = 1U;
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_full)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0x0cU;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_full)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0x0bU;
            }
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_empty)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wlast_core 
                = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__evict_beat_cnt) 
                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg));
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_full)))) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wlast_core) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 9U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_full)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 8U;
                }
            } else if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_empty)) 
                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_full)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 6U;
            }
        } else if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_empty)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_full)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 4U;
            }
        } else if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_empty)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_full)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 2U;
        }
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__dc_evict_req) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next 
            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__dc_evict_req)
                ? 7U : 3U);
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__arb_trace_grant) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = 0x0dU;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__encoded_data = 0ULL;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__encoded_valid = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__cap_valid) {
        if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
              != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__prev_pc) 
             | (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__cap_type)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__encoded_data 
                = ((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__cap_type))
                    ? (0x0000000200000000ULL | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U])))
                    : ((2U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__cap_type))
                        ? (0x0000000300000000ULL | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U])))
                        : (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U])))));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__encoded_valid = 1U;
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 0U;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tenable[0U] 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[0U])) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                 == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[0U])) {
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                  & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[0U]))) 
                 == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[0U] 
                     & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[0U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        }
    }
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tenable[1U] 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[1U])) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                 == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[1U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[1U])) {
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                  & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[1U]))) 
                 == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[1U] 
                     & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[1U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        }
    }
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tenable[2U] 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[2U])) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                 == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[2U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[2U])) {
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                  & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[2U]))) 
                 == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[2U] 
                     & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[2U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        }
    }
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tenable[3U] 
         & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[3U])) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                 == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[3U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[3U])) {
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U] 
                  & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[3U]))) 
                 == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[3U] 
                     & (~ (0x0000000fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[3U]))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = 1U;
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[1U]))));
    vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[1U]))) 
                   >> 0x00000020U));
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 0U;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))) {
        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec)))) {
                lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 7U;
                lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause 
            = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))
                ? 5U : 6U);
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 1U;
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 4U;
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[2U]) 
            << 0x0000000aU) | (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[1U]) 
                                << 5U) | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[0U]));
    vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[1U]))));
    vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[1U]))) 
                   >> 0x00000020U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
        = ((IData)(4U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_ret)
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack
               [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top]
                : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_call)
                    ? ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch)
                        ? ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred)
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target
                            : ((IData)(4U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg))
                        : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target)
                    : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch)
                        ? ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred)
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target
                            : ((IData)(4U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg))
                        : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb 
            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_ret) 
               || ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_call)
                    ? ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch))) 
                       || (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred))
                    : ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch))) 
                       || (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred))));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
        = (((QData)((IData)((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[2U]) 
                              << 0x00000010U) | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[1U]))) 
            << 0x00000010U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[0U])));
    vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[1U]))));
    vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[1U]))) 
                   >> 0x00000020U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq 
        = ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken) 
           & ((~ ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause) 
                  >> 3U)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt;
    if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
                if ((0U < (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next 
                        = (3U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt) 
                                 - (IData)(1U)));
                }
            } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)))) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next = 2U;
                } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next = 2U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)))) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next = 2U;
                } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next = 2U;
                }
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) 
           | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__is_clic_csr = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 1U;
    lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata 
        = ((0x0fb1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__mintstatus_r
            : ((0x0347U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                ? (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__mintthresh_r)
                : ((- (IData)(((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__claim_valid) 
                               & (0x0fb0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))))) 
                   & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__claim_id))));
    lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx 
        = (0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
                          >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx)];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & ((IData)(1U) + lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx))];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[2U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & ((IData)(2U) + lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx))];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[3U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & ((IData)(3U) + lumi_v1_tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__ic_word_idx))];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg))) {
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 0U;
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg))) {
            if ((0x40000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmcontrol)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 3U;
            }
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__single_step_done) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 2U;
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg))) {
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 0U;
        } else if ((0x40000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmcontrol)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 3U;
        } else if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmcontrol 
                     >> 2U) & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg))) {
        if ((1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__halted_ack)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 2U;
        }
    } else if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmcontrol 
                 >> 0x0000001fU) & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 1U;
    } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit) 
                & (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = 5U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__fetch_exc_valid) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel = 0U;
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__fetch_exc_cause;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 1U;
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_valid) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_tval;
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_cause;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 1U;
    } else if (lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel = 0U;
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel 
            = lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 1U;
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_valid_r) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_pred_taken 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pred_taken_r;
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_data_r[0U];
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_data_r[1U];
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_data_r[2U];
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[3U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_data_r[3U];
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_pred_taken 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb;
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[0U];
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[1U];
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[2U];
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[3U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[3U];
    }
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0 
        = (3U != (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0 
        = (3U != (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                >> 0x10U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0 
        = (3U != (3U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_raw_packed 
                                >> 0x20U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h9fddae19__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h11348717__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                 >> 0x0000000cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                 >> 0x0000000cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                 >> 0x0000000cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_hdf6c399f__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
           >> 0x00000019U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
           >> 0x00000019U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0;
    lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
           >> 0x00000019U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U] 
        = lumi_v1_tb_top__DOT__u_cov__DOT____Vlvbound_h43f2f5b1__0;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[2U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[3U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[3U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[4U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[4U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[5U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[5U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[6U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[6U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[7U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[7U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[8U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[8U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[9U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[9U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[10U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[10U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[11U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[11U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[12U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[12U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[13U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[13U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[14U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[14U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[15U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[15U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[16U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[16U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[17U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[17U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[18U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[18U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[19U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[19U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[20U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[20U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[21U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[21U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[22U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[22U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[23U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[23U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[24U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[24U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[25U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[25U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[26U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[26U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[27U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[27U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[28U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[28U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[29U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[29U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[30U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[30U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[31U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[31U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[10U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb = 0U;
    if ((1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))))) {
        if ((0U != (0x0000001fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[(0x0000001fU 
                                                                     & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed))] 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U];
        }
        if ((0x00000073U == vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[10U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
            }
        }
    }
    if ((1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))))) {
        if ((0U != (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                   >> 5U)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[(0x0000001fU 
                                                                     & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                                                        >> 5U))] 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U];
        }
        if ((0x00000073U == vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U])) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[10U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U];
            }
        }
    }
    if ((IData)((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                  >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))))) {
        if ((0U != (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                   >> 0x0aU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[(0x0000001fU 
                                                                     & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                                                        >> 0x0aU))] 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U];
        }
        if ((0x00000073U == vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U])) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[10U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U];
            }
        }
    }
    if ((((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall)) 
            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid)) 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))) 
          & (vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U] 
             == vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_commit_pc)) 
         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]))) {
        if (VL_UNLIKELY((((0x6fU == (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U])) 
                          & (3U <= vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__spin_count))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
            VL_WRITEF_NX("[SB] Spin loop (JAL) at PC=0x%08h inst=0x%08h spin_count=%0d cycle=%0d\n",4
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__spin_count
                         , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt);
        }
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[0U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 1U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 1U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 2U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[2U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 2U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (8U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 3U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[3U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 3U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffff7U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000010U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 4U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[4U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 4U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffffefU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000020U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 5U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[5U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 5U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffffdfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000040U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 6U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[6U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 6U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffffbfU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000080U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 7U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[7U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 7U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffff7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000100U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 8U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[8U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 8U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffeffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000200U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 9U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[9U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 9U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffdffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000400U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000000aU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[10U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000000aU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffffbffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00000800U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000000bU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[11U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000000bU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffff7ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00001000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000000cU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[12U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000000cU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffefffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00002000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000000dU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[13U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000000dU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffdfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00004000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000000eU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[14U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000000eU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fffbfffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00008000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000000fU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[15U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000000fU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fff7fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00010000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000010U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[16U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000010U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffeffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00020000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000011U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[17U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000011U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffdffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00040000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000012U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[18U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000012U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ffbffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00080000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000013U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[19U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000013U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1ff7ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00100000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000014U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[20U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000014U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fefffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00200000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000015U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[21U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000015U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fdfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00400000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000016U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[22U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000016U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1fbfffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x00800000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000017U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[23U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000017U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1f7fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x01000000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000018U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[24U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000018U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1effffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x02000000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x00000019U));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[25U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x00000019U));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1dffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x04000000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000001aU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[26U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000001aU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x1bffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x08000000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000001bU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[27U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000001bU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x17ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    if (((((((((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U]) 
               | (1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) 
              | (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) 
             | (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) 
            | (4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) 
           | (5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) 
          | (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) 
         | (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U]))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x10000000U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 
                = (0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1) 
                      << 0x0000001cU));
        } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((3U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((4U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((5U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else if ((6U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[28U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = (0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
                = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7) 
                      << 0x0000001cU));
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match 
            = (0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_r;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__flush) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_next 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r;
    } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__post_flush_block_r) 
                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_next 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r;
    } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__post_flush_block_r)))) {
        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid) 
             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r 
                != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_r))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__batch_pc_next 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r;
        }
    }
    if ((0x00000800U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000400U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      >> 6U)))) {
                            if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     >> 1U)))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__is_clic_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                         >> 0x0000000aU)))) {
        if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__is_clic_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_we 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__is_clic_csr) 
           & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we));
    if ((0x00000800U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000400U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((1U & (~ ((0x0b03U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b1fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0b83U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b9fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0323U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x033fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                    }
                                }
                            }
                        } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if ((1U & (~ ((0x0b03U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x0b1fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        if ((1U & (~ 
                                                   ((0x0b83U 
                                                     <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    & (0x0b9fU 
                                                       >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((0x0323U 
                                                      <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     & (0x033fU 
                                                        >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                            }
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if ((1U & (~ ((0x0b03U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x0b1fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        if ((1U & (~ 
                                                   ((0x0b83U 
                                                     <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    & (0x0b9fU 
                                                       >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((0x0323U 
                                                      <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     & (0x033fU 
                                                        >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                            }
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if ((1U & (~ ((0x0b03U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x0b1fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        if ((1U & (~ 
                                                   ((0x0b83U 
                                                     <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    & (0x0b9fU 
                                                       >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((0x0323U 
                                                      <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     & (0x033fU 
                                                        >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((0x0b03U 
                                                  <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 & (0x0b1fU 
                                                    >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0b83U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b9fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0323U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x033fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((0x0b03U 
                                              <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                             & (0x0b1fU 
                                                >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((1U & (~ ((0x0b03U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b1fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0b83U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b9fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0323U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x033fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if ((1U & (~ ((0x0b03U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b1fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0b83U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x0b9fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        if ((1U & (~ 
                                                   ((0x0323U 
                                                     <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    & (0x033fU 
                                                       >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if ((1U & (~ ((0x0b03U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b1fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0b83U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x0b9fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        if ((1U & (~ 
                                                   ((0x0323U 
                                                     <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    & (0x033fU 
                                                       >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                if ((1U & (~ ((0x0b03U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b1fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0b83U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x0b9fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        if ((1U & (~ 
                                                   ((0x0323U 
                                                     <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    & (0x033fU 
                                                       >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                         & (0x0b1fU 
                                            >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((1U & (~ ((0x0b03U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b1fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0b83U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b9fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0323U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x033fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
            if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                }
            }
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((1U & (~ ((0x0b03U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b1fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0b83U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b9fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0323U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x033fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
            if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                }
            }
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            if ((1U & (~ ((0x0b03U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b1fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0b83U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x0b9fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    if ((1U & (~ ((0x0323U 
                                                   <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  & (0x033fU 
                                                     >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0b83U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x0b9fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                if ((1U & (~ ((0x0323U 
                                               <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                              & (0x033fU 
                                                 >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
            if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                }
            }
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            if ((1U & (~ ((0x0323U 
                                           <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          & (0x033fU 
                                             >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                            }
                        }
                    }
                }
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                    if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                  & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
        if ((1U & (~ ((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                      & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
            if ((1U & (~ ((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                          & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = 0U;
            }
        }
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid) 
                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000400U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = (IData)(((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0ULL));
                            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x0b9fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x033fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            }
                        } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                         & (0x0b1fU 
                                            >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = (IData)(
                                                      ((0x1cU 
                                                        >= 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                            - (IData)(3U))))
                                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                                       [
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                           - (IData)(3U)))]
                                                        : 0ULL));
                                    } else if (((0x0b83U 
                                                 <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                & (0x0b9fU 
                                                   >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = ((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0U);
                                    } else if (((0x0323U 
                                                 <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                & (0x033fU 
                                                   >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = ((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0U);
                                    }
                                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                         & (0x0b1fU 
                                            >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = (IData)(
                                                      ((0x1cU 
                                                        >= 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                            - (IData)(3U))))
                                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                                       [
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                           - (IData)(3U)))]
                                                        : 0ULL));
                                    } else if (((0x0b83U 
                                                 <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                & (0x0b9fU 
                                                   >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = ((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0U);
                                    } else if (((0x0323U 
                                                 <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                & (0x033fU 
                                                   >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = ((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0U);
                                    }
                                } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                         & (0x0b1fU 
                                            >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = (IData)(
                                                      ((0x1cU 
                                                        >= 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                            - (IData)(3U))))
                                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                                       [
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                           - (IData)(3U)))]
                                                        : 0ULL));
                                    } else if (((0x0b83U 
                                                 <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                & (0x0b9fU 
                                                   >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = ((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0U);
                                    } else if (((0x0323U 
                                                 <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                & (0x033fU 
                                                   >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                            = ((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0U);
                                    }
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata;
                                }
                            } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x0b1fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = (IData)(((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0ULL));
                            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x0b9fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x033fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            }
                        } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = (IData)(((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0ULL));
                            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x0b9fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x033fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            }
                        } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = (IData)((
                                                   (0x1cU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                        - (IData)(3U))))
                                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                       - (IData)(3U)))]
                                                    : 0ULL));
                                } else if (((0x0b83U 
                                             <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                            & (0x0b9fU 
                                               >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = ((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0U);
                                } else if (((0x0323U 
                                             <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                            & (0x033fU 
                                               >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = ((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0U);
                                }
                            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = (IData)((
                                                   (0x1cU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                        - (IData)(3U))))
                                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                       - (IData)(3U)))]
                                                    : 0ULL));
                                } else if (((0x0b83U 
                                             <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                            & (0x0b9fU 
                                               >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = ((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0U);
                                } else if (((0x0323U 
                                             <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                            & (0x033fU 
                                               >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                        = ((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0U);
                                }
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val = 0U;
                            }
                        } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                                    ? 1U : 0U);
                        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val = 0U;
                        } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_instret;
                    }
                } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_cycle;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__minstret_cnt);
                }
            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcycle_cnt);
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = (IData)(((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0ULL));
                            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x0b9fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x033fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            }
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_instret;
                        }
                    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_cycle;
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__minstret_cnt);
                    }
                } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcycle_cnt);
                }
            } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = (IData)(((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0ULL));
        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                   [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                    - (IData)(3U)))]
                    : 0U);
        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                   [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                    - (IData)(3U)))]
                    : 0U);
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = (IData)(((0x1cU 
                                                >= 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U))))
                                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                               [(0x0000001fU 
                                                 & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                    - (IData)(3U)))]
                                                : 0ULL));
                            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x0b9fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        & (0x033fU 
                                           >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                    = ((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0U);
                            }
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mnstatus_r;
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mncause_r
                                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mnepc_r);
                    }
                } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = (IData)(((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0ULL));
        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                   [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                    - (IData)(3U)))]
                    : 0U);
        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                   [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                    - (IData)(3U)))]
                    : 0U);
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata;
                        } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mip_r;
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                            ? ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtval_r
                                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcause_r)
                            : ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mepc_r
                                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mscratch_r));
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                        if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                             & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = (IData)(((0x1cU >= 
                                            (0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U))))
                                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                           [(0x0000001fU 
                                             & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                            : 0ULL));
                        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                                = ((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0U);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcounteren_r;
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r
                            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mie_r);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                        ? ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mideleg_r
                            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__medeleg_r)
                        : ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                            ? 0x42001107U : (0x007e19aaU 
                                             & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mstatus_r)));
            }
        } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = (IData)(((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0ULL));
        } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                   [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                    - (IData)(3U)))]
                    : 0U);
        } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                   [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                    - (IData)(3U)))]
                    : 0U);
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
        if ((0x00000080U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                    if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                         & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = (IData)(((0x1cU >= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                     - (IData)(3U))))
                                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                       [(0x0000001fU 
                                         & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                                        : 0ULL));
                    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                            = ((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0U);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mip_r 
                           & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mideleg_r);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                        ? ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__stval_r
                            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__scause_r)
                        : ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__sepc_r
                            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__sscratch_r));
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
                if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                     & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = (IData)(((0x1cU >= (0x0000001fU 
                                              & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                                   [(0x0000001fU & 
                                     ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                      - (IData)(3U)))]
                                    : 0ULL));
                } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                            & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                        = ((0x1cU >= (0x0000001fU & 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                       - (IData)(3U))))
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                           [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                            - (IData)(3U)))]
                            : 0U);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__stvec_r
                        : (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mie_r 
                           & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mideleg_r));
            }
        } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) {
            if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                 & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = (IData)(((0x1cU >= (0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                             - (IData)(3U))))
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                - (IData)(3U)))]
                                : 0ULL));
            } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                        & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                    = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0U);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__sstatus_r;
        }
    } else if (((0x0b03U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                & (0x0b1fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
            = (IData)(((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                                 - (IData)(3U))))
                        ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r
                       [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                        - (IData)(3U)))]
                        : 0ULL));
    } else if (((0x0b83U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                & (0x0b9fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
            = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                         - (IData)(3U))))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm
               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                - (IData)(3U)))] : 0U);
    } else if (((0x0323U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                & (0x033fU >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
            = ((0x1cU >= (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                         - (IData)(3U))))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r
               [(0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb) 
                                - (IData)(3U)))] : 0U);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_nmi_enter = 0U;
    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception)))) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_latch) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_nmi_enter = 1U;
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_enter = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_enter = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval 
            = lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause 
            = lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel;
    } else {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_latch) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause = 0x80000000U;
        } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid) 
                    & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mstatus_r 
                       >> 3U))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_id;
        }
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_latch)))) {
            if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid) 
                 & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mstatus_r 
                    >> 3U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_enter = 1U;
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__trap_target_m 
        = ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception)) 
                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r))
            ? ((0xfffffffcU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r) 
               + ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel) 
                  << 2U)) : (0xfffffffcU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
        = (0x3eU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
        = (0x3eU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
        = (0x3dU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
        = (0x3dU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
        = (0x3bU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
        = (0x3bU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[3U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[3U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
        = (0x37U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
        = (0x37U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[3U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[4U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[4U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
        = (0x2fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
        = (0x2fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[4U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[5U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[5U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
        = (0x1fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
        = (0x1fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[5U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_hw_out = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_valid_out = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__stop_scan = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[0U] 
            = ((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[0U] 
                << 0x00000010U) | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_hw_r));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[1U] 
            = ((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[0U] 
                >> 0x00000010U) | (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[1U] 
                                   << 0x00000010U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[2U] 
            = ((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[1U] 
                >> 0x00000010U) | (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[2U] 
                                   << 0x00000010U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[3U] 
            = ((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[2U] 
                >> 0x00000010U) | (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[3U] 
                                   << 0x00000010U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[4U] 
            = (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[3U] 
               >> 0x00000010U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo = 2U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[0U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_hw_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[0U] 
            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_base_pc 
               - (IData)(2U));
        if ((3U != (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw)))) {
            vlSelfRef.__Vfunc_c_ext_expand__24__ci 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw;
            {
                vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0;
                vlSelf->__Vfunc_c_ext_expand__24__inst = 0;
                vlSelf->__Vfunc_c_ext_expand__24__rs1p = 0;
                vlSelf->__Vfunc_c_ext_expand__24__rs2p = 0;
                vlSelf->__Vfunc_c_ext_expand__24__rd_rs1 = 0;
                vlSelf->__Vfunc_c_ext_expand__24__imm = 0;
                vlSelfRef.__Vfunc_c_ext_expand__24__inst 
                    = vlSelfRef.__Vfunc_c_ext_expand__24__ci;
                vlSelfRef.__Vfunc_c_ext_expand__24__rs1p 
                    = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                   >> 7U)));
                vlSelfRef.__Vfunc_c_ext_expand__24__rs2p 
                    = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                   >> 2U)));
                vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1 
                    = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                      >> 7U));
                if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst)))) {
                    if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                      >> 0x0dU)))) {
                        vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                            = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                               >> 1U)) 
                               | ((((6U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                           >> 0x0000000aU)) 
                                    | (1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                             >> 5U))) 
                                   << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                   >> 4U))));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                            = (0x00010013U | ((vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p) 
                                                 << 7U)));
                        goto __Vlabel1;
                    } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                             >> 0x0dU)))) {
                        vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                            = ((((8U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                        >> 2U)) | (7U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                      >> 0x0aU))) 
                                << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 4U)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                            = (0x00002003U | ((vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p) 
                                                    << 7U))));
                        goto __Vlabel1;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                             >> 0x0dU)))) {
                        vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                            = ((((8U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                        >> 2U)) | (7U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                      >> 0x0aU))) 
                                << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 4U)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                            = (0x00002023U | ((((0x00000fe0U 
                                                 & vlSelfRef.__Vfunc_c_ext_expand__24__imm) 
                                                | (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p)) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                  << 0x0000000fU) 
                                                 | (0x00000f80U 
                                                    & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                       << 7U)))));
                        goto __Vlabel1;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                        goto __Vlabel1;
                    }
                } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst)))) {
                    if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                        if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                       >> 0x0cU)))) 
                                        << 9U) | ((
                                                   ((8U 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                        >> 9U)) 
                                                    | ((6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                             >> 2U)))) 
                                                   << 5U) 
                                                  | ((0x00000018U 
                                                      & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                         >> 7U)) 
                                                     | (6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                           >> 2U)))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x00001063U 
                                       | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                >> 1U)) 
                                            | (0x000007e0U 
                                               & vlSelfRef.__Vfunc_c_ext_expand__24__imm)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                              << 0x0000000fU) 
                                             | ((0x00000f00U 
                                                 & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                    << 7U)) 
                                                | (0x00000080U 
                                                   & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                      >> 4U))))));
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                       >> 0x0cU)))) 
                                        << 9U) | ((
                                                   ((8U 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                        >> 9U)) 
                                                    | ((6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                             >> 2U)))) 
                                                   << 5U) 
                                                  | ((0x00000018U 
                                                      & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                         >> 7U)) 
                                                     | (6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                           >> 2U)))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x63U | ((((0x00000800U 
                                                   & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                      >> 1U)) 
                                                  | (0x000007e0U 
                                                     & vlSelfRef.__Vfunc_c_ext_expand__24__imm)) 
                                                 << 0x00000014U) 
                                                | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                    << 0x0000000fU) 
                                                   | ((0x00000f00U 
                                                       & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                          << 7U)) 
                                                      | (0x00000080U 
                                                         & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                            >> 4U))))));
                                goto __Vlabel1;
                            }
                        } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000cU) 
                                   | (((((2U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 0x0000000bU)) 
                                         | (1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 8U))) 
                                        << 0x0000000aU) 
                                       | (((0x0000000cU 
                                            & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                               >> 7U)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 5U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                    >> 7U)))) 
                                          << 6U)) | 
                                      ((((2U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 1U)) 
                                         | (1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 0x0bU))) 
                                        << 4U) | (0x0000000eU 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                     >> 2U)))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x006fU | ((((0x00000800U 
                                                 & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                    >> 9U)) 
                                                | ((0x000007feU 
                                                    & vlSelfRef.__Vfunc_c_ext_expand__24__imm) 
                                                   | (1U 
                                                      & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                         >> 0x0bU)))) 
                                               << 0x00000014U) 
                                              | (0x000ff000U 
                                                 & vlSelfRef.__Vfunc_c_ext_expand__24__imm)));
                            goto __Vlabel1;
                        } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                                    goto __Vlabel1;
                                } else if ((0x00000040U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                            = (0x00007033U 
                                               | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                        << 7U))));
                                        goto __Vlabel1;
                                    } else {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                            = (0x00006033U 
                                               | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                        << 7U))));
                                        goto __Vlabel1;
                                    }
                                } else if ((0x00000020U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                        = (0x00004033U 
                                           | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                        = (0x40000033U 
                                           | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel1;
                                }
                            } else {
                                vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                       >> 0x0cU)))) 
                                        << 6U) | ((0x00000020U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                      >> 7U)) 
                                                  | (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                        >> 2U))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x00007013U 
                                       | ((vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                << 7U))));
                                goto __Vlabel1;
                            }
                        } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x40005013U | ((0x01f00000U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                      << 0x00000012U)) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                        << 7U))));
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x00005013U | ((0x01f00000U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                      << 0x00000012U)) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rs1p) 
                                                        << 7U))));
                            goto __Vlabel1;
                        }
                    } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            if ((2U == (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1))) {
                                vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                       >> 0x0cU)))) 
                                        << 0x0000000aU) 
                                       | (((((4U & 
                                              ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                               >> 0x0000000aU)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                   >> 3U))) 
                                            << 7U) 
                                           | (((2U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                   >> 4U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                     >> 2U))) 
                                              << 5U)) 
                                          | (0x00000010U 
                                             & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 2U))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x00010113U 
                                       | (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                          << 0x00000014U));
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                    = ((((0x00007ffeU 
                                          & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                            >> 0x0cU)))) 
                                             << 1U)) 
                                         | (1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 0x0cU))) 
                                        << 0x00000011U) 
                                       | (0x0001f000U 
                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                             << 0x0000000aU)));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x37U | ((0xfffff000U 
                                                 & vlSelfRef.__Vfunc_c_ext_expand__24__imm) 
                                                | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                                   << 7U)));
                                goto __Vlabel1;
                            }
                        } else {
                            vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                    >> 2U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x13U | ((vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                             << 0x00000014U) 
                                            | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel1;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                        vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                            >> 2U)))));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                            = (0x00efU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_c_ext_expand__24__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_c_ext_expand__24__imm)));
                        goto __Vlabel1;
                    } else {
                        vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                >> 2U))));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                            = (0x13U | ((vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                         << 0x00000014U) 
                                        | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                            << 0x0000000fU) 
                                           | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                              << 7U))));
                        goto __Vlabel1;
                    }
                } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst)))) {
                    if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                        if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                    = ((0x000000c0U 
                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                           >> 1U)) 
                                       | (0x0000003cU 
                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                             >> 7U)));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x00012023U 
                                       | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_c_ext_expand__24__imm) 
                                            | (0x0000001fU 
                                               & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  >> 2U))) 
                                           << 0x00000014U) 
                                          | (0x00000f80U 
                                             & (vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                << 7U))));
                                goto __Vlabel1;
                            }
                        } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                            goto __Vlabel1;
                        } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            if ((0U == (0x0000001fU 
                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                           >> 2U)))) {
                                if ((0U == (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0x00000073U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                        = (0x00e7U 
                                           | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                              << 0x0000000fU));
                                    goto __Vlabel1;
                                }
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                    = (0x33U | ((0x01f00000U 
                                                 & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                    << 0x00000012U)) 
                                                | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                                    << 0x0000000fU) 
                                                   | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                                      << 7U))));
                                goto __Vlabel1;
                            }
                        } else if ((0U == (0x0000001fU 
                                           & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                              >> 2U)))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x0067U | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                              << 0x0000000fU));
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                << 0x00000012U)) 
                                            | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel1;
                        }
                    } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                = ((((6U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                            >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                              >> 0x0cU))) 
                                    << 5U) | (0x0000001cU 
                                              & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                 >> 2U)));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                                = (0x00012003U | ((vlSelfRef.__Vfunc_c_ext_expand__24__imm 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                                     << 7U)));
                            goto __Vlabel1;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                        goto __Vlabel1;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                            = (0x00001013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__24__rd_rs1) 
                                                    << 7U))));
                        goto __Vlabel1;
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand 
                        = vlSelfRef.__Vfunc_c_ext_expand__24__ci;
                    goto __Vlabel1;
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand = 0U;
                __Vlabel1: ;
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[0U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_0__c_ext_expand;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
                = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo 
                = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo)));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[0U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
                = (0x3eU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo 
                = (0x0000001fU & ((IData)(4U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo)));
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
            = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt = 1U;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[0U] 
            = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[1U] 
            = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[2U] 
            = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[3U] 
            = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__raw_swapped[3U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data[4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_start_offset;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
            ? 1U : 0U);
    while (VL_GTS_III(32, 6U, lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i)) {
        if ((1U & ((~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__stop_scan)) 
                   & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_pred_taken) 
                         & VL_GTS_III(32, lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i, 
                                      ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
                                        ? 1U : 0U))))))) {
            if (((0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo))) 
                 > ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
                     ? 0x12U : 0x10U))) {
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__stop_scan = 1U;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw 
                    = ((0x8fU >= (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U)))
                        ? (0x0000ffffU & (((0U == (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U)))
                                            ? 0U : 
                                           (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data
                                            [(((IData)(0x0000000fU) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U))) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U))))) 
                                          | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data
                                             [(7U & 
                                               (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U) 
                                                >> 5U))] 
                                             >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U)))))
                        : 0U);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h58010ed1__0 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_hfe6acb0b__0 
                    = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
                        ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_base_pc 
                           + (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo) 
                                             - (IData)(2U))))
                        : ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_base_pc 
                            + (0x0000000fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo))) 
                           - (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_start_offset)));
                if (VL_LIKELY(((5U >= (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[(7U 
                                                                                & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i)] 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h58010ed1__0;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[(7U 
                                                                                & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i)] 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_hfe6acb0b__0;
                }
                if ((3U != (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw)))) {
                    vlSelfRef.__Vfunc_c_ext_expand__25__ci 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw;
                    {
                        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0;
                        vlSelf->__Vfunc_c_ext_expand__25__inst = 0;
                        vlSelf->__Vfunc_c_ext_expand__25__rs1p = 0;
                        vlSelf->__Vfunc_c_ext_expand__25__rs2p = 0;
                        vlSelf->__Vfunc_c_ext_expand__25__rd_rs1 = 0;
                        vlSelf->__Vfunc_c_ext_expand__25__imm = 0;
                        vlSelfRef.__Vfunc_c_ext_expand__25__inst 
                            = vlSelfRef.__Vfunc_c_ext_expand__25__ci;
                        vlSelfRef.__Vfunc_c_ext_expand__25__rs1p 
                            = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                           >> 7U)));
                        vlSelfRef.__Vfunc_c_ext_expand__25__rs2p 
                            = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                           >> 2U)));
                        vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1 
                            = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                              >> 7U));
                        if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst)))) {
                            if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                              >> 0x0dU)))) {
                                vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                    = ((0x000003c0U 
                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                           >> 1U)) 
                                       | ((((6U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 0x0000000aU)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                >> 5U))) 
                                           << 3U) | 
                                          (4U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                 >> 4U))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                    = (0x00010013U 
                                       | ((vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p) 
                                             << 7U)));
                                goto __Vlabel2;
                            } else if ((2U == (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                >> 0x0dU)))) {
                                vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                    = ((((8U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                >> 2U)) 
                                         | (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                  >> 0x0aU))) 
                                        << 3U) | (4U 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                     >> 4U)));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                    = (0x00002003U 
                                       | ((vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p) 
                                                << 7U))));
                                goto __Vlabel2;
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                >> 0x0dU)))) {
                                vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                    = ((((8U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                >> 2U)) 
                                         | (7U & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                  >> 0x0aU))) 
                                        << 3U) | (4U 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                     >> 4U)));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                    = (0x00002023U 
                                       | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_c_ext_expand__25__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                   << 7U)))));
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                                goto __Vlabel2;
                            }
                        } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst)))) {
                            if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    if ((0x00002000U 
                                         & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                        vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                            = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                               >> 0x0cU)))) 
                                                << 9U) 
                                               | ((((8U 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                        >> 9U)) 
                                                    | ((6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                             >> 2U)))) 
                                                   << 5U) 
                                                  | ((0x00000018U 
                                                      & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                         >> 7U)) 
                                                     | (6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 2U)))));
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x00001063U 
                                               | ((((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_c_ext_expand__25__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                              >> 4U))))));
                                        goto __Vlabel2;
                                    } else {
                                        vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                            = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                               >> 0x0cU)))) 
                                                << 9U) 
                                               | ((((8U 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                        >> 9U)) 
                                                    | ((6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                             >> 2U)))) 
                                                   << 5U) 
                                                  | ((0x00000018U 
                                                      & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                         >> 7U)) 
                                                     | (6U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 2U)))));
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x63U 
                                               | ((((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_c_ext_expand__25__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                              >> 4U))))));
                                        goto __Vlabel2;
                                    }
                                } else if ((0x00002000U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 0x0cU)))) 
                                            << 0x0000000cU) 
                                           | (((((2U 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                     >> 0x0000000bU)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 8U))) 
                                                << 0x0000000aU) 
                                               | (((0x0000000cU 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 7U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                            >> 7U)))) 
                                                  << 6U)) 
                                              | ((((2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                         >> 0x0bU))) 
                                                  << 4U) 
                                                 | (0x0000000eU 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 2U)))));
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x006fU 
                                           | ((((0x00000800U 
                                                 & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                    >> 9U)) 
                                                | ((0x000007feU 
                                                    & vlSelfRef.__Vfunc_c_ext_expand__25__imm) 
                                                   | (1U 
                                                      & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                         >> 0x0bU)))) 
                                               << 0x00000014U) 
                                              | (0x000ff000U 
                                                 & vlSelfRef.__Vfunc_c_ext_expand__25__imm)));
                                    goto __Vlabel2;
                                } else if ((0x00000800U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    if ((0x00000400U 
                                         & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                        if ((0x00001000U 
                                             & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                                            goto __Vlabel2;
                                        } else if (
                                                   (0x00000040U 
                                                    & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                            if ((0x00000020U 
                                                 & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                                    = 
                                                    (0x00007033U 
                                                     | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p) 
                                                         << 0x00000014U) 
                                                        | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                            << 0x0000000fU) 
                                                           | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                              << 7U))));
                                                goto __Vlabel2;
                                            } else {
                                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                                    = 
                                                    (0x00006033U 
                                                     | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p) 
                                                         << 0x00000014U) 
                                                        | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                            << 0x0000000fU) 
                                                           | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                              << 7U))));
                                                goto __Vlabel2;
                                            }
                                        } else if (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                                = (0x00004033U 
                                                   | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p) 
                                                       << 0x00000014U) 
                                                      | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                          << 0x0000000fU) 
                                                         | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                            << 7U))));
                                            goto __Vlabel2;
                                        } else {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                                = (0x40000033U 
                                                   | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs2p) 
                                                       << 0x00000014U) 
                                                      | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                          << 0x0000000fU) 
                                                         | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                            << 7U))));
                                            goto __Vlabel2;
                                        }
                                    } else {
                                        vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                            = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                               >> 0x0cU)))) 
                                                << 6U) 
                                               | ((0x00000020U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                      >> 7U)) 
                                                  | (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                        >> 2U))));
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x00007013U 
                                               | ((vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                        << 7U))));
                                        goto __Vlabel2;
                                    }
                                } else if ((0x00000400U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x40005013U 
                                           | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel2;
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x00005013U 
                                           | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel2;
                                }
                            } else if ((0x00004000U 
                                        & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    if ((2U == (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1))) {
                                        vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                            = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                               >> 0x0cU)))) 
                                                << 0x0000000aU) 
                                               | (((((4U 
                                                      & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                         >> 0x0000000aU)) 
                                                     | (3U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 3U))) 
                                                    << 7U) 
                                                   | (((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                             >> 2U))) 
                                                      << 5U)) 
                                                  | (0x00000010U 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                        >> 2U))));
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x00010113U 
                                               | (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                  << 0x00000014U));
                                        goto __Vlabel2;
                                    } else {
                                        vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                            = ((((0x00007ffeU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                                    >> 0x0cU)))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 0x0cU))) 
                                                << 0x00000011U) 
                                               | (0x0001f000U 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                     << 0x0000000aU)));
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x37U 
                                               | ((0xfffff000U 
                                                   & vlSelfRef.__Vfunc_c_ext_expand__25__imm) 
                                                  | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                     << 7U)));
                                        goto __Vlabel2;
                                    }
                                } else {
                                    vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                           >> 0x0cU)))) 
                                            << 6U) 
                                           | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                    >> 2U))));
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x13U | 
                                           ((vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                             << 0x00000014U) 
                                            | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                               << 7U)));
                                    goto __Vlabel2;
                                }
                            } else if ((0x00002000U 
                                        & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 0x0cU)))) 
                                        << 0x0000000cU) 
                                       | (((((2U & 
                                              ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                               >> 0x0000000bU)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 8U))) 
                                            << 0x0000000aU) 
                                           | (((0x0000000cU 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                        >> 7U)))) 
                                              << 6U)) 
                                          | ((((2U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                     >> 0x0bU))) 
                                              << 4U) 
                                             | (0x0000000eU 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 2U)))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                    = (0x00efU | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                        >> 9U)) 
                                                    | ((0x000007feU 
                                                        & vlSelfRef.__Vfunc_c_ext_expand__25__imm) 
                                                       | (1U 
                                                          & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                             >> 0x0bU)))) 
                                                   << 0x00000014U) 
                                                  | (0x000ff000U 
                                                     & vlSelfRef.__Vfunc_c_ext_expand__25__imm)));
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                       >> 0x0cU)))) 
                                        << 6U) | ((0x00000020U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                      >> 7U)) 
                                                  | (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                        >> 2U))));
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                    = (0x13U | ((vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                 << 0x00000014U) 
                                                | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                    << 0x0000000fU) 
                                                   | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                      << 7U))));
                                goto __Vlabel2;
                            }
                        } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst)))) {
                            if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    if ((0x00002000U 
                                         & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                                        goto __Vlabel2;
                                    } else {
                                        vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                            = ((0x000000c0U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 1U)) 
                                               | (0x0000003cU 
                                                  & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                     >> 7U)));
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x00012023U 
                                               | ((((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_c_ext_expand__25__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                                        << 7U))));
                                        goto __Vlabel2;
                                    }
                                } else if ((0x00002000U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                                    goto __Vlabel2;
                                } else if ((0x00001000U 
                                            & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    if ((0U == (0x0000001fU 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 2U)))) {
                                        if ((0U == (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1))) {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0x00000073U;
                                            goto __Vlabel2;
                                        } else {
                                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                                = (0x00e7U 
                                                   | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                      << 0x0000000fU));
                                            goto __Vlabel2;
                                        }
                                    } else {
                                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                            = (0x33U 
                                               | ((0x01f00000U 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                      << 0x00000012U)) 
                                                  | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                        << 7U))));
                                        goto __Vlabel2;
                                    }
                                } else if ((0U == (0x0000001fU 
                                                   & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                      >> 2U)))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x0067U 
                                           | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                              << 0x0000000fU));
                                    goto __Vlabel2;
                                } else {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x33U | 
                                           ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                << 0x00000012U)) 
                                            | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                               << 7U)));
                                    goto __Vlabel2;
                                }
                            } else if ((0x00004000U 
                                        & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                                    goto __Vlabel2;
                                } else {
                                    vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                        = ((((6U & 
                                              ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                               >> 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                   >> 0x0cU))) 
                                            << 5U) 
                                           | (0x0000001cU 
                                              & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                                 >> 2U)));
                                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                        = (0x00012003U 
                                           | ((vlSelfRef.__Vfunc_c_ext_expand__25__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                 << 7U)));
                                    goto __Vlabel2;
                                }
                            } else if ((0x00002000U 
                                        & (IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                    = (0x00001013U 
                                       | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_c_ext_expand__25__rd_rs1) 
                                                << 7U))));
                                goto __Vlabel2;
                            }
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand 
                                = vlSelfRef.__Vfunc_c_ext_expand__25__ci;
                            goto __Vlabel2;
                        }
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand = 0U;
                        __Vlabel2: ;
                    }
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_ha7dd09de__0 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____VlemCall_1__c_ext_expand;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_he4b3611e__0 = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h12bdafec__0 = 1U;
                    if (VL_LIKELY(((5U >= (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[(7U 
                                                                                & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i)] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_ha7dd09de__0;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
                            = (((~ ((IData)(1U) << 
                                    (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed)) 
                               | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_he4b3611e__0) 
                                           << (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
                            = (((~ ((IData)(1U) << 
                                    (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid)) 
                               | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h12bdafec__0) 
                                           << (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))));
                    }
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo 
                        = (0x0000001fU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo)));
                } else if (((0x0000001fU & ((IData)(4U) 
                                            + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo))) 
                            > ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
                                ? 0x12U : 0x10U))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_hw_out 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_valid_out = 1U;
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__stop_scan = 1U;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_ha7dd09de__1 
                        = ((0x8fU >= (0x000000ffU & 
                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U)))
                            ? (((0U == (0x0000001fU 
                                        & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U)))
                                 ? 0U : (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data
                                         [(((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U))) 
                                           >> 5U)] 
                                         << ((IData)(0x00000020U) 
                                             - (0x0000001fU 
                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U))))) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data
                                  [(7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U) 
                                          >> 5U))] 
                                  >> (0x0000001fU & 
                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo), 3U))))
                            : 0U);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_he4b3611e__1 = 0U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h12bdafec__1 = 1U;
                    if (VL_LIKELY(((5U >= (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[(7U 
                                                                                & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i)] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_ha7dd09de__1;
                    }
                    if (VL_LIKELY(((5U >= (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
                            = (((~ ((IData)(1U) << 
                                    (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed)) 
                               | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_he4b3611e__1) 
                                           << (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))));
                    }
                    if (VL_LIKELY(((5U >= (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
                            = (((~ ((IData)(1U) << 
                                    (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid)) 
                               | (0x3fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h12bdafec__1) 
                                           << (7U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i))));
                    }
                    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__cnt)));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo 
                        = (0x0000001fU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo)));
                }
            }
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__unnamedblk2__DOT__i);
    }
}
