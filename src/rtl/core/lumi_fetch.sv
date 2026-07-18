// =================================================================
// LUMI-DESIGN-FETCH | 需求: LUMI-FETCH-001~004 | 承接: design/fetch-bpred.html §3.1~3.3
// 模块: lumi_fetch — F1/F2 级取指与分支预测
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: PC gen + BTB 8192 条目 + RAS 32 级 + LTAGE 12 表 + F1/F2 流水线
// 分支预测: BTB 直接映射 → LTAGE TAGE 预测 → RAS return 地址
// 误预测恢复: Execute E1 反馈 → flush + redirect PC

module lumi_fetch #(
    parameter int FETCH_WIDTH  = lumi_pkg::FETCH_WIDTH,   // 6
    parameter int BTB_ENTRIES  = lumi_pkg::BTB_ENTRIES,   // 8192
    parameter int RAS_DEPTH    = lumi_pkg::RAS_DEPTH,     // 32
    parameter int LTAGE_TABLES = lumi_pkg::LTAGE_TABLES,  // 12
    parameter int RESET_VECTOR = 32'h0000_0000
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── F1 级输出 (→ ICache) ──────────────────────────────────
    output logic [31:0]             f1_pc_out,

    // ── F2 级输入 (← ICache) ──────────────────────────────────
    input  logic [127:0]            f2_icache_data, // 128-bit ICache line (4 instructions)
    input  logic                    f2_icache_valid,

    // ── F2 级输出 (→ Decode) ──────────────────────────────────
    output logic [31:0]             f2_instructions [FETCH_WIDTH-1:0],
    output logic [$clog2(FETCH_WIDTH):0] f2_inst_count,
    output logic                    f2_valid,
    output logic [31:0]             f2_pc_out,             // F2 级 PC (fetch-bpred.html §3.2)
    output logic                    f2_pred_taken,         // 分支预测 taken
    output logic [31:0]             f2_pred_target,        // 预测目标地址

    // ── Predecode 接口 (ERR-042 修复) ─────────────────────────
    output logic [127:0]            f2_raw_data_out,       // F2 原始 128-bit 数据
    output logic [31:0]             f2_base_pc_out,        // F2 cache line 基地址
    output logic [3:0]              f2_start_offset_out,   // PC[3:0] 起始偏移
    output logic                    f2_pred_taken_out,     // F2 预测 taken
    output logic [15:0]             f2_carry_hw_out,       // carry halfword
    output logic                    f2_carry_valid_out,    // carry 有效
    // ERR-BTB: 预测分支所在 slot (predecode 用于正确截断)
    output logic [3:0]              pred_branch_slot,      // 0~7: slot号, 0xF: 无预测

    // ── 分支反馈 (← Execute E1) ───────────────────────────────
    input  logic [31:0]             branch_redirect_pc,     // fetch-bpred.html §3.1
    input  logic                    branch_redirect_valid,   // 误预测纠正

    // ── Trap 重定向 (← Writeback) ──────────────────────────────
    input  logic [31:0]             trap_redirect_pc,        // mtvec 地址
    input  logic                    trap_redirect_valid,     // trap 发生
    input  logic [31:0]             tage_update_pc,          // LTAGE 更新 (fetch-bpred.html §3.3)
    input  logic                    tage_update_taken,
    input  logic                    tage_update_valid,
    // ERR-019: 分支类型 (BTB 写入区分 JAL/JALR/条件分支)
    input  logic                    br_update_is_jal,
    input  logic                    br_update_is_jalr,
    // ERR-044: call/ret 区分 (BTB 写入时设置 is_call/is_ret)
    input  logic                    br_update_is_call,
    input  logic                    br_update_is_ret,
    // ERR-RAS: execute-level RAS 压缩标志 (从 execute 级传递)
    input  logic                    br_update_is_compressed,

    // ── Predecode 反馈 (ERR-042) ─────────────────────────────
    input  logic [4:0]              predecode_bytes_consumed,
    input  logic [3:0]              predecode_inst_count,
    input  logic [15:0]             predecode_carry_hw_out,
    input  logic                    predecode_carry_valid_out,

    // ── Decode back-pressure (← Decode/Issue) ──────────────────
    input  logic                    dec_stall,             // decode 阻塞: 保持 PC 不前进
    input  logic                    dib_not_full,         // DIB 有空间 (替代 dec_all_issued)

    // ── Debug ─────────────────────────────────────────────────
    input  logic                    debug_halt,

    // ── Fetch active (→ Decode/Issue) ─────────────────────────
    output logic                    fetch_active  // 组合逻辑: state_reg == ST_FETCH/ST_STALL
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // 常量定义
    // ═══════════════════════════════════════════════════════════
    localparam int BTB_IDX_W  = $clog2(BTB_ENTRIES);       // 13 bit
    localparam int BTB_TAG_W  = 32 - BTB_IDX_W - 1;       // 18 bit (排除 bit[0])
    localparam int RAS_PTR_W  = $clog2(RAS_DEPTH);         // 5 bit
    localparam int LTAGE_HIST_MAX = 64;                    // 最大历史长度
    localparam int LTAGE_CTR_W = 3;                        // 饱和计数器位宽
    localparam int LTAGE_U_W   = 2;                        // useful 计数器位宽

    // RV32 opcode 常量
    localparam logic [6:0] OP_JAL   = 7'b1101111;
    localparam logic [6:0] OP_JALR  = 7'b1100111;
    localparam logic [6:0] OP_BRANCH = 7'b1100011;

    // ERR-042: ICache 地址对齐 + start_offset
    logic [3:0] fetch_start_offset;
    assign fetch_start_offset = pc_reg[3:0];

    // ═══════════════════════════════════════════════════════════
    // PC 寄存器与 FSM
    // ═══════════════════════════════════════════════════════════
    logic [31:0]                    pc_reg, pc_next;

    typedef enum logic [2:0] {
        ST_IDLE   = 3'd0,
        ST_FETCH  = 3'd1,
        ST_STALL  = 3'd2,
        ST_FLUSH  = 3'd3,
        ST_HALT   = 3'd4
    } fetch_state_e;

    fetch_state_e state_reg, state_next;
    logic [1:0]   flush_cnt;                              // flush 延迟计数
    logic [1:0]   flush_cnt_next;                          // flush 组合逻辑
    logic         post_flush_hold_r;                       // ERR-131: flush 后首周期保持 PC

    // ═══════════════════════════════════════════════════════════
    // BTB — 直接映射, 8192 条目 (fetch-bpred.html §3.1)
    // ═══════════════════════════════════════════════════════════
    typedef struct packed {
        logic                  valid;
        logic [BTB_TAG_W-1:0]  tag;
        logic [31:0]           target;
        logic                  is_call;       // JAL/JALR with rd=x1/x5
        logic                  is_ret;        // JALR with rs1=x1/x5, rd=x0
        logic                  is_branch;     // conditional branch
    } btb_entry_t;

    btb_entry_t btb_mem [BTB_ENTRIES-1:0];

    // BTB 查找信号
    logic [BTB_IDX_W-1:0]      btb_idx;
    logic [BTB_TAG_W-1:0]      btb_tag;
    logic                      btb_hit;
    logic [31:0]               btb_target;
    logic                      btb_is_call;
    logic                      btb_is_ret;
    logic                      btb_is_branch;

    // BTB 写入
    logic                      btb_we;
    logic [BTB_IDX_W-1:0]      btb_wr_idx;
    btb_entry_t                btb_wr_data;

    // ═══════════════════════════════════════════════════════════
    // RAS — 32 级返回地址栈 (fetch-bpred.html §3.1)
    // ═══════════════════════════════════════════════════════════
    logic [31:0]               ras_stack [RAS_DEPTH-1:0];
    logic [RAS_PTR_W-1:0]      ras_top;
    logic                      ras_push;
    logic                      ras_pop;
    logic [31:0]               ras_peek;                   // 栈顶值

    // SA-CM-008: RAS 检查点死代码已移除
    // 当前 RAS 仅由 execute 级反馈更新 (非推测式), flush 时无需恢复
    // 若未来引入推测式 RAS, 需重新实现检查点机制

    // ═══════════════════════════════════════════════════════════
    // LTAGE — TAGE 分支预测器, 12 表 (fetch-bpred.html §3.3)
    // ═══════════════════════════════════════════════════════════
    // 几何历史长度: 4, 6, 9, 14, 21, 32, 48, 72, 108, 162, 243, 365 (approx)
    // 简化实现: 每表 1024 条目, 3-bit 饱和计数器 + 2-bit useful

    localparam int LTAGE_ENTRIES = 1024;
    localparam int LTAGE_IDX_W = $clog2(LTAGE_ENTRIES);   // 10 bit

    typedef struct packed {
        logic                  valid;
        logic [7:0]            tag;
        logic [LTAGE_CTR_W-1:0] ctr;                       // 3-bit 饱和计数器
        logic [LTAGE_U_W-1:0]  useful;                    // 2-bit useful 计数器
    } ltage_entry_t;

    ltage_entry_t ltage_tables [LTAGE_TABLES-1:0][LTAGE_ENTRIES-1:0];

    // 全局分支历史 (简化)
    logic [LTAGE_HIST_MAX-1:0] branch_history;

    // LTAGE 查找信号
    logic [LTAGE_IDX_W-1:0]    ltage_idx  [LTAGE_TABLES-1:0];
    logic [7:0]                ltage_tag   [LTAGE_TABLES-1:0];
    logic                      ltage_hit   [LTAGE_TABLES-1:0];
    logic [LTAGE_CTR_W-1:0]    ltage_ctr   [LTAGE_TABLES-1:0];
    logic [LTAGE_U_W-1:0]      ltage_useful[LTAGE_TABLES-1:0];
    logic                      ltage_pred;                  // 最终预测
    logic                      ltage_cond_pred;             // 条件分支预测

    // ═══════════════════════════════════════════════════════════
    // F1/F2 流水线寄存器
    // ═══════════════════════════════════════════════════════════
    logic [31:0]               f1_pc_r;
    logic                      f1_pred_taken_r;
    logic [31:0]               f1_pred_target_r;
    logic                      f1_btb_hit_r;

    logic [127:0]                f2_data_r;
    logic                      f2_valid_r;
    logic [31:0]               f2_pc_r;
    logic                      f2_pred_taken_r;
    logic [31:0]               f2_pred_target_r;
    logic [3:0]                f2_pred_branch_slot_r;  // ERR-BTB: 分支 slot 寄存器

    // ERR-042: carry 寄存器 (跨 cache line 边界的 halfword)
    logic [15:0]               carry_hw_r;
    logic                      carry_valid_r;

    // ERR-019: 寄存版 stall 信号, 用于延迟 F2 捕获 (避免组合环路)
    logic                      dec_stall_r;

    // SA-CM-REDIRECT-FIX: 边沿检测 — branch_redirect_valid 是短脉冲信号,
    // 在 mispredicted 分支到达 E1 时产生一个周期内的组合脉冲.
    // 如果不做边沿检测, FSM override 在每个组合评估中重新触发, pc_reg 永远无法更新.
    logic                      branch_redirect_valid_d;

    // ═══════════════════════════════════════════════════════════
    // 指令拆分与有效计数
    // ═══════════════════════════════════════════════════════════
    logic [31:0]               f2_raw_inst [FETCH_WIDTH-1:0];
    logic [$clog2(FETCH_WIDTH):0] f2_count_comb;

    // ═══════════════════════════════════════════════════════════
    // BTB 查找 (F1 级, 组合逻辑)
    // ═══════════════════════════════════════════════════════════
    assign btb_idx = pc_reg[BTB_IDX_W:1];                // 使用 PC[13:1], 跳过 bit[0]
    assign btb_tag = pc_reg[31 : BTB_IDX_W+1];

    assign btb_hit       = btb_mem[btb_idx].valid && (btb_mem[btb_idx].tag == btb_tag);
    assign btb_target    = btb_mem[btb_idx].target;
    assign btb_is_call   = btb_mem[btb_idx].is_call;
    assign btb_is_ret    = btb_mem[btb_idx].is_ret;
    assign btb_is_branch = btb_mem[btb_idx].is_branch;

    // ═══════════════════════════════════════════════════════════
    // RAS peek (组合逻辑)
    // ═══════════════════════════════════════════════════════════
    // ERR-RAS-FIX: peek 应读栈顶 (ras_top-1), 而非 ras_top (下一空位)
    assign ras_peek = ras_stack[(ras_top == '0) ? RAS_PTR_W'(RAS_DEPTH-1) : ras_top - 1'b1];

    // ═══════════════════════════════════════════════════════════
    // LTAGE 查找 (F1 级, 组合逻辑, fetch-bpred.html §3.3)
    // ═══════════════════════════════════════════════════════════
    // 索引与 tag 计算: 使用 PC 低位 + 分支历史 XOR
    generate
        for (genvar t = 0; t < LTAGE_TABLES; t++) begin : gen_ltage_idx
            // 每个表使用不同的历史长度 (几何递增)
            localparam int HIST_LEN = (t < 2)  ? (4 + t * 2) :
                                      (t < 4)  ? (9 + (t-2) * 5) :
                                      (t < 8)  ? (21 + (t-4) * 12) :
                                                 (72 + (t-8) * 40);
            localparam int ACTUAL_HIST = (HIST_LEN > LTAGE_HIST_MAX) ? LTAGE_HIST_MAX : HIST_LEN;

            // 索引 = PC 低位 XOR 历史低位 (截取)
            assign ltage_idx[t] = pc_reg[LTAGE_IDX_W:1] ^
                                   branch_history[ACTUAL_HIST-1 : ACTUAL_HIST - LTAGE_IDX_W];
            // tag = PC 高位 XOR 历史高位
            assign ltage_tag[t] = pc_reg[15:8] ^
                                   branch_history[ACTUAL_HIST-1 : ACTUAL_HIST - 8];
        end
    endgenerate

    // 逐表查找
    always_comb begin
        ltage_pred = 1'b0;
        for (int t = 0; t < LTAGE_TABLES; t++) begin
            ltage_hit[t]    = 1'b0;
            ltage_ctr[t]    = ltage_tables[t][ltage_idx[t]].ctr;
            ltage_useful[t] = ltage_tables[t][ltage_idx[t]].useful;
            if (ltage_tables[t][ltage_idx[t]].valid &&
                ltage_tables[t][ltage_idx[t]].tag == ltage_tag[t]) begin
                ltage_hit[t] = 1'b1;
            end
        end
        // 选择最长历史命中的表 (高索引优先)
        for (int t = LTAGE_TABLES - 1; t >= 0; t--) begin
            if (ltage_hit[t]) begin
                ltage_pred = ltage_ctr[t][LTAGE_CTR_W-1]; // MSB = 预测方向
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // 分支预测决策 (F1 级, 组合逻辑)
    // ═══════════════════════════════════════════════════════════
    // ═════════════════════════════════════════════════════════
    // 分支预测决策 (F1 级, 组合逻辑)
    // ═════════════════════════════════════════════════════════
    // ERR-BTB-FIX: 实际分支指令 PC (用于 RAS push 正确的返回地址)
    // slot-0 BTB 命中: branch 在 pc_reg 处
    // group lookup: branch 在 aligned_base + grp_slot*2 处
    logic [31:0] actual_branch_pc;
    assign actual_branch_pc = (grp_found && !btb_hit)
        ? ({pc_reg[31:4], 4'h0} + {28'h0, grp_slot, 1'b0})
        : pc_reg;

    // ERR-RAS-FIX: 检查分支指令是否为压缩指令
    // slot-0: byte offset = pc_reg[3:0]
    // group lookup: byte offset = grp_slot*2
    logic f1_branch_is_compressed;
    logic [3:0] branch_byte_off;
    assign branch_byte_off = (grp_found && !btb_hit)
        ? {grp_slot, 1'b0}
        : pc_reg[3:0];
    assign f1_branch_is_compressed = f2_icache_valid &&
        (f2_icache_data[{branch_byte_off, 3'b0} +: 2] != 2'b11);


    // ═════════════════════════════════════════════════════════
    // 分支预测决策 (F1 级, 组合逻辑)
    // ═════════════════════════════════════════════════════════
    logic [31:0] f1_pred_target_comb;
    logic        f1_pred_taken_comb;
    logic        f1_btb_hit_comb;

    // ERR-BTB: 多位置 BTB 查找 — 检查当前 fetch group 内所有指令位置
    // 解决分支不在 fetch group 起始位置时 BTB 永远 miss 的问题
    logic [BTB_IDX_W-1:0] grp_base_idx;
    logic [BTB_TAG_W-1:0] grp_tag;
    logic        grp_found;
    logic [3:0]  grp_slot;       // 2-byte aligned 组内位置 (0~7)
    logic [31:0] grp_target;
    logic        grp_is_call;
    logic        grp_is_ret;
    logic        grp_is_branch;

    // SA-CM-005 FIX: PC's slot position within 16-byte fetch group
    // Used to avoid matching stale BTB entries before current PC
    logic [3:0]  pc_slot_in_grp;

    // ERR-BTB-FIX: grp_base_idx 使用 16-byte 对齐基地址 (与 8192 条目 BTB 匹配)
    // BTB 写入索引 = instruction_pc[13:1], 读取 group base = aligned_pc[13:1]
    // 同 16-byte block 内的地址具有相同的 group base, 通过位置偏移查找
    assign grp_base_idx = {pc_reg[31:4], 4'h0}[BTB_IDX_W:1];
    assign grp_tag      = pc_reg[31 : BTB_IDX_W+1];
    assign pc_slot_in_grp = 4'(pc_reg[3:1]); // PC's 2-byte slot within the group (0-7)

    always_comb begin
        f1_pred_taken_comb  = 1'b0;
        f1_pred_target_comb = pc_reg + 32'd4;
        f1_btb_hit_comb     = 1'b0;
        ras_push            = 1'b0;
        ras_pop             = 1'b0;
        pred_branch_slot    = 4'hF;  // 默认: 无组级别预测

        // ── 原始 slot-0 BTB 查找 (pc_reg 处的 BTB 条目) ──
        if (btb_hit) begin
            f1_btb_hit_comb = 1'b1;

            if (btb_is_ret) begin
                f1_pred_taken_comb  = 1'b1;
                f1_pred_target_comb = ras_peek;
                ras_pop             = 1'b1;

            end else if (btb_is_call) begin
                ras_push            = 1'b1;
                if (btb_is_branch) begin
                    f1_pred_taken_comb  = ltage_pred;
                    f1_pred_target_comb = ltage_pred ? btb_target : (pc_reg + 32'd4);
                end else begin
                    f1_pred_taken_comb  = 1'b1;
                    f1_pred_target_comb = btb_target;
                end

            end else if (btb_is_branch) begin
                f1_pred_taken_comb  = ltage_pred;
                f1_pred_target_comb = ltage_pred ? btb_target : (pc_reg + 32'd4);

            end else begin
                f1_pred_taken_comb  = 1'b1;
                f1_pred_target_comb = btb_target;
            end
        end

        // ── ERR-BTB: 组级别多位置 BTB 查找 ──────────────
        // 当 slot-0 未命中时, 检查 fetch group 内其他指令位置
        // 每个 16-byte fetch group 最多 8 个 2-byte 对齐的指令位置
        grp_found   = 1'b0;
        grp_slot    = 4'h0;
        grp_target  = 32'h0;
        grp_is_call = 1'b0;
        grp_is_ret  = 1'b0;
        grp_is_branch = 1'b0;

        // SA-CM-005 FIX: start search after PC's own slot to avoid stale entries
        // grp_base_idx + p corresponds to address (group_base + p*2).
        // pc_slot_in_grp = PC's position within the group.
        // Only search p > pc_slot_in_grp (positions after current PC).
        for (int p = int'(pc_slot_in_grp) + 1; p < 8; p++) begin
            if (!grp_found) begin
                // 检查位置 p 的 BTB 条目 (tag 应与 pc_reg 相同)
                if (btb_mem[grp_base_idx + BTB_IDX_W'(p)].valid &&
                    btb_mem[grp_base_idx + BTB_IDX_W'(p)].tag == grp_tag) begin
                    grp_found   = 1'b1;
                    grp_slot    = 4'(p);
                    grp_target  = btb_mem[grp_base_idx + BTB_IDX_W'(p)].target;
                    grp_is_call = btb_mem[grp_base_idx + BTB_IDX_W'(p)].is_call;
                    grp_is_ret  = btb_mem[grp_base_idx + BTB_IDX_W'(p)].is_ret;
                    grp_is_branch = btb_mem[grp_base_idx + BTB_IDX_W'(p)].is_branch;
                end
            end
        end

        // SA-CM-005 FIX: Re-enable group-level BTB prediction
        // pc_slot_in_grp ensures we only match entries AFTER current PC,
        // avoiding the carry-fetch stale entry problem.
        // FIX: slot-0 BTB 命中时不检查组级 BTB, 防止后续 JAL 的 BTB 条目
        // 覆盖当前 PC 处条件分支的预测 (如 BSS clear loop 中 JAL at 0x2c
        // 污染 bgeu at 0x20 的预测).
        if (grp_found && !btb_hit) begin
            pred_branch_slot = grp_slot;

            if (grp_is_ret) begin
                f1_pred_taken_comb  = 1'b1;
                f1_pred_target_comb = ras_peek;
                ras_pop             = 1'b1;

            end else if (grp_is_call) begin
                ras_push            = 1'b1;
                if (grp_is_branch) begin
                    f1_pred_taken_comb  = ltage_pred;
                    f1_pred_target_comb = ltage_pred ? grp_target : (pc_reg + {28'h0, grp_slot, 1'b0});
                end else begin
                    f1_pred_taken_comb  = 1'b1;
                    f1_pred_target_comb = grp_target;
                end

            end else if (grp_is_branch) begin
                f1_pred_taken_comb  = ltage_pred;
                f1_pred_target_comb = ltage_pred ? grp_target : (pc_reg + {28'h0, grp_slot, 1'b0});

            end else begin
                f1_pred_taken_comb  = 1'b1;
                f1_pred_target_comb = grp_target;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // 时序逻辑: FSM + PC + 流水线寄存器 + BTB/RAS/LTAGE 更新
    // ═══════════════════════════════════════════════════════════
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg       <= ST_IDLE;
            pc_reg          <= RESET_VECTOR;
            flush_cnt       <= 2'h0;
            post_flush_hold_r <= 1'b0;
            // F1 寄存器
            f1_pc_r         <= 32'h0;
            f1_pred_taken_r <= 1'b0;
            f1_pred_target_r <= 32'h0;
            f1_btb_hit_r    <= 1'b0;
            // F2 寄存器
            f2_valid_r      <= 1'b0;
            f2_data_r       <= 128'h0;
            f2_pc_r         <= 32'h0;
            f2_pred_taken_r <= 1'b0;
            f2_pred_target_r <= 32'h0;
            f2_pred_branch_slot_r <= 4'hF;  // ERR-BTB
            dec_stall_r     <= 1'b0;  // ERR-019
            branch_redirect_valid_d <= 1'b0;
            // ERR-042: carry 寄存器复位
            carry_hw_r      <= 16'h0;
            carry_valid_r   <= 1'b0;
            // RAS
            ras_top         <= {RAS_PTR_W{1'b0}};
            for (int i = 0; i < RAS_DEPTH; i++) begin
                ras_stack[i]      <= 32'h0;
            end
            // BTB
            for (int i = 0; i < BTB_ENTRIES; i++)
                btb_mem[i]  <= '0;
            // LTAGE
            branch_history  <= '0;
            for (int t = 0; t < LTAGE_TABLES; t++)
                for (int i = 0; i < LTAGE_ENTRIES; i++)
                    ltage_tables[t][i] <= '0;
        end else begin
            state_reg <= state_next;
            flush_cnt <= flush_cnt_next;
            // ERR-131: flush 后首周期保持 PC, 等待 f2_valid 建立
            if (state_reg == ST_FLUSH && flush_cnt == 2'd0)
                post_flush_hold_r <= 1'b1;  // 即将进入 ST_FETCH, 保持 1 周期
            else
                post_flush_hold_r <= 1'b0;
            // ── PC 更新 ──
            pc_reg <= pc_next;
            // ERR-019: 寄存 dec_stall 供 F2 捕获门控使用
            dec_stall_r <= dec_stall;
            // SA-CM-REDIRECT-FIX: 寄存 branch_redirect_valid 用于边沿检测
            branch_redirect_valid_d <= branch_redirect_valid;
            // ── F1 → F2 流水线寄存器 ────────────────────────
            if (state_reg == ST_FETCH) begin
                f1_pc_r          <= f1_pc_out;
                f1_pred_taken_r  <= f1_pred_taken_comb;
                f1_pred_target_r <= f1_pred_target_comb;
                f1_btb_hit_r     <= f1_btb_hit_comb;
            end

            // ── F2 级: ICache 数据到达 ──────────────────────
            // 修复: V1 SRAM 旁路 ICache 为组合逻辑, 数据对应当前 pc_reg.
            // 因此 f2_pc_r 必须捕获当前 pc_reg, 而非上一周期的 f1_pc_r.
            // ERR-019 修复: 仅当 decode 报告当前批次全部已发射时才捕获新 F2 数据
            // 这保证了有 carry-over 指令 (如被 RAW 阻塞的 BGEU) 时 F2 保持不变
            // DIB 修复: 添加 !dec_stall 条件, 防止 issue stall 时 F2 重复捕获
            // 相同数据导致 DIB 重复写入 (PC 不前进但 f2_valid=1)
            if (state_reg == ST_FETCH && f2_icache_valid && dib_not_full && !dec_stall) begin
                f2_data_r        <= f2_icache_data;
                f2_valid_r       <= 1'b1;
                f2_pc_r          <= pc_reg;  // 当前 PC (与 ICache 数据匹配)
                // ERR-019: V1 组合 ICache — 预测必须来自当前周期 (comb),
                // 而非前一周期的 F1 寄存器 (r). 否则 F2 预测与数据不对齐.
                f2_pred_taken_r  <= f1_pred_taken_comb;
                f2_pred_target_r <= f1_pred_target_comb;
                f2_pred_branch_slot_r <= pred_branch_slot;  // ERR-BTB
            end else if (!dib_not_full) begin
                // DIB 满, F2 保持有效不变
            end else begin
                // dec_stall 或其他情况: 清除 f2_valid 防止 DIB 重复写入
                f2_valid_r <= 1'b0;
            end

            // ERR-042: carry 寄存器更新 (与 F2 同步)
            if (branch_redirect_valid || trap_redirect_valid || state_next == ST_FLUSH) begin
                carry_hw_r    <= 16'h0;
                carry_valid_r <= 1'b0;
            // DIB 修复: 同步 !dec_stall 条件, stall 时保持 carry 不变
            end else if (f2_icache_valid && dib_not_full && !dec_stall) begin
                carry_hw_r    <= predecode_carry_hw_out;
                carry_valid_r <= predecode_carry_valid_out;
            end else if (!dib_not_full || dec_stall) begin
                // F2 held (DIB 满 或 issue stall) → carry also held (no change)
            end else begin
                carry_valid_r <= 1'b0;
            end

            // 误预测/flush 时清除 F2
            if (branch_redirect_valid || state_next == ST_FLUSH)
                f2_valid_r <= 1'b0;

            // ── RAS 更新 (ERR-RAS-FIX: execute-level only) ─────
            // BUG-FIX: flush 期间不更新 RAS, 防止错误路径指令污染 RAS
            if (tage_update_valid && state_reg != ST_FLUSH && br_update_is_call) begin
                ras_stack[ras_top] <= tage_update_pc + (br_update_is_compressed ? 32'd2 : 32'd4);
                ras_top <= (ras_top == RAS_PTR_W'(RAS_DEPTH - 1)) ? '0 : ras_top + 1'b1;
                // $display("[RAS-PUSH] ...) -- debug print removed
            end else if (tage_update_valid && state_reg != ST_FLUSH && br_update_is_ret) begin
                ras_top <= (ras_top == '0) ? RAS_PTR_W'(RAS_DEPTH - 1) : ras_top - 1'b1;
                // $display("[RAS-POP] ...) -- debug print removed
            end

            // ── BTB 更新 (分支反馈, fetch-bpred.html §3.1) ──
            // BUG-FIX: flush 期间不写入 BTB, 防止错误路径指令污染 BTB
            if (branch_redirect_valid && state_reg != ST_FLUSH) begin
                btb_mem[btb_wr_idx] <= btb_wr_data;
            end

            // ── LTAGE 更新 (fetch-bpred.html §3.3) ─────────
            // BUG-FIX: flush 期间不更新 LTAGE, 防止错误路径分支污染预测器
            if (tage_update_valid && state_reg != ST_FLUSH) begin
                // 更新分支历史 (左移, 新结果进入 bit[0])
                branch_history <= {branch_history[LTAGE_HIST_MAX-2:0], tage_update_taken};

                // 更新最长命中表的计数器
                for (int t = LTAGE_TABLES - 1; t >= 0; t--) begin
                    if (ltage_hit[t]) begin
                        // 更新饱和计数器: taken++ / not-taken--
                        if (tage_update_taken && ltage_ctr[t] < (2**LTAGE_CTR_W - 1))
                            ltage_tables[t][ltage_idx[t]].ctr <= ltage_ctr[t] + 1'b1;
                        else if (!tage_update_taken && ltage_ctr[t] > 0)
                            ltage_tables[t][ltage_idx[t]].ctr <= ltage_ctr[t] - 1'b1;
                        break; // 只更新最长命中表
                    end
                end

                // 若所有表均未命中, 分配新条目到最短历史的未命中表
                begin
                    logic any_hit;
                    any_hit = 1'b0;
                    for (int t = 0; t < LTAGE_TABLES; t++)
                        any_hit = any_hit | ltage_hit[t];
                    if (!any_hit) begin
                        for (int t = 0; t < LTAGE_TABLES; t++) begin
                            if (!ltage_tables[t][ltage_idx[t]].valid) begin
                                ltage_tables[t][ltage_idx[t]].valid  <= 1'b1;
                                ltage_tables[t][ltage_idx[t]].tag    <= ltage_tag[t];
                                ltage_tables[t][ltage_idx[t]].ctr    <= tage_update_taken ?
                                    3'b100 : 3'b011;   // 弱 taken / 弱 not-taken
                                ltage_tables[t][ltage_idx[t]].useful <= 2'b01;
                                break;
                            end
                        end
                    end
                end
            end
            // SA-CM-004 FIX: removed speculative history shift
            // Branch history is now ONLY updated by execute-level actual results
        end
    end

    // ═══════════════════════════════════════════════════════════
    // BTB 写入数据 (误预测时更新)
    // ═══════════════════════════════════════════════════════════
    // ERR-019 修复: 根据分支类型正确设置 BTB 条目字段
    // 原 bug: is_branch 始终为 1, 导致 JAL 被当作条件分支,
    // BTB 查找时使用 LTAGE 预测 (初始 not-taken), JAL 永远误预测.
    always_comb begin
        btb_wr_idx       = tage_update_pc[BTB_IDX_W:1];
        btb_wr_data.valid  = 1'b1;
        btb_wr_data.tag    = tage_update_pc[31 : BTB_IDX_W+1];
        btb_wr_data.target = branch_redirect_pc;
        btb_wr_data.is_call    = 1'b0;
        btb_wr_data.is_ret     = 1'b0;
        btb_wr_data.is_branch  = 1'b0;  // 默认: 无条件跳转 (JAL)

        if (br_update_is_jal) begin
            // JAL: 无条件跳转, is_branch=0 → BTB 查找时预测 taken
            btb_wr_data.is_call    = br_update_is_call;   // ERR-044
            btb_wr_data.is_ret     = 1'b0;
            btb_wr_data.is_branch  = 1'b0;
        end else if (br_update_is_jalr) begin
            // JALR: 间接跳转
            btb_wr_data.is_call    = br_update_is_call;   // ERR-044
            btb_wr_data.is_ret     = br_update_is_ret;    // ERR-044
            btb_wr_data.is_branch  = 1'b0;
        end else begin
            // 条件分支 (BEQ/BNE/BLT/BGE/BLTU/BGEU)
            btb_wr_data.is_branch  = 1'b1;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // F2 级: 指令拆分与有效计数
    // ═══════════════════════════════════════════════════════════
    localparam int ICACHE_WORDS = 128 / 32;  // 4 words per 128-bit cache line

    always_comb begin
        // 从 128-bit ICache 行拆分出最多 FETCH_WIDTH(6) 条 32-bit 指令
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            f2_raw_inst[i] = f2_data_r[i*32 +: 32];
        end

        // ERR-042: 使用 predecode 动态指令数 (压缩指令场景下不再硬编码 4)
        f2_count_comb = {{$clog2(FETCH_WIDTH)+1{1'b0}}};
        if (f2_valid_r || f2_icache_valid) begin
            f2_count_comb = {1'b0, predecode_inst_count};
        end
    end

    // 输出赋值
    assign f2_instructions = f2_raw_inst;
    assign f2_inst_count   = f2_count_comb;
    // ERR-019: 组合 flush — mispredict 时立即使 F2 无效,
    // 防止 decode 在 flush 后的第一个 posedge 从残留 F2 数据中发射错误路径指令
    assign f2_valid        = branch_redirect_valid ? 1'b0 : f2_valid_r;
    assign f2_pc_out       = f2_pc_r;
    assign f2_pred_taken   = f2_pred_taken_r;
    assign f2_pred_target  = f2_pred_target_r;

    // ERR-042: predecode 输入 mux
    // BUG-FIX: 始终使用当前 ICache 数据 (f2_icache_data / pc_reg).
    // V1 SRAM 是组合逻辑 (0 latency), 所以 f2_icache_data 始终反映当前 pc_reg.
    // 旧代码在 f2_valid_r 时选择 f2_data_r (上一个 block), 导致 predecode
    // 重复处理旧数据, bytes_consumed 不匹配当前 pc_reg, PC 无法正确前进.
    assign f2_raw_data_out     = f2_icache_data;
    assign f2_base_pc_out      = pc_reg;
    assign f2_start_offset_out = fetch_start_offset;
    assign f2_pred_taken_out   = f1_pred_taken_comb;
    assign f2_carry_hw_out     = carry_hw_r;
    assign f2_carry_valid_out  = carry_valid_r;
    // ERR-BTB: pred_branch_slot 输出 mux
    // 注: 这里直接传递组合逻辑值, 因为 predecode 也是组合逻辑
    // pred_branch_slot 始终反映当前周期的 F1 预测

    // ERR-114 FIX: fetch_active — 组合逻辑, 指示 FSM 正在取指 (ST_FETCH/ST_STALL)
    // 用于门控 pd_advance, 防止 ST_IDLE 阶段重复注册 predecode 输出
    assign fetch_active = (state_reg == ST_FETCH || state_reg == ST_STALL);

    // ═══════════════════════════════════════════════════════════
    // FSM 组合逻辑
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        state_next     = state_reg;
        pc_next        = pc_reg;
        f1_pc_out      = pc_reg;
        flush_cnt_next = flush_cnt;  // 默认保持

        case (state_reg)
            ST_IDLE: begin
                // 复位后进入取指
                state_next = debug_halt ? ST_HALT : ST_FETCH;
                pc_next    = RESET_VECTOR;
            end

            ST_FETCH: begin
                f1_pc_out = pc_reg;

                if (debug_halt) begin
                    state_next = ST_HALT;
                end else if (trap_redirect_valid) begin
                    // Trap 重定向: 优先级最高 (ECALL/EBREAK/异常 → mtvec)
                    state_next = ST_FLUSH;
                    flush_cnt_next  = 2'd2;
                    pc_next    = trap_redirect_pc;
                end else if (branch_redirect_valid) begin
                    // 误预测 flush: 跳转至正确 PC (2 cycle 延迟)
                    state_next = ST_FLUSH;
                    flush_cnt_next  = 2'd2;
                    pc_next    = branch_redirect_pc;
                end else if (dec_stall || !dib_not_full) begin
                    // decode back-pressure 或 DIB 满: 保持 PC
                    pc_next = pc_reg;
                    state_next = ST_FETCH;
                end else if (f2_icache_valid) begin
                    // ICache 响应有效: PC 前进
                    if (f1_pred_taken_comb) begin
                        pc_next = f1_pred_target_comb;
                    end else begin
                        // ERR-042: PC 前进量由 predecode 动态计算
                        // BUG-FIX: 始终使用 pc_reg (当前 F1 PC), 而不是 f2_pc_r.
                        // f2_pc_r 是上一个 fetch block 的 PC, 与当前 predecode
                        // 处理的 f2_data_r (也是上一个 block) 匹配, 但 pc_next
                        // 必须从当前 F1 PC 前进. predecode 是组合逻辑, 其输出
                        // 反映当前 mux 选择的数据. 当 mux 选择 f2_data_r 时,
                        // bytes_consumed 对应旧 block, 从 f2_pc_r 前进会重复处理.
                        pc_next = pc_reg + {27'h0, predecode_bytes_consumed};
                    end
                    // $display("[FETCH-ADV] ...) -- debug print removed
                    state_next = ST_FETCH;  // 保持取指
                end else begin
                    // ICache 未就绪: stall
                    state_next = ST_STALL;
                end
            end

            ST_STALL: begin
                f1_pc_out = pc_reg;
                if (debug_halt) begin
                    state_next = ST_HALT;
                end else if (trap_redirect_valid) begin
                    // Trap 重定向: 优先级最高
                    state_next = ST_FLUSH;
                    flush_cnt_next  = 2'd2;
                    pc_next    = trap_redirect_pc;
                end else if (branch_redirect_valid) begin
                    state_next = ST_FLUSH;
                    flush_cnt_next  = 2'd2;
                    pc_next    = branch_redirect_pc;
                end else if (dec_stall) begin
                    // decode back-pressure: 保持 PC, 不前进
                    pc_next = pc_reg;
                    state_next = ST_STALL;
                end else if (f2_icache_valid) begin
                    // ICache 就绪, 恢复取指
                    if (f1_pred_taken_comb) begin
                        pc_next = f1_pred_target_comb;
                    end else begin
                        // BUG-FIX: 同上, 始终使用 pc_reg
                        pc_next = pc_reg + {27'h0, predecode_bytes_consumed};
                    end
                    state_next = ST_FETCH;
                end
                // 否则继续 stall
            end

            ST_FLUSH: begin
                // flush 延迟: 等待流水线冲刷 (2 cycle)
                if (flush_cnt > 2'd0) begin
                    flush_cnt_next  = flush_cnt - 1'b1;
                    state_next = ST_FLUSH;
                end else begin
                    state_next = ST_FETCH;
                end
                f1_pc_out = pc_reg;
            end

            ST_HALT: begin
                f1_pc_out = pc_reg;
                if (!debug_halt) begin
                    state_next = ST_FETCH;
                end
            end

            default: state_next = ST_IDLE;  // ERR-057: safe recovery
        endcase

        // BUG-FIX: 仅在非 FLUSH 状态时接受 redirect.
        // flush 期间, 错误路径指令继续在 E1 级执行并产生新的 mispredict 信号.
        // 如果不忽略这些信号, pc_reg 会被反复覆盖, flush 无法正常完成.
        // BUG-FIX2: 必须设置 flush_cnt_next = 2'd2, 否则 override 覆盖 case 语句
        // 中已设置的 flush_cnt_next, 导致 flush 延迟为 0 cycle, 流水线冲刷不充分.
        // SA-CM-007 FIX: trap takes priority over branch redirect
        // ERR-131b FIX: 移除边沿检测 (!branch_redirect_valid_d)
        // 原 bug: BSS 循环中 bgeu+JAL 连续误预测, 第二个 redirect 被抑制
        // state_reg != ST_FLUSH 已足够防止 flush 期间重复 redirect
        if (branch_redirect_valid && !trap_redirect_valid && state_reg != ST_FLUSH) begin
            pc_next        = branch_redirect_pc;
            f1_pc_out      = branch_redirect_pc;
            flush_cnt_next = 2'd2;
            state_next     = ST_FLUSH;
        end

        // PLN-0006 assertion_strategy: PC alignment assertion
        // synthesis translate_off
        assert (pc_next[0] == 1'b0)
            else $error("[ASSERT] PC not 2-byte aligned: 0x%08h", pc_next);
        // synthesis translate_on
    end

endmodule
