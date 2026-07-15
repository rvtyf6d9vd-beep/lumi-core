// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlumi_v1_tb_top__pch.h"

//============================================================
// Constructors

Vlumi_v1_tb_top::Vlumi_v1_tb_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlumi_v1_tb_top__Syms(contextp(), _vcname__, this)}
    , __PVT__uvm_shim{vlSymsp->TOP.__PVT__uvm_shim}
    , uvm_shim__03a__03auvm_object__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_object__Vclpkg}
    , uvm_shim__03a__03auvm_component__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_component__Vclpkg}
    , uvm_shim__03a__03auvm_test__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_test__Vclpkg}
    , uvm_shim__03a__03auvm_env__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_env__Vclpkg}
    , uvm_shim__03a__03auvm_scoreboard__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_scoreboard__Vclpkg}
    , uvm_shim__03a__03auvm_monitor__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_monitor__Vclpkg}
    , uvm_shim__03a__03auvm_sequence__Vclpkg{vlSymsp->TOP.uvm_shim__03a__03auvm_sequence__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlumi_v1_tb_top::Vlumi_v1_tb_top(const char* _vcname__)
    : Vlumi_v1_tb_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlumi_v1_tb_top::~Vlumi_v1_tb_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlumi_v1_tb_top___024root___eval_debug_assertions(Vlumi_v1_tb_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vlumi_v1_tb_top___024root___eval_static(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___eval_initial(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___eval_settle(Vlumi_v1_tb_top___024root* vlSelf);
void Vlumi_v1_tb_top___024root___eval(Vlumi_v1_tb_top___024root* vlSelf);

void Vlumi_v1_tb_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlumi_v1_tb_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlumi_v1_tb_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlumi_v1_tb_top___024root___eval_static(&(vlSymsp->TOP));
        Vlumi_v1_tb_top___024root___eval_initial(&(vlSymsp->TOP));
        Vlumi_v1_tb_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlumi_v1_tb_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlumi_v1_tb_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vlumi_v1_tb_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vlumi_v1_tb_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlumi_v1_tb_top___024root___eval_final(Vlumi_v1_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vlumi_v1_tb_top::final() {
    contextp()->executingFinal(true);
    Vlumi_v1_tb_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlumi_v1_tb_top::hierName() const { return vlSymsp->name(); }
const char* Vlumi_v1_tb_top::modelName() const { return "Vlumi_v1_tb_top"; }
unsigned Vlumi_v1_tb_top::threads() const { return 1; }
void Vlumi_v1_tb_top::prepareClone() const { contextp()->prepareClone(); }
void Vlumi_v1_tb_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
