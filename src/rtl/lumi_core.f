// =================================================================
// Lumi-Core RTL Filelist
// Generated: 2026-07-07 | M2-S1 RTL 骨架
// Usage: verilator -f src/rtl/lumi_core.f --lint-only
// =================================================================

// --- Include directories ---
+incdir+src/rtl/include

// --- Package & Interfaces (must be first) ---
src/rtl/include/lumi_types_pkg.sv
src/rtl/include/lumi_interfaces.sv

// --- Core Pipeline (F1→F2→D→I→E1→E2→M→W) ---
src/rtl/core/lumi_fetch.sv
src/rtl/core/lumi_decode_issue.sv
src/rtl/core/lumi_execute.sv
src/rtl/core/lumi_memory_stage.sv
src/rtl/core/lumi_writeback.sv
src/rtl/core/lumi_bypass.sv
src/rtl/core/lumi_core_top.sv

// --- Memory Subsystems ---
src/rtl/memory/lumi_tcm.sv
src/rtl/memory/lumi_cache.sv

// --- Bus / PMA ---
src/rtl/bus/lumi_pma_checker.sv
src/rtl/bus/lumi_axi_wrapper.sv

// --- CSR / Register File ---
src/rtl/csr/lumi_csr_unit.sv
src/rtl/csr/lumi_regfile.sv

// --- Interrupt ---
src/rtl/interrupt/lumi_clic.sv
src/rtl/interrupt/lumi_plic.sv
src/rtl/interrupt/lumi_exception.sv

// --- Debug / Trace ---
src/rtl/debug/lumi_debug_module.sv
src/rtl/debug/lumi_trace.sv

// --- FPU / Vector ---
src/rtl/fpu/lumi_fpu.sv
src/rtl/fpu/lumi_vector.sv

// --- Power Management ---
src/rtl/power/lumi_power_mgmt.sv

// --- Multicore ---
src/rtl/multicore/lumi_multicore_top.sv
src/rtl/multicore/lumi_lockstep.sv

// --- DFT ---
src/rtl/dft/lumi_dft_ctrl.sv

// --- Top Level ---
src/rtl/top/lumi_soc_top.sv
src/rtl/top/lumi_soc_tb_stub.sv
