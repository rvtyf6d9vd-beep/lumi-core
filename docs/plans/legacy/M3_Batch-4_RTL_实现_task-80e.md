# M3 Batch-4 RTL 完整实现

## 背景
Batch-3 (中断/特权/异常子系统, commit 2cb86df) 已完成。Batch-4 将 8 个 TODO 骨架模块升级为功能完整的 RTL 实现。

## 涉及模块 (8 个源文件 + 1 个顶层集成)

| 文件 | 当前行数 | 预计目标 | 设计文档 |
|------|---------|---------|---------|
| `src/rtl/debug/lumi_debug_module.sv` | 36 | ~160 | debug-trace.html §2.1~2.4 |
| `src/rtl/debug/lumi_trace.sv` | 32 | ~130 | debug-trace.html §2.5 |
| `src/rtl/fpu/lumi_fpu.sv` | 39 | ~180 | fpu-vector.html §2.1 |
| `src/rtl/fpu/lumi_vector.sv` | 44 | ~180 | fpu-vector.html §2.2 |
| `src/rtl/power/lumi_power_mgmt.sv` | 44 | ~130 | power-reset.html §2.1~2.3 |
| `src/rtl/multicore/lumi_multicore_top.sv` | 27 | ~130 | multicore-lockstep.html §2.1 |
| `src/rtl/multicore/lumi_lockstep.sv` | 31 | ~110 | multicore-lockstep.html §2.2 |
| `src/rtl/dft/lumi_dft_ctrl.sv` | 41 | ~110 | dft-security.html §2.1~2.3 |
| `src/rtl/top/lumi_soc_top.sv` | 452 | ~550 | 新增实例化 |

## Task 1: Debug Module + Trace (debug_module.sv + trace.sv)

**debug_module.sv 实现要点:**
- DMI 寄存器读写: dmcontrol(0x10), dmstatus(0x11), abstractcs(0x17), command(0x18), data0(0x04), progbuf(0x20~27)
- Halt/Resume FSM: ST_RUN → ST_HALT_REQ (dmcontrol.haltreq) → ST_HALTED (W级精确halt) → ST_RESUME_REQ → ST_RUN
- Single-step: 单步模式下每条指令执行后自动 re-halt
- Trigger Module: 2~4 个 mcontrol(type 2) 地址匹配断点, NAPOT/EQUAL 匹配
- CDC: tck↔clk_core 异步握手 (2-FF 同步 + req/ack)
- 调试安全: 3 级安全等级 (Level 0 锁定/Level 1 仅断点/Level 2 完全开放)

**trace.sv 实现要点:**
- Nexus Trace 编码: 顺序 PC 不输出, 分支/跳转输出目标 PC, 异常/中断输出事件标记
- Trace FIFO: 256 entry (可配), 满时丢弃 + 溢出计数
- AXI4 写出: 128-bit wdata burst 写出, trace_axi_valid/ready 握手
- trace_config_en CSR 使能控制

## Task 2: FPU + Vector (fpu.sv + vector.sv)

**fpu.sv 实现要点:**
- 6-bit inst_type 解码: FADD(0)/FMUL(1)/FMA(2)/FDIV(3)/FSQRT(4)/FCVT(5)/FMV(6)/FCMP(7)
- 多周期运算计数器: FADD/FMUL/FMA = 6 cycle, FDIV = 14~28 cycle, FSQRT = 18~28 cycle, FCVT = 3~6 cycle, FMV/FCMP = 1~2 cycle
- fflags 生成: NV(bit4)/DZ(bit3)/OF(bit2)/UF(bit1)/NX(bit0)
- NaN-Boxing: FP32 in FP64 寄存器, 检测无效 FP32 值
- ready/busy/valid 握手信号 (DEC-007-2)

