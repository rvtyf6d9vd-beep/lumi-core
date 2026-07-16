# CoreMark V1 分阶段调试计划

## 当前状态
- Predecode 时序问题已修复 (ERR-PDREG)
- 程序可以运行到 500K 周期，但仅 156 条 commit
- 程序大部分时间卡在循环/trap 中

## Task 1: 清理调试代码 + 基线仿真
- 清理所有 `$display` 调试打印 (predecode/fetch/execute/soc_top/tb)
- 重新编译，确认干净编译通过
- 运行一次完整仿真记录基线输出
- **完成标准**: 编译无 warning，仿真输出干净

## Task 2: 诊断 boot code 完整性
- 目标：确认 0x00-0x4f 的 boot code 全部正确执行
- 验证 AUIPC/ADDI 设置 mtvec 正确 (0x502c)
- 验证 BGEU 分支判断正确
- 验证 ECALL 触发 trap 到 mtvec 并正确返回
- 完成标准：boot code 所有指令 commit 且 PC 正确到达 main() 入口

## Task 3: 诊断 ECALL/trap 处理
- 追踪 trap handler 执行路径 (mtvec=0x502c)
- 验证 MRET 正确返回到 ECALL 下一条指令
- 诊断 PC=0xfff40034 的来源（trap 返回地址被破坏？）
- 完成标准：ECALL 调用→handler→MRET 返回，PC 不跑到无效地址

## Task 4: 诊断 CoreMark main() 主体执行
- 确认程序到达 CoreMark 的 main() 函数
- 追踪主要循环的执行进度
- 诊断 500K 周期仅 156 条 commit 的瓶颈（卡在哪个循环？）
- 检查 store 指令是否正常执行（SRAM write 应远大于 14）
- 完成标准：CoreMark 主循环可以迭代多次

## Task 5: 修复 _exit 检测 + ECALL 终止
- 调整 scoreboard 的 _exit 范围（当前 0x3a8a-0x3aba 有误检）
- 确保 ECALL (0x00000073) 正确触发 test_done
- 完成标准：CoreMark 完成后通过 ECALL 正确终止仿真

## Task 6: CoreMark 结果验证 + 调试代码最终清理
- 验证 0x3FFE0 处的 magic=0xDEADBEEF
- 提取 CoreMark 分数 (iterations, ticks, metric)
- 最终清理所有临时调试代码
- 完成标准：PASS=1, magic 有效, 分数合理

## Task 7: Dhrystone V1 仿真 + 回归测试 + 归档
- 复用 Task 1-6 的修复运行 Dhrystone V1
- 运行回归测试确认无回归
- Git commit + 审计日志同步
- 完成标准：两个基准测试均 PASS
