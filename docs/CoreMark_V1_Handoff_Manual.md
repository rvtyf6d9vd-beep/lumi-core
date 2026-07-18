# CoreMark V1 调试交接手册

**文档版本**: v1.0  
**创建日期**: 2026-07-18  
**交接对象**: 下一位调试 Agent / 工程师  
**关联计划**: `CoreMark_调试总结归档_task-078.md`

---

## 一、当前状态总结

### 1.1 完成情况

✅ **已完成**:
- 修复 13 个 RTL bug（6 个 RTL 文件）
- 5 个已有回归测试全部 PASS（v1-smoke, rv32i-full, rv32m, rv32i-misalign, loop-debug）
- 调试 trace 已移除（PIPE-DBG, FETCH-DBG）
- Verilator 编译通过

❌ **未完成**:
- 新增 6 个回归测试（覆盖 13 个 bug）
- errata 归档（13 个 bug 记录到 known-issues.yaml）
- Git commit + checkpoint tag
- CoreMark V1 功能通过（当前 FAIL，exit_code=1）
- CoreMark 性能数据提取

### 1.2 核心阻塞点

**CoreMark V1 执行失败**:
- 程序在 `core_list_mergesort` 函数中触发 `ebreak`（PC=0x5bc）
- 这是编译器插入的"不可达路径"，表明链表数据结构损坏
- trap handler 写入 `0xDEAD0001` 到 `0x3FFE0`，scoreboard 检测 exit_code=1

**根因链**:
```
coremark_orig_main → core_list_init → core_list_mergesort
  → 链表指针/数据损坏 → merge sort 遇到不可能条件
  → ebreak 触发 → trap handler → exit_code=1 (FAIL)
```

**附带发现**: trap handler 的 `csrr t2, mcause` 读出 0（应为 3=EBREAK），可能是 CSR 单元 bug。

---

## 二、已修复的 13 个 RTL Bug

### 2.1 数据通路类（4 个）

| Bug ID | 文件 | 行号 | 根因 | 修复方式 | 验证状态 |
|--------|------|------|------|----------|----------|
| Bug-MUL-BP | `lumi_core_top.sv` | L427-448 | MUL/DIV E2 结果与 E1→M 寄存器捕获时序错位，m_result_r 中是占位值 0 | 新增 `m_result_eff` 组合逻辑，E2 结果有效时替换占位值 | v1-rv32m PASS |
| Bug-M-BPV | `lumi_memory_stage.sv` | L411-414 | stall_port1=1 时 port 1 load 未读 SRAM，但 m_bypass_valid=1 提供旧值 | `m_bypass_valid = mem_ready_in && !stall_port1 && !pending_port1_r` | v1-loop-debug PASS |
| Bug-E1LU | `lumi_core_top.sv` + `lumi_decode_issue.sv` | L817-827 | E1 有 load 时依赖指令同周期发射，M 旁路提供旧值 | 新增 `e1_load_pending`/`e1_load_rd` 信号，issue 时检测 E1 load 依赖并阻止 | v1-loop-debug PASS |
| Bug-DIV-P | `lumi_core_top.sv` | L519-530 | e2_div_busy 有 1 周期延迟，DIV 第 1 周期就进入 M 级 | 新增 `e1_div_pending` 组合信号，E1 有 DIV 且结果未就绪时 stall | v1-rv32m PASS |

### 2.2 控制流/分支预测类（4 个）

| Bug ID | 文件 | 行号 | 根因 | 修复方式 | 验证状态 |
|--------|------|------|------|----------|----------|
| Bug-MP-PRE | `lumi_core_top.sv` | L668-695 | 误预测时 m_valid_r<='0 清除所有 slot，分支前指令丢失 | 保留分支及其前所有有效指令，仅刷新分支后推测指令 | v1-rv32i-full PASS |
| Bug-NT-REDIR | `lumi_execute.sv` | L674-677 | not-taken 误预测重定向到 branch_target 而非 PC+4 | `e1_branch_target = taken ? target : (pc+4)` | v1-rv32i-full PASS |
| Bug-LTAGE-NT | `lumi_core_top.sv` + `lumi_execute.sv` | - | tage_update_valid 仅 taken 时有效，not-taken 不更新 LTAGE | 新增 `e1_br_executed`，条件分支 taken/not-taken 都更新 | v1-rv32i-full PASS |
| Bug-BTB-OVR | `lumi_fetch.sv` | L414 | slot-0 BTB 命中时仍检查组级 BTB，后续 JAL 条目污染当前分支预测 | `if (grp_found && !btb_hit)` | v1-rv32i-full PASS |

