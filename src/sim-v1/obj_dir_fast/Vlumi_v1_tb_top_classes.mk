# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vlumi_v1_tb_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vlumi_v1_tb_top \
  Vlumi_v1_tb_top___024root__0 \
  Vlumi_v1_tb_top___024root__1 \
  Vlumi_v1_tb_top___024root__2 \
  Vlumi_v1_tb_top___024root__3 \
  Vlumi_v1_tb_top___024root__4 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object__Vclpkg__0 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg__0 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_test__Vclpkg__0 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_env__Vclpkg__0 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg__0 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_monitor__Vclpkg__0 \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_sequence__Vclpkg__0 \
  Vlumi_v1_tb_top__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vlumi_v1_tb_top__ConstPool__0__Slow \
  Vlumi_v1_tb_top___024root__Slow \
  Vlumi_v1_tb_top___024root__0__Slow \
  Vlumi_v1_tb_top___024root__1__Slow \
  Vlumi_v1_tb_top___024root__2__Slow \
  Vlumi_v1_tb_top___024root__3__Slow \
  Vlumi_v1_tb_top_uvm_shim__Slow \
  Vlumi_v1_tb_top_uvm_shim__0__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object__Vclpkg__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_test__Vclpkg__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_env__Vclpkg__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_monitor__Vclpkg__Slow \
  Vlumi_v1_tb_top_uvm_shim__03a__03auvm_sequence__Vclpkg__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vlumi_v1_tb_top__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
