#!/bin/bash
# Build V1 Verilator simulation binary
cd "$(dirname "$0")/../.."

verilator --binary --trace --timing --coverage \
  -Wno-fatal -Wno-UNUSED -Wno-WIDTH -Wno-UNOPTFLAT \
  -Wno-BADVLTPRAGMA -Wno-IMPLICIT -Wno-PINMISSING \
  -Wno-IMPLICITSTATIC \
  --top-module lumi_v1_tb_top \
  -Isrc/rtl/include -Isrc/tb -Isrc/tb/top -Isrc/tb/env \
  -Isrc/tb/lib -Isrc/tb/agents -Isrc/tb/uvm_compat \
  -Mdir src/sim-v1/obj_dir \
  --prefix Vlumi_v1_tb_top \
  -o Vlumi_v1 \
  src/rtl/include/lumi_types_pkg.sv \
  src/rtl/include/lumi_interfaces.sv \
  src/rtl/core/lumi_fetch.sv \
  src/rtl/core/lumi_predecode.sv \
  src/rtl/core/lumi_decode_issue.sv \
  src/rtl/core/lumi_bypass.sv \
  src/rtl/core/lumi_execute.sv \
  src/rtl/core/lumi_memory_stage.sv \
  src/rtl/core/lumi_writeback.sv \
  src/rtl/core/lumi_core_top.sv \
  src/rtl/csr/lumi_csr_unit.sv \
  src/rtl/csr/lumi_regfile.sv \
  src/rtl/interrupt/lumi_exception.sv \
  src/rtl/interrupt/lumi_plic.sv \
  src/rtl/interrupt/lumi_clic.sv \
  src/rtl/memory/lumi_cache.sv \
  src/rtl/memory/lumi_tcm.sv \
  src/rtl/bus/lumi_axi_wrapper.sv \
  src/rtl/bus/lumi_cdc_sync.sv \
  src/rtl/bus/lumi_pma_checker.sv \
  src/rtl/top/lumi_soc_top.sv \
  src/rtl/top/lumi_soc_tb_stub.sv \
  src/rtl/fpu/lumi_fpu.sv \
  src/rtl/fpu/lumi_vector.sv \
  src/rtl/debug/lumi_debug_module.sv \
  src/rtl/debug/lumi_trace.sv \
  src/rtl/dft/lumi_dft_ctrl.sv \
  src/rtl/power/lumi_power_mgmt.sv \
  src/rtl/multicore/lumi_lockstep.sv \
  src/rtl/multicore/lumi_multicore_top.sv \
  src/tb/uvm_compat/uvm_shim_pkg.sv \
  src/tb/lib/lumi_tb_pkg.sv \
  src/tb/lib/signature_compare.sv \
  src/tb/agents/axi_memory_bfm.sv \
  src/tb/agents/jtag_bfm.sv \
  src/tb/env/lumi_inst_monitor.sv \
  src/tb/env/lumi_coverage.sv \
  src/tb/env/lumi_scoreboard.sv \
  src/tb/top/lumi_tb_top.sv \
  src/tb/top/lumi_v1_tb_top.sv

echo "Build exit code: $?"
