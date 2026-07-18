// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___eval_initial__TOP(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__0(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__1(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__2(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__3(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__4(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__5(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__6(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__7(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__8(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__9(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__10(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__11(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__12(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__13(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__14(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__15(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__16(Vlumi_v1_tb_top___024root* vlSelf);
VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__17(Vlumi_v1_tb_top___024root* vlSelf);

void Vlumi_v1_tb_top___024root___eval_initial(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlumi_v1_tb_top___024root___eval_initial__TOP(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__8(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__9(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__10(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__11(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__12(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__13(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__14(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__15(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__16(vlSelf);
    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__17(vlSelf);
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__0(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__clk_core = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                             25);
        vlSelfRef.lumi_v1_tb_top__DOT__clk_core = (1U 
                                                   & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__clk_core)));
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__1(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__clk_bus = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                             30);
        vlSelfRef.lumi_v1_tb_top__DOT__clk_bus = (1U 
                                                  & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__clk_bus)));
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__2(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__reset_n = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__cycle_count = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000000c8ULL, 
                                         nullptr, "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                         36);
    vlSelfRef.lumi_v1_tb_top__DOT__reset_n = 1U;
    co_return;
}

void Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(Vlumi_v1_tb_top___024root* vlSelf, const char* __VeventDescription);
void Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(Vlumi_v1_tb_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__3(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             194);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             196);
        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid) 
             & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we))) {
            if (VL_UNLIKELY((((0x0003ff00U <= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr) 
                              & (0x00040000U > vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr))))) {
                VL_WRITEF_NX("[DIAG-WR] cyc=%0d addr=0x%08h data=0x%08h be=%04b ready=%0b\n",5
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata
                             , '#',4,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be)
                             , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__reset_n);
            }
            if (VL_UNLIKELY((((0xfff8U <= (0x0000ffffU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                              >> 2U))) 
                              & (0xfffdU >= (0x0000ffffU 
                                             & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                                >> 2U))))))) {
                VL_WRITEF_NX("[SRAM-WR] *** BENCHMARK RESULT AREA WRITE! ***\n",0);
            }
            if (VL_UNLIKELY((((0x00007ab0U <= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr) 
                              & (0x00008300U > vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr))))) {
                VL_WRITEF_NX("[LIST-WR] cyc=%0d addr=0x%08h data=0x%08h be=%04b ready=%0b\n",5
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata
                             , '#',4,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be)
                             , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__reset_n);
            }
            if (VL_UNLIKELY(((0x00007aa4U > vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr)))) {
                VL_WRITEF_NX("[CODE-WR] cyc=%0d addr=0x%08h data=0x%08h be=%04b\n",4
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata
                             , '#',4,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be));
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__4(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             219);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             221);
        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid) 
             & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we)))) {
            if (VL_UNLIKELY(((0x000003e8U > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count)))) {
                VL_WRITEF_NX("[SRAM-RD] cyc=%0d addr=0x%08h idx=%0d rdata=0x%08h\n",4
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr
                             , '#',16,(0x0000ffffU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                          >> 2U)), '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
                             [(0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                              >> 2U))]);
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__5(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             237);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             239);
        if (VL_UNLIKELY((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request))) {
            VL_WRITEF_NX("[TRAP] cyc=%0d trap_pc=0x%08h cause=%0d mepc=0x%08h\n",4
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb
                         , '#',32,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mepc_r);
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__6(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             254);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__ptr_store_seen = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__first_mispred_logged = 0U;
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             258);
        if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__ptr_store_seen)) 
                           & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid)) 
                          & (0x00004db8U == vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__ptr_store_seen = 1U;
            VL_WRITEF_NX("[PTR-STORE] cyc=%0d pc=0x4DB8 COMMITTED (pointer store executed)\n",1
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count);
        }
        if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__first_mispred_logged)) 
                           & (0x0001d4c0U < vlSelfRef.lumi_v1_tb_top__DOT__cycle_count)) 
                          & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict))))) {
            vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__first_mispred_logged = 1U;
            VL_WRITEF_NX("[FIRST-MISP] cyc=%0d br_pc=0x%08h br_taken=%0b pred_taken=%0b\n",4
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_pc
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_taken)
                         , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_pred_taken_r);
        }
        if (VL_UNLIKELY(((((0x0001d4acU < vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
                           & (0x0001d4caU > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count)) 
                          & (0x0000002cU == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg))))) {
            VL_WRITEF_NX("[F1-JAL] cyc=%0d pc_reg=0x%08h f1_pred_taken=%0b f2_icache_word3=0x%08h btb_hit=%0b\n",5
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line[3U]
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit));
        }
        if (VL_UNLIKELY((((0x0001d4beU <= vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
                          & (0x0001d4c6U >= vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))))) {
            VL_WRITEF_NX("[PC-TRACE] cyc=%0d pc_reg=0x%08h\n",2
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg);
        }
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk1__DOT__ptr_store_seen)) 
                          & (0x000253dcU == vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))))) {
            VL_WRITEF_NX("[PTR-STORE] cyc=152540 pointer store 0x4DB8 NEVER COMMITTED!\n",0);
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__7(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__7\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             341);
    }
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk2__DOT__first_invalid_reported = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk2__DOT__last_valid_pc = 0U;
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             345);
        if ((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
            if (VL_TESTPLUSARGS_I("dump_trace"s)) {
                if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[CMT-DBG] cyc=%0d s=0 pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h\n",6
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]
                                 , '#',5,(0x0000001fU 
                                          & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed))
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U]
                                 , '#',7,(0x0000007fU 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]));
                }
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[CMT-DBG] cyc=%0d s=1 pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h\n",6
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]
                                 , '#',5,(0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                             >> 5U))
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U]
                                 , '#',7,(0x0000007fU 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]));
                }
                if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[CMT-DBG] cyc=%0d s=2 pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h\n",6
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]
                                 , '#',5,(0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                             >> 0x0aU))
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U]
                                 , '#',7,(0x0000007fU 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]));
                }
            }
            if (((0x00029aafU <= vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
                 & (0x00029ab9U >= vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))) {
                if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[DIAG-170K] cyc=%0d s=0 pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h\n",6
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]
                                 , '#',5,(0x0000001fU 
                                          & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed))
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[0U]
                                 , '#',7,(0x0000007fU 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]));
                }
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[DIAG-170K] cyc=%0d s=1 pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h\n",6
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]
                                 , '#',5,(0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                             >> 5U))
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[1U]
                                 , '#',7,(0x0000007fU 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]));
                }
                if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))))) {
                    VL_WRITEF_NX("[DIAG-170K] cyc=%0d s=2 pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h\n",6
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]
                                 , '#',5,(0x0000001fU 
                                          & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_packed) 
                                             >> 0x0aU))
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_rd_data_packed[2U]
                                 , '#',7,(0x0000007fU 
                                          & vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]));
                }
            }
            if ((1U & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk2__DOT__first_invalid_reported)) 
                       & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid)))) {
                if (VL_UNLIKELY(((0x00080000U < vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk2__DOT__first_invalid_reported = 1U;
                    VL_WRITEF_NX("[INVALID-PC] cyc=%0d: PC jumped to 0x%08h (last valid: 0x%08h)\n[INVALID-PC] Last 10 PCs from scoreboard:\n  [0] pc=0x%08h\n  [1] pc=0x%08h\n  [2] pc=0x%08h\n  [3] pc=0x%08h\n  [4] pc=0x%08h\n  [5] pc=0x%08h\n  [6] pc=0x%08h\n  [7] pc=0x%08h\n  [8] pc=0x%08h\n  [9] pc=0x%08h\n",13
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                                 , '~',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk2__DOT__last_valid_pc
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[0U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[1U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[2U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[3U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[4U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[5U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[6U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[7U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[8U]
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[9U]);
                }
                if ((0x00080000U >= vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U])) {
                    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk2__DOT__last_valid_pc 
                        = vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U];
                }
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__8(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__8\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             388);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             390);
        if (VL_UNLIKELY((((0x000253e6U <= vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
                          & (0x000253faU >= vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))))) {
            VL_WRITEF_NX("[DIAG-FL] cyc=%0d mispred=%0b dib_cnt=%0d pd_valid=%06b pd_pc0=0x%08h wait_fresh=%0b pd_adv=%0b issue_cnt=%0d pipe_stall=%0b e1_br=%0b mem_busy=%0b\n",11
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict)
                         , '#',6,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count
                         , '#',6,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_valid_r)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_pc_r[0U]
                         , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__wait_for_fresh_r
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_advance)
                         , '#',4,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__pipe_stall)
                         , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy));
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__9(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__9\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             410);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             412);
        if (((0x000003e8U > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
             | (0x00029428U < vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))) {
            if (VL_UNLIKELY(((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: lumi_v1_tb_top.sv:417: Assertion failed in %m: [FETCH-PC] cyc=%0d: F2 PC not 2-byte aligned: 0x%08h\n",5, 'M',vlSymsp->name(),"lumi_v1_tb_top.unnamedblk6", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r);
                VL_STOP_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 417, "");
            }
            vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__s = 0U;
            if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                if (VL_UNLIKELY(((1U & vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pc)))) {
                    VL_WRITEF_NX("[%0t] %%Error: lumi_v1_tb_top.sv:424: Assertion failed in %m: [FETCH-PC] cyc=%0d: Commit PC 0 not 2-byte aligned: 0x%08h\n",5, 'M',vlSymsp->name(),"lumi_v1_tb_top.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pc);
                    VL_STOP_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 424, "");
                }
            }
            vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__s = 1U;
            if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                if (VL_UNLIKELY(((1U & vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pc)))) {
                    VL_WRITEF_NX("[%0t] %%Error: lumi_v1_tb_top.sv:424: Assertion failed in %m: [FETCH-PC] cyc=%0d: Commit PC 1 not 2-byte aligned: 0x%08h\n",5, 'M',vlSymsp->name(),"lumi_v1_tb_top.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pc);
                    VL_STOP_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 424, "");
                }
            }
            vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__s = 2U;
            if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid))) {
                if (VL_UNLIKELY(((1U & vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pc)))) {
                    VL_WRITEF_NX("[%0t] %%Error: lumi_v1_tb_top.sv:424: Assertion failed in %m: [FETCH-PC] cyc=%0d: Commit PC 2 not 2-byte aligned: 0x%08h\n",5, 'M',vlSymsp->name(),"lumi_v1_tb_top.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pc);
                    VL_STOP_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 424, "");
                }
            }
            vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__s = 3U;
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__10(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__10\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             434);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             436);
        if (((0x000003e8U > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
             | (0x00029428U < vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))) {
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk9__DOT__pd_bytes_consumed))))) {
                VL_WRITEF_NX("[PREDEC-DBG] cyc=%0d bytes_consumed=%0d inst_count=%0d carry_hw=0x%04h carry_valid=%0b\n",5
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',5,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk9__DOT__pd_bytes_consumed)
                             , '#',4,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk9__DOT__pd_inst_count
                             , '#',16,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk9__DOT__pd_carry_hw)
                             , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk9__DOT__pd_carry_valid);
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__11(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__11\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             454);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             456);
        if (((0x000003e8U > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count) 
             | (0x00029428U < vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))) {
            if (VL_UNLIKELY((vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk10__DOT__f2_pred_taken))) {
                VL_WRITEF_NX("[BRANCH-DBG] cyc=%0d pred_taken=%0b pred_target=0x%08h\n",3
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk10__DOT__f2_pred_taken)
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk10__DOT__f2_pred_target);
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__12(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__12\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             472);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             474);
        if ((0x0000001eU > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en) 
                              & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]))))) {
                VL_WRITEF_NX("[RF-WR] cyc=%0d port=0 rd=x%0d data=0x%08h\n",3
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',5,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[0U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[0U]);
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en) 
                               >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U]))))) {
                VL_WRITEF_NX("[RF-WR] cyc=%0d port=1 rd=x%0d data=0x%08h\n",3
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',5,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[1U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[1U]);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                              & (0x00000030U == vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]))))) {
                VL_WRITEF_NX("[BEQ-CMT] cyc=%0d pc=0x%08h inst=0x%08h\n",3
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[0U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[0U]);
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                               >> 1U) & (0x00000030U 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]))))) {
                VL_WRITEF_NX("[BEQ-CMT] cyc=%0d pc=0x%08h inst=0x%08h\n",3
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[1U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[1U]);
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid) 
                               >> 2U) & (0x00000030U 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]))))) {
                VL_WRITEF_NX("[BEQ-CMT] cyc=%0d pc=0x%08h inst=0x%08h\n",3
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_pc_packed[2U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__commit_inst_packed[2U]);
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__13(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__13\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             511);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             513);
        if (VL_UNLIKELY((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) 
                          & (0x0007a120U > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count))))) {
            VL_WRITEF_NX("[MA-SPLIT] cyc=%0d slot=%0d load=%0b funct3=%03b orig_addr=0x%08h ovr_addr=0x%08h be=%04b wdata=0x%08h aligned=0x%08h rdata=0x%08h lo_r=0x%08h\n",11
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',2,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r)
                         , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_is_load_r
                         , '#',3,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_funct3_r)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr
                         [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))]
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr
                         [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))]
                         , '#',4,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be
                         [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))]
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_wdata_r
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data
                         [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))]
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
                         [(0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                          >> 2U))], '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_load_lo_r);
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__14(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__14\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             525);
    }
    while (true) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             527);
        if ((0x0000001eU > vlSelfRef.lumi_v1_tb_top__DOT__cycle_count)) {
            if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))))) {
                VL_WRITEF_NX("[E1] cyc=%0d s=0 pc=0x%04h fu=%0d rd=%0d v=%0b mem_busy=%0b\n",6
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][4U] 
                                        << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][3U] 
                                                  >> 0x00000019U))
                             , '#',4,(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][0U] 
                                      >> 0x0000001cU)
                             , '#',5,(0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[0U][2U] 
                                       >> 0x00000014U))
                             , '#',1,(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))
                             , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy));
            }
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))))) {
                VL_WRITEF_NX("[E1] cyc=%0d s=1 pc=0x%04h fu=%0d rd=%0d v=%0b mem_busy=%0b\n",6
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][4U] 
                                        << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][3U] 
                                                  >> 0x00000019U))
                             , '#',4,(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][0U] 
                                      >> 0x0000001cU)
                             , '#',5,(0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[1U][2U] 
                                       >> 0x00000014U))
                             , '#',1,(1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                                            >> 1U))
                             , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy));
            }
            if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r))))) {
                VL_WRITEF_NX("[E1] cyc=%0d s=2 pc=0x%04h fu=%0d rd=%0d v=%0b mem_busy=%0b\n",6
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][4U] 
                                        << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][3U] 
                                                  >> 0x00000019U))
                             , '#',4,(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][0U] 
                                      >> 0x0000001cU)
                             , '#',5,(0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[2U][2U] 
                                       >> 0x00000014U))
                             , '#',1,(1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r) 
                                            >> 2U))
                             , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy));
            }
            if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))))) {
                VL_WRITEF_NX("[M ] cyc=%0d s=0 pc=0x%04h fu=%0d rd=%0d result=0x%08h mem_busy=%0b\n",6
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][4U] 
                                        << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][3U] 
                                                  >> 0x00000019U))
                             , '#',4,(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                                      >> 0x0000001cU)
                             , '#',5,(0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                       >> 0x00000014U))
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[0U]
                             , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy);
            }
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))))) {
                VL_WRITEF_NX("[M ] cyc=%0d s=1 pc=0x%04h fu=%0d rd=%0d result=0x%08h mem_busy=%0b\n",6
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][4U] 
                                        << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][3U] 
                                                  >> 0x00000019U))
                             , '#',4,(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                                      >> 0x0000001cU)
                             , '#',5,(0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                       >> 0x00000014U))
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[1U]
                             , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy);
            }
            if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))))) {
                VL_WRITEF_NX("[M ] cyc=%0d s=2 pc=0x%04h fu=%0d rd=%0d result=0x%08h mem_busy=%0b\n",6
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                             , '#',32,((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][4U] 
                                        << 7U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][3U] 
                                                  >> 0x00000019U))
                             , '#',4,(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                                      >> 0x0000001cU)
                             , '#',5,(0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                       >> 0x00000014U))
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[2U]
                             , '#',1,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy);
            }
        }
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__15(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__15\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__stall_timeout = 0x00989680U;
    vlSelfRef.lumi_v1_tb_top__DOT__last_progress_cyc = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__stall_detected = 0U;
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             723);
    }
    {
        while (true) {
            co_await vlSelfRef.__VdlySched.delay(0x0000000002625a00ULL, 
                                                 nullptr, 
                                                 "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                 725);
            VL_WRITEF_NX("[PROGRESS] cycle=%0d retired=%0d we_count=%0d mem_busy=%0b pc0=0x%08h\n",5
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                         , '#',32,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__total_retired)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__sram_we_count
                         , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U]);
            if (VL_UNLIKELY(((0xdeadbeefU == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65528U])))) {
                VL_WRITEF_NX("[PROGRESS] tohost: magic=0xDEADBEEF detected at 0x3FFE0\n[PROGRESS] bench_id=%0d iters=%0d ticks=%0d metric=%0d checks=%0d\n",5
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65529U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65530U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65531U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65532U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65533U]);
            }
            if (VL_UNLIKELY(((0xdead0001U == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65528U])))) {
                VL_WRITEF_NX("[PROGRESS] TRAP detected: magic=0xDEAD0001 mcause=0x%08h mepc=0x%08h\n",2
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65529U]
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65530U]);
            }
            if (VL_UNLIKELY((((0x00100000U < vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U]) 
                              & (0xfff00000U > vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U]))))) {
                VL_WRITEF_NX("[PROGRESS] WARNING: PC in suspicious range 0x%08h\n",1
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U]);
            }
            if (VL_UNLIKELY(((0xee6b2800U < vlSelfRef.lumi_v1_tb_top__DOT__cycle_count)))) {
                VL_WRITEF_NX("[PROGRESS] SAFETY TIMEOUT at %0d cycles\n",1
                             , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count);
                VL_FINISH_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 747, "");
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__16(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__16\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ lumi_v1_tb_top__DOT____VlemExpr_2;
    IData/*31:0*/ lumi_v1_tb_top__DOT__pass_count;
    lumi_v1_tb_top__DOT__pass_count = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__fail_count;
    lumi_v1_tb_top__DOT__fail_count = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_1;
    __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_1 = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_0;
    __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_0 = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__start_addr;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__start_addr = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__end_addr;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__end_addr = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2____VlefExpr_0;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2____VlefExpr_0 = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__actual_word;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__actual_word = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_word;
    __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_word = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd;
    __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i;
    __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i = 0;
    IData/*31:0*/ __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__count;
    __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__count = 0;
    VlWide<11>/*351:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    lumi_v1_tb_top__DOT__pass_count = 0U;
    lumi_v1_tb_top__DOT__fail_count = 0U;
    VL_WRITEF_NX("============================================\n Lumi-Core V1 Verification TB\n UVM-shim + Monitor + Coverage + Scoreboard\n============================================\n\n",0);
    while ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(vlSelf, 
                                                              "@( lumi_v1_tb_top.reset_n)");
        co_await vlSelfRef.__VtrigSched_ha6986e42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lumi_v1_tb_top.reset_n)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             777);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                         778);
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I("dump_trace"s)))) {
        vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__enable_realtime_trace__0__filename = "tests/results/v1-realtime-trace.dat"s;
        if (VL_UNLIKELY(((0U != vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd)))) {
            VL_FCLOSE_I(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd); }
        vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd 
            = VL_FOPEN_NN(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__enable_realtime_trace__0__filename
                          , "w"s);
        ;
        if (VL_LIKELY(((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd)))) {
            VL_WRITEF_NX("[MON] ERROR: Cannot open realtime trace: %s\n",1
                         , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__enable_realtime_trace__0__filename));
        } else {
            VL_FWRITEF_NX(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd,"# PC        INST        RD   RD_DATA      CYCLE\n",0);
            VL_WRITEF_NX("[MON] Realtime trace ENABLED: %s\n",1
                         , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__enable_realtime_trace__0__filename));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk15__DOT__max_cyc = 0x00989680U;
    lumi_v1_tb_top__DOT____VlemExpr_2 = VL_VALUEPLUSARGS_INI(32, "max_cycles=%d"s, 
                                                             vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk15__DOT__max_cyc);
    if (VL_UNLIKELY((lumi_v1_tb_top__DOT____VlemExpr_2))) {
        VL_WRITEF_NX("[V1] max_cycles = %0d\n",1, '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk15__DOT__max_cyc);
    }
    Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                          "@(posedge lumi_v1_tb_top.clk_core)");
    co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge lumi_v1_tb_top.clk_core)", 
                                                         "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                         794);
    while ((1U & (~ (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done) 
                      | (vlSelfRef.lumi_v1_tb_top__DOT__cycle_count 
                         > vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk15__DOT__max_cyc)) 
                     | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__stall_detected))))) {
        Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(vlSelf, 
                                                              "@(posedge lumi_v1_tb_top.clk_core)");
        co_await vlSelfRef.__VtrigSched_h741b292e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge lumi_v1_tb_top.clk_core)", 
                                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                                             796);
    }
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                             799);
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code)) {
            lumi_v1_tb_top__DOT__pass_count = ((IData)(1U) 
                                               + lumi_v1_tb_top__DOT__pass_count);
            VL_WRITEF_NX("[V1] TEST PASS (exit_code=0, %0d cycles)\n",1
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count);
        } else {
            lumi_v1_tb_top__DOT__fail_count = ((IData)(1U) 
                                               + lumi_v1_tb_top__DOT__fail_count);
            VL_WRITEF_NX("[V1] TEST FAIL (exit_code=0x%08h)\n",1
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code);
        }
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__stall_detected) {
        lumi_v1_tb_top__DOT__fail_count = ((IData)(1U) 
                                           + lumi_v1_tb_top__DOT__fail_count);
        VL_WRITEF_NX("[V1] TEST STALL (%0d cycles, no commit for 2M cycles, pc0=0x%08h)\n",2
                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count
                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[0U]);
    } else {
        lumi_v1_tb_top__DOT__fail_count = ((IData)(1U) 
                                           + lumi_v1_tb_top__DOT__fail_count);
        VL_WRITEF_NX("[V1] TEST TIMEOUT (%0d cycles)\n",1
                     , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__cycle_count);
    }
    __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_0 
        = VL_VALUEPLUSARGS_INN(64, "sig_ref=%s"s, vlSelfRef.lumi_v1_tb_top__DOT__sig_ref_file);
    if (__Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_0) {
        __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_1 
            = VL_VALUEPLUSARGS_INI(32, "sig_start=%h"s, 
                                   vlSelfRef.lumi_v1_tb_top__DOT__sig_start);
        if (__Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_1) {
            __Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_1 
                = VL_VALUEPLUSARGS_INI(32, "sig_end=%h"s, 
                                       vlSelfRef.lumi_v1_tb_top__DOT__sig_end);
        }
        if (VL_UNLIKELY((__Vtask_lumi_v1_tb_top__DOT__run_signature_compare__1____VlefExpr_1))) {
            VL_WRITEF_NX("[V1] Signature compare: 0x%08h~0x%08h, ref=%s\n",3
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__sig_start
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__sig_end
                         , 'S',&(vlSelfRef.lumi_v1_tb_top__DOT__sig_ref_file));
            vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_file 
                = vlSelfRef.lumi_v1_tb_top__DOT__sig_ref_file;
            __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__end_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__sig_end;
            __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__start_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__sig_start;
            {
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__actual_word = 0;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_word = 0;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd 
                    = VL_FOPEN_NN(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_file
                                  , "r"s);
                ;
                if (VL_UNLIKELY(((0U == __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd)))) {
                    VL_WRITEF_NX("[V1] ERROR: Cannot open ref file: %s\n",1
                                 , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_file));
                    goto __Vlabel0;
                }
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt = 0U;
                __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr 
                    = __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__start_addr;
                {
                    while ((__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr 
                            < __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__end_addr)) {
                        __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__actual_word 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem
                            [(0x00003fffU & (__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr 
                                             >> 2U))][0U];
                        __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2____VlefExpr_0 
                            = VL_FSCANF_INX(__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd,"%h",1
                                            , '#',32,&(__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_word)) ;
                        if (VL_UNLIKELY(((1U != __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2____VlefExpr_0)))) {
                            VL_WRITEF_NX("[V1] WARN: Ref file shorter than expected at word %0d\n",1
                                         , '~',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count);
                            goto __Vlabel1;
                        }
                        if ((__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__actual_word 
                             == __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_word)) {
                            __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt 
                                = ((IData)(1U) + __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt);
                        } else {
                            __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt 
                                = ((IData)(1U) + __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt);
                            if (VL_UNLIKELY((VL_GTES_III(32, 5U, __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt)))) {
                                VL_WRITEF_NX("[V1] MISMATCH @ 0x%08h: actual=0x%08h expected=0x%08h\n",3
                                             , '#',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr
                                             , '#',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__actual_word
                                             , '#',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__ref_word);
                            }
                        }
                        __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count 
                            = ((IData)(1U) + __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count);
                        __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr 
                            = ((IData)(4U) + __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__addr);
                    }
                    __Vlabel1: ;
                }
                VL_FCLOSE_I(__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__fd); VL_WRITEF_NX("[V1] Signature: %0d words, %0d match, %0d mismatch\n",3
                                                                                , '~',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__word_count
                                                                                , '~',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt
                                                                                , '~',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt);
                if ((0U == __Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt)) {
                    VL_WRITEF_NX("[UVM_INFO] V1/SIG: PASS: %0d words match\n",1
                                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__match_cnt);
                    vlSymsp->TOP__uvm_shim.uvm_info_count 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_shim.uvm_info_count);
                } else {
                    VL_WRITEF_NX("[UVM_ERROR] V1/SIG: FAIL: %0d mismatches\n",1
                                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__compare_mem_signature__2__mismatch_cnt);
                    vlSymsp->TOP__uvm_shim.uvm_error_count 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_shim.uvm_error_count);
                }
                __Vlabel0: ;
            }
        }
    }
    VL_WRITEF_NX("\n============================================\n",0);
    VL_WRITEF_NX("===========================================\n Instruction Monitor Statistics\n===========================================\n Total Retired:        %0d\n Total Traps:          %0d\n Total IRQs Accepted:  %0d\n Branch Taken:         %0d\n===========================================\n",4
                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_retired
                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_traps
                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs
                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken);
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered = 0U;
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered 
        = VL_COUNTONES_Q(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
    __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered 
        = VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
    VL_WRITEF_NX("===========================================\n Lumi Coverage Report (V1 + V2)\n===========================================\n --- V1 ISA Cover Groups ---\n cg_isa_rv32i: %0d / 40 (%0d%%)\n[COV-RV32I] hit_mask = %040b\n",3
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered), (IData)(0x00000028U))
                 , '#',40,vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)))))) {
        VL_WRITEF_NX("[COV-MISS] hit[0]:  ADD\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 1U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[1]:  SUB\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 2U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[2]:  SLL\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 3U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[3]:  SLT\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 4U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[4]:  SLTU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 5U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[5]:  XOR\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 6U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[6]:  SRL\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 7U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[7]:  SRA\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 8U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[8]:  OR\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 9U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[9]:  AND\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x0aU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[10]: ADDI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x0bU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[11]: SLLI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x0cU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[12]: SLTI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x0dU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[13]: SLTIU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x0eU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[14]: XORI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x0fU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[15]: SRLI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x10U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[16]: SRAI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x11U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[17]: ORI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x12U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[18]: ANDI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x13U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[19]: LUI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x14U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[20]: AUIPC\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x15U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[21]: JAL\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x16U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[22]: JALR\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x17U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[23]: BEQ\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x18U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[24]: BNE\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x19U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[25]: BLT\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x1aU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[26]: BGE\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x1bU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[27]: BLTU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x1cU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[28]: BGEU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x1dU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[29]: LB\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x1eU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[30]: LH\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x1fU))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[31]: LW\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x20U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[32]: LBU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x21U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[33]: LHU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x22U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[34]: SB\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x23U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[35]: SH\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x24U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[36]: SW\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x25U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[37]: ECALL\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x26U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[38]: CSR\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ (IData)((vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit 
                                       >> 0x27U))))))) {
        VL_WRITEF_NX("[COV-MISS] hit[39]: FENCE\n",0);
    }
    VL_WRITEF_NX(" cg_isa_m_ext: %0d / 8  (%0d%%)\n cg_isa_b_ext: %0d / 16 (%0d%%)\n cg_isa_c_ext: %0d / 12 (%0d%%)\n cg_isa_zce:   %0d / 4  (%0d%%)\n-------------------------------------------\n --- V2 Privilege/CSR Cover Groups ---\n cg_mandatory: %0d / 8  (%0d%%)\n[COV-MAND] hit_mask = %08b\n",11
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered), (IData)(8U))
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered), (IData)(0x00000010U))
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered), (IData)(0x0000000cU))
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered), (IData)(4U))
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered), (IData)(8U))
                 , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[0]: ECALL\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[1]: EBREAK\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 2U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[2]: CSRRW\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 3U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[3]: CSRRS\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 4U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[4]: CSRRC\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 5U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[5]: CSRRWI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 6U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[6]: CSRRSI\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit) 
                               >> 7U)))))) {
        VL_WRITEF_NX("[COV-MISS] mand[7]: CSRRCI\n",0);
    }
    VL_WRITEF_NX(" cg_pmp:       %0d / 8  (%0d%%)\n[COV-PMP] hit_mask = %08b\n",3
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered), (IData)(8U))
                 , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[0]: pmpcfg0\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[1]: pmpcfg1\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 2U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[2]: pmpcfg2\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 3U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[3]: pmpcfg3\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 4U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[4]: pmpaddr0\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 5U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[5]: pmpaddr1\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 6U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[6]: pmpaddr2\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit) 
                               >> 7U)))))) {
        VL_WRITEF_NX("[COV-MISS] pmp[7]: pmpaddr3\n",0);
    }
    VL_WRITEF_NX(" cg_timer:     %0d / 6  (%0d%%)\n[COV-TMR] hit_mask = %08b\n",3
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered), (IData)(6U))
                 , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit)))))) {
        VL_WRITEF_NX("[COV-MISS] tmr[0]: mcycle\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[COV-MISS] tmr[1]: minstret\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit) 
                               >> 2U)))))) {
        VL_WRITEF_NX("[COV-MISS] tmr[2]: time\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit) 
                               >> 3U)))))) {
        VL_WRITEF_NX("[COV-MISS] tmr[3]: timeh\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit) 
                               >> 4U)))))) {
        VL_WRITEF_NX("[COV-MISS] tmr[4]: mcountinhibit\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit) 
                               >> 5U)))))) {
        VL_WRITEF_NX("[COV-MISS] tmr[5]: mcycleh\n",0);
    }
    VL_WRITEF_NX(" cg_clic:      %0d / 6  (%0d%%)\n[COV-IRQ] hit_mask = %08b\n",3
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered), (IData)(6U))
                 , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit)))))) {
        VL_WRITEF_NX("[COV-MISS] irq[0]: mie\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[COV-MISS] irq[1]: mip\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit) 
                               >> 2U)))))) {
        VL_WRITEF_NX("[COV-MISS] irq[2]: mstatus\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit) 
                               >> 3U)))))) {
        VL_WRITEF_NX("[COV-MISS] irq[3]: mtvec\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit) 
                               >> 4U)))))) {
        VL_WRITEF_NX("[COV-MISS] irq[4]: mcause\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit) 
                               >> 5U)))))) {
        VL_WRITEF_NX("[COV-MISS] irq[5]: mepc\n",0);
    }
    VL_WRITEF_NX(" cg_tcm_acc:   %0d / 8  (%0d%%)\n[COV-TCM] hit_mask = %08b\n",3
                 , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered), (IData)(8U))
                 , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[0]: LW\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[1]: LH\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 2U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[2]: LB\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 3U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[3]: LBU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 4U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[4]: LHU\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 5U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[5]: SW\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 6U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[6]: SH\n",0);
    }
    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit) 
                               >> 7U)))))) {
        VL_WRITEF_NX("[COV-MISS] tcm[7]: SB\n",0);
    }
    VL_WRITEF_NX("===========================================\n V1 Total: %0d / 80\n V2 Total: %0d / 36\n V4 Total: %0d / 24\n --- V5 ISA Extension Cover Groups ---\n cg_zicbom:    %0d / 3  (%0d%%)\n cg_zicboz:    %0d / 1  (%0d%%)\n cg_zicbop:    %0d / 3  (%0d%%)\n cg_zicond:    %0d / 2  (%0d%%)\n cg_zimop:     %0d / 1  (%0d%%)\n V5 Total: %0d / 10\n Combined: %0d / 150\n===========================================\n",15
                 , '~',32,((((__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered 
                              + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered) 
                             + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered) 
                            + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered) 
                           + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered)
                 , '~',32,((((__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered 
                              + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered) 
                             + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered) 
                            + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered) 
                           + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered)
                 , '~',32,(((((VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit)) 
                               + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit))) 
                              + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit))) 
                             + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit))) 
                            + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit))) 
                           + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit)))
                 , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit))
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), 
                                                      VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit))), (IData)(3U))
                 , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit)
                 , '#',32,((IData)(0x00000064U) * (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit))
                 , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), 
                                                      VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))), (IData)(3U))
                 , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))
                 , '~',32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x00000064U), 
                                                      VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))), (IData)(2U))
                 , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit)
                 , '#',32,((IData)(0x00000064U) * (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit))
                 , '#',32,((((VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit)) 
                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit)) 
                             + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))) 
                            + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))) 
                           + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit))
                 , '#',32,((((((((((((((((((((__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__rv32i_covered 
                                              + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__m_covered) 
                                             + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__b_covered) 
                                            + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__c_covered) 
                                           + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__zce_covered) 
                                          + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__mandatory_covered) 
                                         + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__pmp_covered) 
                                        + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__timer_covered) 
                                       + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__clic_covered) 
                                      + __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__report_coverage__4__tcm_covered) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit))) 
                                    + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit))) 
                                   + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit))) 
                                  + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit))) 
                                 + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit))) 
                                + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit))) 
                               + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit))) 
                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit)) 
                             + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))) 
                            + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))) 
                           + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit)));
    VL_WRITEF_NX("===========================================\n Scoreboard Report\n===========================================\n Total Retired: %0d\n PC Restarts:  %0d\n",2
                 , '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__total_retired
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__restart_count);
    if (VL_LIKELY((vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__test_done))) {
        if ((0U == vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code)) {
            VL_WRITEF_NX(" Test Result:   PASS (exit_code=0)\n",0);
        } else {
            VL_WRITEF_NX(" Test Result:   FAIL (exit_code=0x%08h)\n",1
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_code);
        }
    } else {
        VL_WRITEF_NX(" Test Result:   INCOMPLETE (no ECALL/spin detected)\n",0);
    }
    VL_WRITEF_NX(" Max PC:       0x%08h\n _exit reached: %0s\n SYSTEM insts:  %0d\n Last 10 commit PCs:\n   [0] 0x%08h\n   [1] 0x%08h\n   [2] 0x%08h\n   [3] 0x%08h\n   [4] 0x%08h\n   [5] 0x%08h\n   [6] 0x%08h\n   [7] 0x%08h\n   [8] 0x%08h\n   [9] 0x%08h\n===========================================\n",13
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc
                 , '#',24,((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached)
                            ? 0x00594553U : 0x00004e4fU)
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[0U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[1U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[2U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[3U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[4U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[5U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[6U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[7U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[8U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[9U]);
    VL_WRITEF_NX("===========================================\n UVM Report Summary\n===========================================\n Info:    %0d\n Warning: 0\n Error:   %0d\n Fatal:   0\n===========================================\n============================================\n V1 Result: PASS=%0d FAIL=%0d\n============================================\n\n",4
                 , '#',32,vlSymsp->TOP__uvm_shim.uvm_info_count
                 , '#',32,vlSymsp->TOP__uvm_shim.uvm_error_count
                 , '#',32,lumi_v1_tb_top__DOT__pass_count
                 , '#',32,lumi_v1_tb_top__DOT__fail_count);
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I("dump_cov"s)))) {
        vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__filename = "tests/results/v1-coverage.dat"s;
        {
            __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd = 0U;
            __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd 
                = VL_FOPEN_NN(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__filename
                              , "w"s);
            ;
            if (VL_UNLIKELY(((0U == __Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd)))) {
                VL_WRITEF_NX("[COV] ERROR: Cannot open file: %s\n",1
                             , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__filename));
                goto __Vlabel2;
            }
            VL_FWRITEF_NX(__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd,"# Lumi Coverage Dump (V1 + V2)\n# Generated by lumi_coverage module\n\ncover_group: cg_isa_rv32i\ncovered: %0d / 40\nhit_mask: %040b\n\ncover_group: cg_isa_m_ext\ncovered: %0d / 8\nhit_mask: %08b\n\ncover_group: cg_isa_b_ext\ncovered: %0d / 16\nhit_mask: %016b\n\ncover_group: cg_isa_c_ext\ncovered: %0d / 12\nhit_mask: %012b\n\ncover_group: cg_isa_zce\ncovered: %0d / 4\nhit_mask: %04b\n\n# --- V2 Privilege/CSR Cover Groups ---\n\ncover_group: cg_mandatory\ncovered: %0d / 8\nhit_mask: %08b\n\ncover_group: cg_pmp_regions\n",12
                          , '~',32,VL_COUNTONES_Q(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit)
                          , '#',40,vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))
                          , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))
                          , '#',16,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))
                          , '#',12,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit))
                          , '#',4,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))
                          , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit));
            VL_FWRITEF_NX(__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd,"covered: %0d / 8\nhit_mask: %08b\n\ncover_group: cg_timer_mtime\ncovered: %0d / 6\nhit_mask: %08b\n\ncover_group: cg_interrupt_clic\ncovered: %0d / 6\nhit_mask: %08b\n\ncover_group: cg_tcm_access\ncovered: %0d / 8\nhit_mask: %08b\n\n# --- Summary ---\nv1_total: %0d / 80\nv2_total: %0d / 36\ncombined: %0d / 116\n\n# --- V4 Multicore/Power/DFT Cover Groups ---\n\ncover_group: cg_lockstep\ncovered: %0d / 4\n\ncover_group: cg_power_states\ncovered: %0d / 4\n\ncover_group: cg_dft_scan\ncovered: %0d / 4\n",14
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))
                          , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit))
                          , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit))
                          , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))
                          , '#',8,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)
                          , '~',32,((((VL_COUNTONES_Q(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit) 
                                       + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))) 
                                      + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))) 
                                    + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit)))
                          , '~',32,((((VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit)) 
                                       + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))) 
                                      + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit))) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit))) 
                                    + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)))
                          , '~',32,(((((((((VL_COUNTONES_Q(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit) 
                                            + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))) 
                                           + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))) 
                                          + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))) 
                                         + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit))) 
                                        + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))) 
                                       + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))) 
                                      + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit))) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit))) 
                                    + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit)))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit)));
            VL_FWRITEF_NX(__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd,"\ncover_group: cg_boot_sequence\ncovered: %0d / 4\n\ncover_group: cg_multicore\ncovered: %0d / 4\n\ncover_group: cg_security\ncovered: %0d / 4\n\n# --- Updated Summary ---\nv4_total: %0d / 24\n\n# --- V5 ISA Extension Cover Groups ---\n\ncover_group: cg_zicbom\ncovered: %0d / 3\n\ncover_group: cg_zicboz\ncovered: %0d / 1\n\ncover_group: cg_zicbop\ncovered: %0d / 3\n\ncover_group: cg_zicond\ncovered: %0d / 2\n\ncover_group: cg_zimop\ncovered: %0d / 1\n\n# --- Grand Summary ---\nv5_total: %0d / 10\ngrand_total: %0d / 150\n",11
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit))
                          , '~',32,(((((VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit)) 
                                        + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit))) 
                                       + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit))) 
                                      + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit))) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit))) 
                                    + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit)))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit))
                          , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit)
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))
                          , '~',32,VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))
                          , '#',1,(IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit)
                          , '#',32,((((VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit)) 
                                       + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit)) 
                                      + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))) 
                                    + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit))
                          , '#',32,((((((((((((((((
                                                   ((((VL_COUNTONES_Q(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit) 
                                                       + 
                                                       VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit))) 
                                                      + 
                                                      VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit))) 
                                                     + 
                                                     VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit))) 
                                                    + 
                                                    VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit))) 
                                                   + 
                                                   VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit))) 
                                                  + 
                                                  VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit))) 
                                                 + 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit))) 
                                                + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit))) 
                                               + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit))) 
                                              + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit))) 
                                             + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__power_hit))) 
                                            + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit))) 
                                           + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit))) 
                                          + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit))) 
                                         + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__security_hit))) 
                                        + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit))) 
                                       + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit)) 
                                      + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit))) 
                                     + VL_COUNTONES_I((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit))) 
                                    + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit)));
            VL_FCLOSE_I(__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__fd); VL_WRITEF_NX("[COV] Dumped coverage to %s\n",1
                                                                                , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_cov__DOT__dump_coverage__7__filename));
            __Vlabel2: ;
        }
    }
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I("dump_trace"s)))) {
        if (VL_UNLIKELY(((0U != vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd)))) {
            VL_FCLOSE_I(vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd); vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd = 0U;
            VL_WRITEF_NX("[MON] Realtime trace DISABLED\n",0);
        }
        vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__filename = "tests/results/v1-trace.dat"s;
        {
            __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd = 0U;
            __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i = 0U;
            __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__count = 0U;
            __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd 
                = VL_FOPEN_NN(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__filename
                              , "w"s);
            ;
            if (VL_UNLIKELY(((0U == __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd)))) {
                VL_WRITEF_NX("[MON] ERROR: Cannot open trace file: %s\n",1
                             , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__filename));
                goto __Vlabel3;
            }
            __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__count 
                = ((0x00004000U > vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count)
                    ? vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_count
                    : 0x00004000U);
            VL_FWRITEF_NX(__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd,"# PC        INST        RD   RD_DATA      CYCLE\n",0);
            __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i = 0U;
            while (VL_LTS_III(32, __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i, __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__count)) {
                VL_FWRITEF_NX(__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd,"%08h %08h x%02d  %08h %0d\n",5
                              , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf
                              [(0x00003fffU & __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i)]
                              .__PVT__pc, '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf
                              [(0x00003fffU & __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i)]
                              .__PVT__inst, '#',5,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf
                              [(0x00003fffU & __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i)]
                              .__PVT__rd, '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf
                              [(0x00003fffU & __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i)]
                              .__PVT__rd_data, '#',64,vlSelfRef.lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf
                              [(0x00003fffU & __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i)]
                              .__PVT__cycle);
                __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i 
                    = ((IData)(1U) + __Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__i);
            }
            VL_FCLOSE_I(__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__fd); VL_WRITEF_NX("[MON] Dumped %0d trace records to %s\n",2
                                                                                , '~',32,__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__count
                                                                                , 'S',&(vlSelfRef.__Vtask_lumi_v1_tb_top__DOT__u_mon__DOT__dump_trace__9__filename));
            __Vlabel3: ;
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_magic 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65528U];
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_bench_id 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65529U];
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_iters 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65530U];
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_ticks 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65531U];
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_metric 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65532U];
    vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_checks 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65533U];
    VL_WRITEF_NX("\n============================================\n V1 Benchmark Results (0x3FFE0)\n============================================\n",0);
    if ((0xdeadbeefU == vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_magic)) {
        __Vtemp_2[0U] = 0x4c494429U;
        __Vtemp_2[1U] = 0x00285641U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        __Vtemp_2[4U] = 0U;
        __Vtemp_2[5U] = 0U;
        __Vtemp_2[6U] = 0U;
        __Vtemp_2[7U] = 0U;
        __Vtemp_2[8U] = 0U;
        __Vtemp_2[9U] = 0U;
        __Vtemp_2[10U] = 0U;
    } else {
        __Vtemp_2[0U] = 0x6c747329U;
        __Vtemp_2[1U] = 0x72657375U;
        __Vtemp_2[2U] = 0x69746520U;
        __Vtemp_2[3U] = 0x74207772U;
        __Vtemp_2[4U] = 0x64206e6fU;
        __Vtemp_2[5U] = 0x6b206469U;
        __Vtemp_2[6U] = 0x686d6172U;
        __Vtemp_2[7U] = 0x62656e63U;
        __Vtemp_2[8U] = 0x44202d20U;
        __Vtemp_2[9U] = 0x56414c49U;
        __Vtemp_2[10U] = 0x0028494eU;
    }
    VL_WRITEF_NX(" magic      = 0x%08h %s\n",2, '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_magic
                 , '#',344,__Vtemp_2.data());
    if ((1U == vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_bench_id)) {
        __Vtemp_9[0U] = 0x61726b29U;
        __Vtemp_9[1U] = 0x6f72654dU;
        __Vtemp_9[2U] = 0x00002843U;
    } else if ((2U == vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_bench_id)) {
        __Vtemp_9[0U] = 0x6f6e6529U;
        __Vtemp_9[1U] = 0x72797374U;
        __Vtemp_9[2U] = 0x00284468U;
    } else {
        __Vtemp_9[0U] = 0x6f776e29U;
        __Vtemp_9[1U] = 0x756e6b6eU;
        __Vtemp_9[2U] = 0x00000028U;
    }
    VL_WRITEF_NX(" bench_id   = %0d %s\n iterations = %0d\n total_ticks= %0d\n metric_x100= %0d\n checks     = %0d %s\n============================================\n [ERR-026-DBG] SRAM write count: %0d\n [ERR-026-DBG] v1_sram[65528]=0x%08h (should be 0xDEADBEEF if written)\n [ERR-026-DBG] v1_sram[65529]=0x%08h (should be 1 for CoreMark)\n============================================\n\n",10
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_bench_id
                 , '#',88,__Vtemp_9.data(), '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_iters
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_ticks
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_metric
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_checks
                 , '#',48,((0U == vlSelfRef.lumi_v1_tb_top__DOT__unnamedblk16__DOT__r_checks)
                            ? 0x0000285041535329ULL
                            : 0x0000284641494c29ULL)
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__sram_we_count
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65528U]
                 , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[65529U]);
    VL_FINISH_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 867, "");
    co_return;
}

VlCoroutine Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__17(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_initial__TOP__Vtiming__17\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000ee6b28000ULL, 
                                         nullptr, "/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 
                                         873);
    VL_WRITEF_NX("[TIMEOUT] Simulation timeout at %0t\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_FINISH_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 875, "");
    co_return;
}

void Vlumi_v1_tb_top___024root___eval_triggers_vec__act(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_triggers_vec__act\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__reset_n__0)) 
                                                       << 5U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__clk_bus) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_bus__0))) 
                                                          << 3U) 
                                                         | (((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__reset_n__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__clk_core) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_core__0))) 
                                                            << 1U) 
                                                           | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_core__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__clk_core;
    vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__reset_n__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_bus__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__clk_bus;
}

bool Vlumi_v1_tb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vlumi_v1_tb_top___024root___act_sequent__TOP__0(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___act_sequent__TOP__0\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_0__needs_cross_word_split;
    VlUnpacked<IData/*31:0*/, 2> lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_load_data;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_load_data[__Vi0] = 0;
    }
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged = 0;
    CData/*1:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset = 0;
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3 = 0;
    CData/*1:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset = 0;
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3 = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata = 0;
    CData/*1:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset = 0;
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3 = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data = 0;
    CData/*1:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset = 0;
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3 = 0;
    IData/*31:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data = 0;
    CData/*1:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset = 0;
    CData/*2:0*/ __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3 = 0;
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_we[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_wdata[0U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] = 0U;
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
          & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                    >> 0x0000001cU))) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_skip_r)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U] 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] = 1U;
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U]);
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_0__needs_cross_word_split 
        = ((0U != (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3))) 
           && ((1U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3)))
                ? (3U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset))
                : ((2U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3))) 
                   && (0U != (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset)))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
        = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
            & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_skip_r))) 
           & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_0__needs_cross_word_split));
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U]);
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0;
        if ((0U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 8U;
                    goto __Vlabel0;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 4U;
                    goto __Vlabel0;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 2U;
                goto __Vlabel0;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 1U;
                goto __Vlabel0;
            }
        } else if ((1U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 8U;
                    goto __Vlabel0;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0cU;
                    goto __Vlabel0;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 6U;
                goto __Vlabel0;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 3U;
                goto __Vlabel0;
            }
        } else if ((2U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 8U;
                    goto __Vlabel0;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0cU;
                    goto __Vlabel0;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0eU;
                goto __Vlabel0;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0fU;
                goto __Vlabel0;
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0fU;
            goto __Vlabel0;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0U;
        __Vlabel0: ;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U]);
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata[0U];
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data = 0;
        if ((0U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000018U);
                    goto __Vlabel1;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (0x00ff0000U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                          << 0x00000010U));
                    goto __Vlabel1;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (0x0000ff00U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                      << 8U));
                goto __Vlabel1;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata);
                goto __Vlabel1;
            }
        } else if ((1U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000018U);
                    goto __Vlabel1;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000010U);
                    goto __Vlabel1;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = ((0x00ff0000U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                       << 8U)) | (0x0000ff00U 
                                                  & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                                     << 8U)));
                goto __Vlabel1;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (0x0000ffffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata);
                goto __Vlabel1;
            }
        } else if ((2U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000018U);
                    goto __Vlabel1;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000010U);
                    goto __Vlabel1;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                       << 8U);
                goto __Vlabel1;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
                goto __Vlabel1;
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
            goto __Vlabel1;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
            = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
        __Vlabel1: ;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U]);
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                         >> 2U))];
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load = 0;
        if ((4U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
                goto __Vlabel2;
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
                if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                               >> 0x10U);
                        goto __Vlabel2;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                               >> 0x10U);
                        goto __Vlabel2;
                    }
                } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (0x0000ffffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 8U));
                    goto __Vlabel2;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (0x0000ffffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data);
                    goto __Vlabel2;
                }
            } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                           >> 0x18U);
                    goto __Vlabel2;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x10U));
                    goto __Vlabel2;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                      >> 8U));
                goto __Vlabel2;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data);
                goto __Vlabel2;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
                goto __Vlabel2;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
                goto __Vlabel2;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                               >> 0x10U));
                    goto __Vlabel2;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                               >> 0x10U));
                    goto __Vlabel2;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x17U)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                              >> 8U)));
                goto __Vlabel2;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x0fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data));
                goto __Vlabel2;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                    >> 0x1fU))) << 8U) 
                       | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                          >> 0x18U));
                goto __Vlabel2;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x17U)))) 
                        << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                                 >> 0x10U)));
                goto __Vlabel2;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                      >> 0x0fU)))) 
                    << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                             >> 8U)));
            goto __Vlabel2;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                      >> 7U)))) << 8U) 
                   | (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data));
            goto __Vlabel2;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
            = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
        __Vlabel2: ;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_load_data[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_we[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_wdata[1U];
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U] = 0U;
    if (((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
           >> 1U) & (3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                            >> 0x0000001cU))) & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_skip_r)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U] 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                     >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U] = 1U;
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U]);
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_0__needs_cross_word_split 
        = ((0U != (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3))) 
           && ((1U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3)))
                ? (3U == (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset))
                : ((2U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__funct3))) 
                   && (0U != (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__needs_cross_word_split__56__addr_offset)))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U] 
        = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U] 
            & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_skip_r))) 
           & (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_0__needs_cross_word_split));
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U]);
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0;
        if ((0U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 8U;
                    goto __Vlabel3;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 4U;
                    goto __Vlabel3;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 2U;
                goto __Vlabel3;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 1U;
                goto __Vlabel3;
            }
        } else if ((1U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 8U;
                    goto __Vlabel3;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0cU;
                    goto __Vlabel3;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 6U;
                goto __Vlabel3;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 3U;
                goto __Vlabel3;
            }
        } else if ((2U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 8U;
                    goto __Vlabel3;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0cU;
                    goto __Vlabel3;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__57__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0eU;
                goto __Vlabel3;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0fU;
                goto __Vlabel3;
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0x0fU;
            goto __Vlabel3;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable = 0U;
        __Vlabel3: ;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_1__gen_byte_enable;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U]);
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata[1U];
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data = 0;
        if ((0U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000018U);
                    goto __Vlabel4;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (0x00ff0000U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                          << 0x00000010U));
                    goto __Vlabel4;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (0x0000ff00U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                      << 8U));
                goto __Vlabel4;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata);
                goto __Vlabel4;
            }
        } else if ((1U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000018U);
                    goto __Vlabel4;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000010U);
                    goto __Vlabel4;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = ((0x00ff0000U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                       << 8U)) | (0x0000ff00U 
                                                  & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                                                     << 8U)));
                goto __Vlabel4;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (0x0000ffffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata);
                goto __Vlabel4;
            }
        } else if ((2U == (3U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__funct3)))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000018U);
                    goto __Vlabel4;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                           << 0x00000010U);
                    goto __Vlabel4;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata 
                       << 8U);
                goto __Vlabel4;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
                goto __Vlabel4;
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
                = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
            goto __Vlabel4;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data 
            = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__58__wdata;
        __Vlabel4: ;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_2__align_store_data;
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U]);
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                         >> 2U))];
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load = 0;
        if ((4U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
                goto __Vlabel5;
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
                if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                               >> 0x10U);
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                               >> 0x10U);
                        goto __Vlabel5;
                    }
                } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (0x0000ffffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 8U));
                    goto __Vlabel5;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (0x0000ffffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data);
                    goto __Vlabel5;
                }
            } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                           >> 0x18U);
                    goto __Vlabel5;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x10U));
                    goto __Vlabel5;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                      >> 8U));
                goto __Vlabel5;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data);
                goto __Vlabel5;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
                goto __Vlabel5;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
                goto __Vlabel5;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                               >> 0x10U));
                    goto __Vlabel5;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                               >> 0x10U));
                    goto __Vlabel5;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x17U)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                              >> 8U)));
                goto __Vlabel5;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x0fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data));
                goto __Vlabel5;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                    >> 0x1fU))) << 8U) 
                       | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                          >> 0x18U));
                goto __Vlabel5;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                          >> 0x17U)))) 
                        << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                                 >> 0x10U)));
                goto __Vlabel5;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__addr_offset))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                      >> 0x0fU)))) 
                    << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                             >> 8U)));
            goto __Vlabel5;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data 
                                      >> 7U)))) << 8U) 
                   | (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data));
            goto __Vlabel5;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load 
            = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__59__raw_data;
        __Vlabel5: ;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_load_data[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_3__sign_extend_load;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_addr_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_funct3_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_we_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_wdata_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_be_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[(1U 
                                                                                & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_data_r;
    } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
                | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot 
            = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U]
                ? 0U : 1U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[(1U 
                                                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)] 
            = (0xfffffffcU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr
               [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)]);
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__funct3 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3
            [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)];
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset 
            = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr
               [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)]);
        {
            vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0;
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__funct3)))) {
                if ((2U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                    if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 8U;
                        goto __Vlabel6;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 4U;
                        goto __Vlabel6;
                    }
                } else if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 2U;
                    goto __Vlabel6;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 1U;
                    goto __Vlabel6;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__funct3)))) {
                if ((2U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                    if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 8U;
                        goto __Vlabel6;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0x0cU;
                        goto __Vlabel6;
                    }
                } else if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 6U;
                    goto __Vlabel6;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 3U;
                    goto __Vlabel6;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__funct3)))) {
                if ((2U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                    if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 8U;
                        goto __Vlabel6;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0x0cU;
                        goto __Vlabel6;
                    }
                } else if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0x0eU;
                    goto __Vlabel6;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0x0fU;
                    goto __Vlabel6;
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0x0fU;
                goto __Vlabel6;
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable = 0U;
            __Vlabel6: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[(1U 
                                                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_4__gen_byte_enable;
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__funct3 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3
            [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)];
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset 
            = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr
               [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)]);
        vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata
            [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)];
        {
            vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data = 0;
            if ((0U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__funct3)))) {
                if ((2U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                    if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                            = (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                               << 0x00000018U);
                        goto __Vlabel7;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                            = (0x00ff0000U & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                                              << 0x00000010U));
                        goto __Vlabel7;
                    }
                } else if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                        = (0x0000ff00U & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                                          << 8U));
                    goto __Vlabel7;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                        = (0x000000ffU & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata);
                    goto __Vlabel7;
                }
            } else if ((1U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__funct3)))) {
                if ((2U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                    if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                            = (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                               << 0x00000018U);
                        goto __Vlabel7;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                            = (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                               << 0x00000010U);
                        goto __Vlabel7;
                    }
                } else if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                        = ((0x00ff0000U & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                                           << 8U)) 
                           | (0x0000ff00U & (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                                             << 8U)));
                    goto __Vlabel7;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                        = (0x0000ffffU & vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata);
                    goto __Vlabel7;
                }
            } else if ((2U == (3U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__funct3)))) {
                if ((2U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                    if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                            = (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                               << 0x00000018U);
                        goto __Vlabel7;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                            = (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                               << 0x00000010U);
                        goto __Vlabel7;
                    }
                } else if ((1U & (IData)(vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                        = (vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata 
                           << 8U);
                    goto __Vlabel7;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                        = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata;
                    goto __Vlabel7;
                }
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                    = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata;
                goto __Vlabel7;
            }
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data 
                = vlSelfRef.__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata;
            __Vlabel7: ;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[(1U 
                                                                                & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk4__DOT__ma_slot)] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_5__align_store_data;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be = 0x0fU;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_addr_r;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data
            [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we
            [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))];
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be
            [(1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r))];
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we = 0U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be = 0x0fU;
        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
             | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U])) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk15__DOT__ma_slot 
                = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U]
                    ? 0U : 1U);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                = (0xfffffffcU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr
                   [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk15__DOT__ma_slot)]);
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data
                [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk15__DOT__ma_slot)];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we
                [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk15__DOT__ma_slot)];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be
                [(1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk15__DOT__ma_slot)];
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U];
        } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r)))) {
            if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                 & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U];
            } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
                        & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U])))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U];
            } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U]) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[1U];
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                    = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U];
            }
        }
    }
    if ((3U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_reg))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = 1U;
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[1U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_we 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_be 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U];
        }
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                         >> 2U))];
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U]) 
         & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U] 
             >> 2U) == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U] 
                        >> 2U)))) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffffff00U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x000000ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffff00ffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x0000ff00U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xff00ffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x00ff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0x00ffffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0xff000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
    }
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U] 
          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[1U]) 
         & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U] 
             >> 2U) == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U] 
                        >> 2U)))) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffffff00U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x000000ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffff00ffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x0000ff00U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xff00ffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x00ff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0x00ffffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0xff000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[0U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U]);
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged;
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load = 0;
        if ((4U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
                goto __Vlabel8;
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
                if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                               >> 0x10U);
                        goto __Vlabel8;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                               >> 0x10U);
                        goto __Vlabel8;
                    }
                } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (0x0000ffffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 8U));
                    goto __Vlabel8;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (0x0000ffffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data);
                    goto __Vlabel8;
                }
            } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                           >> 0x18U);
                    goto __Vlabel8;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x10U));
                    goto __Vlabel8;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                      >> 8U));
                goto __Vlabel8;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data);
                goto __Vlabel8;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
                goto __Vlabel8;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
                goto __Vlabel8;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                               >> 0x10U));
                    goto __Vlabel8;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                               >> 0x10U));
                    goto __Vlabel8;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x17U)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                              >> 8U)));
                goto __Vlabel8;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x0fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data));
                goto __Vlabel8;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                    >> 0x1fU))) << 8U) 
                       | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                          >> 0x18U));
                goto __Vlabel8;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x17U)))) 
                        << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                                 >> 0x10U)));
                goto __Vlabel8;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                      >> 0x0fU)))) 
                    << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                             >> 8U)));
            goto __Vlabel8;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                      >> 7U)))) << 8U) 
                   | (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data));
            goto __Vlabel8;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
            = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
        __Vlabel8: ;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__fwd_load_data[0U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram
        [(0x0000ffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr 
                         >> 2U))];
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[0U] 
          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[0U]) 
         & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[0U] 
             >> 2U) == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U] 
                        >> 2U)))) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffffff00U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x000000ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffff00ffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x0000ff00U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xff00ffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x00ff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[0U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0x00ffffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0xff000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[0U]));
        }
    }
    if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[1U] 
          & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[1U]) 
         & ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U] 
             >> 2U) == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U] 
                        >> 2U)))) {
        if ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffffff00U & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x000000ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
        if ((2U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xffff00ffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x0000ff00U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
        if ((4U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0xff00ffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0x00ff0000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
        if ((8U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[1U])) {
            lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged 
                = ((0x00ffffffU & lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged) 
                   | (0xff000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[1U]));
        }
    }
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[1U];
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset 
        = (3U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[1U]);
    __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__unnamedblk5__DOT__unnamedblk6__DOT__merged;
    {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load = 0;
        if ((4U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
                goto __Vlabel9;
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
                if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                               >> 0x10U);
                        goto __Vlabel9;
                    } else {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                            = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                               >> 0x10U);
                        goto __Vlabel9;
                    }
                } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (0x0000ffffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 8U));
                    goto __Vlabel9;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (0x0000ffffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data);
                    goto __Vlabel9;
                }
            } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                           >> 0x18U);
                    goto __Vlabel9;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x10U));
                    goto __Vlabel9;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                      >> 8U));
                goto __Vlabel9;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data);
                goto __Vlabel9;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
                goto __Vlabel9;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
                goto __Vlabel9;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__funct3))) {
            if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                               >> 0x10U));
                    goto __Vlabel9;
                } else {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                        = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                        >> 0x1fU))) 
                            << 0x00000010U) | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                               >> 0x10U));
                    goto __Vlabel9;
                }
            } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x17U)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                              >> 8U)));
                goto __Vlabel9;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x0fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data));
                goto __Vlabel9;
            }
        } else if ((2U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
            if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                    >> 0x1fU))) << 8U) 
                       | (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                          >> 0x18U));
                goto __Vlabel9;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                    = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                          >> 0x17U)))) 
                        << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                                 >> 0x10U)));
                goto __Vlabel9;
            }
        } else if ((1U & (IData)(__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__addr_offset))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                      >> 0x0fU)))) 
                    << 8U) | (0x000000ffU & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                             >> 8U)));
            goto __Vlabel9;
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
                = (((- (IData)((1U & (__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data 
                                      >> 7U)))) << 8U) 
                   | (0x000000ffU & __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data));
            goto __Vlabel9;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load 
            = __Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sign_extend_load__62__raw_data;
        __Vlabel9: ;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__fwd_load_data[1U] 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____VlemCall_6__sign_extend_load;
}

