// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlumi_v1_tb_top.h for the primary calling header

#ifndef VERILATED_VLUMI_V1_TB_TOP_UVM_SHIM_H_
#define VERILATED_VLUMI_V1_TB_TOP_UVM_SHIM_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vlumi_v1_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlumi_v1_tb_top_uvm_shim final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ uvm_info_count;
    IData/*31:0*/ uvm_error_count;

    // INTERNAL VARIABLES
    Vlumi_v1_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vlumi_v1_tb_top_uvm_shim();
    ~Vlumi_v1_tb_top_uvm_shim();
    void ctor(Vlumi_v1_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vlumi_v1_tb_top_uvm_shim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
