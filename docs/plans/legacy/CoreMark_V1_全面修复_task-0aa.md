# CoreMark V1 全面修复与验证计划 (v3 — 多方独立审查修订)

## 问题全景总结

### RTL Bugs (共 8 项)

| ID | 严重度 | 描述 | 文件 | 状态 |
|---|---|---|---|---|
| SA-1/ERR-029 | CRITICAL | LSU Port 1 在 BYPASS_SB FSM 中被静默丢弃 | `lumi_memory_stage.sv` | FIXED+VERIFIED |
| SA-2/ERR-032 | CRITICAL | M 级旁路对 Load 传递地址(m_result_r)而非 SRAM 数据 | `lumi_core_top.sv` | FIXED+VERIFIED |
| SA-3 | HIGH | Load 结果硬编码为 LSU Port 0 | `lumi_memory_stage.sv` | FIXED (随 SA-1) |
| SA-4 | HIGH | m_valid_out 不反映 FSM 实际处理状态 | `lumi_memory_stage.sv` | FIXED |
| SA-5 | **HIGH** | Writeback Slot 2 寄存器写回被静默丢弃 (3-slot 全有效时) | `lumi_writeback.sv` | **本次修复 (延迟写回)** |
| SA-6 | MEDIUM | E1->M 流水线寄存器无 stall 保护 | `lumi_core_top.sv` | FIXED |
| **SA-9** | **HIGH** | **m1_mem_* 寄存器无 mem_busy stall 保护** | **`lumi_memory_stage.sv:222`** | **代码已改，待验证** |
| **SA-10** | **CRITICAL** | **M 级旁路 valid/result 来源不同步: m_valid_r(E1->M) vs m_result_out(M->W), 多周期 load 期间旁路返回旧数据** | **`lumi_core_top.sv:315` + `lumi_memory_stage.sv`** | **需重新修复** |

### 软件 Bugs (共 4 项)

| ID | 严重度 | 描述 | 文件 | 状态 |
|---|---|---|---|---|
| SA-8a | HIGH | malloc 返回未对齐指针 | `v1_lib.c:102` | FIXED |
| SA-8b | HIGH | static_memblk 无对齐声明 | `core_main.c:89` | FIXED |
| **SA-11** | **CRITICAL** | **crt0_v1.S 未设置 mtvec，异常时 PC 跳到 0x0 -> 无限 trap 循环** | **`crt0_v1.S`** | **未修复** |
| SA-12 | HIGH | TOTAL_DATA_SIZE 太小导致 core_list_init 无符号下溢 | 编译参数 | FIXED (SIZE=2000) |

### 根因链 (审查修订)

```
SA-10 (M 级旁路 valid/result 不同步)
  根因: core_top.sv:315 .m_valid(m_valid_r) 使用 E1->M 寄存器
         .m_result(m_result_out) 使用 M->W 流水线寄存器
  多周期 load 期间: m_valid_r=1(load 在 M 级), m_result_out=旧值(上一条指令)
  -> 旁路返回旧数据给依赖指令
  -> 旧数据(如 0x00000001)被用作 store 地址
  -> Store misalign 异常 (cause=6)
  -> SA-11 (mtvec=0x0) -> 无限 trap 循环
  -> TIMEOUT at 2B cycles

SA-9 (m1_mem_* 无 stall 保护) 是独立问题:
  mem_busy 期间 E1 级可能有新 ALU 指令 -> e1_mem_addr=0
  -> m1_mem_addr 捕获 0 -> lsu_addr=0 -> FSM 读错误地址
```

---

## Task 1: 修复 SA-10 — M 级旁路 valid/result 同步 (核心修复)

### 问题分析

`lumi_core_top.sv:315`:
```systemverilog
.m_valid (m_valid_r),      // E1->M 寄存器: 当前 M 级指令
.m_result (m_result_out),  // M->W 流水线寄存器: 上一条指令结果
```
多周期 load 期间 m_valid_r=1 但 m_result_out 还是旧值，旁路返回错误数据。

### 修复方案 (v3 修订)

**Part A: 在 `lumi_memory_stage.sv` 新增 `m_bypass_valid` 输出:**

```systemverilog
output logic [ISSUE_WIDTH-1:0] m_bypass_valid,
```

组合逻辑计算:
```systemverilog
// SA-10: load 旁路仅在 SRAM 读完成时有效
for (int i = 0; i < ISSUE_WIDTH; i++) begin
    if (m_valid[i] && m_inst[i].fu_type == FU_MEM && !m_inst[i].inst[5])
        m_bypass_valid[i] = m_valid[i] & mem_ready_in;  // Load
    else
        m_bypass_valid[i] = m_valid[i];                  // 非 Load
end
```