### 2.3 异常/Trap 处理类（3 个）

| Bug ID | 文件 | 行号 | 根因 | 修复方式 | 验证状态 |
|--------|------|------|------|----------|----------|
| Bug-EXC-PROP | `lumi_memory_stage.sv` + `lumi_core_top.sv` | - | m_pipe_exception 固定为 0，EBREAK/ECALL 异常未传播到 W 级 | 传播 exc_valid/exc_cause 到 inst_pkt | v1-rv32i-misalign PASS |
| Bug-TRAP-FL | `lumi_memory_stage.sv` + `lumi_core_top.sv` | - | trap_request 时 M→W 寄存器未清除，异常指令可能重复提交 | 新增 `trap_flush` 输入，清除 m_pipe_valid | v1-rv32i-misalign PASS |
| Bug-IRQ-MIE | `lumi_writeback.sv` | L353-356 | 中断检查未检查 mstatus.MIE 位 | 添加 `&& mstatus_out[3]` 条件 | v1-rv32i-misalign PASS |

### 2.4 M→W 提交类（2 个）

| Bug ID | 文件 | 行号 | 根因 | 修复方式 | 验证状态 |
|--------|------|------|------|----------|----------|
| Bug-STP1-DUP | `lumi_memory_stage.sv` | L545-551 | stall_port1=1 时 M→W 保持旧值导致 W 级重复提交 | stall_port1=1 时 `m_pipe_valid <= '0` | v1-loop-debug PASS |
| Bug-PFHR | `lumi_fetch.sv` | - | post_flush_hold_r 机制不再需要（被其他修复替代） | 移除 post_flush_hold_r 及相关逻辑 | v1-rv32i-full PASS |

---

## 三、测试覆盖现状

### 3.1 已有回归测试（全部 PASS）

| 测试目标 | 命令 | 覆盖范围 | 结果 |
|----------|------|----------|------|
| v1-smoke | `make v1-smoke` | 基本 RV32I 指令 | PASS (exit_code=0, 34 cycles) |
| v1-rv32i-full | `make v1-rv32i-full` | 完整 RV32I 指令集 | PASS (exit_code=0, 63 cycles) |
| v1-rv32m | `make v1-rv32m` | RV32M 乘除法 | PASS (exit_code=0, 421 cycles) |
| v1-rv32i-misalign | `make v1-rv32i-misalign` | 14 个未对齐访问场景 | PASS (exit_code=0, 534 cycles) |
| v1-loop-debug | `make v1-loop-debug` | Store-Load 转发 + stall_port1 | PASS (exit_code=0, 326 cycles) |

### 3.2 待新增回归测试

需创建 `tests/directed/rv32im_bug_regression.S`，包含 6 个测试用例（详见计划 §2.2）：

| TC | 覆盖 Bug | 测试内容 |
|----|----------|----------|
| TC-1 | Bug#1, #4 | MUL/DIV 结果旁路冒险 |
| TC-2 | Bug#2, #3, #12 | 双 LSU stall_port1 + load-use |
| TC-3 | Bug#5, #6 | 误预测后分支前指令保留 |
| TC-4 | Bug#7, #8 | LTAGE not-taken 更新 + BTB 组污染 |
| TC-5 | Bug#9, #10 | EBREAK/ECALL trap 传播 |
| TC-6 | Bug#12 | 连续双 MEM 批次不重复提交 |

---

## 四、CoreMark V1 调试详情

### 4.1 当前运行结果

```
Total Retired:  68560
PC Restarts:    0
Max PC:         0x00006b18 (trap handler spin loop)
exit_code:      1 (FAIL)
magic:          0xDEAD0001 (trap handler 写入)
SRAM writes:    17103
SYSTEM insts:   5
```

### 4.2 失败位置分析

**PC=0x5bc** 位于 `core_list_mergesort` 函数：
```asm
5b4:  e00912e3  bnez s2, 3b8 <core_list_mergesort+0x4c>
5b8:  00002023  sw zero, 0(zero)  # 写入地址 0x0（abort 标志）
5bc:  00100073  ebreak            # 编译器插入的不可达路径
```

当 `s2==0` 时，`bnez` 不跳转，落入 `sw zero,0(zero)` + `ebreak`。这表明 merge sort 遇到了不可能的链表结构。

### 4.3 可能根因

1. **链表初始化损坏**: `core_list_init` 创建的链表指针/数据不正确
2. **Store-Load 转发 bug**: 长距离 store-load 依赖链中数据丢失
3. **分支预测恢复 bug**: 误预测后寄存器状态未正确恢复
4. **函数调用/返回栈操作**: JALR 与数据操作交织时出错