**vector.sv 实现要点:**
- VLEN 参数化 (128/256), SEW 运行时配置 (8/16/32/64)
- 分步执行: steps = ceil(VL * SEW / datapath_width), 步间 chaining
- SIMD ALU: SEW 参数化加减/逻辑/移位/比较
- Reduction: 向量归约求和/最大值等
- Vector Load/Store: Unit-stride/Strided/Indexed 地址生成 (V-AGU)
- 掩码操作: v0 掩码寄存器, mask-aware 指令
- busy/ready 握手 (D-006a)

## Task 3: Power Management (power_mgmt.sv)

**实现要点:**
- WFI/WRS 低功耗: pipeline drain → clk_gate → sleep, 唤醒 ≤8 cycle
- WRS 特殊处理: 等待 reservation_invalidate 信号
- ICG 时钟门控: 细粒度(per-stage) + 模块级(FPU/VEC/TCM) + Core级(WFI) + SoC级(强制)
- 多域复位: sys_reset_n → core_reset_n + bus_reset_n, debug_reset_n 独立
- UPF 电源域: RUN/IDLE/SLEEP/DEEP_SLEEP 状态映射
- Deep Sleep: vcc_on=0 时仅 vcc_ret_on 保持 Retention 寄存器
- hart_sleep[NUM_HARTS-1:0] 多核独立 sleep 状态

## Task 4: Multicore Top + Lockstep (multicore_top.sv + lockstep.sv)

**multicore_top.sv 实现要点:**
- generate 块: NUM_HARTS 个 lumi_core_top 实例 (HART_ID = genvar)
- Per-hart 内部连线: ic/dc cache 接口, CSR, commit, interrupt
- AXI 互连: 简化交叉开关 (round-robin 仲裁), 每核 AXI Master → 共享 AXI Slave
- JTAG 共享: tck/tms/tdi 扇出, tdo 链式 (TAP chain)
- CLIC per-hart 实例化, PLIC/CLINT 共享

**lockstep.sv 实现要点:**
- D-011 W 级双级比较: commit_valid + PC + result (rd_addr + rd_data) 逐 slot 比较
- IW (ISSUE_WIDTH) 参数化: 并行比较多 slot
- Mismatch 检测: XOR 比较 + error_code 编码
- 恢复策略: ST_MISMATCH → lockstep_error=1 → ST_RECOVER (等待外部 NMI/Reset)
- M 级扩展预留接口 (mem_write_*_m 信号位)

## Task 5: DFT Controller (dft_ctrl.sv)

**实现要点:**
- Scan 链控制: scan_enable → scan_mode 切换, scan_clk 可选
- MBIST 控制器: March C- 算法 (M0~M5, 10N 复杂度), error_count 统计
- MBIST 状态机: IDLE → START → M0~M5 逐步执行 → DONE/FAIL
- JTAG TAP 复用: 边界扫描 TAP 与 Debug TAP 共享物理引脚, jtag_select 切换
- Tamper 检测: tamper_detect → secure_lock, 安全锁定不可软件绕过
- 4~8 条扫描链分组 (可配)

## Task 6: SoC Top 集成更新

**更新内容:**
- 新增 debug_module 实例化 (JTAG 端口连接, DMI 内部连线)
- 新增 trace 实例化 (commit_pc/valid 连接, AXI4 写出连接)
- 新增 fpu 实例化 (issue/ready 连接, 操作数/结果连接)
- 新增 vector 实例化 (issue/ready 连接, V-LSQ 内存接口)
- 改进 power_mgmt 连接 (wfi_req 从 core 连接)
- 改进 dft_ctrl 连接 (JTAG 端口正确路由)
- gen_multi_core 分支: 实例化 multicore_top

## Task 7: Verilator lint 验证

```bash
verilator --lint-only -Wall src/rtl/**/*.sv --top-module lumi_soc_top
```
目标: 0 error, warning 尽可能少

## Task 8: 指令记录 + Git Commit

- 追加 audit/instruction-log/2026-07-07.yaml
- Git commit: `feat(rtl): Batch-4 complete — Debug/Trace/FPU/Vector/Power/Multicore/Lockstep/DFT`
