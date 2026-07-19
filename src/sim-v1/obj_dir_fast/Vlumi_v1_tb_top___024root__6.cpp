// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlumi_v1_tb_top.h for the primary calling header

#include "Vlumi_v1_tb_top__pch.h"

void Vlumi_v1_tb_top___024root___nba_sequent__TOP__0(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_sequent__TOP__1(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_sequent__TOP__2(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_sequent__TOP__3(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_sequent__TOP__4(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_sequent__TOP__5(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_sequent__TOP__6(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_comb__TOP__1(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_comb__TOP__2(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_comb__TOP__3(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___nba_comb__TOP__4(Vlumi_v1_tb_top___024root* vlSelf);

void Vlumi_v1_tb_top___024root___eval_nba(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_nba\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__0(vlSelf);
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__1(vlSelf);
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__2(vlSelf);
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = 
            (1U & vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__mem
             [(3U & (IData)(vlSelfRef.lumi_v1_tb_top__DOT__u_dut__DOT__u_axi__DOT__u_axi_r_cdc__DOT__rd_ptr_bin))][0U]);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000017ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlumi_v1_tb_top___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vlumi_v1_tb_top___024root___timing_ready(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___timing_ready\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha6986e42__0.ready("@( lumi_v1_tb_top.reset_n)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h741b292e__0.ready("@(posedge lumi_v1_tb_top.clk_core)");
    }
}

void Vlumi_v1_tb_top___024root___timing_resume(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___timing_resume\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_ha6986e42__0.moveToResumeQueue(
                                                          "@( lumi_v1_tb_top.reset_n)");
    vlSelfRef.__VtrigSched_h741b292e__0.moveToResumeQueue(
                                                          "@(posedge lumi_v1_tb_top.clk_core)");
    vlSelfRef.__VtrigSched_ha6986e42__0.resume("@( lumi_v1_tb_top.reset_n)");
    vlSelfRef.__VtrigSched_h741b292e__0.resume("@(posedge lumi_v1_tb_top.clk_core)");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vlumi_v1_tb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vlumi_v1_tb_top___024root___eval_triggers_vec__act(Vlumi_v1_tb_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlumi_v1_tb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vlumi_v1_tb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vlumi_v1_tb_top___024root___eval_act(Vlumi_v1_tb_top___024root* vlSelf);

bool Vlumi_v1_tb_top___024root___eval_phase__act(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_phase__act\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vlumi_v1_tb_top___024root___eval_triggers_vec__act(vlSelf);
    Vlumi_v1_tb_top___024root___timing_ready(vlSelf);
    Vlumi_v1_tb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlumi_v1_tb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vlumi_v1_tb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vlumi_v1_tb_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vlumi_v1_tb_top___024root___timing_resume(vlSelf);
        Vlumi_v1_tb_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlumi_v1_tb_top___024root___eval_phase__inact(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_phase__inact\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 9, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vlumi_v1_tb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vlumi_v1_tb_top___024root___eval_phase__nba(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_phase__nba\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vlumi_v1_tb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vlumi_v1_tb_top___024root___eval_nba(vlSelf);
        Vlumi_v1_tb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vlumi_v1_tb_top___024root___eval(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vlumi_v1_tb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 9, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vlumi_v1_tb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/tb/top/lumi_v1_tb_top.sv", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vlumi_v1_tb_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vlumi_v1_tb_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vlumi_v1_tb_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0(Vlumi_v1_tb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root____VbeforeTrig_ha6986e42__0\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__reset_n) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__reset_n__0)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__reset_n__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__reset_n;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6986e42__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0(Vlumi_v1_tb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root____VbeforeTrig_h741b292e__0\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.lumi_v1_tb_top__DOT__clk_core) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_core__0))) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__lumi_v1_tb_top__DOT__clk_core__0 
        = vlSelfRef.lumi_v1_tb_top__DOT__clk_core;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h741b292e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vlumi_v1_tb_top___024root___eval_debug_assertions(Vlumi_v1_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root___eval_debug_assertions\n"); );
    Vlumi_v1_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vlumi_v1_tb_top_lumi_v1_tb_top__DOT__u_mon__DOT__inst_record_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlumi_v1_tb_top___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{pc:" + VL_TO_STRING(obj.__PVT__pc);
    out += ", inst:" + VL_TO_STRING(obj.__PVT__inst);
    out += ", rd:" + VL_TO_STRING(obj.__PVT__rd);
    out += ", rd_data:" + VL_TO_STRING(obj.__PVT__rd_data);
    out += ", is_trap:" + VL_TO_STRING(obj.__PVT__is_trap);
    out += ", is_irq:" + VL_TO_STRING(obj.__PVT__is_irq);
    out += ", cycle:" + VL_TO_STRING(obj.__PVT__cycle);
    out += "}";
    return (out);
}
