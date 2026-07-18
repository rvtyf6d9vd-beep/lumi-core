// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vlumi_v1_tb_top__pch.h"

Vlumi_v1_tb_top__Syms::Vlumi_v1_tb_top__Syms(VerilatedContext* contextp, const char* namep, Vlumi_v1_tb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(6726);
    // Setup sub module instances
    TOP__uvm_shim.ctor(this, "uvm_shim");
    TOP__uvm_shim__03a__03auvm_component__Vclpkg.ctor(this, "uvm_shim::uvm_component__Vclpkg");
    TOP__uvm_shim__03a__03auvm_env__Vclpkg.ctor(this, "uvm_shim::uvm_env__Vclpkg");
    TOP__uvm_shim__03a__03auvm_monitor__Vclpkg.ctor(this, "uvm_shim::uvm_monitor__Vclpkg");
    TOP__uvm_shim__03a__03auvm_object__Vclpkg.ctor(this, "uvm_shim::uvm_object__Vclpkg");
    TOP__uvm_shim__03a__03auvm_scoreboard__Vclpkg.ctor(this, "uvm_shim::uvm_scoreboard__Vclpkg");
    TOP__uvm_shim__03a__03auvm_sequence__Vclpkg.ctor(this, "uvm_shim::uvm_sequence__Vclpkg");
    TOP__uvm_shim__03a__03auvm_test__Vclpkg.ctor(this, "uvm_shim::uvm_test__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__uvm_shim = &TOP__uvm_shim;
    TOP.uvm_shim__03a__03auvm_component__Vclpkg = &TOP__uvm_shim__03a__03auvm_component__Vclpkg;
    TOP.uvm_shim__03a__03auvm_env__Vclpkg = &TOP__uvm_shim__03a__03auvm_env__Vclpkg;
    TOP.uvm_shim__03a__03auvm_monitor__Vclpkg = &TOP__uvm_shim__03a__03auvm_monitor__Vclpkg;
    TOP.uvm_shim__03a__03auvm_object__Vclpkg = &TOP__uvm_shim__03a__03auvm_object__Vclpkg;
    TOP.uvm_shim__03a__03auvm_scoreboard__Vclpkg = &TOP__uvm_shim__03a__03auvm_scoreboard__Vclpkg;
    TOP.uvm_shim__03a__03auvm_sequence__Vclpkg = &TOP__uvm_shim__03a__03auvm_sequence__Vclpkg;
    TOP.uvm_shim__03a__03auvm_test__Vclpkg = &TOP__uvm_shim__03a__03auvm_test__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__uvm_shim.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_component__Vclpkg.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_env__Vclpkg.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_monitor__Vclpkg.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_object__Vclpkg.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_scoreboard__Vclpkg.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_sequence__Vclpkg.__Vconfigure(true);
    TOP__uvm_shim__03a__03auvm_test__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vlumi_v1_tb_top__Syms::~Vlumi_v1_tb_top__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__uvm_shim__03a__03auvm_test__Vclpkg.dtor();
    TOP__uvm_shim__03a__03auvm_sequence__Vclpkg.dtor();
    TOP__uvm_shim__03a__03auvm_scoreboard__Vclpkg.dtor();
    TOP__uvm_shim__03a__03auvm_object__Vclpkg.dtor();
    TOP__uvm_shim__03a__03auvm_monitor__Vclpkg.dtor();
    TOP__uvm_shim__03a__03auvm_env__Vclpkg.dtor();
    TOP__uvm_shim__03a__03auvm_component__Vclpkg.dtor();
    TOP__uvm_shim.dtor();
}
