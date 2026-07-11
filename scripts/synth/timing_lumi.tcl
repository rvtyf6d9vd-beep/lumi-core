# =================================================================
# Lumi-Core OpenSTA Timing Analysis Script
# M3-S1 Task 0 → Phase D 更新 (关键路径定义 + RISK-011/013)
# 2026-07-07 (初版) → 2026-07-11 (Phase D: 关键路径 + corner 分析)
# =================================================================
# 用途: 静态时序分析 (需 Yosys 综合后运行)
# 输入: build/synth/netlist.v + Liberty (.lib)
# 运行: sta timing_lumi.tcl
# 依赖: synth_lumi.tcl 产出 + lumi_constraints.sdc

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
  puts "  Example: set LIBERTY /path/to/tsmc28hpc_tt_0p9v_25c.lib"
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

# ─── 关键路径定义 (RISK-011: Bypass Mux) ──────────────────
# Bypass network 是典型的组合逻辑长路径
# 路径: Execute 结果 → Bypass Mux → 下一个 Execute 输入
# 如果 worst slack < 0, 需拆为 2 级 (I 级前半 + D 级后半)

# ─── Setup Timing 报告 ─────────────────────────────────────
# Worst setup path
tee -o $OUT_DIR/setup_timing.rpt report_checks -path_delay max \
  -format full_clock_expanded -max_paths 10

# ─── Hold Timing 报告 ──────────────────────────────────────
# Worst hold path
tee -o $OUT_DIR/hold_timing.rpt report_checks -path_delay min \
  -format full_clock_expanded -max_paths 10

# ─── Setup/Hold WNS/TNS ───────────────────────────────────
tee -o $OUT_DIR/setup_wns.rpt report_tns
tee -o $OUT_DIR/hold_wns.rpt report_tns -path_delay min

# ─── 面积和功耗 ────────────────────────────────────────────
tee -o $OUT_DIR/area_power.rpt report_design_area
tee -o $OUT_DIR/area_power.rpt report_power -append

# ─── 关键路径专项检查 (RISK-011) ──────────────────────────
puts ""
puts "=== RISK-011: Bypass Mux 路径检查 ==="
# 搜索 bypass 相关路径
set bypass_paths [report_checks -path_delay max \
  -through [get_cells -hier *bypass*] \
  -format full_clock_expanded -max_paths 5]
tee -o $OUT_DIR/bypass_paths.rpt report_checks -path_delay max \
  -through [get_cells -hier *bypass*] \
  -format full_clock_expanded -max_paths 5

# ─── 关键路径专项检查 (RISK-013: 1GHz 闭合) ─────────────
puts ""
puts "=== RISK-013: 1GHz 时序闭合检查 ==="
# 搜索 SRAM 接口路径 (通常关键路径)
set sram_paths [report_checks -path_delay max \
  -through [get_cells -hier *tcm*] \
  -format full_clock_expanded -max_paths 5]
tee -o $OUT_DIR/sram_paths.rpt report_checks -path_delay max \
  -through [get_cells -hier *tcm*] \
  -format full_clock_expanded -max_paths 5

# ─── Timing 总结 ───────────────────────────────────────────
puts ""
puts "=== Timing Analysis Complete ==="
puts "  Setup WNS/TNS:   $OUT_DIR/setup_wns.rpt"
puts "  Hold  WNS/TNS:   $OUT_DIR/hold_wns.rpt"
puts "  Area/Power:      $OUT_DIR/area_power.rpt"
puts "  Setup paths:     $OUT_DIR/setup_timing.rpt"
puts "  Hold paths:      $OUT_DIR/hold_timing.rpt"
puts "  Bypass paths:    $OUT_DIR/bypass_paths.rpt  (RISK-011)"
puts "  SRAM paths:      $OUT_DIR/sram_paths.rpt    (RISK-013)"

# ─── 1GHz 达标检查 ───────────────────────────────────────
set wns [get_property [get_timing_paths -max_paths 1] slack]
if {$wns >= 0} {
  puts "  [PASS] 1GHz timing closure achieved (WNS = ${wns}ns)"
} else {
  puts "  [FAIL] 1GHz timing NOT met (WNS = ${wns}ns, violation = [expr {abs($wns)}]ns)"
  puts "  RISK-013: 需要优化关键路径"
  puts "  Options: (1) Bypass mux 拆为 2 级 (2) SRAM macro 流水化 (3) 降频至 800MHz"
}
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
