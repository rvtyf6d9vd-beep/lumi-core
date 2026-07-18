// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top___024root___nba_sequent__TOP__1(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___nba_sequent__TOP__1\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata;
    lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0 = 0;
    QData/*63:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT____Vlvbound_hb84c1d22__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb = 0;
    // Body
    lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata 
        = ((0x0fb1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__mintstatus_r
            : ((0x0347U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))
                ? (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__mintthresh_r)
                : ((- (IData)(((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__claim_valid) 
                               & (0x0fb0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))))) 
                   & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__claim_id))));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h3592ff64__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0 
        = (((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                    >> 0x0000001cU)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_result_r
            : (((2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                        >> 0x0000001cU)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_result_r
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[0U]));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0 
        = (((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                    >> 0x0000001cU)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_result_r
            : (((2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                        >> 0x0000001cU)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_result_r
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[1U]));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0 
        = (((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                    >> 0x0000001cU)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_result_r
            : (((2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                        >> 0x0000001cU)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_result_r
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[2U]));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h655a0b78__0;
    if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r = 0U;
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r = 0U;
            if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid) 
                 & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                           >> 0x0000001cU)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
            }
            if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid) 
                  >> 1U) & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                                   >> 0x0000001cU)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
                }
            }
            if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid) 
                  >> 2U) & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                                   >> 0x0000001cU)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                        = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
                }
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                        = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
                }
            }
        } else if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy)) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid;
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r = 0U;
    }
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
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb = 0U;
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
           & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][0U] 
                     >> 0x0000001cU))) & (0U != (7U 
                                                 & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                                    >> 7U)))) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception)))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb 
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
    if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
            >> 1U) & (7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][0U] 
                             >> 0x0000001cU))) & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                                                      >> 7U)))) 
         & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
               >> 1U)))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb 
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
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb 
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
    }
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
    if (vlSelfRef.__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v0) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][1U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3[3U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][4U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3[4U];
    }
    if (vlSelfRef.__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][1U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4[3U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][4U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4[4U];
    }
    if (vlSelfRef.__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][1U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5[3U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][4U] 
            = vlSelfRef.__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5[4U];
    }
    if (vlSelfRef.__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v6) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][4U] = 0U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awvalid_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wstrb_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_bready_core = 1U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arvalid_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arburst_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_rready_core = 1U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awburst_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wvalid_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[3U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awsize_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awlen_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_araddr_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arid_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arlen_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arsize_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awaddr_core = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awid_core = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awvalid_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awburst_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awsize_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awlen_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awaddr_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awid_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg;
                    }
                }
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wstrb_core = 0xffffU;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wvalid_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[2U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[3U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[3U];
                    }
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_bready_core = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_bready_core = 1U;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awvalid_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awburst_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awsize_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awlen_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awaddr_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awid_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg;
                    }
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wstrb_core = 0xf000U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wvalid_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[0U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[0U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[1U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[1U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[2U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[2U];
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[3U] 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[3U];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wstrb_core = 0xffffU;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wvalid_core = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[0U] 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[0U];
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[1U] 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[1U];
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[2U] 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[2U];
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core[3U] 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg[3U];
                }
                if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_bready_core = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awvalid_core = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awburst_core = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awsize_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awlen_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awaddr_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awid_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arvalid_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arburst_core = 1U;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_araddr_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arid_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arlen_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg;
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arsize_core 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg;
                    }
                }
                if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_rready_core = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_rready_core = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arvalid_core = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arburst_core = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_araddr_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arid_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arlen_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arsize_core 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg;
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_rready_core = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arvalid_core = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arburst_core = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_araddr_core 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arid_core 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arlen_core 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arsize_core 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg;
            }
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__post_mispredict_bubble_r 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
           & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) 
              & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_id 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latch_id;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid = 0U;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_next 
            = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg))
                ? 0U : ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg))
                         ? 0U : 4U));
        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg) 
                      >> 1U)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_id 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latch_id;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid 
                = (1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg)));
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg))) {
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_next 
                = ((0x10U <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latency_cnt))
                    ? 4U : 3U);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_id 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latch_id;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_next = 3U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_id = 0U;
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_next = 0U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_write_val 
        = ((0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb))
            ? lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb
            : ((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb))
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                   | lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb)
                : ((2U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb))
                    ? ((~ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb) 
                       & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val)
                    : lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_active = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_funct3 = 0U;
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
         & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                   >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_active = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_funct3 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_rd_comb = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_rd_comb 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                              >> 0x00000014U));
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_rd_comb = 0U;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 1U) & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                           >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_active = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_funct3 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_rd_comb 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                              >> 0x00000014U));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_we[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_we[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_addr[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_addr[1U] = 0U;
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
         & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                   >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_we[0U] 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                     >> 0x0000001eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_addr[0U] 
            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U] 
               + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][1U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U];
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[1U] = 0U;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 1U) & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                           >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_we[1U] 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                     >> 0x0000001eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_addr[1U] 
            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U] 
               + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][1U]);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U];
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 2U) & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                           >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_active = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_funct3 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_rd_comb 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
                              >> 0x00000014U));
    }
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_next = 0U;
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_next 
            = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg))
                ? 0U : ((1U >= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_cnt))
                         ? 3U : 2U));
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_next = 2U;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 3U, vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i)) {
                if ((((2U >= (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i)) 
                      && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                                >> (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i)))) 
                     & (2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r
                               [((2U >= (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i))
                                  ? (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i)
                                  : 0U)][0U] >> 0x0000001cU)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_next 
                        = ((0U == ((2U >= (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i))
                                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r
                                   [(3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i)]
                                    : 0U)) ? 3U : 1U);
                    goto __Vlabel0;
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i 
                    = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i);
            }
            __Vlabel0: ;
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_lo_comb = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_hi_comb = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full = 0ULL;
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
         & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                   >> 0x0000001cU)))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full 
            = ((0x00000200U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U])
                ? 0ULL : ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U])
                           ? ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U])
                               ? ((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U])) 
                                  * (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U])))
                               : ((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U]))) 
                                  * (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U]))))
                           : ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U])
                               ? VL_MULS_QQQ(64, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U]))), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U] 
                                                                           >> 0x1fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U]))))
                               : VL_MULS_QQQ(64, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[0U]))), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U] 
                                                                           >> 0x1fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[0U])))))));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_lo_comb 
            = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_hi_comb 
            = (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full 
                       >> 0x20U));
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 1U) & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                           >> 0x0000001cU)))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full 
            = ((0x00000200U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U])
                ? 0ULL : ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U])
                           ? ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U])
                               ? ((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U])) 
                                  * (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U])))
                               : ((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U] 
                                                                >> 0x1fU))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U]))) 
                                  * (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U]))))
                           : ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U])
                               ? VL_MULS_QQQ(64, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U]))), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U] 
                                                                           >> 0x1fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U]))))
                               : VL_MULS_QQQ(64, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[1U]))), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U] 
                                                                           >> 0x1fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[1U])))))));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_lo_comb 
            = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_hi_comb 
            = (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full 
                       >> 0x20U));
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 2U) & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                           >> 0x0000001cU)))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full 
            = ((0x00000200U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U])
                ? 0ULL : ((0x00000100U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U])
                           ? ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U])
                               ? ((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U])) 
                                  * (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[2U])))
                               : ((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U] 
                                                                >> 0x1fU))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U]))) 
                                  * (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[2U]))))
                           : ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U])
                               ? VL_MULS_QQQ(64, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U]))), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[2U] 
                                                                           >> 0x1fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[2U]))))
                               : VL_MULS_QQQ(64, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[2U]))), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[2U] 
                                                                           >> 0x1fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[2U])))))));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_lo_comb 
            = (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_hi_comb 
            = (IData)((lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_full 
                       >> 0x20U));
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
            & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                      >> 0x0000001cU))) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                                              >> 0x0000001eU)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0 
        = ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
             >> 1U) & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                              >> 0x0000001cU))) & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                                                    >> 0x0000001eU)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0 
        = ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
             >> 2U) & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                              >> 0x0000001cU))) & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
                                                    >> 0x0000001eU)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h9e425864__0) 
              << 2U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
            & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                      >> 0x0000001cU))) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] 
                                              >> 7U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0 
        = ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
             >> 1U) & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                              >> 0x0000001cU))) & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] 
                                                    >> 7U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0 
        = ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
             >> 2U) & (1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                              >> 0x0000001cU))) & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] 
                                                    >> 7U)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf8afc26f__0) 
              << 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch = 0U;
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
         & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                   >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch = 1U;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 1U) & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                           >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch = 1U;
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          >> 2U) & (6U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                           >> 0x0000001cU)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending = 0U;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
          & (2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                    >> 0x0000001cU))) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending = 1U;
    }
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
           >> 1U) & (2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                            >> 0x0000001cU))) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending = 1U;
    }
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
           >> 2U) & (2U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                            >> 0x0000001cU))) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending = 1U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0;
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[0U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1;
        } else if ((1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                                     >> 0x0000001cU)) 
                             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                >> 0x0000001eU))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[0U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2;
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0;
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1;
        } else if ((1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                                     >> 0x0000001cU)) 
                             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                >> 0x0000001eU))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2;
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__0;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[2U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1;
        } else if ((1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                                     >> 0x0000001cU)) 
                             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                >> 0x0000001eU))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[2U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2;
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
            & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                      >> 0x0000001cU))) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                              >> 0x0000001eU)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0 
        = ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
             >> 1U) & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                              >> 0x0000001cU))) & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                                    >> 0x0000001eU)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0 
        = ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
             >> 2U) & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                              >> 0x0000001cU))) & (~ 
                                                   (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                                    >> 0x0000001eU)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_heb20a36c__0) 
              << 2U));
}

void Vlumi_v1_tb_top___024root___nba_sequent__TOP__2(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___nba_sequent__TOP__2\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*5:0*/, 4> lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem[__Vi0] = 0;
    }
    CData/*2:0*/ __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin;
    __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin = 0;
    CData/*2:0*/ __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin;
    __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin = 0;
    CData/*2:0*/ __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin;
    __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__m_axi_awready;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_awready = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__m_axi_wready;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_wready = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid = 0;
    CData/*3:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr = 0;
    CData/*2:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size = 0;
    CData/*1:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__m_axi_arready;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_arready = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid = 0;
    CData/*3:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr = 0;
    CData/*7:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len = 0;
    CData/*2:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size = 0;
    CData/*1:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state = 0;
    IData/*31:0*/ __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat = 0;
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__m_axi_rlast;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_rlast = 0;
    CData/*5:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0;
    __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 = 0;
    VlWide<5>/*134:0*/ __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0;
    VL_ZERO_W(135, __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0);
    CData/*1:0*/ __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0;
    __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin;
    __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin;
    __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_arready = vlSelfRef.lumi_v1_tb_top__DOT__m_axi_arready;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid = vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rvalid;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_rlast = vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rlast;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_awready = vlSelfRef.lumi_v1_tb_top__DOT__m_axi_awready;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_wready = vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wready;
    __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid = vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bvalid;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state;
    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0 = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
        if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_empty)) 
             & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_awready))) {
            __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin)));
        }
        if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_empty)) 
             & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_arready))) {
            __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin)));
        }
        if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_empty)) 
             & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wready))) {
            __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin)));
        }
        if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_full)) 
             & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bvalid))) {
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 
                = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bid) 
                    << 2U) | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bresp));
            __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 
                = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin));
            __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0 = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin)));
        }
        if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_full)) 
             & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rvalid))) {
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[0U] 
                = ((vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[0U] 
                    << 3U) | (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rresp) 
                               << 1U) | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rlast)));
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[1U] 
                = ((vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[0U] 
                    >> 0x0000001dU) | (vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[1U] 
                                       << 3U));
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[2U] 
                = ((vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[1U] 
                    >> 0x0000001dU) | (vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[2U] 
                                       << 3U));
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[3U] 
                = ((vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[2U] 
                    >> 0x0000001dU) | (vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[3U] 
                                       << 3U));
            __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[4U] 
                = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rid) 
                    << 3U) | (vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[3U] 
                              >> 0x0000001dU));
            __VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0 
                = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin));
            __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0 = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin)));
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync0;
        if ((0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state))) {
            __Vdly__lumi_v1_tb_top__DOT__m_axi_awready = 1U;
            __Vdly__lumi_v1_tb_top__DOT__m_axi_wready = 0U;
            __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid = 0U;
            if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_empty)) 
                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_awready))) {
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id 
                    = (0x0000000fU & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem
                                              [(3U 
                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin))] 
                                              >> 0x00000015U)));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr 
                    = (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem
                               [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin))] 
                               >> 0x00000019U));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size 
                    = (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem
                                     [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin))] 
                                     >> 0x0000000aU)));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state = 1U;
                __Vdly__lumi_v1_tb_top__DOT__m_axi_awready = 0U;
                __Vdly__lumi_v1_tb_top__DOT__m_axi_wready = 1U;
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state))) {
            if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_empty)) 
                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wready))) {
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr 
                    = (vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr 
                       + ((IData)(1U) << (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size)));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat 
                    = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat);
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[0U] 
                    = ((0xffff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[0U]) 
                       | ((((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                             ? 0xffU : 0U) << 8U) | 
                          ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                            ? 0xffU : 0U)));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[0U] 
                    = ((0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[0U]) 
                       | (0xffff0000U & ((((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x00000018U) 
                                         | (((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                              ? 0xffU
                                              : 0U) 
                                            << 0x00000010U))));
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                     [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__write_count 
                        = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__write_count);
                    __Vdly__lumi_v1_tb_top__DOT__m_axi_wready = 0U;
                    __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state = 2U;
                    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bid 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id;
                    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bresp = 0U;
                    __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid = 1U;
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[1U] 
                    = ((0xffff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[1U]) 
                       | ((((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                             ? 0xffU : 0U) << 8U) | 
                          ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                            ? 0xffU : 0U)));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[1U] 
                    = ((0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[1U]) 
                       | (0xffff0000U & ((((0x00000080U 
                                            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x00000018U) 
                                         | (((0x00000040U 
                                              & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                              ? 0xffU
                                              : 0U) 
                                            << 0x00000010U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[2U] 
                    = ((0xffff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[2U]) 
                       | ((((0x00000200U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                             ? 0xffU : 0U) << 8U) | 
                          ((0x00000100U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                            ? 0xffU : 0U)));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[2U] 
                    = ((0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[2U]) 
                       | (0xffff0000U & ((((0x00000800U 
                                            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x00000018U) 
                                         | (((0x00000400U 
                                              & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                              ? 0xffU
                                              : 0U) 
                                            << 0x00000010U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[3U] 
                    = ((0xffff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[3U]) 
                       | ((((0x00002000U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                             ? 0xffU : 0U) << 8U) | 
                          ((0x00001000U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                            ? 0xffU : 0U)));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[3U] 
                    = ((0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[3U]) 
                       | (0xffff0000U & ((((0x00008000U 
                                            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x00000018U) 
                                         | (((0x00004000U 
                                              & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wstrb))
                                              ? 0xffU
                                              : 0U) 
                                            << 0x00000010U))));
                __Vtemp_2[1U] = ((vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                                  [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][1U] 
                                  & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[1U])) 
                                 | (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                      [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][2U] 
                                      << 0x0000000fU) 
                                     | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                        [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][1U] 
                                        >> 0x00000011U)) 
                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[1U]));
                __Vtemp_2[2U] = ((vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                                  [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][2U] 
                                  & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[2U])) 
                                 | (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                      [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][3U] 
                                      << 0x0000000fU) 
                                     | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                        [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][2U] 
                                        >> 0x00000011U)) 
                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[2U]));
                __Vtemp_2[3U] = ((vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                                  [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][3U] 
                                  & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[3U])) 
                                 | (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                      [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][4U] 
                                      << 0x0000000fU) 
                                     | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                        [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][3U] 
                                        >> 0x00000011U)) 
                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[3U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem[(0x00003fffU 
                                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][0U] 
                    = ((vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                        [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][0U] 
                        & (~ vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[0U])) 
                       | (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                            [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][1U] 
                            << 0x0000000fU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem
                                               [(3U 
                                                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin))][0U] 
                                               >> 0x00000011U)) 
                          & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__mask[0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem[(0x00003fffU 
                                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][1U] 
                    = __Vtemp_2[1U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem[(0x00003fffU 
                                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][2U] 
                    = __Vtemp_2[2U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem[(0x00003fffU 
                                                                    & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk2__DOT__line)][3U] 
                    = __Vtemp_2[3U];
            }
        } else if ((2U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state))) {
            if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bvalid) 
                 & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_full)))) {
                __Vdly__lumi_v1_tb_top__DOT__m_axi_awready = 1U;
                __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid = 0U;
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state = 0U;
            }
        }
        if ((0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state))) {
            __Vdly__lumi_v1_tb_top__DOT__m_axi_arready = 1U;
            __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid = 0U;
            if (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_empty)) 
                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_arready))) {
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id 
                    = (0x0000000fU & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem
                                              [(3U 
                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin))] 
                                              >> 0x00000015U)));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr 
                    = (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem
                               [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin))] 
                               >> 0x00000019U));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len 
                    = (0x000000ffU & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem
                                              [(3U 
                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin))] 
                                              >> 0x0000000dU)));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size 
                    = (7U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem
                                     [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin))] 
                                     >> 0x0000000aU)));
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state = 1U;
                __Vdly__lumi_v1_tb_top__DOT__m_axi_arready = 0U;
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state))) {
            if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rvalid)) 
                       | (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_full))))) {
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr 
                    = (vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr 
                       + ((IData)(1U) << (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size)));
                vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rid 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id;
                vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[0U] 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                    [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk4__DOT__line)][0U];
                vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[1U] 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                    [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk4__DOT__line)][1U];
                vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[2U] 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                    [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk4__DOT__line)][2U];
                vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[3U] 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                    [(0x00003fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__unnamedblk4__DOT__line)][3U];
                vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rresp = 0U;
                __Vdly__lumi_v1_tb_top__DOT__m_axi_rlast 
                    = (vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat 
                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len));
                __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid = 1U;
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat 
                    = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat);
                if ((vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat 
                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__read_count 
                        = ((IData)(1U) + vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__read_count);
                }
            }
            if (((((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state)) 
                   & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rvalid)) 
                  & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_full))) 
                 & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rlast))) {
                __Vdly__lumi_v1_tb_top__DOT__m_axi_arready = 1U;
                __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid = 0U;
                __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state = 0U;
            }
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync0 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray;
    } else {
        __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync1 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync1 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync1 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1 = 0U;
        __Vdly__lumi_v1_tb_top__DOT__m_axi_awready = 1U;
        __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state = 0U;
        __Vdly__lumi_v1_tb_top__DOT__m_axi_wready = 0U;
        __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bid = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bresp = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat = 0U;
        __Vdly__lumi_v1_tb_top__DOT__m_axi_arready = 1U;
        __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state = 0U;
        __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rid = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[0U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rdata[3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rresp = 0U;
        __Vdly__lumi_v1_tb_top__DOT__m_axi_rlast = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync0 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync0 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync0 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync0 = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync0 = 0U;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__mem__v0;
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0][0U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0][1U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0][2U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0][3U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[3U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem[__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0][4U] 
            = __VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem__v0[4U];
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin) 
           ^ VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin), 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin) 
           ^ VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin), 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_awready = __Vdly__lumi_v1_tb_top__DOT__m_axi_awready;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat;
    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_wready = __Vdly__lumi_v1_tb_top__DOT__m_axi_wready;
    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_bvalid = __Vdly__lumi_v1_tb_top__DOT__m_axi_bvalid;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin 
        = __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin 
        = __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin;
    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_arready = __Vdly__lumi_v1_tb_top__DOT__m_axi_arready;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state;
    vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat 
        = __Vdly__lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat;
    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rvalid = __Vdly__lumi_v1_tb_top__DOT__m_axi_rvalid;
    vlSelfRef.lumi_v1_tb_top__DOT__m_axi_rlast = __Vdly__lumi_v1_tb_top__DOT__m_axi_rlast;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_full 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray) 
           == ((6U & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin 
        = __Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin) 
           ^ VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin), 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin) 
           ^ VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin), 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin) 
           ^ VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin), 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_empty 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync1) 
           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray));
}

