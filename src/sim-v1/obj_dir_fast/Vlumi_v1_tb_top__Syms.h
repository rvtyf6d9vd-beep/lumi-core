// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLUMI_V1_TB_TOP__SYMS_H_
#define VERILATED_VLUMI_V1_TB_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlumi_v1_tb_top.h"

// INCLUDE MODULE CLASSES
#include "Vlumi_v1_tb_top___024root.h"
#include "Vlumi_v1_tb_top_uvm_shim.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object__Vclpkg.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_test__Vclpkg.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_env__Vclpkg.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_monitor__Vclpkg.h"
#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_sequence__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vlumi_v1_tb_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlumi_v1_tb_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlumi_v1_tb_top___024root      TOP;
    Vlumi_v1_tb_top_uvm_shim       TOP__uvm_shim;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg TOP__uvm_shim__03a__03auvm_component__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_env__Vclpkg TOP__uvm_shim__03a__03auvm_env__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_monitor__Vclpkg TOP__uvm_shim__03a__03auvm_monitor__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object__Vclpkg TOP__uvm_shim__03a__03auvm_object__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg TOP__uvm_shim__03a__03auvm_scoreboard__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_sequence__Vclpkg TOP__uvm_shim__03a__03auvm_sequence__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_test__Vclpkg TOP__uvm_shim__03a__03auvm_test__Vclpkg;

    // CONSTRUCTORS
    Vlumi_v1_tb_top__Syms(VerilatedContext* contextp, const char* namep, Vlumi_v1_tb_top* modelp);
    ~Vlumi_v1_tb_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
