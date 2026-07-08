# =================================================================
# Lumi-Core OpenSTA Timing Analysis Script
# M3-S1 Task 0 | 风险: RISK-013 (1GHz 时序闭合)
# 2026-07-07
# =================================================================
# 用途: 静态时序分析 (需 Yosys 综合后运行)
# 输入: build/synth/netlist.v + Liberty (.lib)
# 运行: sta timing_lumi.tcl

# ─── 配置 ───────────────────────────────────────────────────
set DESIGN_TOP "lumi_soc_top"
set NETLIST     "../../build/synth/netlist.v"
set LIBERTY     ""  ; # TODO: 替换为 TSMC 28HPC Liberty (.lib) 路径
set SDC_FILE    "lumi_constraints.sdc"
set OUT_DIR     "../../build/timing"

file mkdir $OUT_DIR

# ─── 读取 Liberty (如果没有, 用占位库) ─────────────────────
if {$LIBERTY ne ""} {
  read_liberty $LIBERTY
} else {
  puts "WARNING: No Liberty file specified, using generic library"
  puts "  Set LIBERTY variable to TSMC 28HPC .lib path"
}

# ─── 读取网表 ──────────────────────────────────────────────
if {[file exists $NETLIST]} {
  read_verilog $NETLIST
  link_design $DESIGN_TOP
} else {
  puts "ERROR: Netlist not found: $NETLIST"
  puts "  Run 'make synth' first"
  exit 1
}

# ─── 读取 SDC 约束 ────────────────────────────────────────
if {[file exists $SDC_FILE]} {
  read_sdc $SDC_FILE
} else {
  puts "WARNING: No SDC file, using default 1GHz constraint"
  create_clock -name clk_core -period 1.0 [get_ports clk_core]
  create_clock -name clk_bus  -period 2.0 [get_ports clk_bus]
  set_clock_uncertainty -setup 0.1 [get_clocks clk_core]
  set_clock_uncertainty -hold  0.05 [get_clocks clk_core]
}

# ─── 时序报告 ─────────────────────────────────────────────
# Setup timing (worst path)
tee -o $OUT_DIR/setup_timing.rpt report_checks -path_delay max -format full_clock_expanded

# Hold timing (worst path)
tee -o $OUT_DIR/hold_timing.rpt  report_checks -path_delay min -format full_clock_expanded

# Setup WNS/TNS
tee -o $OUT_DIR/setup_wns.rpt report_tns
tee -o $OUT_DIR/hold_wns.rpt report_tns -path_delay min

# 面积和功耗
tee -o $OUT_DIR/area_power.rpt report_design_area
tee -o $OUT_DIR/area_power.rpt report_power -append

# ─── 时序总结 ─────────────────────────────────────────────
puts ""
puts "=== Timing Analysis Complete ==="
puts "  Setup WNS/TNS: $OUT_DIR/setup_wns.rpt"
puts "  Hold  WNS/TNS: $OUT_DIR/hold_wns.rpt"
puts "  Area/Power:    $OUT_DIR/area_power.rpt"
puts "  Setup paths:   $OUT_DIR/setup_timing.rpt"
puts "  Hold paths:    $OUT_DIR/hold_timing.rpt"

# ─── 1GHz 达标检查 ───────────────────────────────────────
set wns [get_property [get_timing_paths -max_paths 1] slack]
if {$wns >= 0} {
  puts "  [PASS] 1GHz timing closure achieved (WNS = ${wns}ns)"
} else {
  puts "  [FAIL] 1GHz timing NOT met (WNS = ${wns}ns, violation = [expr {abs($wns)}]ns)"
  puts "  RISK-013: 需要优化关键路径"
}