### 4.4 附带发现：mcause=0 异常

trap handler 读取 mcause 得到 0，但 EBREAK 应设置 mcause=3。可能原因：
- CSR 单元未正确写入 mcause
- CSR 读取结果未正确转发到 store data
- 需独立测试验证（计划 Step 5）

---

## 五、环境与构建

### 5.1 目录结构

```
Lumi-core/
├── src/rtl/core/          # RTL 源码（6 个文件有未提交修改）
├── src/tb/                # Testbench + Makefile
├── tests/directed/        # 回归测试（.S 文件）
├── perf/benchmarks/
│   ├── coremark-v1/       # CoreMark V1 benchmark
│   └── libc/              # v1_lib.c, crt0_v1.S
├── audit/errata/          # known-issues.yaml
└── docs/                  # 文档
```

### 5.2 关键命令

```bash
# 编译 RTL
cd src/tb && make v1-build

# 运行回归测试
make v1-smoke
make v1-rv32i-full
make v1-rv32m
make v1-rv32i-misalign
make v1-loop-debug

# 编译 CoreMark V1
cd perf/benchmarks/coremark-v1
make clean && make hex ITERATIONS=1   # 快速调试
make clean && make hex ITERATIONS=50  # 完整基准

# 运行 CoreMark V1
cd src/sim-v1
./obj_dir/Vlumi_v1 +itcm_file=/path/to/coremark-v1_32.hex +max_cycles=2000000
```

### 5.3 关键文件路径

| 用途 | 文件路径 |
|------|----------|
| RTL 主文件 | `src/rtl/core/lumi_core_top.sv` |
| Decode/Issue | `src/rtl/core/lumi_decode_issue.sv` |
| Memory Stage | `src/rtl/core/lumi_memory_stage.sv` |
| Execute | `src/rtl/core/lumi_execute.sv` |
| Fetch | `src/rtl/core/lumi_fetch.sv` |
| Writeback | `src/rtl/core/lumi_writeback.sv` |
| Makefile | `src/tb/Makefile` |
| CoreMark 入口 | `perf/benchmarks/coremark-v1/coremark_v1_main.c` |
| v1_lib.c | `perf/benchmarks/libc/v1_lib.c` |
| crt0 | `perf/benchmarks/libc/crt0_v1.S` |
| Errata | `audit/errata/known-issues.yaml` |

---

## 六、下一步行动计划

### 优先级 P0：固化已有成果（预计 1.5 小时）

1. **归档 13 个 bug 到 errata**
   - 文件: `audit/errata/known-issues.yaml`
   - 状态: `resolved`（已修复但未提交）
   - 包含: Bug ID、文件、行号、根因、修复方式

2. **新增回归测试**
   - 创建: `tests/directed/rv32im_bug_regression.S`
   - 内容: TC-1 ~ TC-6（见计划 §2.2）
   - Makefile: 添加 `v1-bug-regression` 目标
   - 验证: 全部 PASS

3. **Git commit + tag**
   ```bash
   git add src/rtl/core/*.sv tests/directed/rv32im_bug_regression.S audit/errata/known-issues.yaml
   git commit -m "fix: 13 RTL bugs (bypass/mispredict/trap) + regression tests"
   git tag checkpoint/post-bug5b-fix
   ```

### 优先级 P1：CoreMark 链表损坏调试（预计 2-4 小时）

1. **创建 core_list_init 单独测试**
   - 调用 `core_list_init` 后读取链表头指针和数据
   - 验证初始化本身是否正确

2. **对比参考实现**
   - 用 Spike ISS 或手工计算对比链表数据
   - 定位具体哪个 store/load 出错

3. **添加最小化 trace**
   - 在 `lumi_memory_stage.sv` 和 `lumi_core_top.sv` 添加 commit trace
   - 打印 store/load 的 PC、地址、数据

4. **修复 + 重新运行**
   - 根据定位结果修复 RTL
   - 用 ITERATIONS=1 快速迭代
   - 目标: 不再命中 `core_list_mergesort` 内的 ebreak

### 优先级 P2：mcause=0 调查（预计 30 分钟）

1. **创建独立 CSR 测试**
   - 文件: `tests/directed/csrr_mcause.S`
   - 内容: 设置 mtvec → ebreak → 读 mcause → 验证等于 3

2. **检查 RTL**
   - `lumi_execute.sv`: e1_exc_cause 对 EBREAK 的赋值
   - `lumi_csr_unit.sv`: mcause 写入逻辑
   - CSR 读取旁路路径

