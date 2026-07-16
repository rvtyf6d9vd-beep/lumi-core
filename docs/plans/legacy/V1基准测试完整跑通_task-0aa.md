# V1 基准测试完整跑通计划

## 当前状态

| 基准 | 结果 | 关键问题 |
|------|------|----------|
| **CoreMark V1** | exit_code=0 (表面PASS) | 仅 22 retired / 68 cycles — **疑似提前退出**，未完成 50 iterations 计算 |
| **Dhrystone V1** | TIMEOUT | store misalign (mcause=6) → trap→0x0→restart，3.2M 次重启 |

### CoreMark 疑点分析

日志 trace 显示: `boot → JAL(portable_init) → ret → ECALL at 0x44`，仅 22 条指令。
- **可能原因 A**: core_main.c 的 `sizeof(struct list_head_s) > 128` 检查失败，main 提前 return
- **可能原因 B**: `_exit()` 链接问题 — libgcc 的 weak `_exit` 覆盖了 V1 版本
- **可能原因 C**: `v1_write_result()` 未执行 — 0x3FFE0 结果区域无 0xDEADBEEF magic

### Dhrystone 根因分析

1. **链接脚本 `end` 符号 = 0x40000** (TCM 边界之外!) — `malloc` 返回越界地址
2. **RTL memory stage 可能的 misalign 检查 bug** — `lsu_misalign[0]` 硬编码，不区分 LSU 端口
3. **Rec_Glob_A/B 是 static 变量** (在 .bss 中)，但 x14 在异常时包含未对齐值

---

## Task 1: 诊断 (CoreMark + Dhrystone)

### 1.1 CoreMark 诊断

- **反汇编 ELF**: `objdump -d coremark-v1.riscv | head -200` 确认 0x0~0x44 各地址对应函数
- **检查 0x3FFE0 结果区域**: 在 TB report 阶段读取 `v1_sram[0x3FFE0/4]`，确认 magic/iterations/ticks
- **启用 +dump_trace**: 分析 ECALL 发生时的 PC 和 a0 值
- **检查 sizeof**: 确认 `struct list_head_s` 在 RV32 下大小

### 1.2 Dhrystone 诊断

- **反汇编 0x470~0x480**: 确认 PC=0x474~0x47c 属于哪个函数 (大概率 Proc_1)
- **检查符号表**: `nm dhrystone-v1.riscv | grep -E "Rec_Glob|Ptr_Glob|end|__bss"`
- **生成 map 文件**: 链接时 `-Wl,-Map=dhrystone-v1.map`，确认完整内存布局
- **添加 RTL 调试**: memory stage misalign 触发时打印 addr/funct3/PC

---

## Task 2: 修复

### 2.1 链接脚本 `end` 符号修正 [CRITICAL]

**文件**: `perf/benchmarks/libc/lumi-v1-bench.ld`

**问题**: `end` = 0x40000 (超出 TCM)，heap 分配越界

**修复**: 将 `end` 移到 `.bss` 之后、`.bench_result` 之前:
```
__bss_end = .;
PROVIDE(end = .);      /* heap 从 BSS 结束开始 */
PROVIDE(_end = .);
. = 0x3FFE0;           /* bench_result 仍在固定地址 */
```

### 2.2 CoreMark 提前退出修复 [HIGH]

根据诊断结果修复:
- **场景 A**: 修正 core_portme.h 类型定义 (`ee_ptr_int` 适配 RV32)
- **场景 B**: 强制链接 `_exit` → V1 版本 (`-Wl,--defsym`)
- **场景 C**: 链接脚本 BSS 前添加 `ALIGN(4)`

### 2.3 RTL memory stage misalign 检查修复 [HIGH]

**文件**: `src/rtl/core/lumi_memory_stage.sv`

- **修复 1**: `lsu_funct3` 默认值从 `3'b010` (Word) 改为 `3'b000` (Byte)
- **修复 2**: misalign 检查从硬编码 `lsu_misalign[0]` 改为根据实际 slot→LSU 映射
- **添加调试**: misalign 触发时 `$display` addr/funct3/PC

### 2.4 Dhrystone 特定修复 [MEDIUM]

- Rec_Glob_A/B 添加 `__attribute__((aligned(8)))`
- 先以 `NUMBER_OF_RUNS=10` 验证正确性，再增加到 500

---

## Task 3: 重建与回归验证

### 3.1 重建 V1 仿真器
```bash
cd src/sim-v1 && bash build_v1.sh
```

### 3.2 重建 hex 文件
```bash
cd perf/benchmarks/coremark-v1 && make clean && make hex
cd perf/benchmarks/dhrystone-v1 && make clean && make hex NUMBER_OF_RUNS=10
```

### 3.3 仿真验证
- ECALL 最小测试: 确认回归
- CoreMark V1: 确认 retired > 1M, 0x3FFE0 magic = 0xDEADBEEF
- Dhrystone V1: 确认 restarts = 0, exit_code = 0

### 3.4 Dhrystone 全量运行
- NUMBER_OF_RUNS=500，确认 200M cycles 内完成

---

## Task 4: 性能数据验证

### 验收标准

| 偏移 | CoreMark 期望 | Dhrystone 期望 |
|------|------|------|
| 0x3FFE0 | magic = 0xDEADBEEF | magic = 0xDEADBEEF |
| 0x3FFE4 | bench_id = 1 | bench_id = 2 |
| 0x3FFE8 | iterations = 50 | iterations = 500 |
| 0x3FFEC | total_ticks > 0 | total_ticks > 0 |
| 0x3FFF0 | CM/MHz*100 > 0 | DMIPS/MHz*100 > 0 |
| 0x3FFF4 | checks = 0 | checks = 0 |

### 与 gem5 基线对比

| 指标 | gem5 基线 | V1 预期范围 |
|------|------|------|
| CM/MHz | 6.97 | 2.0~5.0 |
| DMIPS/MHz | 1.65 | 0.5~1.2 |

---

## 执行顺序

推荐先做 **Task 2.1 (链接脚本修复)** — 这是已确认的 bug，与诊断无关。然后并行做 Task 1.1 (CoreMark 诊断) 和 Task 1.2 (Dhrystone 诊断)，根据结果决定 Task 2.2~2.4 的修复范围。
