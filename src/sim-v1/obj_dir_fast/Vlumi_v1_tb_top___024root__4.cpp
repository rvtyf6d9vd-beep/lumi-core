// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top___024root___nba_sequent__TOP__5(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___nba_sequent__TOP__5\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec;
    lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr;
    lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn;
    lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_tval;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_tval = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0 = 0;
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_h50e10d1e__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_found;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_found = 0;
    CData/*3:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_call;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_call = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_ret;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_ret = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_branch;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_branch = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p = 0;
    CData/*6:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0 = 0;
    CData/*2:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0 = 0;
    CData/*4:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0 = 0;
    CData/*6:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
          >> 1U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[1U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[1U]);
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
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[1U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                 >> 1U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0) 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17) 
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
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
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
                    if ((IData)((0x0e003000U == (0xfe007000U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U]);
                    } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                       >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2) 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                if ((IData)((0x0e003000U == (0xfe007000U 
                                             & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
                    }
                    if ((6U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]);
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
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
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
          >> 2U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[2U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[2U]);
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
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[2U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                 >> 2U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0) 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17) 
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
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
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
                    if ((IData)((0x0e003000U == (0xfe007000U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U]);
                    } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                       >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2) 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                if ((IData)((0x0e003000U == (0xfe007000U 
                                             & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
                    }
                    if ((6U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]);
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
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
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
          >> 3U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[3U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[3U]);
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
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[3U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                 >> 3U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0) 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17) 
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
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
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
                    if ((IData)((0x0e003000U == (0xfe007000U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U]);
                    } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                       >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2) 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                if ((IData)((0x0e003000U == (0xfe007000U 
                                             & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
                    }
                    if ((6U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]);
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
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
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
          >> 4U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[4U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[4U]);
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
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[4U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                 >> 4U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0) 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17) 
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
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
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
                    if ((IData)((0x0e003000U == (0xfe007000U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U]);
                    } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                       >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2) 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                if ((IData)((0x0e003000U == (0xfe007000U 
                                             & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
                    }
                    if ((6U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]);
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
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
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
          >> 5U) & (3U != (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[5U])))) {
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci 
            = (0x0000ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[5U]);
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
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[5U];
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0 
        = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                 >> 5U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]) 
           | (0x000000ffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54305b4c__0) 
                             << 7U)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0 
        = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
        = ((0x00000080U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]) 
           | (0x000000ffU & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec01fe__0)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 7U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0x07ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac5787__0) 
              << 0x0000001bU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0 
        = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                 >> 0x0cU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xf8ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52584287__0) 
              << 0x00000018U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x0fU));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xff07ffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3d91__0) 
              << 0x00000013U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0 
        = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xfff83fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h52ac3ccf__0) 
              << 0x0000000eU));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
           >> 0x19U);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
        = ((0xffffc07fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ec18ab__0) 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                               >> 0x14U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__12 
                                  >> 0x00000019U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0x00000038U | (0xffffff87U 
                                              & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17 
                            = (0U != (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0xfffffffbU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54301848__17) 
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
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
                                      << 7U));
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__5 
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                            = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                                   >> 0x14U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__6 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__7 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                    = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
            } else if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                    if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                            = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
                                  << 7U));
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__3 
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
                    if ((IData)((0x0e003000U == (0xfe007000U 
                                                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                            = (0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U]);
                    } else if ((1U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                       >> 0x19U))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2 
                            = ((4U > (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 0x0cU)))
                                ? 1U : 2U);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = ((0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h96db2803__2) 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__11 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                            >> 7U))));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__9 
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
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                        = (0xfffff000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst);
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
                              << 7U));
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                        = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__4 
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__2 
                          >> 0x00000019U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = (0xffffff87U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                if ((IData)((0x0e003000U == (0xfe007000U 
                                             & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                        = (2U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
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
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (0xfffffffdU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
                    }
                    if ((6U == (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                      >> 0x0cU)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                            = (4U | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]);
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
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                    = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                          >> 0x14U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                    = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
                          << 7U));
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                    = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                       | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__10 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                = (((- (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst 
                      >> 0x14U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                = ((0x0000007fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
                      << 7U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U]) 
                   | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53d53c9e__8 
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
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit 
        = ((IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                    [(0x00001fffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                     >> 1U))] >> 0x00000035U)) 
           & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
               >> 0x0000000eU) == (0x0003ffffU & (IData)(
                                                         (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                                                          [
                                                          (0x00001fffU 
                                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                                              >> 1U))] 
                                                          >> 0x00000023U)))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target 
        = (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                   [(0x00001fffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                    >> 1U))] >> 3U));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch 
        = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                        [(0x00001fffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                         >> 1U))]));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[0U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x3aU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[0U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x3cU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[1U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x3cU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[1U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x3eU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[2U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x3fU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[2U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 1U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[3U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 4U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[3U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 6U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[4U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x0bU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[4U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x0dU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[5U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x17U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[5U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x19U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[6U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x23U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[6U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x25U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[7U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x2fU))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[7U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x31U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[8U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x36U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[8U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x38U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[9U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x36U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[9U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x38U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[10U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x36U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[10U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x38U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[11U] 
        = (0x000003ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 1U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x36U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[11U] 
        = (0x000000ffU & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                           >> 8U) ^ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history 
                                             >> 0x38U))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken) 
           & ((~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause) 
                  >> 3U)) & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active) 
           | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_taken));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc = 0U;
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][4U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] 
                          >> 0x00000019U));
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr = 0U;
        if (((4U <= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[0U]) 
             & (7U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[0U]))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result[0U];
        }
    } else {
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc 
                = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][4U] 
                    << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][3U] 
                              >> 0x00000019U));
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr = 0U;
    }
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][4U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] 
                          >> 0x00000019U));
        if (((4U <= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[1U]) 
             & (7U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[1U]))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result[1U];
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][4U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][3U] 
                          >> 0x00000019U));
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn = 0U;
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                          >> 0x00000019U));
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][3U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                          >> 0x00000019U));
    }
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                          >> 0x00000019U));
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][3U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                          >> 0x00000019U));
    }
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][4U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] 
                          >> 0x00000019U));
        if (((4U <= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[2U]) 
             & (7U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[2U]))) {
            lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result[2U];
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
                          >> 0x00000019U));
    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][4U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][3U] 
                          >> 0x00000019U));
        lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][3U] 
                << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                          >> 0x00000019U));
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec 
        = (((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception)) 
            << 2U) | ((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r)) 
                      << 1U));
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
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) 
           | ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict_d)) 
              & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict)));
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
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict) 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_redirect_valid_d))) 
          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request))) 
         & (3U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next = 2U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd = 0U;
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
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c34ff70__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[2U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf9a650e6__0;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred = 0U;
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
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[11U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[10U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[10U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[9U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[9U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[8U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[8U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[7U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[7U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[6U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[6U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[5U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[5U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[4U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[4U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[3U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[3U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[2U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[2U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[1U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[1U] 
                     >> 2U));
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[0U]) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred 
            = (1U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[0U] 
                     >> 2U));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_we 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__is_clic_csr) 
           & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we));
    __VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid) 
                                      & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__csr_we));
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
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_tval 
        = lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_insn;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 0U;
    if ((4U & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))) {
        if ((1U & (~ ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec)))) {
                lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 7U;
                lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 1U;
            }
        }
    } else if ((2U & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause 
            = ((1U & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))
                ? 5U : 6U);
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 1U;
    } else if ((1U & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_exec))) {
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = 4U;
        lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
        = ((IData)(4U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_pred_branch_slot = 0x0fU;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit) {
        if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                           [(0x00001fffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                            >> 1U))] 
                           >> 1U)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack
                [(0x0000001fU & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top) 
                                  - (IData)(1U)) | 
                                 (- (IData)((0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top))))))];
        } else if ((1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                                  [(0x00001fffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                                   >> 1U))] 
                                  >> 2U)))) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 0U;
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                        = ((IData)(4U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg);
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target;
            }
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                    = ((IData)(4U) + vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg);
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target;
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_found = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_call = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_ret = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_branch = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p 
        = ((IData)(1U) + (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                >> 1U)));
    while (VL_GTS_III(32, 8U, lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p)) {
        if ((1U & (~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_found)))) {
            if (((IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                          [(0x00001fffU & ((0x00001ff8U 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                               >> 1U)) 
                                           + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p))] 
                          >> 0x00000035U)) & ((0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                                                          [
                                                          (0x00001fffU 
                                                           & ((0x00001ff8U 
                                                               & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                                                  >> 1U)) 
                                                              + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p))] 
                                                          >> 0x00000023U))) 
                                              == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                                  >> 0x0000000eU)))) {
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_found = 1U;
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot 
                    = (0x0000000fU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p);
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target 
                    = (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                               [(0x00001fffU & ((0x00001ff8U 
                                                 & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                                    >> 1U)) 
                                                + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p))] 
                               >> 3U));
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_call 
                    = (1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                                     [(0x00001fffU 
                                       & ((0x00001ff8U 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                              >> 1U)) 
                                          + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p))] 
                                     >> 2U)));
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_ret 
                    = (1U & (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                                     [(0x00001fffU 
                                       & ((0x00001ff8U 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                              >> 1U)) 
                                          + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p))] 
                                     >> 1U)));
                lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_branch 
                    = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem
                                    [(0x00001fffU & 
                                      ((0x00001ff8U 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                           >> 1U)) 
                                       + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p))]));
            }
        }
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p 
            = ((IData)(1U) + lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk3__DOT__p);
    }
    if (((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_found) 
         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f2_pd_pred_branch_slot 
            = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot;
        if (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_ret) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack
                [(0x0000001fU & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top) 
                                  - (IData)(1U)) | 
                                 (- (IData)((0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top))))))];
        } else if (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_call) {
            if (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_branch) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                    = (IData)((0x00000001ffffffffULL 
                               & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred)
                                   ? (QData)((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target))
                                   : ((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg)) 
                                      + ((QData)((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot)) 
                                         << 1U)))));
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                    = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target;
            }
        } else if (lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_is_branch) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                = (IData)((0x00000001ffffffffULL & 
                           ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred)
                             ? (QData)((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target))
                             : ((QData)((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg)) 
                                + ((QData)((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_slot)) 
                                   << 1U)))));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb 
                = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__grp_target;
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpmcounter_write_conflict 
        = (((((((((((0x0b1fU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                    | (0x0b9fU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                  << 3U) | ((((0x0b1eU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                              | (0x0b9eU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                             & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                            << 2U)) | (((((0x0b1dU 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          | (0x0b9dU 
                                             == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                         & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                        << 1U) | ((
                                                   (0x0b1cU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b9cU 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0)))) 
               << 0x0000000bU) | (((((((0x0b1bU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                       | (0x0b9bU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                      & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                     << 3U) | ((((0x0b1aU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 | (0x0b9aU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                               << 2U)) 
                                   | (((((0x0b19U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                         | (0x0b99U 
                                            == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                        & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                       << 1U) | (((0x0b18U 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  | (0x0b98U 
                                                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0)))) 
                                  << 7U)) | (((((((
                                                   (0x0b17U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b97U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                 << 3U) 
                                                | ((((0x0b16U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     | (0x0b96U 
                                                        == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                    & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                   << 2U)) 
                                               | (((((0x0b15U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                     | (0x0b95U 
                                                        == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                    & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                   << 1U) 
                                                  | (((0x0b14U 
                                                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                      | (0x0b94U 
                                                         == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                     & (IData)(__VdfgRegularize_hebeb780c_0_0)))) 
                                              << 3U) 
                                             | (((((0x0b13U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b93U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                 << 2U) 
                                                | (((((0x0b12U 
                                                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                      | (0x0b92U 
                                                         == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                     & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                    << 1U) 
                                                   | (((0x0b11U 
                                                        == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                       | (0x0b91U 
                                                          == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                      & (IData)(__VdfgRegularize_hebeb780c_0_0)))))) 
            << 0x0000000eU) | (((((((((0x0b10U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                      | (0x0b90U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                     & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                    << 3U) | ((((0x0b0fU 
                                                 == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                | (0x0b8fU 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                               & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                              << 2U)) 
                                  | (((((0x0b0eU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        | (0x0b8eU 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                       & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                      << 1U) | (((0x0b0dU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 | (0x0b8dU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_0)))) 
                                 << 0x0000000aU) | 
                                (((((0x0b0cU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                    | (0x0b8cU == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                   & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                  << 9U) | (((((0x0b0bU 
                                                == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                               | (0x0b8bU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                              & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                             << 8U) 
                                            | ((((0x0b0aU 
                                                  == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                 | (0x0b8aU 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                               << 7U)))) 
                               | ((((((((0x0b09U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                        | (0x0b89U 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                       & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                      << 3U) | ((((0x0b08U 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                  | (0x0b88U 
                                                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                << 2U)) 
                                    | (((((0x0b07U 
                                           == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                          | (0x0b87U 
                                             == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                         & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                        << 1U) | ((
                                                   (0x0b06U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b86U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0)))) 
                                   << 3U) | (((((0x0b05U 
                                                 == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                | (0x0b85U 
                                                   == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                               & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                              << 2U) 
                                             | (((((0x0b04U 
                                                    == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                   | (0x0b84U 
                                                      == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                 << 1U) 
                                                | (((0x0b03U 
                                                     == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb)) 
                                                    | (0x0b83U 
                                                       == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb))) 
                                                   & (IData)(__VdfgRegularize_hebeb780c_0_0)))))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__fetch_exc_valid) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel 
            = lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__fetch_exc_cause;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 1U;
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_valid) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel 
            = lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_tval;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_cause;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 1U;
    } else if (lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel 
            = lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel 
            = lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception = 1U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_nmi_enter = 0U;
    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception)))) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_latch) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_nmi_enter = 1U;
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_enter = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__has_exception) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_enter = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_tval_sel;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exc_cause_sel;
    } else {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_latch) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause = 0x80000000U;
        } else if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid) 
                    & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mstatus_r 
                       >> 3U))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc;
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
}
