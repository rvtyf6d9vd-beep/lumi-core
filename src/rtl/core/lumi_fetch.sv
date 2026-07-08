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
    input  logic [127:0]            f2_icache_data,        // 16 bytes (fetch-bpred.html §3.2)
    input  logic                    f2_icache_valid,

    // ── F2 级输出 (→ Decode) ──────────────────────────────────
    output logic [31:0]             f2_instructions [FETCH_WIDTH-1:0],
    output logic [$clog2(FETCH_WIDTH):0] f2_inst_count,
    output logic                    f2_valid,
    output logic [31:0]             f2_pc_out,             // F2 级 PC (fetch-bpred.html §3.2)
    output logic                    f2_pred_taken,         // 分支预测 taken
    output logic [31:0]             f2_pred_target,        // 预测目标地址

    // ── 分支反馈 (← Execute E1) ───────────────────────────────
    input  logic [31:0]             branch_redirect_pc,     // fetch-bpred.html §3.1
    input  logic                    branch_redirect_valid,   // 误预测纠正
    input  logic [31:0]             tage_update_pc,          // LTAGE 更新 (fetch-bpred.html §3.3)
    input  logic                    tage_update_taken,
    input  logic                    tage_update_valid,

    // ── Debug ─────────────────────────────────────────────────
    input  logic                    debug_halt
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

    logic [127:0]              f2_data_r;
    logic                      f2_valid_r;
    logic [31:0]               f2_pc_r;
    logic                      f2_pred_taken_r;
    logic [31:0]               f2_pred_target_r;

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
    assign ras_peek = ras_stack[ras_top];

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
    logic [31:0] f1_pred_target_comb;
    logic        f1_pred_taken_comb;
    logic        f1_btb_hit_comb;

    always_comb begin
        f1_pred_taken_comb  = 1'b0;
        f1_pred_target_comb = pc_reg + 32'd4;
        f1_btb_hit_comb     = 1'b0;
        ras_push            = 1'b0;
        ras_pop             = 1'b0;

        if (btb_hit) begin
            f1_btb_hit_comb = 1'b1;

            if (btb_is_ret) begin
                // RET: 使用 RAS 弹出的返回地址
                f1_pred_taken_comb  = 1'b1;
                f1_pred_target_comb = ras_peek;
                ras_pop             = 1'b1;

            end else if (btb_is_call) begin
                // CALL (JAL/JALR with rd=x1/x5): push PC+4 到 RAS
                ras_push            = 1'b1;
                if (btb_is_branch) begin
                    // 条件 call (不应该存在, 但安全处理)
                    f1_pred_taken_comb  = ltage_pred;
                    f1_pred_target_comb = ltage_pred ? btb_target : (pc_reg + 32'd4);
                end else begin
                    f1_pred_taken_comb  = 1'b1;
                    f1_pred_target_comb = btb_target;
                end

            end else if (btb_is_branch) begin
                // 条件分支: 使用 LTAGE 预测
                f1_pred_taken_comb  = ltage_pred;
                f1_pred_target_comb = ltage_pred ? btb_target : (pc_reg + 32'd4);

            end else begin
                // 无条件跳转 (JAL)
                f1_pred_taken_comb  = 1'b1;
                f1_pred_target_comb = btb_target;
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
            // RAS
            ras_top         <= {RAS_PTR_W{1'b0}};
            for (int i = 0; i < RAS_DEPTH; i++)
                ras_stack[i] <= 32'h0;
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

            // ── PC 更新 ──────────────────────────────────────
            if (!branch_redirect_valid)
                pc_reg <= pc_next;

            // ── F1 → F2 流水线寄存器 ────────────────────────
            if (state_reg == ST_FETCH) begin
                f1_pc_r          <= f1_pc_out;
                f1_pred_taken_r  <= f1_pred_taken_comb;
                f1_pred_target_r <= f1_pred_target_comb;
                f1_btb_hit_r     <= f1_btb_hit_comb;
            end

            // ── F2 级: ICache 数据到达 ──────────────────────
            if (state_reg == ST_FETCH && f2_icache_valid) begin
                f2_data_r        <= f2_icache_data;
                f2_valid_r       <= 1'b1;
                f2_pc_r          <= f1_pc_r;
                f2_pred_taken_r  <= f1_pred_taken_r;
                f2_pred_target_r <= f1_pred_target_r;
            end else begin
                f2_valid_r <= 1'b0;
            end

            // 误预测/flush 时清除 F2
            if (branch_redirect_valid || state_next == ST_FLUSH)
                f2_valid_r <= 1'b0;

            // ── RAS 更新 (fetch-bpred.html §3.1) ────────────
            if (state_reg == ST_FETCH && !branch_redirect_valid) begin
                if (ras_push && !ras_pop) begin
                    // push PC+4 (返回地址)
                    ras_stack[ras_top] <= f1_pc_out + 32'd4;
                    ras_top <= (ras_top == RAS_PTR_W'(RAS_DEPTH - 1)) ? '0 : ras_top + 1'b1;
                end else if (ras_pop && !ras_push) begin
                    // pop
                    ras_top <= (ras_top == '0) ? RAS_PTR_W'(RAS_DEPTH - 1) : ras_top - 1'b1;
                end
                // push && pop 同时 → 栈不变, 仅替换栈顶
                if (ras_push && ras_pop) begin
                    ras_stack[ras_top] <= f1_pc_out + 32'd4;
                end
            end

            // ── BTB 更新 (分支反馈, fetch-bpred.html §3.1) ──
            if (branch_redirect_valid) begin
                btb_mem[btb_wr_idx] <= btb_wr_data;
            end

            // ── LTAGE 更新 (fetch-bpred.html §3.3) ─────────
            if (tage_update_valid) begin
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
            end else begin
                // 无更新时仍然移位历史 (fetch 到分支时)
                if (state_reg == ST_FETCH && f1_pred_taken_comb && f1_btb_hit_comb)
                    branch_history <= {branch_history[LTAGE_HIST_MAX-2:0], 1'b1};
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // BTB 写入数据 (误预测时更新)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        btb_wr_idx       = tage_update_pc[BTB_IDX_W:1];
        btb_wr_data.valid  = 1'b1;
        btb_wr_data.tag    = tage_update_pc[31 : BTB_IDX_W+1];
        btb_wr_data.target = branch_redirect_pc;
        btb_wr_data.is_call   = 1'b0;
        btb_wr_data.is_ret    = 1'b0;
        btb_wr_data.is_branch = 1'b1;  // 默认条件分支
    end

    // ═══════════════════════════════════════════════════════════
    // F2 级: 指令拆分与有效计数
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        // 从 128-bit ICache 行拆分出 FETCH_WIDTH(6) 条 32-bit 指令
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            f2_raw_inst[i] = f2_data_r[i*32 +: 32];
        end

        // 计算有效指令数
        f2_count_comb = {$clog2(FETCH_WIDTH)+1{1'b0}};
        if (f2_valid_r) begin
            // 如果预测分支 taken, 只有一条 (分支指令本身)
            if (f2_pred_taken_r) begin
                f2_count_comb = {{$clog2(FETCH_WIDTH){1'b0}}, 1'b1};
            end else begin
                // 全部有效
                f2_count_comb = FETCH_WIDTH[$clog2(FETCH_WIDTH):0];
            end
        end
    end

    // 输出赋值
    assign f2_instructions = f2_raw_inst;
    assign f2_inst_count   = f2_count_comb;
    assign f2_valid        = f2_valid_r;
    assign f2_pc_out       = f2_pc_r;
    assign f2_pred_taken   = f2_pred_taken_r;
    assign f2_pred_target  = f2_pred_target_r;

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
                end else if (branch_redirect_valid) begin
                    // 误预测 flush: 跳转至正确 PC (2 cycle 延迟)
                    state_next = ST_FLUSH;
                    flush_cnt_next  = 2'd2;
                    pc_next    = branch_redirect_pc;
                end else if (f2_icache_valid) begin
                    // ICache 响应有效: PC 前进
                    if (f1_pred_taken_comb) begin
                        pc_next = f1_pred_target_comb;
                    end else begin
                        pc_next = pc_reg + 32'd24; // FETCH_WIDTH * 4 = 24 bytes
                    end
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
                end else if (branch_redirect_valid) begin
                    state_next = ST_FLUSH;
                    flush_cnt_next  = 2'd2;
                    pc_next    = branch_redirect_pc;
                end else if (f2_icache_valid) begin
                    // ICache 就绪, 恢复取指
                    if (f1_pred_taken_comb) begin
                        pc_next = f1_pred_target_comb;
                    end else begin
                        pc_next = pc_reg + 32'd24; // FETCH_WIDTH * 4
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
        endcase

        // 分支反馈最高优先级覆盖
        if (branch_redirect_valid) begin
            pc_next    = branch_redirect_pc;
            f1_pc_out  = branch_redirect_pc;
            if (state_reg != ST_FLUSH)
                state_next = ST_FLUSH;
        end
    end

endmodule
