# =================================================================
# Lumi-Core SDC Timing Constraints
# M3-S1 Task 0 | TSMC 28HPC @ 1GHz target
# 2026-07-07
# =================================================================

# ─── 时钟定义 ─────────────────────────────────────────────
# Core clock: 1GHz (1.0ns period)
create_clock -name clk_core -period 1.0 [get_ports clk_core]

# Bus clock: 500MHz (2.0ns period)
create_clock -name clk_bus -period 2.0 [get_ports clk_bus]

# JTAG clock: 50MHz (virtual, external)
create_clock -name jtag_tck -period 20.0 [get_ports jtag_tck]

# ─── 时钟不确定性 (process variation) ─────────────────────
set_clock_uncertainty -setup 0.10 [get_clocks clk_core]  # 10% of period
set_clock_uncertainty -hold  0.05 [get_clocks clk_core]
set_clock_uncertainty -setup 0.15 [get_clocks clk_bus]
set_clock_uncertainty -hold  0.08 [get_clocks clk_bus]

# ─── 时钟域交叉 (异步) ───────────────────────────────────
set_clock_groups -asynchronous \
  -group [get_clocks clk_core] \
  -group [get_clocks clk_bus] \
  -group [get_clocks jtag_tck]

# ─── 输入延迟 ─────────────────────────────────────────────
set_input_delay -clock clk_bus -max 0.5 [remove_from_collection [all_inputs] [get_ports {clk_core clk_bus}]]
set_input_delay -clock clk_bus -min 0.1 [remove_from_collection [all_inputs] [get_ports {clk_core clk_bus}]]

# ─── 输出延迟 ─────────────────────────────────────────────
set_output_delay -clock clk_bus -max 0.5 [remove_from_collection [all_outputs] [get_ports {clk_core clk_bus}]]
set_output_delay -clock clk_bus -min 0.1 [remove_from_collection [all_outputs] [get_ports {clk_core clk_bus}]]

# ─── 负载/驱动 ────────────────────────────────────────────
set_load 0.05 [all_outputs]
set_driving_cell -lib_cell BUF_X4 -pin Y [all_inputs]

# ─── False Path ───────────────────────────────────────────
# Debug 接口异步路径
set_false_path -from [get_clocks jtag_tck] -to [get_clocks clk_core]
set_false_path -from [get_clocks clk_core] -to [get_clocks jtag_tck]

# 复位信号 (异步复位)
set_false_path -from [get_ports reset_n]

# DFT scan chain (测试模式)
set_false_path -through [get_cells -hier *scan*]

# ─── Multicycle Path ──────────────────────────────────────
# HPM 计数器 (低速, 可放宽)
set_multicycle_path -setup 2 -from [get_cells -hier *hpm*]
set_multicycle_path -hold  1 -from [get_cells -hier *hpm*]
