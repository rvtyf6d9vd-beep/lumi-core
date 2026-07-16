# CoreMark V1 分阶段调试计划 (基于调试经验手册 + 静态分析)

## Task 0: 全面静态分析 -- 已完成

对 RTL 全链路 + 软件栈进行静态代码审查，发现 7 个问题:

### SA-1 [CRITICAL]: ERR-029 -- LSU Port 1 内存操作被静默丢弃
- `lumi_memory_stage.sv:418-444`: BYPASS_SB 路径 FSM 只处理 `lsu_valid[0]`
- 当 decode 同 cycle 发射 2 条 MEM 指令，LSU[1] 的 load/store 被完全丢弃
- 数据丢失，链表指针断裂

### SA-2 [CRITICAL]: ERR-032 -- M 级旁路对 Load 传递地址而非数据
- `lumi_bypass.sv:86-89` + `lumi_core_top.sv:313`
- M 级旁路源 `m_result_r` 对 load 指令包含的是 E1 阶段计算的有效地址
- 紧随 load 的依赖指令通过 M-bypass 拿到地址而非 SRAM 读出的数据
- 所有 load-use 背靠背序列数据错误

### SA-3 [HIGH]: Load 结果硬编码为 LSU Port 0
- `lumi_memory_stage.sv:344`: `m_pipe_result[i] <= lsu_load_data[0]`
- slot 1 的 load 指令返回 slot 0 的数据

### SA-4 [HIGH]: m_valid_out 不反映 FSM 实际处理状态
- `lumi_memory_stage.sv:409`: 被丢弃的 MEM 操作仍标记 valid 继续提交

### SA-5 [MEDIUM]: Writeback Slot 2 寄存器写回被丢弃
- `lumi_writeback.sv:100-160`: 3 slot 全有 rd 写入时 slot 2 丢失

### SA-6 [MEDIUM]: m1_mem_* 流水线寄存器无 stall 保护
### SA-7 [LOW]: ee_printf va_arg 类型不匹配 (RV32 上无影响)

**核心判断**: SA-1 + SA-2 极大概率是 TIMEOUT 根因。建议先修复再验证。

---

## Task 1: 修复 ERR-029 (LSU Port 1 处理)
修改 `lumi_memory_stage.sv`，在 BYPASS_SB 路径增加 port 1 串行化处理。
同时修复 SA-3 (load 结果按 slot 映射到对应 LSU port)。

## Task 2: 修复 ERR-032 (M 级 Bypass Load 数据修正)
修改 `lumi_core_top.sv`，将 M 级旁路源从 `m_result_r` 改为 `m_result_out`。

## Task 3: 修复 SA-4 + SA-5 (Writeback 问题，可选)

## Task 4: Phase 0 最小基线验证
创建 `phase0_minimal.c`，确认 _start -> main -> v1_write_result -> ECALL 链路通顺。

## Task 5: Phase A-E 分步验证
逐步启用 LIST/MATRIX/STATE 算法，验证修复充分性。

## Task 6: Progress Marker + 软件排查 (如 Phase 失败时启用)

## Task 7: EEMBC 合规性验证 (Phase E 通过后)

## Task 8: 性能分析 + 报告 + 收尾

---

执行顺序: Task 0 (DONE) -> Task 1+2 (并行修复) -> Task 4 (Phase 0) -> Task 5 (Phase A-E) -> Task 7-8
预估: 顺利 ~3-4 h，含诊断修复 ~5-6 h