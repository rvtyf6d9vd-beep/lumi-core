// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlumi_v1_tb_top.h for the primary calling header

#ifndef VERILATED_VLUMI_V1_TB_TOP_UVM_SHIM__03A__03AUVM_SCOREBOARD__VCLPKG_H_
#define VERILATED_VLUMI_V1_TB_TOP_UVM_SHIM__03A__03AUVM_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component;


class Vlumi_v1_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vlumi_v1_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg();
    ~Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg();
    void ctor(Vlumi_v1_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg.h"

class Vlumi_v1_tb_top__Syms;

class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard : public Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_shim::uvm_scoreboard"; }
    VlClass* clone() const { return new Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard(*this); }
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard() = default;
    void init(Vlumi_v1_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard();
};


#endif  // guard
