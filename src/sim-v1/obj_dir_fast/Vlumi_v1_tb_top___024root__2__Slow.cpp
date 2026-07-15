// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___stl_sequent__TOP__2(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___stl_sequent__TOP__2\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 = 0;
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 = 0;
    CData/*6:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 = 0;
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select = 0;
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_bytes_consumed 
        = (0x0000001fU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
                           ? ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo) 
                              - (IData)(2U)) : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo) 
                                                - (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_start_offset))));
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_pred_taken) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
            = (0x3dU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
            = (0x3dU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[1U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
            = (0x3bU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
            = (0x3bU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[2U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
            = (0x37U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
            = (0x37U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[3U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
            = (0x2fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
            = (0x2fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[4U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid 
            = (0x1fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[5U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[5U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed 
            = (0x1fU & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[5U] = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_hw_out = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_valid_out = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_bytes_consumed 
            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r)
                ? 2U : ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))
                         ? ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed))
                             ? 2U : 4U) : 0U));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpmcounter_write_conflict 
        = (((((((((((0x0b1fU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    | (0x0b9fU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                  << 3U) | ((((0x0b1eU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              | (0x0b9eU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                             & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                            << 2U)) | (((((0x0b1dU 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          | (0x0b9dU 
                                             == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                        << 1U) | ((
                                                   (0x0b1cU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b9cU 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
               << 0x0000000bU) | (((((((0x0b1bU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                       | (0x0b9bU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                     << 3U) | ((((0x0b1aU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 | (0x0b9aU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                               << 2U)) 
                                   | (((((0x0b19U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                         | (0x0b99U 
                                            == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                       << 1U) | (((0x0b18U 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  | (0x0b98U 
                                                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
                                  << 7U)) | (((((((
                                                   (0x0b17U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b97U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 << 3U) 
                                                | ((((0x0b16U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     | (0x0b96U 
                                                        == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   << 2U)) 
                                               | (((((0x0b15U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     | (0x0b95U 
                                                        == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   << 1U) 
                                                  | (((0x0b14U 
                                                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                      | (0x0b94U 
                                                         == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
                                              << 3U) 
                                             | (((((0x0b13U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b93U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 << 2U) 
                                                | (((((0x0b12U 
                                                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                      | (0x0b92U 
                                                         == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                    << 1U) 
                                                   | (((0x0b11U 
                                                        == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                       | (0x0b91U 
                                                          == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))) 
            << 0x0000000eU) | (((((((((0x0b10U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      | (0x0b90U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                    << 3U) | ((((0x0b0fU 
                                                 == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                | (0x0b8fU 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                              << 2U)) 
                                  | (((((0x0b0eU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        | (0x0b8eU 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                      << 1U) | (((0x0b0dU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 | (0x0b8dU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
                                 << 0x0000000aU) | 
                                (((((0x0b0cU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    | (0x0b8cU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                  << 9U) | (((((0x0b0bU 
                                                == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                               | (0x0b8bU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                             << 8U) 
                                            | ((((0x0b0aU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 | (0x0b8aU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                               << 7U)))) 
                               | ((((((((0x0b09U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        | (0x0b89U 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                      << 3U) | ((((0x0b08U 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  | (0x0b88U 
                                                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                << 2U)) 
                                    | (((((0x0b07U 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          | (0x0b87U 
                                             == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                        << 1U) | ((
                                                   (0x0b06U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b86U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
                                   << 3U) | (((((0x0b05U 
                                                 == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                | (0x0b85U 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                              << 2U) 
                                             | (((((0x0b04U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b84U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 << 1U) 
                                                | (((0x0b03U 
                                                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    | (0x0b83U 
                                                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_write_val 
        = ((0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb
            : ((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb))
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val 
                   | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb)
                : ((2U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb))
                    ? ((~ vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb) 
                       & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val)
                    : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select = 0U;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
          & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[0U])) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en 
            = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[0U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U] 
            = (((7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][0U] 
                        >> 0x0000001cU)) & (0U != (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[0U][2U] 
                                                      >> 7U))))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[0U]);
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select 
            = (1U | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select));
    }
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r) 
         | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en 
            = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en));
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_rd_r;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_result_r;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_rd_reg;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U] 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_result_r;
        }
    } else if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid) 
                  >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[1U])) 
                & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
                      >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en 
            = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U] 
            = (((7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][0U] 
                        >> 0x0000001cU)) & (0U != (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[1U][2U] 
                                                      >> 7U))))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[1U]);
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select 
            = (2U | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select));
    }
    if ((IData)((((4U == (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid))) 
                  & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
                        >> 2U))) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[2U])))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en 
            = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U] 
            = (((7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][0U] 
                        >> 0x0000001cU)) & (0U != (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                                                      >> 7U))))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U]);
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select 
            = (4U | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select));
    }
    if ((IData)(((((((4U == (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r))) 
                    & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r))) 
                   & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception) 
                         >> 2U))) & (~ ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select) 
                                        >> 2U))) & 
                 (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[2U])))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en 
            = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[2U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U] 
            = (((7U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][0U] 
                        >> 0x0000001cU)) & (0U != (7U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[2U][2U] 
                                                      >> 7U))))
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[2U]);
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select 
            = (4U | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__wr_select));
    }
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_pending) 
           & (0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en))) 
          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r))) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en 
            = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_rd_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U] 
            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_is_csr_r)
                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_csr_rdata_r
                : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_data_r);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en) 
           & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_req 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en) 
            >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U]));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_conflict 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
            & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_req)) 
           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
              == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U]));
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid) {
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask 
                = (1U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask));
        }
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask 
                = (2U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask));
        }
        if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask 
                = (4U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask));
        }
        if ((8U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask 
                = (8U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask));
        }
        if ((0x00000010U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask 
                = (0x00000010U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask));
        }
        if ((0x00000020U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask 
                = (0x00000020U | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask));
        }
    }
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
         & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[0U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[0U]);
        {
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 7U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 2U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 
                = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 7U));
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                           >> 1U)) 
                           | ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 0x0000000aU)) 
                                | (1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 5U))) << 3U) 
                              | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 4U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00010013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                             << 7U)));
                    goto __Vlabel0;
                } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                                << 7U))));
                    goto __Vlabel0;
                } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002023U | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 7U)))));
                    goto __Vlabel0;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel0;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00001063U | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                              >> 4U))))));
                            goto __Vlabel0;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x63U | ((((0x00000800U 
                                               & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  >> 1U)) 
                                              | (0x000007e0U 
                                                 & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                             << 0x00000014U) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 0x0000000fU) 
                                               | ((0x00000f00U 
                                                   & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                      << 7U)) 
                                                  | (0x00000080U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 4U))))));
                            goto __Vlabel0;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 2U)))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x006fU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                        goto __Vlabel0;
                    } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                                goto __Vlabel0;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00007033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel0;
                                } else {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00006033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel0;
                                }
                            } else if ((0x00000020U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00004033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x40000033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel0;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00007013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                        << 7U))));
                            goto __Vlabel0;
                        }
                    } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x40005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel0;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel0;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000aU) 
                                   | (((((4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0000000aU)) 
                                         | (3U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 3U))) 
                                        << 7U) | ((
                                                   (2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U))) 
                                                  << 5U)) 
                                      | (0x00000010U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00010113U | (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  << 0x00000014U));
                            goto __Vlabel0;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((((0x00007ffeU & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 0x0cU))) 
                                    << 0x00000011U) 
                                   | (0x0001f000U & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       << 0x0000000aU)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x37U | ((0xfffff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel0;
                        }
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 2U))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                         << 0x00000014U) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel0;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 0x0000000cU) | (((((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 8U))) 
                                                 << 0x0000000aU) 
                                                | (((0x0000000cU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                             >> 7U)))) 
                                                   << 6U)) 
                                               | ((((2U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0bU))) 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 2U)))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00efU | ((((0x00000800U 
                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                            >> 9U)) 
                                        | ((0x000007feU 
                                            & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                           | (1U & 
                                              (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               >> 0x0bU)))) 
                                       << 0x00000014U) 
                                      | (0x000ff000U 
                                         & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                    goto __Vlabel0;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 6U) | ((0x00000020U 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 7U)) | 
                                      (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                     << 0x00000014U) 
                                    | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                        << 0x0000000fU) 
                                       | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 7U))));
                    goto __Vlabel0;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                            goto __Vlabel0;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((0x000000c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 1U)) 
                                   | (0x0000003cU & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 7U)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00012023U | ((
                                                   ((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        << 7U))));
                            goto __Vlabel0;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel0;
                    } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 2U)))) {
                            if ((0U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0x00000073U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00e7U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 0x0000000fU));
                                goto __Vlabel0;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                << 0x00000012U)) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 7U))));
                            goto __Vlabel0;
                        }
                    } else if ((0U == (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U)))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x0067U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 0x0000000fU));
                        goto __Vlabel0;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x33U | ((0x01f00000U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            << 0x00000012U)) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel0;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel0;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU))) 
                                << 5U) | (0x0000001cU 
                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                             >> 2U)));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00012003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                 << 7U)));
                        goto __Vlabel0;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel0;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00001013U | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 7U))));
                    goto __Vlabel0;
                }
            } else {
                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
            __Vlabel0: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[0U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
           & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0) 
              << 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
        = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
    if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16) 
                                  << 2U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x00000014U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      >> 0x00000019U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                = (0x00000030U | (0xffffff87U 
                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0x00000030U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                        >> 7U)))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0x00000030U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        }
    } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]);
                    if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1) 
                                  << 3U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                            = (0x00000018U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                     >> 7U))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        }
    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        }
    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0x00000038U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                    if ((2U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4 
                            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                                     >> 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]) 
                               | (0x000000ffU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4) 
                                                 << 7U)));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0x00000038U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        }
    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                    = (0x00000020U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        }
    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      >> 0x00000019U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U]));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U]);
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
          >> 1U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[1U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[1U]);
        {
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 7U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 2U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 
                = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 7U));
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                           >> 1U)) 
                           | ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 0x0000000aU)) 
                                | (1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 5U))) << 3U) 
                              | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 4U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00010013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                             << 7U)));
                    goto __Vlabel1;
                } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                                << 7U))));
                    goto __Vlabel1;
                } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002023U | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 7U)))));
                    goto __Vlabel1;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel1;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00001063U | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                              >> 4U))))));
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x63U | ((((0x00000800U 
                                               & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  >> 1U)) 
                                              | (0x000007e0U 
                                                 & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                             << 0x00000014U) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 0x0000000fU) 
                                               | ((0x00000f00U 
                                                   & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                      << 7U)) 
                                                  | (0x00000080U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 4U))))));
                            goto __Vlabel1;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 2U)))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x006fU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                        goto __Vlabel1;
                    } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                                goto __Vlabel1;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00007033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00006033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel1;
                                }
                            } else if ((0x00000020U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00004033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x40000033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel1;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00007013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                        << 7U))));
                            goto __Vlabel1;
                        }
                    } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x40005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel1;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel1;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000aU) 
                                   | (((((4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0000000aU)) 
                                         | (3U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 3U))) 
                                        << 7U) | ((
                                                   (2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U))) 
                                                  << 5U)) 
                                      | (0x00000010U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00010113U | (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  << 0x00000014U));
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((((0x00007ffeU & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 0x0cU))) 
                                    << 0x00000011U) 
                                   | (0x0001f000U & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       << 0x0000000aU)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x37U | ((0xfffff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel1;
                        }
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 2U))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                         << 0x00000014U) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel1;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 0x0000000cU) | (((((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 8U))) 
                                                 << 0x0000000aU) 
                                                | (((0x0000000cU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                             >> 7U)))) 
                                                   << 6U)) 
                                               | ((((2U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0bU))) 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 2U)))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00efU | ((((0x00000800U 
                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                            >> 9U)) 
                                        | ((0x000007feU 
                                            & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                           | (1U & 
                                              (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               >> 0x0bU)))) 
                                       << 0x00000014U) 
                                      | (0x000ff000U 
                                         & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                    goto __Vlabel1;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 6U) | ((0x00000020U 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 7U)) | 
                                      (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                     << 0x00000014U) 
                                    | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                        << 0x0000000fU) 
                                       | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 7U))));
                    goto __Vlabel1;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((0x000000c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 1U)) 
                                   | (0x0000003cU & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 7U)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00012023U | ((
                                                   ((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        << 7U))));
                            goto __Vlabel1;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel1;
                    } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 2U)))) {
                            if ((0U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0x00000073U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00e7U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 0x0000000fU));
                                goto __Vlabel1;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                << 0x00000012U)) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 7U))));
                            goto __Vlabel1;
                        }
                    } else if ((0U == (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U)))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x0067U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 0x0000000fU));
                        goto __Vlabel1;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x33U | ((0x01f00000U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            << 0x00000012U)) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel1;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel1;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU))) 
                                << 5U) | (0x0000001cU 
                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                             >> 2U)));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00012003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                 << 7U)));
                        goto __Vlabel1;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel1;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00001013U | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 7U))));
                    goto __Vlabel1;
                }
            } else {
                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
            __Vlabel1: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[1U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
            >> 1U) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0) 
              << 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
        = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
    if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16) 
                                  << 2U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x00000014U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      >> 0x00000019U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                = (0x00000030U | (0xffffff87U 
                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0x00000030U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                        >> 7U)))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0x00000030U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        }
    } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]);
                    if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1) 
                                  << 3U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0x00000018U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                     >> 7U))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        }
    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        }
    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0x00000038U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    if ((2U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4 
                            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                                     >> 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]) 
                               | (0x000000ffU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4) 
                                                 << 7U)));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0x00000038U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        }
    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0x00000020U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        }
    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      >> 0x00000019U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
          >> 2U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[2U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[2U]);
        {
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 7U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 2U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 
                = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 7U));
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                           >> 1U)) 
                           | ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 0x0000000aU)) 
                                | (1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 5U))) << 3U) 
                              | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 4U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00010013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                             << 7U)));
                    goto __Vlabel2;
                } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                                << 7U))));
                    goto __Vlabel2;
                } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002023U | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 7U)))));
                    goto __Vlabel2;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel2;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00001063U | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                              >> 4U))))));
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x63U | ((((0x00000800U 
                                               & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  >> 1U)) 
                                              | (0x000007e0U 
                                                 & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                             << 0x00000014U) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 0x0000000fU) 
                                               | ((0x00000f00U 
                                                   & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                      << 7U)) 
                                                  | (0x00000080U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 4U))))));
                            goto __Vlabel2;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 2U)))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x006fU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                        goto __Vlabel2;
                    } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                                goto __Vlabel2;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00007033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel2;
                                } else {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00006033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel2;
                                }
                            } else if ((0x00000020U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00004033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x40000033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel2;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00007013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                        << 7U))));
                            goto __Vlabel2;
                        }
                    } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x40005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel2;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel2;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000aU) 
                                   | (((((4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0000000aU)) 
                                         | (3U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 3U))) 
                                        << 7U) | ((
                                                   (2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U))) 
                                                  << 5U)) 
                                      | (0x00000010U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00010113U | (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  << 0x00000014U));
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((((0x00007ffeU & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 0x0cU))) 
                                    << 0x00000011U) 
                                   | (0x0001f000U & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       << 0x0000000aU)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x37U | ((0xfffff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel2;
                        }
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 2U))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                         << 0x00000014U) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel2;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 0x0000000cU) | (((((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 8U))) 
                                                 << 0x0000000aU) 
                                                | (((0x0000000cU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                             >> 7U)))) 
                                                   << 6U)) 
                                               | ((((2U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0bU))) 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 2U)))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00efU | ((((0x00000800U 
                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                            >> 9U)) 
                                        | ((0x000007feU 
                                            & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                           | (1U & 
                                              (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               >> 0x0bU)))) 
                                       << 0x00000014U) 
                                      | (0x000ff000U 
                                         & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                    goto __Vlabel2;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 6U) | ((0x00000020U 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 7U)) | 
                                      (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                     << 0x00000014U) 
                                    | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                        << 0x0000000fU) 
                                       | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 7U))));
                    goto __Vlabel2;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((0x000000c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 1U)) 
                                   | (0x0000003cU & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 7U)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00012023U | ((
                                                   ((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        << 7U))));
                            goto __Vlabel2;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel2;
                    } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 2U)))) {
                            if ((0U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0x00000073U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00e7U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 0x0000000fU));
                                goto __Vlabel2;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                << 0x00000012U)) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 7U))));
                            goto __Vlabel2;
                        }
                    } else if ((0U == (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U)))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x0067U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 0x0000000fU));
                        goto __Vlabel2;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x33U | ((0x01f00000U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            << 0x00000012U)) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel2;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel2;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU))) 
                                << 5U) | (0x0000001cU 
                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                             >> 2U)));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00012003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                 << 7U)));
                        goto __Vlabel2;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel2;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00001013U | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 7U))));
                    goto __Vlabel2;
                }
            } else {
                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
                goto __Vlabel2;
            }
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
            __Vlabel2: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[2U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
            >> 2U) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0) 
              << 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
        = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
    if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16) 
                                  << 2U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x00000014U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      >> 0x00000019U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                = (0x00000030U | (0xffffff87U 
                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0x00000030U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                        >> 7U)))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0x00000030U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        }
    } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]);
                    if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1) 
                                  << 3U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0x00000018U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                     >> 7U))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        }
    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        }
    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0x00000038U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    if ((2U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4 
                            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                                     >> 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]) 
                               | (0x000000ffU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4) 
                                                 << 7U)));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0x00000038U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        }
    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0x00000020U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        }
    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      >> 0x00000019U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
          >> 3U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[3U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[3U]);
        {
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 7U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 2U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 
                = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 7U));
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                           >> 1U)) 
                           | ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 0x0000000aU)) 
                                | (1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 5U))) << 3U) 
                              | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 4U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00010013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                             << 7U)));
                    goto __Vlabel3;
                } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                                << 7U))));
                    goto __Vlabel3;
                } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002023U | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 7U)))));
                    goto __Vlabel3;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel3;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00001063U | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                              >> 4U))))));
                            goto __Vlabel3;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x63U | ((((0x00000800U 
                                               & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  >> 1U)) 
                                              | (0x000007e0U 
                                                 & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                             << 0x00000014U) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 0x0000000fU) 
                                               | ((0x00000f00U 
                                                   & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                      << 7U)) 
                                                  | (0x00000080U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 4U))))));
                            goto __Vlabel3;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 2U)))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x006fU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                        goto __Vlabel3;
                    } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                                goto __Vlabel3;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00007033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel3;
                                } else {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00006033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel3;
                                }
                            } else if ((0x00000020U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00004033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x40000033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel3;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00007013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                        << 7U))));
                            goto __Vlabel3;
                        }
                    } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x40005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel3;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel3;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000aU) 
                                   | (((((4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0000000aU)) 
                                         | (3U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 3U))) 
                                        << 7U) | ((
                                                   (2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U))) 
                                                  << 5U)) 
                                      | (0x00000010U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00010113U | (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  << 0x00000014U));
                            goto __Vlabel3;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((((0x00007ffeU & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 0x0cU))) 
                                    << 0x00000011U) 
                                   | (0x0001f000U & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       << 0x0000000aU)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x37U | ((0xfffff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel3;
                        }
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 2U))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                         << 0x00000014U) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel3;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 0x0000000cU) | (((((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 8U))) 
                                                 << 0x0000000aU) 
                                                | (((0x0000000cU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                             >> 7U)))) 
                                                   << 6U)) 
                                               | ((((2U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0bU))) 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 2U)))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00efU | ((((0x00000800U 
                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                            >> 9U)) 
                                        | ((0x000007feU 
                                            & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                           | (1U & 
                                              (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               >> 0x0bU)))) 
                                       << 0x00000014U) 
                                      | (0x000ff000U 
                                         & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                    goto __Vlabel3;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 6U) | ((0x00000020U 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 7U)) | 
                                      (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                     << 0x00000014U) 
                                    | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                        << 0x0000000fU) 
                                       | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 7U))));
                    goto __Vlabel3;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                            goto __Vlabel3;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((0x000000c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 1U)) 
                                   | (0x0000003cU & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 7U)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00012023U | ((
                                                   ((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        << 7U))));
                            goto __Vlabel3;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel3;
                    } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 2U)))) {
                            if ((0U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0x00000073U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00e7U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 0x0000000fU));
                                goto __Vlabel3;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                << 0x00000012U)) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 7U))));
                            goto __Vlabel3;
                        }
                    } else if ((0U == (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U)))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x0067U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 0x0000000fU));
                        goto __Vlabel3;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x33U | ((0x01f00000U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            << 0x00000012U)) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel3;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel3;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU))) 
                                << 5U) | (0x0000001cU 
                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                             >> 2U)));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00012003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                 << 7U)));
                        goto __Vlabel3;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel3;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00001013U | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 7U))));
                    goto __Vlabel3;
                }
            } else {
                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
                goto __Vlabel3;
            }
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
            __Vlabel3: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[3U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
            >> 3U) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0) 
              << 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
        = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
    if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16) 
                                  << 2U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x00000014U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      >> 0x00000019U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                = (0x00000030U | (0xffffff87U 
                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0x00000030U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                        >> 7U)))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0x00000030U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        }
    } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]);
                    if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1) 
                                  << 3U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0x00000018U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                     >> 7U))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        }
    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        }
    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0x00000038U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    if ((2U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4 
                            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                                     >> 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]) 
                               | (0x000000ffU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4) 
                                                 << 7U)));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0x00000038U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        }
    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0x00000020U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        }
    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      >> 0x00000019U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
          >> 4U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[4U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[4U]);
        {
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 7U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 2U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 
                = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 7U));
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                           >> 1U)) 
                           | ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 0x0000000aU)) 
                                | (1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 5U))) << 3U) 
                              | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 4U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00010013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                             << 7U)));
                    goto __Vlabel4;
                } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                                << 7U))));
                    goto __Vlabel4;
                } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002023U | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 7U)))));
                    goto __Vlabel4;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel4;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00001063U | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                              >> 4U))))));
                            goto __Vlabel4;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x63U | ((((0x00000800U 
                                               & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  >> 1U)) 
                                              | (0x000007e0U 
                                                 & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                             << 0x00000014U) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 0x0000000fU) 
                                               | ((0x00000f00U 
                                                   & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                      << 7U)) 
                                                  | (0x00000080U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 4U))))));
                            goto __Vlabel4;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 2U)))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x006fU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                        goto __Vlabel4;
                    } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                                goto __Vlabel4;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00007033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel4;
                                } else {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00006033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel4;
                                }
                            } else if ((0x00000020U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00004033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x40000033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel4;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00007013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                        << 7U))));
                            goto __Vlabel4;
                        }
                    } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x40005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel4;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel4;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000aU) 
                                   | (((((4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0000000aU)) 
                                         | (3U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 3U))) 
                                        << 7U) | ((
                                                   (2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U))) 
                                                  << 5U)) 
                                      | (0x00000010U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00010113U | (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  << 0x00000014U));
                            goto __Vlabel4;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((((0x00007ffeU & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 0x0cU))) 
                                    << 0x00000011U) 
                                   | (0x0001f000U & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       << 0x0000000aU)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x37U | ((0xfffff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel4;
                        }
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 2U))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                         << 0x00000014U) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel4;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 0x0000000cU) | (((((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 8U))) 
                                                 << 0x0000000aU) 
                                                | (((0x0000000cU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                             >> 7U)))) 
                                                   << 6U)) 
                                               | ((((2U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0bU))) 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 2U)))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00efU | ((((0x00000800U 
                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                            >> 9U)) 
                                        | ((0x000007feU 
                                            & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                           | (1U & 
                                              (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               >> 0x0bU)))) 
                                       << 0x00000014U) 
                                      | (0x000ff000U 
                                         & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                    goto __Vlabel4;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 6U) | ((0x00000020U 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 7U)) | 
                                      (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                     << 0x00000014U) 
                                    | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                        << 0x0000000fU) 
                                       | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 7U))));
                    goto __Vlabel4;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                            goto __Vlabel4;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((0x000000c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 1U)) 
                                   | (0x0000003cU & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 7U)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00012023U | ((
                                                   ((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        << 7U))));
                            goto __Vlabel4;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel4;
                    } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 2U)))) {
                            if ((0U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0x00000073U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00e7U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 0x0000000fU));
                                goto __Vlabel4;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                << 0x00000012U)) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 7U))));
                            goto __Vlabel4;
                        }
                    } else if ((0U == (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U)))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x0067U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 0x0000000fU));
                        goto __Vlabel4;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x33U | ((0x01f00000U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            << 0x00000012U)) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel4;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel4;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU))) 
                                << 5U) | (0x0000001cU 
                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                             >> 2U)));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00012003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                 << 7U)));
                        goto __Vlabel4;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel4;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00001013U | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 7U))));
                    goto __Vlabel4;
                }
            } else {
                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
                goto __Vlabel4;
            }
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
            __Vlabel4: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[4U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
            >> 4U) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0) 
              << 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
        = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
    if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16) 
                                  << 2U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x00000014U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      >> 0x00000019U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                = (0x00000030U | (0xffffff87U 
                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0x00000030U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                        >> 7U)))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0x00000030U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        }
    } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]);
                    if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1) 
                                  << 3U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0x00000018U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                     >> 7U))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        }
    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        }
    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0x00000038U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    if ((2U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4 
                            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                                     >> 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]) 
                               | (0x000000ffU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4) 
                                                 << 7U)));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0x00000038U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        }
    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0x00000020U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        }
    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      >> 0x00000019U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
          >> 5U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[5U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[5U]);
        {
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
            vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 7U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p 
                = (8U | (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                               >> 2U)));
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 
                = (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 7U));
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                  >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((0x000003c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                           >> 1U)) 
                           | ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 0x0000000aU)) 
                                | (1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 5U))) << 3U) 
                              | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 4U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00010013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                             << 7U)));
                    goto __Vlabel5;
                } else if ((2U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                                << 7U))));
                    goto __Vlabel5;
                } else if ((6U == (7U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                         >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = ((((8U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                    >> 2U)) | (7U & 
                                               ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0aU))) 
                            << 3U) | (4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00002023U | ((((0x00000fe0U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p)) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | (0x00000f80U 
                                                & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 7U)))));
                    goto __Vlabel5;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel5;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00001063U | ((
                                                   ((0x00000800U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 1U)) 
                                                    | (0x000007e0U 
                                                       & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((0x00000f00U 
                                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                            << 7U)) 
                                                        | (0x00000080U 
                                                           & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                              >> 4U))))));
                            goto __Vlabel5;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 9U) | ((((8U 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 9U)) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U)))) 
                                               << 5U) 
                                              | ((0x00000018U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 7U)) 
                                                 | (6U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 2U)))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x63U | ((((0x00000800U 
                                               & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  >> 1U)) 
                                              | (0x000007e0U 
                                                 & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)) 
                                             << 0x00000014U) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 0x0000000fU) 
                                               | ((0x00000f00U 
                                                   & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                      << 7U)) 
                                                  | (0x00000080U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        >> 4U))))));
                            goto __Vlabel5;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 0x0000000cU) | (
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0000000bU)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 8U))) 
                                                     << 0x0000000aU) 
                                                    | (((0x0000000cU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 7U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                                 >> 7U)))) 
                                                       << 6U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                              >> 0x0bU))) 
                                                       << 4U) 
                                                      | (0x0000000eU 
                                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                            >> 2U)))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x006fU | ((((0x00000800U 
                                             & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                >> 9U)) 
                                            | ((0x000007feU 
                                                & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                               | (1U 
                                                  & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                     >> 0x0bU)))) 
                                           << 0x00000014U) 
                                          | (0x000ff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                        goto __Vlabel5;
                    } else if ((0x00000800U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                                goto __Vlabel5;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00007033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel5;
                                } else {
                                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                        = (0x00006033U 
                                           | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                               << 0x00000014U) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                                    goto __Vlabel5;
                                }
                            } else if ((0x00000020U 
                                        & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00004033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x40000033U 
                                       | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                << 7U))));
                                goto __Vlabel5;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 6U) | ((0x00000020U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 7U)) 
                                              | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                    >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00007013U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                   << 0x00000014U) 
                                                  | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                      << 0x0000000fU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                        << 7U))));
                            goto __Vlabel5;
                        }
                    } else if ((0x00000400U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x40005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00005013U | ((0x01f00000U 
                                               & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  << 0x00000012U)) 
                                              | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                  << 0x0000000fU) 
                                                 | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p) 
                                                    << 7U))));
                        goto __Vlabel5;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 0x0cU)))) 
                                    << 0x0000000aU) 
                                   | (((((4U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 0x0000000aU)) 
                                         | (3U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 3U))) 
                                        << 7U) | ((
                                                   (2U 
                                                    & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                         >> 2U))) 
                                                  << 5U)) 
                                      | (0x00000010U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            >> 2U))));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00010113U | (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                  << 0x00000014U));
                            goto __Vlabel5;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((((0x00007ffeU & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                     >> 0x0cU))) 
                                    << 0x00000011U) 
                                   | (0x0001f000U & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       << 0x0000000aU)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x37U | ((0xfffff000U 
                                             & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                            | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                               << 7U)));
                            goto __Vlabel5;
                        }
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                  >> 0x0cU)))) 
                                << 6U) | ((0x00000020U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 7U)) 
                                          | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                >> 2U))));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                         << 0x00000014U) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel5;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 0x0000000cU) | (((((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 8U))) 
                                                 << 0x0000000aU) 
                                                | (((0x0000000cU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                             >> 7U)))) 
                                                   << 6U)) 
                                               | ((((2U 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 0x0bU))) 
                                                   << 4U) 
                                                  | (0x0000000eU 
                                                     & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                        >> 2U)))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00efU | ((((0x00000800U 
                                         & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                            >> 9U)) 
                                        | ((0x000007feU 
                                            & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                           | (1U & 
                                              (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               >> 0x0bU)))) 
                                       << 0x00000014U) 
                                      | (0x000ff000U 
                                         & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm)));
                    goto __Vlabel5;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              >> 0x0cU)))) 
                            << 6U) | ((0x00000020U 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 7U)) | 
                                      (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U))));
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x13U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                     << 0x00000014U) 
                                    | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                        << 0x0000000fU) 
                                       | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 7U))));
                    goto __Vlabel5;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst)))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                            goto __Vlabel5;
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                = ((0x000000c0U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 1U)) 
                                   | (0x0000003cU & 
                                      ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                       >> 7U)));
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x00012023U | ((
                                                   ((0x00000fe0U 
                                                     & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm) 
                                                    | (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                          >> 2U))) 
                                                   << 0x00000014U) 
                                                  | (0x00000f80U 
                                                     & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                                        << 7U))));
                            goto __Vlabel5;
                        }
                    } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel5;
                    } else if ((0x00001000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                   >> 2U)))) {
                            if ((0U == (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1))) {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0x00000073U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                    = (0x00e7U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 0x0000000fU));
                                goto __Vlabel5;
                            }
                        } else {
                            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                                = (0x33U | ((0x01f00000U 
                                             & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                << 0x00000012U)) 
                                            | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                  << 7U))));
                            goto __Vlabel5;
                        }
                    } else if ((0U == (0x0000001fU 
                                       & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                          >> 2U)))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x0067U | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                          << 0x0000000fU));
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x33U | ((0x01f00000U 
                                         & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                            << 0x00000012U)) 
                                        | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                           << 7U)));
                        goto __Vlabel5;
                    }
                } else if ((0x00004000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                            = ((((6U & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                                      >> 0x0cU))) 
                                << 5U) | (0x0000001cU 
                                          & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                             >> 2U)));
                        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                            = (0x00012003U | ((vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                 << 7U)));
                        goto __Vlabel5;
                    }
                } else if ((0x00002000U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst))) {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
                    goto __Vlabel5;
                } else {
                    vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                        = (0x00001013U | ((0x01f00000U 
                                           & ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                              << 0x0000000fU) 
                                             | ((IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1) 
                                                << 7U))));
                    goto __Vlabel5;
                }
            } else {
                vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci;
                goto __Vlabel5;
            }
            vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0U;
            __Vlabel5: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout;
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[5U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0 
        = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_inst_valid_mask) 
            >> 5U) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06968334__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b87c74__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h090e81f9__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8767a__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h08b8772c__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h0696f7cd__0) 
              << 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
        = (1U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
    if ((0x00000040U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06384fa1__16) 
                                  << 2U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x00000014U))));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__5 
                                      >> 0x00000019U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                = (0x00000030U | (0xffffff87U 
                                                  & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                        } else {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                        }
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__6 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0x00000030U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000800U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                        >> 7U)))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__7 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0x00000030U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        }
    } else if ((0x00000020U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__3 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = (0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]);
                    if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h947bce25__1) 
                                  << 3U));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0x00000018U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                        = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                     >> 7U))));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__11 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0x00000020U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__9 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        }
    } else if ((0x00000010U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__4 
                              >> 0x00000019U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        }
    } else if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0x00000038U | (0xffffff87U 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    if ((2U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4 
                            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                                     >> 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]) 
                               | (0x000000ffU & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h06383ebd__4) 
                                                 << 7U)));
                    }
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0x00000038U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        }
    } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__10 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0x00000020U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        }
    } else if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h07f00104__8 
                      >> 0x00000019U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                = (0x00000018U | (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_vld) {
        if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req) 
                      & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U] 
                         == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_addr)))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_addr;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_data;
        }
    } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_req) 
                & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_conflict)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U];
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 1U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_valid) {
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                    >> 7U) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 1U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 2U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 3U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 4U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 0U;
        }
        if ((1U & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    >> 7U) & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issued_mask_r) 
                                 >> 5U))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__all_issued = 0U;
        }
    }
}