void Vlumi_v1_tb_top___024root___nba_sequent__TOP__3(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___nba_sequent__TOP__3\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst;
    __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst;
    __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst;
    __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst = 0;
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
    CData/*0:0*/ __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done;
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done = 0;
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
    CData/*0:0*/ __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8 = 0;
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
    __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v1 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v4 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v5 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v6 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v7 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v9 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem__v1 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v0 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v1 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v2 = 0U;
    __VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram__v3 = 0U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
                       & (0x00004aa0U <= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[0U])) 
                      & (0x00004ac0U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[0U]))))) {
        VL_WRITEF_NX("[PD-DBG] pd_adv=%0b f2v=%0b fetch_act=%0b valid=%06b pc0=0x%08h cnt=%0d dib_acc=%0b stall=%0b dib_cnt=%0d pipe_stall=%0b\n",10
                     , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_advance
                     , '#',1,((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict)) 
                              & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_valid_r))
                     , '#',1,((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)) 
                              | (2U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)))
                     , '#',6,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid)
                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[0U]
                     , '#',4,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_count
                     , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dib_can_accept)
                     , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall
                     , '#',6,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count)
                     , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__pipe_stall);
    }
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
            if ((((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                  & (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit));
            }
            if ((((0x13U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]) 
                  & (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[0U])) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit));
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
            if ((((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                  & (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit));
            }
            if ((((0x13U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]) 
                  & (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[1U])) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit));
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
            if ((((0x33U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                  & (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit));
            }
            if ((((0x13U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]) 
                  & (7U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct7[2U])) 
                 & (3U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit));
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
        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
              & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
             & (0x0bU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit = 1U;
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
             & (0x0bU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit = 1U;
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
             & (0x0bU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U]))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit = 1U;
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
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
              & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) 
             & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
            if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                        >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            } else if ((2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
              & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) 
             & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
            if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                        >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            } else if ((2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
              & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) 
             & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
            if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                        >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            } else if ((2U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
               & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) 
              & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U])) 
             & (4U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                       >> 0x00000014U)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit = 1U;
        }
        if (((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                 >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
               & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) 
              & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U])) 
             & (4U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                       >> 0x00000014U)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit = 1U;
        }
        if (((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                 >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
               & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) 
              & (2U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U])) 
             & (4U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                       >> 0x00000014U)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit = 1U;
        }
        if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
               & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[0U]))) 
              & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[0U])) 
             & (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[0U]))) {
            if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                        >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            } else if ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 1U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[1U]))) 
              & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[1U])) 
             & (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[1U]))) {
            if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                        >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            } else if ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            }
        }
        if ((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                >> 2U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[2U]))) 
              & (0x0fU == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__opcode[2U])) 
             & (6U == vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__funct3[2U]))) {
            if ((0U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                        >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            } else if ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U] 
                               >> 0x00000014U))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit 
                    = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit));
            }
        }
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst 
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
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__pc 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal 
                = (IData)((0x0000006fU == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd 
                = (0x0000001fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed));
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr 
                = (IData)((0x00000067U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst)));
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
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst 
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
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__pc 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U];
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal 
                = (IData)((0x0000006fU == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd 
                = (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                  >> 5U));
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr 
                = (IData)((0x00000067U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst)));
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
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst 
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
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_branch__69__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__pc 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U];
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_1__is_jal 
                = (IData)((0x0000006fU == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jal__70__inst)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd 
                = (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                  >> 0x0aU));
            __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[(0x00003fffU 
                                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr)].__PVT__rd_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT____VlemCall_2__is_jalr 
                = (IData)((0x00000067U == (0x0000007fU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_mon__DOT__is_jalr__71__inst)));
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
                if (((0x00004700U <= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]) 
                     & (0x00006b00U >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]))) {
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
                if (((0x00004700U <= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]) 
                     & (0x00006b00U >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]))) {
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
                if (((0x00004700U <= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]) 
                     & (0x00006b00U >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]))) {
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
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done = 1U;
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
            if (VL_UNLIKELY((((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid) 
                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we)) 
                               & (0x0003ffe0U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr)) 
                              & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done)))))) {
                VL_WRITEF_NX("[SB] STORE-to-0x3FFE0 detected: magic=0x%08h\n",1
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata);
                __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code = 0U;
            }
            __VdlyVal__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[8U];
            __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8 = 1U;
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
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit = 0ULL;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_retired = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_traps = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__trace_count = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken = 0ULL;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__total_retired = 0ULL;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code = 0xffffffffU;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt = 0ULL;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_commit_pc = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__spin_count = 0U;
        __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__restart_count = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_commit_pc = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__prev_had_commit = 0U;
        __VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v32 = 1U;
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
    vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done 
        = __Vdly__lumi_v1_tb_top__DOT__u_sb__DOT__test_done;
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
    }
    if (__VdlySet__lumi_v1_tb_top__DOT__u_sb__DOT__reg_file__v8) {
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
}
