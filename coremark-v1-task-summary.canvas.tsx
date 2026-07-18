import { Divider, Grid, H1, H2, Stack, Stat, Table, Text, Timeline, Tag, Callout } from 'qoder/canvas';

export default function CoreMarkV1TaskSummary() {
  return (
    <Stack gap={20}>
      <H1>CoreMark V1 长调试任务总结 + Skill 创建</H1>
      <Text tone="secondary">Spec: CoreMark_V1_长调试计划_task-c17.md | 全部 5 项执行步骤已完成</Text>

      <Grid columns={4} gap={12}>
        <Stat value="5/5" label="执行步骤完成" tone="success" />
        <Stat value="3" label="Errata 补录" />
        <Stat value="1" label="Skill 创建" tone="success" />
        <Stat value="1" label="Git Commit + Tag" />
      </Grid>

      <Callout tone="success" title="Goal Complete">
        计划文件中的全部执行顺序 (1-5) 已实现并验证。ERR-128/129/130 补录完成，TC-7 回归测试已添加，代码已 commit (a23d197) 并打 tag (checkpoint/post-err130-phase4)，Skill 文件和 Canvas 报告均已创建。
      </Callout>

      <Divider />

      <H2>执行步骤验证</H2>
      <Table
        headers={['#', '步骤', '状态', '证据']}
        rows={[
          ['1', '补录 ERR-128/129/130 到 known-issues.yaml', 'DONE', 'L2770/2787/2806'],
          ['2', '为 ERR-130 补充回归测试 TC-7', 'DONE', 'rv32im_bug_regression.S TC-7'],
          ['3', 'Git commit + checkpoint tag', 'DONE', 'a23d197 + checkpoint/post-err130-phase4'],
          ['4', '创建 Skill SKILL.md', 'DONE', '.qoder/skills/long-task-summary/SKILL.md'],
          ['5', '生成总结 Canvas 报告', 'DONE', 'coremark-v1-debugging-summary.canvas.tsx'],
        ]}
        rowTone={['success', 'success', 'success', 'success', 'success']}
      />

      <Divider />

      <H2>任务时间线</H2>
      <Timeline
        events={[
          { id: '1', title: 'ERR-128/129/130 补录', description: '3 个 bug 录入 known-issues.yaml (REM/trap-batch/dual-load)', timestamp: 'Step 1' },
          { id: '2', title: 'TC-7 回归测试', description: 'rv32im_bug_regression.S 新增双 load 端口串行化测试 (lw+lh, lw+lb, 3x lw)', timestamp: 'Step 2' },
          { id: '3', title: 'Git Commit', description: 'fix(ERR-130): dual-load port0 data loss + Phase 4 scoreboard/timeout + errata', timestamp: 'Step 3' },
          { id: '4', title: 'Skill 创建', description: '.qoder/skills/long-task-summary/SKILL.md — 可复用长任务总结流程', timestamp: 'Step 4' },
          { id: '5', title: 'Canvas 报告', description: 'coremark-v1-debugging-summary.canvas.tsx — 16 bug 可视化总结', timestamp: 'Step 5' },
        ]}
      />

      <Divider />

      <H2>关键产出物</H2>
      <Table
        headers={['产出', '路径', '说明']}
        rows={[
          ['Errata 登记', 'audit/errata/known-issues.yaml', 'ERR-128 (REM), ERR-129 (trap batch), ERR-130 (dual-load)'],
          ['回归测试', 'tests/directed/rv32im_bug_regression.S', 'TC-1~TC-7 覆盖 16 个 RTL bug'],
          ['Skill', '.qoder/skills/long-task-summary/SKILL.md', '5步流程: 收集问题/验证测试/映射里程碑/识别待办/生成报告'],
          ['Canvas', 'coremark-v1-debugging-summary.canvas.tsx', '完整可视化总结 (问题/方案/进度/计划)'],
          ['Checkpoint', 'git tag checkpoint/post-err130-phase4', 'commit a23d197'],
        ]}
      />

      <Divider />

      <H2>后续工作 (超出本 Spec 范围)</H2>
      <Table
        headers={['阶段', '内容', '目标']}
        rows={[
          ['Phase 5-9', 'CoreMark 端到端仿真', 'magic=0xDEADBEEF, exit_code=0'],
          ['Phase 10', '性能分析与优化', 'CM/MHz >= 5.5'],
          ['Phase 11', 'Dhrystone V1 仿真', 'DMIPS/MHz >= 3.8'],
          ['Phase 12', '回归测试与归档', '回归 100%, errata 闭环'],
        ]}
        rowTone={['warning', 'warning', 'warning', 'warning']}
      />

      <Text tone="secondary" size="small">
        Generated for completed goal: CoreMark_V1_长调试计划_task-c17.md
      </Text>
    </Stack>
  );
}
