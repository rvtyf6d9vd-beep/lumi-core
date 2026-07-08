# =================================================================
# Lumi-Core Yosys Synthesis Script
# M3-S1 Task 0 | 风险: RISK-011, RISK-012
# 2026-07-07
# =================================================================
# 用途: TSMC 28HPC 目标综合评估 (Yosys + sky130/scl 近似)
# 输出: netlist.v, synth_area.rpt, synth_stat.rpt
# 运行: yosys -c synth_lumi.tcl

set DESIGN_TOP "lumi_soc_top"
set RTL_DIR    "../../src/rtl"
set OUT_DIR    "../../build/synth"

file mkdir $OUT_DIR

# ─── 读取 RTL 源文件 ──────────────────────────────────────
read_verilog -sv -defer {
  $RTL_DIR/include/lumi_types_pkg.sv
  $RTL_DIR/include/lumi_interfaces.sv
  $RTL_DIR/include/lumi_config.sv
}

# 读取所有模块 (按依赖顺序)
read_verilog -sv -defer {
  $RTL_DIR/core/lumi_fetch_unit.sv
  $RTL_DIR/core/lumi_decode_unit.sv
  $RTL_DIR/core/lumi_issue_unit.sv
  $RTL_DIR/core/lumi_execute_unit.sv
  $RTL_DIR/core/lumi_memory_unit.sv
  $RTL_DIR/core/lumi_writeback_unit.sv
  $RTL_DIR/core/lumi_branch_pred.sv
  $RTL_DIR/core/lumi_rename.sv
  $RTL_DIR/core/lumi_rob.sv
  $RTL_DIR/core/lumi_bypass_network.sv
  $RTL_DIR/core/lumi_regfile.sv
  $RTL_DIR/core/lumi_core_top.sv
  $RTL_DIR/csr/lumi_csr_unit.sv
  $RTL_DIR/csr/lumi_pmp_unit.sv
  $RTL_DIR/csr/lumi_hpm_counter.sv
  $RTL_DIR/memory/lumi_icache.sv
  $RTL_DIR/memory/lumi_dcache.sv
  $RTL_DIR/memory/lumi_itcm.sv
  $RTL_DIR/memory/lumi_dtcm.sv
  $RTL_DIR/memory/lumi_mmu.sv
  $RTL_DIR/bus/lumi_axi_bridge.sv
  $RTL_DIR/bus/lumi_bus_matrix.sv
  $RTL_DIR/interrupt/lumi_clic_controller.sv
  $RTL_DIR/interrupt/lumi_plic_compat.sv
  $RTL_DIR/debug/lumi_debug_module.sv
  $RTL_DIR/debug/lumi_debug_trig.sv
  $RTL_DIR/fpu/lumi_fpu_top.sv
  $RTL_DIR/power/lumi_power_gate.sv
  $RTL_DIR/power/lumi_clock_gate.sv
  $RTL_DIR/multicore/lumi_multicore_top.sv
  $RTL_DIR/dft/lumi_scan_ctrl.sv
  $RTL_DIR/dft/lumi_lockstep.sv
  $RTL_DIR/top/lumi_soc_top.sv
}

read_verilog -sv $RTL_DIR/top/lumi_soc_tb_stub.sv

# ─── Elaborate ────────────────────────────────────────────
hierarchy -top $DESIGN_TOP
check -assert

# ─── 综合流程 ─────────────────────────────────────────────
# High-level synthesis
synth -top $DESIGN_TOP -flatten

# Technology mapping (使用 Yosys 内置门库近似)
# 生产环境替换为 TSMC 28HPC Liberty (.lib)
techmap
opt

# ─── 报告输出 ─────────────────────────────────────────────
# 面积统计
tee -o $OUT_DIR/synth_area.rpt stat -liberty ""
# 注: 无 Liberty 时用 gate count 近似

# 详细统计
tee -o $OUT_DIR/synth_stat.rpt stat

# 输出网表
write_verilog -noattr $OUT_DIR/netlist.v

puts "=== Synthesis Complete ==="
puts "  Netlist: $OUT_DIR/netlist.v"
puts "  Area:    $OUT_DIR/synth_area.rpt"
puts "  Stats:   $OUT_DIR/synth_stat.rpt"