**Part B: 在 `lumi_core_top.sv:315` 改用 `m_bypass_valid`:**
```systemverilog
.m_valid (m_bypass_valid),  // SA-10: 旁路 valid 同步
```

**Part C (v3 关键修正): 修正 `lumi_memory_stage.sv` 的 load 捕获条件**

原计划 (v2) 说"还原为每 cycle 捕获"是**错误的**。原因：
- Load 等待 SRAM 期间, `mem_rdata_in` 可能是完全不相关的数据 (ICache 预取/另一端口的 Load)
- 每 cycle 捕获会污染 m_pipe_result → 最终进入 regfile

**正确条件: 仅在 mem_ready_in=1 时捕获** (不依赖 state_reg):
```systemverilog
// v3 修正: 仅在 SRAM 读完成时捕获 lsu_load_data
// mem_ready_in=1 表示当前 cycle mem_rdata_in 属于本 load
if (mem_ready_in) begin
    m_pipe_result[i] <= (i < 2) ? lsu_load_data[i] : lsu_load_data[0];
end
// 其他 cycle 保持 m_pipe_result 不变
```

双保险机制:
- Part A (m_bypass_valid) 防止 load 等待期间旁路返回旧数据
- Part C (mem_ready_in 条件捕获) 防止 m_pipe_result 被无关 SRAM 数据污染

**Part D: 还原现有错误修复**

当前代码 (v2 错误的实现) 需要改回:
```systemverilog
// 错误代码 (需修正):
if (state_reg == ST_WAIT_READY && mem_ready_in) begin
    m_pipe_result[i] <= (i < 2) ? lsu_load_data[i] : lsu_load_data[0];
end

// 正确代码 (v3):
if (mem_ready_in) begin
    m_pipe_result[i] <= (i < 2) ? lsu_load_data[i] : lsu_load_data[0];
end
```

### SA-9 修复 (已实施，保留)

`lumi_memory_stage.sv:222`: m1_mem_* 加 `if (!mem_busy)` 门控。审查确认正确。

## Task 2: 修复 SA-11 — crt0_v1.S 添加 trap handler

文件: `perf/benchmarks/libc/crt0_v1.S`

### 审查修订 (v3 关键修正): 写错地址 bug

原 v2 计划:
```asm
lui t0, 0x3ff       # t0 = 0x003FF000
sw t1, 0xe0(t0)     # 写入 0x003FF0E0 (错误! 与 TB 期望的 0x3FFE0 差 0xF00)
```

**正确实现 (v3):**
```asm
lui t0, 0x3F         # t0 = 0x0003F000
addi t0, t0, 0xFE0   # t0 = 0x0003FFE0 (正确)
sw t1, 0(t0)         # 写入 0x3FFE0
```

### 完整 halt-and-report handler

```asm
# 在 _start BSS 清零后添加:
    la t0, _trap_handler
    csrw mtvec, t0

# trap handler (放在 .text 末尾):
_trap_handler:
    # 写失败标记到 0x3FFE0 (v3 修正地址)
    lui t0, 0x3F
    addi t0, t0, 0xFE0
    li t1, 0xDEAD0001      # 非 0xDEADBEEF = 失败
    sw t1, 0(t0)           # 0x3FFE0
    # 写 trap 原因
    csrr t2, mcause
    sw t2, 4(t0)           # 0x3FFE4
    csrr t2, mepc
    sw t2, 8(t0)           # 0x3FFE8
    # ECALL 退出 (a0=1=FAIL)
    li a0, 1
    li a7, 93
    ecall
    j .
```

## Task 3: 修复 SA-5 — Writeback slot 2 延迟写回 (v3 新增)

### 问题分析

`lumi_writeback.sv:137-160`: 当 slot 0/1/2 全部有效且无 E2 MUL/DIV 抢占时, slot 2 被静默丢弃, 导致寄存器值丢失。

代码:
```systemverilog
// 槽 2 延迟路径 — 仅在 slot 0 或 slot 1 无效时才有效
if (!w_valid[0] && w_valid[2] && ...) begin ... end
if (!w_valid[1] && !e2_mul_valid && !e2_div_valid && w_valid[2] && !wr_select[2]) begin ... end
```

### 修复方案: 延迟到下周期写回

新增 1 个 stall 周期寄存 slot 2 数据, 当 slot 0/1 全占时, slot 2 数据寄存一拍, 下周期再尝试写回:

