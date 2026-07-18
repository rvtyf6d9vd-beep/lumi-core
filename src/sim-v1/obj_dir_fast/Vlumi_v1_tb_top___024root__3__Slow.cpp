// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___stl_sequent__TOP__0(Vlumi_v1_tb_top___024root* vlSelf);
VL_ATTR_COLD void Vlumi_v1_tb_top___024root___stl_sequent__TOP__1(Vlumi_v1_tb_top___024root* vlSelf);
VL_ATTR_COLD void Vlumi_v1_tb_top___024root___stl_sequent__TOP__2(Vlumi_v1_tb_top___024root* vlSelf);
VL_ATTR_COLD void Vlumi_v1_tb_top___024root___stl_comb__TOP__0(Vlumi_v1_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___eval_stl(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_stl\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vlumi_v1_tb_top___024root___stl_sequent__TOP__0(vlSelf);
        Vlumi_v1_tb_top___024root___stl_sequent__TOP__1(vlSelf);
        Vlumi_v1_tb_top___024root___stl_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vlumi_v1_tb_top___024root___stl_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___eval_triggers_vec__stl(Vlumi_v1_tb_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlumi_v1_tb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlumi_v1_tb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

VL_ATTR_COLD bool Vlumi_v1_tb_top___024root___eval_phase__stl(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_phase__stl\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlumi_v1_tb_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlumi_v1_tb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vlumi_v1_tb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vlumi_v1_tb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vlumi_v1_tb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlumi_v1_tb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vlumi_v1_tb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] lumi_v1_tb_top.u_dut.dc_addr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge lumi_v1_tb_top.clk_core)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge lumi_v1_tb_top.reset_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge lumi_v1_tb_top.clk_bus)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( lumi_v1_tb_top.reset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlumi_v1_tb_top___024root___ctor_var_reset(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___ctor_var_reset\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->lumi_v1_tb_top__DOT__clk_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15924838510971302436ull);
    vlSelf->lumi_v1_tb_top__DOT__clk_bus = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13767985441882650173ull);
    vlSelf->lumi_v1_tb_top__DOT__reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12760057049960650593ull);
    vlSelf->lumi_v1_tb_top__DOT__cycle_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105972270274366134ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1158369679469498856ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_wstrb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16550187887292192897ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13055104360976200801ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17161165717647555310ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17254391170368157851ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18300100070217532043ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 441409901790971779ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12441594794233686524ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__m_axi_rdata, __VscopeHash, 3837687803683877941ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7418898220128263328ull);
    vlSelf->lumi_v1_tb_top__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2952090123365861716ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->lumi_v1_tb_top__DOT__commit_pc_packed, __VscopeHash, 7225825317734686952ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->lumi_v1_tb_top__DOT__commit_inst_packed, __VscopeHash, 5596396963034359753ull);
    vlSelf->lumi_v1_tb_top__DOT__commit_inst_raw_packed = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17295416140763702500ull);
    vlSelf->lumi_v1_tb_top__DOT__commit_rd_packed = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8855525070294959975ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->lumi_v1_tb_top__DOT__commit_rd_data_packed, __VscopeHash, 16099275585430338700ull);
    vlSelf->lumi_v1_tb_top__DOT__sig_start = 0;
    vlSelf->lumi_v1_tb_top__DOT__sig_end = 0;
    vlSelf->lumi_v1_tb_top__DOT__stall_timeout = 0;
    vlSelf->lumi_v1_tb_top__DOT__last_progress_cyc = 0;
    vlSelf->lumi_v1_tb_top__DOT__stall_detected = 0;
    vlSelf->lumi_v1_tb_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__s = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__nmi_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8614390602624082686ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10593278505073978743ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__dc_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18078638207083679951ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__dc_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5507315527657334857ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__dc_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16411128460320494978ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__dc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15360843912630440512ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12245643555627565977ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__commit_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 72195728858995249ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__commit_pc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4477185636823120716ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__dbg_halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 791062494928706750ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13386416765743588961ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__core_exc_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11385956978912028354ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__v1_sram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2501650943425445746ull);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__v1_ic_line, __VscopeHash, 13170306190644859301ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__sram_we_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683817168089506804ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__clic_irq_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5370917681094564604ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2319285778186711993ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__clic_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14639190591143266066ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_is_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7207087375394439946ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_enter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15281607753043253490ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7637326942514960731ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_epc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453960248849448132ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__exc_trap_tval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7303018467857423664ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__exc_nmi_enter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16073610912978135001ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5881073472729187337ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_inst_raw[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 272883404498012242ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2018313739664020437ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_rd_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14029302441548356236ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__mon_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11620992139435436114ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__dc_evict_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17404822064111411950ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__dc_evict_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4222782308445052880ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__dc_evict_data, __VscopeHash, 2176904335437067491ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__trace_write_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14004320500200130695ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__trace_write_data, __VscopeHash, 10134152830615678706ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17309290438597297264ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__state_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11306923402306067992ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__addr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6016866399803771548ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__id_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17471046123192486886ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__len_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4652494531860657333ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10560988882063488663ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__wdata_reg, __VscopeHash, 13179342423448505134ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__evict_beat_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1913991215653503546ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__trace_ack_bus = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17043979995396288463ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awvalid_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16871739877978513421ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awaddr_core = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4422677392070307ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awid_core = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16703059200735610077ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awlen_core = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15011489467559462272ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awsize_core = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7043329251235362238ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_awburst_core = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17417140516301258083ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wvalid_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8178976007813061170ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wdata_core, __VscopeHash, 11009265485259352543ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wstrb_core = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5932488564469741857ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_wlast_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15467180004932862636ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_bready_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11063260163976182804ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arvalid_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2541943474342571990ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_araddr_core = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10439224335041486897ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arid_core = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11180724276879339058ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arlen_core = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 839274213934882069ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arsize_core = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14893577857370522496ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_arburst_core = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 138099684546995955ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__axi_rready_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4165291673416805836ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4115721458086267751ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__aw_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2530109932116424787ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3476618800647960483ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__w_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7992570348434815397ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222262876000393278ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__b_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11556005741022435523ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18070624989208892081ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__ar_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10927188669867228640ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4694003601859519513ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__r_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6679080788717379550ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__arb_trace_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17762557079948754804ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 6663475390761133254ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10204300370979413929ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2109869663427268488ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12988092868540000455ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16829531215216285310ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4735748885422384965ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__wr_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10142307140595753145ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5035032510592857016ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__rd_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17631172551206041518ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(145, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem[__Vi0], __VscopeHash, 647852656029639263ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17363135466412528766ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4436110290105899883ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 637076799411637553ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7410259903888528203ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8566076547596749239ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__wr_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11466938079477066473ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13939373423462658780ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__rd_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18301287675688327430ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3834834743376669017ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17980835211338269450ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17538381296711805700ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3983147891667472263ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7562847136819863822ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__wr_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11314061584485605787ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10122918608463648292ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_b_cdc__DOT__rd_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 25775279931140259ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 9104621299758996565ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13362667793846321910ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2013980981915026919ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10870074464652473853ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4817043459613186083ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14313315162487638730ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__wr_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13626241788633225443ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8433605529135392422ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__rd_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2742842104195679815ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem[__Vi0], __VscopeHash, 2715786040404798500ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16327353995653823299ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5726167830095816267ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17301252600106415054ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1491966463486022413ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17804758423289104385ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__wr_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8795151172207061486ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8197171507757924323ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_gray_sync1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11905617674632112462ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_hff6b7b06__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_hefdaa9f3__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_ha063f697__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h0b6e4d64__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h0b6e75fc__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__7 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT____Vlvbound_h69796654__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503818435807217485ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__medeleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1824007791059329965ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mideleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18119404328455918076ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mie_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 977755059180144845ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2240732677481561720ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcounteren_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2982271960091978987ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12251899971598166453ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5613639546285801420ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2131898924875178465ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mtval_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5003646102311188748ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mip_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16550821109675911086ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__sstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1511832133005817126ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__stvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3980568740753730990ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__sscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15180992745816954568ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__sepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15626822559238173813ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__scause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10544994356442557969ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__stval_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5321829421153836680ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mnepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17189142514694848000ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mncause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11877689625856573864ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mnstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10938185547344403540ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mcycle_cnt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 590297007379769202ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__minstret_cnt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8628005115863600851ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmevent_r[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9256559028230427288ull);
    }
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mhpmcounter_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6258604750410661537ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_cycle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12549692708879728733ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_instret = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7164258151430874017ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hi_latch_hpm[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14241918292232068852ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_read_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16830783471097921661ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_addr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6629097335122338733ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__is_clic_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15228903654647893081ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__csr_write_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11701910339114352390ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpm_event_match = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 11593409348889692183ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__hpmcounter_write_conflict = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 14937286255046184881ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_csr__DOT__mstatus_trap_enter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6230728994893074635ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__mintstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4214106764445870051ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__mintthresh_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4713742806851374097ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15240844505594435861ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__state_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11761302385849993204ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latency_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7291782471956253862ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latch_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14059934748648370487ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latch_level = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8640551137387604272ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__claim_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14289385933737990044ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__claim_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8090003111454623225ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__fetch_exc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13110873319415925766ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__fetch_exc_cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12092503139267777754ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11860089278024140031ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5620166609093029915ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__decode_exc_tval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8495665921326604402ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8342993500676819116ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__exec_exc_cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6206188185623655274ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2776249058229234238ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_exc__DOT__nmi_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9147567344676783491ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9566746791916411405ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__state_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17892573922148555949ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmcontrol = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7198042058639465922ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tdata2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1030508581706593154ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tmatch[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15361033336816698064ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__tenable[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3646218264975894341ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__debug_security_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2284197665947579768ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__halted_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5446132082350325955ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__single_step_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7963395297952815904ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_req_valid_sync0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10478881230157061111ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_req_valid_sync1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8689800341431376182ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_req_valid_sync_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 842112754016715471ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_req_posedge_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041069911437601777ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_addr_cdc = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8746597678942818271ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_wdata_cdc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14342370975398851665ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmi_op_cdc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12482026661547593818ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__dmui_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18354619166225817522ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_dbg__DOT__trigger_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8448169949008509015ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16104753975494911695ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__state_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2995249751570798750ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11851649140796787149ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__fifo_wr_ptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1839165449127410417ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__fifo_rd_ptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6879106719867759276ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__fifo_count = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15135582018186835780ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__prev_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4761441210111656411ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__cap_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8399717464654210934ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__cap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15246020741903079602ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__encoded_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3773870366077348560ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__encoded_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10363069727912916621ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__burst_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7913462192331818125ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__u_trace__DOT__burst_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16987165178855065997ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hc17b548c__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hc17b548c__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h96b55f9c__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h96b55f9c__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h96b55f9c__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hf6297dcb__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8e72e8d9__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h91d6f33c__0 = 0;
    VL_ZERO_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h885e2fc3__0);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hc696c711__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hc696c711__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hc696c711__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h460b2d88__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8ab49013__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h8c771af1__0 = 0;
    VL_ZERO_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h783c4326__0);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hb5532ba8__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h199f6293__0 = 0;
    VL_ZERO_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h3a404ff3__0);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_h163acf0b__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vlvbound_hcb3449ac__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__f1_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5562361444354676447ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18062004911413059426ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_pc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10911322587965969557ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_valid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15124395486837091520ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_compressed = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 60611845961854510ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_raw[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4435435538591386494ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_inst_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11209236595676529385ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_bytes_consumed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13607931307545061762ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_hw_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17578622826080711912ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__pd_carry_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9366088143902031767ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14401595297146342580ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_ret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6650140250677605623ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17555045234226910543ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_inst[__Vi0], __VscopeHash, 10569004781043754890ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7083530081722929869ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs1_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2890908005574618173ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__i_rs2_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17213596450329632404ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13007157785425633587ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7118293889015023791ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs1_data_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 197385385435572591ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_rs2_data_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14840602236342583837ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_hit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7135371150105255164ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_hit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16431510631279186324ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs1_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9223256507171672608ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_rs2_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9375333079949654765ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r[__Vi0], __VscopeHash, 15481840307975467350ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6565684934419943277ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7218937062276897609ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3866721281937301677ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_pred_taken_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6684402738440164542ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_pred_target_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3804486372251563037ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7250672965544359008ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13090923102978686540ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 749262439625000026ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12136562045673114966ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13563101667014898263ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5366838143185919038ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12298657483964756493ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mispredict_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13146691854764682005ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__di_flush_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13933059677499612486ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3234489683496835982ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_is_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7839989889674723980ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_br_executed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14007814847354585735ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7905856593389338803ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_we[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13854897573089605882ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mem_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15362506145494610485ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exception = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11211198596755020448ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_exc_cause[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5781928396370091097ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r[__Vi0], __VscopeHash, 12829173775783384976ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_valid_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3712119092458560813ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 864263920553266887ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_r[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13048043635493275064ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_exception_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11086077820645319915ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_eff[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10338261421878985053ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_bypass_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8541186035987337189ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_out[__Vi0], __VscopeHash, 13984439072156733575ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_result_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18368388959634370403ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_rd_out[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15495398491330700527ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_pc_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16048889301222554956ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2726519723121409287ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14287060349873491994ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__rf_wr_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4949930893055432352ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__trap_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9721358914312877829ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dec_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 467404286366881547ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__dib_can_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11632574076329042084ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mem_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12733778363430427161ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__sb_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8445678353045767454ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_fetch__branch_redirect_valid = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT____Vcellinp__u_decode_issue__pipe_stall = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_load_pending = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10882933173968976390ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1m_rd_check[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7634163299081849895ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_pending = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10742181775607773743ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_load_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2899876217552870757ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_pending = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17806769624525562736ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_mul_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2948945200785127108ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15835728527782485550ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_w_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16736069668831731349ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13029990745208016809ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17427326259840943326ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__bp_m_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4207483579004751849ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_has_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9475137679105474409ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_div_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4321268587363661750ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__post_mispredict_bubble_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17396684931917232812ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__mispredict_branch_has_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4122932852065873596ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_hb1dae855__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_ha0399299__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_hfa4c8e4e__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_ha0427cf4__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_ha07f9496__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_hf769edeb__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT____Vlvbound_hf769edeb__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14665417113027164803ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15619454552096914848ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1930498832560196395ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3143364945914331854ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4382125589072380835ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__flush_cnt_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5989612050425587025ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 5513702323718969533ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17350495638610700654ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6454650946049300363ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_is_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11575932419097903345ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__btb_wr_data = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 3095400947226383340ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5796591956503512644ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14420961223630380254ull);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1024; ++__Vi1) {
            vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tables[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5201380979861992575ull);
        }
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__branch_history = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11278339774953848723ull);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12278719907816729238ull);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1995950056456465485ull);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_hit[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1279538313863925252ull);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_ctr[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10816257137832824714ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ltage_pred = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1319692508977397842ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4643355260499085199ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pred_taken_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3700574918993336917ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f2_pred_target_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1143205162604905095ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_hw_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15256024327142409216ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__carry_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18445310219150606498ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_target_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6071378415315119875ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__f1_pred_taken_comb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2673754970460148049ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk10__DOT__t = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk11__DOT__unnamedblk13__DOT__t = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h12bdafec__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_he4b3611e__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_ha7dd09de__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h12bdafec__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_he4b3611e__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_ha7dd09de__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_hfe6acb0b__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT____Vlvbound_h58010ed1__0 = 0;
    VL_SCOPED_RAND_RESET_W(144, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__eff_data, __VscopeHash, 3490692227116160537ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__bo = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2647046145072270431ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_predecode__DOT__hw = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10299957224078768025ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h455690b5__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd9958__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53b12f1d__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h550a0991__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb1fc3__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb32ff__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54bb333b__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h5343a51c__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h54e2ce1c__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53ddbe3b__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h53dd8773__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h8c637760__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h24973d9f__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc1f9c0e9__17 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__12 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__11 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__10 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__9 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__8 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__7 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__6 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__5 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__4 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hc19454cc__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hfa07e4ad__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h7c01e65e__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_hd2749467__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT____Vlvbound_h540b0a83__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dec[__Vi0], __VscopeHash, 7563178716142260339ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(115, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib[__Vi0], __VscopeHash, 7126270464862923647ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6101897195686706780ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5691191494141281505ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_count = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8318660383866758110ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10781398290222696212ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_valid_r = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7671931608762859996ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_pc_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5913037002654447591ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_compressed_r = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9747341509827037160ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_inst_raw_r[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2991163017627670276ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_pending = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13847826851032125583ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_wr_offset = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8291739146017601481ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__pd_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11778839125451454226ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__wait_for_fresh_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12588288005330100943ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_inst[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6484666233549233210ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_pc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7821934978804551484ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_compressed = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2413645431964141338ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_raw[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6861215189566938090ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__dib_read_valid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11094293227230282808ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_sel[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13022347966123520699ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_ready[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800085434253323119ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__issue_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3593304555705683842ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_already_selected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15919164896936119938ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_fu_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 313393186562280980ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_batch_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11817748146692305821ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_prev, __VscopeHash, 8045902125355703150ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11446032329711376519ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__tmp_dec_d, __VscopeHash, 12854300466770394137ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__found_for_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5499254394047086934ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__58 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__57 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__56 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hb1c86c4c__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__54 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hf4e6961a__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_h4c8e2f45__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__53 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hf4e6961a__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__52 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hf4e6961a__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__51 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__50 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__49 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__48 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__47 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__46 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__45 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__44 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__43 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__35 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__34 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__32 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__24 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__23 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__22 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__21 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__20 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__19 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__18 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__17 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__16 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__15 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__14 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__13 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__12 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__10 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__9 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__8 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__7 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__6 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__5 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__4 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT____Vlvbound_hab7c4f96__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__branch_taken[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5936223717421417375ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__branch_target[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6331623783460490364ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__is_branch[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16201844842331918653ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_lo_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 909438640064792610ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_hi_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9412558168742155988ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7604411250024571202ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1126309708327894272ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__mul_rd_comb = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15894475716202278330ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6652744227207663676ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13371080103187848493ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10806017061714185735ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_divisor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5086768932774671225ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2390130670384030200ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11185871903448140266ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13594508254815655804ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16009012194373932485ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_is_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5792414351739250968ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_rd_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9157237984596426949ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14855017724157355016ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14548911331077272797ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_busy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17891627531870570021ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_quot_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3908660151858752761ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_remain_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239968719408430861ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5543609207297181781ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3221339807103067861ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__e2_mul_rd_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10880499080911215421ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_hbebc87fd__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__15 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__14 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__13 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__12 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__11 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__10 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__9 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__8 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__7 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__6 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__5 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__4 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__3 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h097eb437__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h867fd83a__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h401cce1f__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h85c70e16__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h16a47863__0 = 0;
    VL_ZERO_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h873d43dd__0);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT____Vlvbound_h6df88720__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sb_head = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13368086173073301403ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__sb_tail = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10986713212022497322ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17290522116647687332ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_we[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12901092557903239808ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 119870638031419173ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_funct3[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13967780997826398320ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12909441466221873714ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_misalign[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2178375286196837299ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_be[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5961712258348589816ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__lsu_aligned_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12521525863206091876ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12192575493743540807ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_we[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6179273613271605937ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13885023989740579759ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1927220987367541986ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 287351916340564756ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_is_load_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2490286059452870658ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_funct3_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7427276136500799854ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_wdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5701041644608291532ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_load_lo_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16149118491619411491ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_addr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1104258053134767643ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_be_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3495193857288520413ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4438290190247246682ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_c2_we_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370540724970639828ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_skip_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9797723359576946458ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__fwd_load_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13375892452958009418ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14520537762597503590ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__state_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3076262075294064659ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4096254388929675740ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__port0_done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9887380889987569937ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe[__Vi0], __VscopeHash, 3254601837579833317ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10073159459081558148ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4320706578372891712ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11706573349013108169ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_pc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1603394765200378088ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_inst[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1675499059762320354ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_exception = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16456172562111849114ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__stall_port1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8492342334436872884ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__batch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1267836574948834602ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12056499790371290361ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_rd_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15816429183292740713ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9642369814214455654ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_is_csr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16939816547922704977ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_csr_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5470910937764283460ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12603601387559530388ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot1_rd_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4497760883990541483ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot1_data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7104224673564190930ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot1_is_csr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5524690099054247761ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot1_csr_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10102496251333381270ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot1_preempted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1811136729311221824ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__slot2_need_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13912922216805648161ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18341532656102204236ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_addr_comb = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10194923904908041306ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_wdata_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11571893585112903392ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__csr_op_comb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5657440033900457073ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_pc_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6701552478457055721ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_writeback__DOT__trap_cause = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13627578922816115062ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_had5bf33a__1 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__2 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_h07178296__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16572676830185053296ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr0_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18443633249740037989ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467574379086440764ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13342019738883602291ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8097408220381657708ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2102612797042900022ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr_pend_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8340981286229984375ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15441767556041011861ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16991308609379292351ull);
    vlSelf->lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_regfile__DOT__irf_wr1_grant_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13349623130456074567ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__mem[__Vi0], __VscopeHash, 4015949032089579988ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__read_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__write_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15484910052052874653ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17038102566022042111ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9256390012538929282ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10772144486195359915ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__wr_beat = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16821336379829123813ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9962518886626518150ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10723644231793099307ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13280875180779292785ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9188419272500016245ull);
    vlSelf->lumi_v1_tb_top__DOT__u_axi_mem__DOT__rd_beat = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 791554536324283079ull);
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 791554536324283079ull);
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 791554536324283079ull);
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 791554536324283079ull);
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__is_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 791554536324283079ull);
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__is_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 791554536324283079ull);
        vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_buf[__Vi0].__PVT__cycle = 0;
    }
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_wr_ptr = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__trace_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__total_retired = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__total_traps = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__total_irqs = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__total_branch_taken = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_mon__DOT__realtime_fd = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__is_compressed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4347998351089058572ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__opcode[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1438046299679759405ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__funct3[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15563456968811985672ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__funct7[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12991739478268884101ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__rv32i_hit = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 921698017033551135ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__m_ext_hit = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5007940494788620263ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__b_ext_hit = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13042609904150073555ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__c_ext_hit = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3868337398412235499ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__zce_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10195806787518938342ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__mandatory_hit = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17064817345918113653ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__pmp_hit = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15505532697129985518ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__timer_hit = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16130577904436691024ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__clic_hit = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15665010204276962823ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__tcm_access_hit = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17963796939059355516ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__lockstep_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4299318242315568036ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__power_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3761173013967782117ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__dft_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1873455357517987825ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__boot_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16936096826055441925ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__multicore_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16141951481277070148ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__security_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1888218818926499666ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__zicbom_hit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12557197694353120171ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__zicboz_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15503279208116459221ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__zicbop_hit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17035742215975820950ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__zicond_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4588815620196432609ull);
    vlSelf->lumi_v1_tb_top__DOT__u_cov__DOT__zimop_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12343951306009380270ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT____Vlvbound_h099a2002__0 = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__total_retired = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__cycle_cnt = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__test_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 321310526015704956ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__exit_code = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 795435672537469272ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__last_commit_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9675002303583684114ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__spin_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__restart_count = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__prev_commit_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7262430645309303526ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__prev_had_commit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12795557906926455897ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__exit_reached = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13866658719328501905ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__max_commit_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17525713806011504625ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__last_10_pc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12942396576685772809ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__last_10_idx = 0;
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__system_inst_count = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12433623931829001187ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__trace_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16368516062293492810ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__next_reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6142814336576850550ull);
    }
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__found_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6359028705882921706ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__ecall_a0_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4660319016583240116ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__ecall_pc_comb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13891811650752454711ull);
    vlSelf->lumi_v1_tb_top__DOT__u_sb__DOT__retired_this_cycle = 0;
    vlSelf->__Vfunc_c_ext_expand__24__ci = 0;
    vlSelf->__Vfunc_c_ext_expand__24__inst = 0;
    vlSelf->__Vfunc_c_ext_expand__24__rs1p = 0;
    vlSelf->__Vfunc_c_ext_expand__24__rs2p = 0;
    vlSelf->__Vfunc_c_ext_expand__24__rd_rs1 = 0;
    vlSelf->__Vfunc_c_ext_expand__24__imm = 0;
    vlSelf->__Vfunc_c_ext_expand__25__ci = 0;
    vlSelf->__Vfunc_c_ext_expand__25__inst = 0;
    vlSelf->__Vfunc_c_ext_expand__25__rs1p = 0;
    vlSelf->__Vfunc_c_ext_expand__25__rs2p = 0;
    vlSelf->__Vfunc_c_ext_expand__25__rd_rs1 = 0;
    vlSelf->__Vfunc_c_ext_expand__25__imm = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__Vfuncout = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__ci = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__inst = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs1p = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rs2p = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__rd_rs1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_decode_issue__DOT__c_ext_expand__26__imm = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__27__result = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_bypass__DOT__bypass_match__28__result = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__branch_evaluate__29__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__branch_evaluate__29__rs1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__branch_evaluate__29__rs2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__30__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__30__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__30__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__30__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__30__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__30__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__31__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__31__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__31__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__31__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__31__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__31__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__32__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__32__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__32__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__32__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__32__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__32__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__33__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__33__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__33__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__33__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__33__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__33__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__34__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__34__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__34__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__34__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__34__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__34__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__35__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__35__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__35__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__35__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__35__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__35__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__36__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__36__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__36__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__36__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__36__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__36__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__37__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__37__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__37__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__37__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__37__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__37__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__38__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__38__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__38__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__38__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__38__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__38__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__39__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__39__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__39__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__39__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__39__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__39__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__40__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__40__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__40__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__40__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__40__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__40__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__41__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__41__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__41__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__41__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__41__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__41__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__42__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__42__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__42__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__42__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__42__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__42__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__43__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__43__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__43__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__43__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__43__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__43__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__44__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__44__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__44__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__44__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__44__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__44__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__45__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__45__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__45__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__45__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__45__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__45__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__46__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__46__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__46__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__46__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__46__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__46__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__47__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__47__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__47__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__47__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__47__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__47__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__48__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__48__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__48__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__48__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__48__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__48__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__49__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__49__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__49__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__49__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__49__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__49__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__50__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__50__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__50__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__50__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__50__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__50__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__51__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__51__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__51__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__51__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__51__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__51__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__52__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__52__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__52__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__52__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__52__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__52__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__53__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__53__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__53__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__53__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__53__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__53__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__54__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__54__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__54__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__54__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__54__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__54__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__55__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__55__funct7_5 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__55__op1 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__55__op2 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__55__res = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__alu_compute__55__shamt = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__addr_offset = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__gen_byte_enable__60__funct3 = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__wdata = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__addr_offset = 0;
    vlSelf->__Vfunc_lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__align_store_data__61__funct3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__u_clic__DOT__latency_cnt = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__state_reg = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__pc_reg = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_top = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_state_reg = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_signed = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_is_rem = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_dividend = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_quot_negate = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_remain_negate = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_divisor = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_quotient = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_remainder = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_execute__DOT__div_cnt = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_active_r = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_slot_r = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_is_load_r = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_funct3_r = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__ma_load_lo_r = 0;
    vlSelf->__Vdly__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__pending_port1_r = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_aw_cdc__DOT__mem__v0 = 0;
    VL_ZERO_RESET_W(145, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem__v0);
    vlSelf->__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_w_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_ar_cdc__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v0 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v3 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v4 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_inst_r__v6 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v0 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v3 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v3 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v4 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v4 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs1_data_r__v6 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v0 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v3 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v3 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v4 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v4 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__e1_rs2_data_r__v6 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v0 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v3);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v3 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v4 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v4 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v5 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v6);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v6 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v7 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v7 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v8 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v8 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v9);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v9 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v10 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v10 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v11 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v11 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v12);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v12 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v13 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v13 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v14 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v14 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v15);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v15 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v16 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v16 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v17 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v17 = 0;
    VL_ZERO_RESET_W(154, vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v18);
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v18 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v19 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v19 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v20 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v20 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__m_inst_r__v21 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack__v0 = 0;
    vlSelf->__VdlyDim0__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_fetch__DOT__ras_stack__v1 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr__v0 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr__v1 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m1_mem_addr__v2 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v0 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v1 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v2 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v2 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v3 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v3 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v4 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v4 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v5 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v5 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v6 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v6 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v7 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v7 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v8 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v8 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v9 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v9 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v10 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v10 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v11 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v11 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v12 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v12 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v13 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v13 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v14 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v14 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v15 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v15 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v16 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v16 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v17 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v18 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v18 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v19 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v19 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v20 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v20 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v21 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v21 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v22 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v22 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v23 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v23 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v24 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v24 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v25 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v25 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v26 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v26 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v27 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v27 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v28 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v28 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v29 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v29 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v30 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v30 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v31 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v31 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v32 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v32 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v33 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v34 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v34 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v35 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v35 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v36 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v36 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v37 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v37 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v38 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v38 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v39 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v39 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v40 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v40 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v41 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v41 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v42 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v42 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v43 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v43 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v44 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v44 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v45 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v45 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v46 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v46 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v47 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v47 = 0;
    vlSelf->__VdlyVal__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v48 = 0;
    vlSelf->__VdlySet__lumi_v1_tb_top__DOT__u_dut__DOT__gen_single_core__DOT__u_core__DOT__u_memory__DOT__m_pipe_result__v48 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__u_dut__DOT__dc_addr__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_core__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__reset_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_bus__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
