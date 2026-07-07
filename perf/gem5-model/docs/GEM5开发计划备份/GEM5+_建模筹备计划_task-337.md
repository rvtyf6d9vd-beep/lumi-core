# GEM5+ 建模筹备计划 — 阶段1详细规划

## 关键发现：gem5 v24.1 原生支持远超预期

对 `decoder.isa`（5090行）逐条审查后发现，Lumi-Core Profile 的 Mandatory 扩展中，约 **80% 的指令已被 gem5 v24.1 原生支持**，实际编码工作大幅减少。

### 已支持（仅需验证）

| 扩展 | 状态 | 指令数 |
|------|------|--------|
| B (Zba/Zbb/Zbc/Zbs) | 全部已支持 | ~67 条 |
| Zicond | 全部已支持 | 2 条 (czero_eqz, czero_nez) |
| CMO (Zicbom/bop/boz) | 全部已支持 | 7 条 (cbo_inval/clean/flush/zero, prefetch_i/r/w) |
| Zca + Zcmp | 全部已支持 | C 扩展完整 + push/pop/popret/popretz |
| Zifencei | 已支持 | fence_i |

### 需要添加（约 10 条指令）

| 扩展 | 缺失指令 | 复杂度 | 预估 |
|------|---------|--------|------|
| Zcb | c.zextb, c.sextb, c.zexth, c.sexth, c.not, c.mul | 中 | 1-2天 |
| Zcmt | cm.jt | 低-中 | 0.5-1天 |
| Zihintpause | PAUSE | 低 | 0.5天 |
| Zihintntl | NTL | 低 | 0.5天 |
| Zimop | MOP.R.rr, MOP.RR.rr, MOP.RR.RR (NOP语义) | 低 | 0.5-1天 |
| Zcmop | c.mop (NOP语义) | 低 | 0.5天 |

## 阶段 1 任务分解

### Task 1.1: B 扩展功能验证 [仅验证]
- 编写覆盖 Zba/Zbb/Zbc/Zbs 全部指令的汇编测试
- 在 gem5 AtomicSimpleCPU 上运行验证
- 测试存放于 `perf/gem5-model/tests/isa/b-ext/`

### Task 1.2: Zicond / CMO 功能验证 [仅验证]
- CZERO.EQZ/NEZ 测试 + CBO.* 指令测试
- 测试存放于 `perf/gem5-model/tests/isa/zicond/` 和 `tests/isa/cmo/`

### Task 1.3: Zcb 压缩基本操作指令添加 [编码]
- 在 decoder.isa 16-bit 解码树中添加 6 条 Zcb 指令
- 编码空间：quadrant 0/1 的 funct4=0001, funct2=11
- 语义实现：c.zextb/zexth 为掩码，c.sextb/sexth 为符号扩展，c.not 为取反，c.mul 为乘法
- 风险：需仔细检查与现有 C 扩展编码空间冲突

### Task 1.4: Zcmt 压缩跳转表指令添加 [编码]
- 在 decoder.isa quadrant 0 添加 cm.jt
- 语义：PC = t0 + (imm << 2)

### Task 1.5: Hint 指令添加（Zihintpause / Zihintntl）[编码]
- PAUSE 编码为 fence tso, 0，实现为 NOP
- NTL 编码为 hint 空间，确认现有处理或添加

### Task 1.6: MOP 指令添加（Zimop / Zcmop）[编码]
- Zimop: 32-bit opcode 0x10/0x50/0x70，NOP 语义
- Zcmop: 16-bit quadrant 0，NOP 语义

### Task 1.7: 集成回归测试
- 使用全扩展 -march 编译综合测试程序
- 在 AtomicSimpleCPU 上运行全部测试，确认无回归

**阶段 1 总预估：5-9 天**

## 后续阶段概要（阶段 2-6 保持不变）

- **阶段 2:** PMP/Smepmp + CLIC 中断控制器（关键路径，~40% 工作量）+ PLIC + NMI
- **阶段 3:** MinorCPU 参数化 + 缓存建模 + 时序校准
- **阶段 4:** CoreMark 基准测试集成（规则[12]）
- **阶段 5-6:** gem5+rtl 集成 + 文档