```systemverilog
// 新增延迟寄存
logic [ISSUE_WIDTH-1:0] slot2_pending;
logic [4:0]             slot2_rd_r;
logic [31:0]            slot2_data_r;
logic [ISSUE_WIDTH-1:0] slot2_inst_r;
logic [31:0]            slot2_pc_r;

// 组合逻辑: 检测 slot 2 是否需要延迟
logic slot2_need_stall;
always_comb begin
    slot2_need_stall = 1'b0;
    if (w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2] &&
        w_valid[0] && w_valid[1] && !e2_mul_valid && !e2_div_valid) begin
        slot2_need_stall = 1'b1;
    end
end

// 时序逻辑: 寄存 slot 2
always_ff @(posedge clk_core or negedge reset_n) begin
    if (!reset_n) begin
        slot2_pending <= 1'b0;
    end else if (slot2_need_stall) begin
        slot2_pending <= 1'b1;
        slot2_rd_r    <= w_rd[2];
        slot2_data_r  <= w_result[2];
        slot2_inst_r  <= w_inst[2];
        slot2_pc_r    <= w_pc[2];
    end else begin
        slot2_pending <= 1'b0;
    end
end

// 写回仲裁: 增加 slot 2 延迟路径
// 当 slot 0/1 都不空闲时, 用 slot 2 寄存的数据抢占 (优先级最低)
if (slot2_pending && !regfile_wr_en[0] && !regfile_wr_en[1]) begin
    regfile_wr_en[1]    = 1'b1;
    regfile_wr_addr[1]  = slot2_rd_r;
    regfile_wr_data[1]  = slot2_data_r;
end
```

**风险**: 延迟写回会在 W 级增加 1 cycle 延迟, 但对正确性是必要的。

## Task 4: 移除调试输出 (加速仿真)

文件: `lumi_memory_stage.sv`, `lumi_writeback.sv`

- 移除 WB-TRAP debug (writeback.sv:243-257)
- 移除 MISALIGN-DBG (memory_stage.sv:395-403)
- 移除 BYPASS-SB-DBG 输出
- 保留 PROGRESS 输出

## Task 5: 验证修复 (短诊断 + 判定标准)

1. 重建 Verilator: `bash build_v1_fast.sh`
2. 重编译 CoreMark: `make hex ITERATIONS=1 TOTAL_DATA_SIZE=2000`
3. 运行 60s 诊断仿真

### 判定标准 (v3 新增)

**PASS 条件 (全部满足):**
- [ ] 无 [WB-TRAP] 打印 (trap 已被 trap handler 正常处理, 或无 trap 发生)
- [ ] 无 [MISALIGN-DBG] 打印 (地址对齐异常已消除)
- [ ] PC 持续推进: `commit_pc_0` 不再卡在 0x0 或单一地址
- [ ] retired 指令数 > 1000 (说明非空跑)
- [ ] [PROGRESS] 多次出现且每次 retired 都在增长

**FAIL 条件 (任一):**
- [ ] [WB-TRAP] 出现且 mtvec=0 (说明 trap handler 未生效, 检查 csrw mtvec)
- [ ] [MISALIGN-DBG] 出现 (说明 SA-10 未修, 检查 m_bypass_valid 接线)
- [ ] PC 卡死 10000+ cycles (说明有新 stall bug)

### 回滚策略 (v3 新增)

如果 FAIL:
- WB-TRAP 仍触发: 检查 `crt0_v1.S` 的 `csrw mtvec, t0` 是否在 BSS clear 后
- MISALIGN 仍触发: 检查 `lumi_core_top.sv:315` 是否改用 `m_bypass_valid` 而非 `m_valid_r`
- 新 stall: 检查 SA-5 延迟逻辑, 暂时禁用 `slot2_pending` 看是否恢复

## Task 6: 完整 CoreMark 仿真

1. SIZE=2000, ITERATIONS=1 完整仿真
2. 监控 ECALL/PASS/FAIL
3. 检查 V1 Benchmark Result (0x3FFE0): magic=0xDEADBEEF

## Task 7: 性能分析 + 收尾 + 回滚策略

1. 提取 cycles/IPC/CoreMark score
2. 更新 `audit/errata/known-issues.yaml` (SA-1~SA-12 全状态更新)
3. 更新 `audit/instruction-log/2026-07-11.yaml`
4. 更新 `perf/benchmarks/perf-report.yaml`
5. git commit (按规则 [13] GitHub 版本管理)

### 性能基线 (v3 新增)

预期 (基于 SA-9/SA-10 修复后):
- cycles: ~500M-1.5B (ITERATIONS=1, SIZE=2000)
- IPC: 0.3-0.8 (3-wide 超标量, 但 V1 受 BYPASS_SB/SA-5 限制)
- CoreMark score: 记录到 `perf/benchmarks/perf-baseline.yaml`

---

执行顺序: Task 1 (SA-10 旁路+捕获修正) -> Task 2 (crt0 trap 正确地址) -> Task 3 (SA-5 延迟写回) -> Task 4 (去 debug) -> Task 5 (诊断验证) -> Task 6 (完整仿真) -> Task 7 (收尾)