3. **如确认 bug，记录为新 ERR-xxx**

### 优先级 P3：完整 CoreMark 流程（预计 2-4 小时）

1. **ITERATIONS=1 功能验证**
   - 目标: `magic=0xDEADBEEF` + `exit_code=0`

2. **ITERATIONS=50 完整基准**
   - 提取: total cycles、retired、IPC、metric_x100、CM/MHz
   - 对比 BL-1.1 目标: CoreMark >= 5.5 CM/MHz

3. **最终归档**
   - 更新 errata（新增/关闭相关 ERR）
   - 更新 instruction-log
   - Git commit + tag: `checkpoint/coremark-v1-pass`

---

## 七、已知陷阱与注意事项

### 7.1 编译相关

- CoreMark 必须用 `rv32im`（无 C 扩展），不能用 `rv32ima`
- `elf2hex.py` 参数: `--word-width 32`（不是 `--output`）
- Verilator 编译必须禁用 UNSIGNED 警告

### 7.2 测试相关

- `ITERATIONS=50` 仿真时间过长（约 10M cycles），调试时用 `ITERATIONS=1`
- V1 SRAM 地址映射: `SRAM[addr/4]` 对应物理地址 `addr`
- `0x3FFE0` = SRAM[65528]，`0x3FFE4` = SRAM[65529]

### 7.3 RTL 相关

- V1 SRAM 是同步写 + 组合读（dc_ready = reset_n，始终为 1）
- BYPASS_SB=1：Store 直写 SRAM，Load 直读 SRAM
- 双 LSU 端口串行化：port 0 先处理，port 1 延后 1 cycle（stall_port1）
- M 级旁路：bp_m_valid/bp_m_result（从 M 级到 E1 的旁路）
- Load-Use 冒险检测：e1m_load_pending（M 级）+ e1_load_pending（E1 级）

### 7.4 Trap 处理

- EBREAK/ECALL 异常必须通过 `exc_valid`/`exc_cause` 传播到 W 级
- trap_request 时必须清除 M→W 寄存器（防止重复提交）
- trap handler 写入 `0xDEAD0001` 到 `0x3FFE0` 表示失败

---

## 八、验收标准

本交接任务完成时，以下全部满足：

1. ✅ 13 个 RTL bug 已记录到 `audit/errata/known-issues.yaml` 并标记 resolved
2. ✅ 新增回归测试 `v1-bug-regression` 6 个 TC 全部 PASS
3. ✅ RTL 修复 + 回归测试 + errata 已 git commit，并打 tag `checkpoint/post-bug5b-fix`
4. ✅ CoreMark V1 功能通过（ITERATIONS=50）：`PASS=1 FAIL=0`，`magic=0xDEADBEEF`
5. ✅ CoreMark 性能数据已记录：cycles、retired、IPC、CM/MHz
6. ✅ 最终 git commit + tag `checkpoint/coremark-v1-pass`

---

## 九、联系与参考

### 9.1 相关文档

- **计划文件**: `CoreMark_调试总结归档_task-078.md`
- **Errata**: `audit/errata/known-issues.yaml`
- **性能基线**: `perf/perf-baseline.yaml`

### 9.2 关键代码位置

- **M 级旁路**: `lumi_core_top.sv` L427-448
- **Load-Use 检测**: `lumi_decode_issue.sv` L817-827
- **stall_port1 逻辑**: `lumi_memory_stage.sv` L411-414, L545-551
- **误预测恢复**: `lumi_core_top.sv` L668-695
- **Not-taken 重定向**: `lumi_execute.sv` L674-677
- **LTAGE 更新**: `lumi_core_top.sv` L255, `lumi_execute.sv` e1_br_executed
- **BTB 组查找**: `lumi_fetch.sv` L414
- **异常传播**: `lumi_memory_stage.sv` m_pipe_exception, exc_valid
- **Trap flush**: `lumi_memory_stage.sv` trap_flush, `lumi_core_top.sv` trap_request
- **IRQ MIE 检查**: `lumi_writeback.sv` L353-356

### 9.3 调试技巧

- 使用 `+dump_trace` 参数生成 trace 文件分析
- 用 `riscv64-unknown-elf-objdump -d` 反汇编 hex 文件
- 检查 SRAM 内容: `v1_sram[65528]` 等
- Scoreboard 输出包含: Retired、PC Restarts、Max PC、exit_code、SYSTEM insts

---

**交接完成**。请按照第六章的优先级顺序执行，每完成一个优先级后立即验证。