void Vlumi_v1_tb_top___024root___act_comb__TOP__0(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___act_comb__TOP__0\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*3:0*/, 3> lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_fu_id[__Vi0] = 0;
    }
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0 = 0;
    IData/*31:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0 = 0;
    CData/*0:0*/ lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0 = 0;
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
    CData/*6:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    // Body
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_reg;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
        }
    } else if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
                         | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U])))) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r) {
            if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
            } else {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 3U;
            }
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r) {
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
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r)))) {
        if ((1U & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
                      | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U])))) {
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
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 0U;
    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
    } else if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
                | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U])) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r) {
        if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r)))) {
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
    if ((3U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_reg))) {
        if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = 1U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy 
            = (1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
        = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) 
         | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
            | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
            = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
    } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2 
                = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
                    & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1))) 
                   & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
                = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid)) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
                = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid)) 
                   | (1U & (~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                                       >> 0x0000001cU)) 
                               & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                  >> 0x0000001eU)))));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
        = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) 
         | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
            | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
            = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2 
                = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
                    & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1))) 
                   & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
                = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2) 
                      << 1U));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
                = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid)) 
                   | (2U & ((~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                                        >> 0x0000001cU)) 
                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                   >> 0x0000001eU))) 
                            << 1U)));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
        = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r) 
         | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[0U] 
            | vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[1U]))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
            = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
    } else if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2 
                = (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
                    & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1))) 
                   & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r)));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
                = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2) 
                      << 2U));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid 
                = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid)) 
                   | (4U & ((~ ((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                                        >> 0x0000001cU)) 
                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                   >> 0x0000001eU))) 
                            << 2U)));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__pipe_stall 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch) 
           | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__post_mispredict_bubble_r) 
              | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                 | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
        = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
    if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1 
                = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1));
        } else if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][0U] 
                            >> 0x0000001cU)) & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[0U][2U] 
                                                >> 0x0000001eU))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = (6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3 
                = (1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
        = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
    if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid) 
                         >> 1U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1) 
                      << 1U));
        } else if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][0U] 
                            >> 0x0000001cU)) & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[1U][2U] 
                                                >> 0x0000001eU))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = (5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
                         >> 1U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3) 
                      << 1U));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
        = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r))) {
        if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                     >> 0x0000001cU)) & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                            >> 0x0000001eU)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid) 
                         >> 2U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1) 
                      << 2U));
        } else if (((3U == (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][0U] 
                            >> 0x0000001cU)) & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[2U][2U] 
                                                >> 0x0000001eU))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = (3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid));
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3 
                = (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r) 
                         >> 2U));
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid 
                = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid)) 
                   | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3) 
                      << 2U));
        }
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U] = 0U;
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] = 0U;
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue = 0U;
    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__pipe_stall)))) {
        if ((1U & (~ (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__stop_issue)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = 0U;
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                  >> 7U) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                              >> 3U)))))));
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                     & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                      & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                              >> 3U)))))));
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                     & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                      & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                              >> 3U)))))));
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                     & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                      & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                              >> 3U)))))));
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                     & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                      & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                              >> 3U)))))));
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                     & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                      & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = 0U;
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                    = (1U & (~ ((9U >= (0x0000000fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                           >> 3U))) 
                                && (1U & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy) 
                                           << 3U) >> 
                                          (0x0000000fU 
                                           & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                              >> 3U)))))));
                if ((2U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                           >> 3U)))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r)));
                }
                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 0U;
                if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                     & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                      >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                    if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                           >> 2U) & ((0x0000001fU & 
                                      (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                       >> 0x00000013U)) 
                                     == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                         | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                             >> 1U) & ((0x0000001fU 
                                        & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                           >> 0x0000000eU)) 
                                       == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                    if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                         & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                          >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                        if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                               >> 2U) & ((0x0000001fU 
                                          & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                             >> 0x00000013U)) 
                                         == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                             | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                 >> 1U) & ((0x0000001fU 
                                            & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                               >> 0x0000000eU)) 
                                           == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                      & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                     & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U])))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                  >> 7U) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if (((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][2U] 
                  >> 7U) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[0U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[1U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[2U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[3U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[4U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
            if ((((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot)) 
                  & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][2U] 
                     >> 7U)) & (3U > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)))) {
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
                    if ((1U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U)))) {
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                        if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
                             & (1U == (0x0000000fU 
                                       & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                                          [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                             ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                             : 0U)][0U] 
                                          >> 3U))))) {
                            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
                        }
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                               >> 3U)))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = 0U;
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
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw)))) {
                        if (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                             & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[0U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 1U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[1U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                        if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending) 
                              >> 2U) & (0U != vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U]))) {
                            if ((((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                   >> 2U) & ((0x0000001fU 
                                              & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                 >> 0x00000013U)) 
                                             == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])) 
                                 | ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][0U] 
                                     >> 1U) & ((0x0000001fU 
                                                & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[5U][1U] 
                                                   >> 0x0000000eU)) 
                                               == vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[2U])))) {
                                vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available) 
                          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw))) 
                         & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U])))) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)));
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
    if ((0U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count))) {
        if ((((0U < (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count)) 
              & (0U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count))) 
             & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__pipe_stall)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = 1U;
        }
    }
    __VdfgRegularize_hebeb780c_0_2 = (0x0000007fU & 
                                      ((0x0000003fU 
                                        & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count) 
                                            - (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count)) 
                                           & (- (IData)(
                                                        ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count) 
                                                         <= (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count)))))) 
                                       + ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_count) 
                                          + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_pending))));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid 
        = ((6U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid)) 
           | (IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid 
        = ((5U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0) 
              << 1U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid 
        = ((3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid)) 
           | ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h733e1377__0) 
              << 2U));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U] 
        = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U]) 
           | (0x03ffffffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0) 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_pc
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_raw
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 = 0U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U] 
            = ((0x02000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][4U]) 
               | (0x03ffffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                                 >> 7U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U] 
            = ((0xfe000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                  >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = ((0xfffe0001U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0) 
                  << 1U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0 
            = ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]) 
               && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_compressed) 
                         >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = ((0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0 
            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                   >> 0x0000001bU) : 0U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xfe0fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0) 
                  << 0x00000014U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xfff07fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0) 
                  << 0x0000000fU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xffff83ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0) 
                  << 0x0000000aU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                     >> 0x00000018U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xfffffc7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0) 
                  << 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0 
            = (0x0000007fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U] 
            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][2U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                << 0x00000019U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                                   >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0 
            = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                              >> 3U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U] 
            = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[0U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0) 
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
                   && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                             >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])))))) {
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
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                 : 0U)][1U] >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                                 : 0U)][1U] >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[0U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0;
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
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U] 
        = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U]) 
           | (0x03ffffffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0) 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_pc
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_raw
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 = 0U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U] 
            = ((0x02000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][4U]) 
               | (0x03ffffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                                 >> 7U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U] 
            = ((0xfe000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                  >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = ((0xfffe0001U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0) 
                  << 1U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0 
            = ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]) 
               && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_compressed) 
                         >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = ((0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0 
            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                   >> 0x0000001bU) : 0U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xfe0fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0) 
                  << 0x00000014U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xfff07fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0) 
                  << 0x0000000fU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xffff83ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0) 
                  << 0x0000000aU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                     >> 0x00000018U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xfffffc7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0) 
                  << 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0 
            = (0x0000007fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U] 
            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][2U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                << 0x00000019U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                                   >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0 
            = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                              >> 3U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U] 
            = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[1U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0) 
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
                   && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                             >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])))))) {
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
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                 : 0U)][1U] >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                                 : 0U)][1U] >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0;
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
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0 
        = (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
           & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge)));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U] 
        = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U]) 
           | (0x03ffffffU & ((IData)(lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343add7__0) 
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
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_pc
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]];
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 
                = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_raw
                [vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]];
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 = 0U;
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 = 0U;
        }
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U] 
            = ((0x02000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][4U]) 
               | (0x03ffffffU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 
                                 >> 7U)));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0x01ffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                  << 0x00000019U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U] 
            = ((0xfe000000U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][3U]) 
               | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 
                  >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = ((0xfffe0001U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0) 
                  << 1U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0 
            = ((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]) 
               && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_compressed) 
                         >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = ((0xfffffffeU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0 
            = ((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U])
                ? (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                   >> 0x0000001bU) : 0U);
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xfe0fffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0) 
                  << 0x00000014U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xfff07fffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0) 
                  << 0x0000000fU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xffff83ffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0) 
                  << 0x0000000aU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0 
            = (7U & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                     >> 0x00000018U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xfffffc7fU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0) 
                  << 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0 
            = (0x0000007fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                              >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U] 
            = ((0xffffff80U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][2U]) 
               | (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0 
            = ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[1U] 
                << 0x00000019U) | (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                                   >> 7U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][1U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0 
            = (0x0000000fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d[0U] 
                              >> 3U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U] 
            = ((0x0fffffffU & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[2U][0U]) 
               | ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0) 
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
                   && (1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid) 
                             >> vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])))))) {
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
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                                 : 0U)][1U] >> 0x00000013U));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0 
            = (0x0000001fU & (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
                              [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                                 ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                                 : 0U)][1U] >> 0x0000000eU));
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[2U] 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0;
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
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_wr_offset 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_pending) 
           & (- (IData)((0x20U >= (IData)(__VdfgRegularize_hebeb780c_0_2)))));
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
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dib_can_accept 
        = ((0U == (0x0000001fU & (((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_pending) 
                                   - (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_wr_offset)) 
                                  & (- (IData)(((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_pending) 
                                                > (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_wr_offset))))))) 
           & (0x20U >= (IData)(__VdfgRegularize_hebeb780c_0_2)));
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0 
        = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[0U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                  : 0U)][0U] >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0 
        = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[1U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                  : 0U)][0U] >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0 
        = ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[2U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[2U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_he5ff111a__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                  : 0U)][0U] >> 2U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[2U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0 
        = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[0U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[0U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[0U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[0U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[0U]
                  : 0U)][0U] >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[0U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0 
        = ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[1U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[1U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[1U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[1U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[1U]
                  : 0U)][0U] >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[1U] = 0U;
    }
    lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0 
        = ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit))
            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[2U]
            : vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[2U]);
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[2U] 
        = lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24c737a4__0;
    if ((vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[2U] 
         & (~ (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec
               [((5U >= vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U])
                  ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[2U]
                  : 0U)][0U] >> 1U)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[2U] = 0U;
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_advance 
        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dib_can_accept) 
           & ((~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall)) 
              & ((1U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)) 
                 | (2U == (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)))));
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg;
    if ((4U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 0U;
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
        if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next 
                = ((0U < (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt))
                    ? 3U : 1U);
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 4U;
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 3U;
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_fetch__branch_redirect_valid) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 3U;
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 2U;
        } else if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 1U;
        }
    } else {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next 
            = ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))
                ? ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)
                    ? 4U : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request)
                             ? 3U : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_fetch__branch_redirect_valid)
                                      ? 3U : ((1U & 
                                               ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall) 
                                                | (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dib_can_accept))))
                                               ? 1U
                                               : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n)
                                                   ? 1U
                                                   : 2U)))))
                : ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)
                    ? 4U : 1U));
    }
    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
    if ((1U & (~ ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)))) {
                if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)))) {
                    if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb;
                    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_fetch__branch_redirect_valid) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target;
                    } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
                    } else if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                            = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb)
                                ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb
                                : (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                                   + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_bytes_consumed)));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt)))) {
                if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb;
                } else if (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_fetch__branch_redirect_valid) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target;
                } else if ((1U & ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall) 
                                  | (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dib_can_accept))))) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                        = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg;
                } else if (vlSelfRef.lumi_v1_tb_top__DOT__reset_n) {
                    vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
                        = ((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb)
                            ? vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb
                            : (vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg 
                               + (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_bytes_consumed)));
                }
            }
        } else {
            vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next = 0U;
        }
    }
    if ((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_fetch__branch_redirect_valid) 
          & (~ (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request))) 
         & (3U != (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg)))) {
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = 3U;
        vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next 
            = vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next)))) {
            VL_WRITEF_NX("[%0t] %%Error: lumi_fetch.sv:829: Assertion failed in %m: [ASSERT] PC not 2-byte aligned: 0x%08h\n",4, 'M',vlSymsp->name(),"lumi_v1_tb_top.u_dut.gen_single_core.u_core.u_fetch", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next);
            VL_STOP_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/rtl/core/lumi_fetch.sv", 829, "");
        }
    }
}
