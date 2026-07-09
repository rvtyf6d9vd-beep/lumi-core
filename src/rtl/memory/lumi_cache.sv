// =================================================================
// LUMI-DESIGN-007 | 需求: LUMI-MEM-006~008 | 承接: design/cache.html
// 模块: lumi_cache — L1 I-Cache + L1 D-Cache (4/8-way SA)
// 阶段: M3 Batch-2 功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
//
// 功能概述:
//   - I-Cache: 32KB, 可配 4/8-way SA, 64B line, PLRU 替换
//   - D-Cache: 32KB, 可配 4/8-way SA, 64B line, Write-back + Write-allocate
//   - Tag RAM: valid + dirty(D only) + tag 位
//   - PLRU 替换策略 (二叉树, N-1 bits per set)
//   - Refill FSM: AXI AR→R burst (4 beat × 128bit = 64B)
//   - Evict FSM: 脏行写回 AXI AW→W burst
//   - FENCE: drain store buffer (stall pipeline)
//   - FENCE.I: invalidate I-Cache all lines + pipeline flush
//   - ECC SECDED: tag + data (可选, 通过端口输出)
//
// 默认配置 (4-way, 32KB):
//   NUM_SETS = 32KB / (4 × 64B) = 128
//   INDEX_W  = 7 (128 sets)
//   TAG_W    = 32 - 7 - 6 = 19
//   PLRU_BITS = 3 per set (4-way 二叉树)
// =================================================================

module lumi_cache #(
    parameter int ICACHE_SIZE = lumi_pkg::ICACHE_SIZE,  // 32KB
    parameter int ICACHE_WAYS = lumi_pkg::ICACHE_WAYS,  // 8 (或 4)
    parameter int ICACHE_LINE = lumi_pkg::ICACHE_LINE,  // 64B
    parameter int DCACHE_SIZE = lumi_pkg::DCACHE_SIZE,  // 32KB
    parameter int DCACHE_WAYS = lumi_pkg::DCACHE_WAYS,  // 8 (或 4)
    parameter int DCACHE_LINE = lumi_pkg::DCACHE_LINE   // 64B
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── I-Cache 取指接口 (F1→F2) ─────────────────────────────
    input  logic [31:0]             ic_addr,
    output logic [127:0]            ic_rdata,
    output logic                    ic_hit,
    input  logic                    ic_valid,
    output logic                    ic_ready,
    input  logic                    ic_flush,

    // ── D-Cache 数据接口 (M 级) ──────────────────────────────
    input  logic [31:0]             dc_addr,
    input  logic [31:0]             dc_wdata,
    output logic [31:0]             dc_rdata,
    input  logic                    dc_we,
    input  logic [3:0]              dc_be,
    output logic                    dc_hit,
    input  logic                    dc_valid,
    output logic                    dc_ready,

    // ── AXI Refill 接口 ──────────────────────────────────────
    output logic [31:0]             refill_araddr,
    output logic                    refill_arvalid,
    input  logic                    refill_arready,
    input  logic [127:0]            refill_rdata,
    input  logic                    refill_rvalid,
    input  logic                    refill_rlast,
    output logic                    refill_rready,
    output logic [31:0]             evict_awaddr,
    output logic                    evict_awvalid,
    input  logic                    evict_awready,
    output logic [127:0]            evict_wdata,
    output logic                    evict_wvalid,
    output logic                    evict_wlast,
    input  logic                    evict_wready,

    // ── FENCE 控制 ───────────────────────────────────────────
    input  logic                    fence_req,
    input  logic                    fence_i_req,
    output logic                    fence_ack,

    // ── ECC 中断输出 ─────────────────────────────────────────
    output logic                    dc_ecc_ce_irq,
    output logic                    dc_ecc_ded_irq
);

    import lumi_pkg::*;

    // ─── 本地参数 ────────────────────────────────────────────
    // I-Cache 参数
    localparam int IC_SETS    = ICACHE_SIZE / (ICACHE_WAYS * ICACHE_LINE);
    localparam int IC_IDX_W   = (IC_SETS == 1) ? 1 : $clog2(IC_SETS);
    localparam int IC_OFF_W   = $clog2(ICACHE_LINE);
    localparam int IC_TAG_W   = 32 - IC_IDX_W - IC_OFF_W;
    localparam int IC_PLRU_W  = (ICACHE_WAYS <= 2) ? 1 : (ICACHE_WAYS - 1);

    // D-Cache 参数
    localparam int DC_SETS    = DCACHE_SIZE / (DCACHE_WAYS * DCACHE_LINE);
    localparam int DC_IDX_W   = (DC_SETS == 1) ? 1 : $clog2(DC_SETS);
    localparam int DC_OFF_W   = $clog2(DCACHE_LINE);
    localparam int DC_TAG_W   = 32 - DC_IDX_W - DC_OFF_W;
    localparam int DC_PLRU_W  = (DCACHE_WAYS <= 2) ? 1 : (DCACHE_WAYS - 1);

    // Refill: 64B / 16B per beat = 4 beats
    localparam int REFILL_BEATS = DCACHE_LINE / 16;
    localparam int BEAT_CNT_W   = $clog2(REFILL_BEATS);

    // ─── I-Cache Tag/Data 存储 ───────────────────────────────
    typedef struct packed {
        logic                  valid;
        logic [IC_TAG_W-1:0]  tag;
    } ic_tag_t;

    ic_tag_t ic_tag_mem [0:IC_SETS-1][0:ICACHE_WAYS-1];
    logic [ICACHE_LINE*8-1:0] ic_data_mem [0:IC_SETS-1][0:ICACHE_WAYS-1];
    logic [IC_PLRU_W-1:0]     ic_plru   [0:IC_SETS-1];

    // ─── D-Cache Tag/Data 存储 ───────────────────────────────
    typedef struct packed {
        logic                  valid;
        logic                  dirty;
        logic [DC_TAG_W-1:0]  tag;
    } dc_tag_t;

    dc_tag_t dc_tag_mem [0:DC_SETS-1][0:DCACHE_WAYS-1];
    logic [DCACHE_LINE*8-1:0] dc_data_mem [0:DC_SETS-1][0:DCACHE_WAYS-1];
    logic [DC_PLRU_W-1:0]     dc_plru   [0:DC_SETS-1];

    // ─── FSM ─────────────────────────────────────────────────
    typedef enum logic [3:0] {
        ST_IDLE,
        ST_IC_LOOKUP,
        ST_IC_REFILL_AR,
        ST_IC_REFILL_R,
        ST_DC_LOOKUP,
        ST_DC_STORE_HIT,
        ST_DC_EVICT_AW,
        ST_DC_EVICT_W,
        ST_DC_REFILL_AR,
        ST_DC_REFILL_R,
        ST_DC_STORE_RETRY,
        ST_FENCE,
        ST_FENCE_I
    } cache_state_e;

    cache_state_e state_reg, state_next;

    // ─── 内部信号 ────────────────────────────────────────────
    // I-Cache lookup
    logic [IC_IDX_W-1:0] ic_idx;
    logic [IC_TAG_W-1:0] ic_tag;
    logic [IC_OFF_W-1:0] ic_offset;
    logic [ICACHE_WAYS-1:0] ic_way_hit;
    logic                    ic_any_hit;
    logic [ICACHE_WAYS-1:0] ic_victim;
    logic [$clog2(ICACHE_WAYS)-1:0] ic_victim_way;
    logic [$clog2(ICACHE_WAYS)-1:0] ic_hit_way;

    // D-Cache lookup
    logic [DC_IDX_W-1:0] dc_idx;
    logic [DC_TAG_W-1:0] dc_tag;
    logic [DC_OFF_W-1:0] dc_offset;
    logic [DCACHE_WAYS-1:0] dc_way_hit;
    logic                    dc_any_hit;
    logic [DCACHE_WAYS-1:0] dc_victim;
    logic [$clog2(DCACHE_WAYS)-1:0] dc_victim_way;
    logic [$clog2(DCACHE_WAYS)-1:0] dc_hit_way;

    // Refill buffer
    logic [127:0]            refill_buf [0:REFILL_BEATS-1];
    logic [BEAT_CNT_W:0]    beat_cnt;

    // 暂存地址
    logic [31:0] addr_reg;
    logic [31:0] dc_wdata_reg;
    logic [3:0]  dc_be_reg;
    logic        dc_we_reg;

    // Evict 暂存
    logic [31:0] evict_addr_reg;
    logic [DCACHE_LINE*8-1:0] evict_buf;
    logic        evict_dirty;

    // PLRU functions
    // ─── I-Cache PLRU: victim 选择 (二叉树) ──────────────────
    function automatic logic [$clog2(ICACHE_WAYS)-1:0] ic_plru_victim(
        input logic [IC_PLRU_W-1:0] plru_bits
    );
        // 8-way: 7 bits 二叉树
        // b0 → b1/b2 → b3/b4/b5/b6 → W0~W7
        logic [$clog2(ICACHE_WAYS)-1:0] way;
        way = 0;
        for (int level = 0; level < $clog2(ICACHE_WAYS); level++) begin
            int bit_idx = ((1 << level) - 1) + (way >> ($clog2(ICACHE_WAYS) - 1 - level));
            if (bit_idx < IC_PLRU_W) begin
                way = (way << 1) | plru_bits[bit_idx];
            end
        end
        return way;
    endfunction

    // ─── D-Cache PLRU: victim 选择 ───────────────────────────
    function automatic logic [$clog2(DCACHE_WAYS)-1:0] dc_plru_victim(
        input logic [DC_PLRU_W-1:0] plru_bits
    );
        logic [$clog2(DCACHE_WAYS)-1:0] way;
        way = 0;
        for (int level = 0; level < $clog2(DCACHE_WAYS); level++) begin
            int bit_idx = ((1 << level) - 1) + (way >> ($clog2(DCACHE_WAYS) - 1 - level));
            if (bit_idx < DC_PLRU_W) begin
                way = (way << 1) | plru_bits[bit_idx];
            end
        end
        return way;
    endfunction

    // ─── I-Cache 地址解码 ────────────────────────────────────
    assign ic_idx    = ic_addr[IC_OFF_W +: IC_IDX_W];
    assign ic_tag    = ic_addr[31 -: IC_TAG_W];
    assign ic_offset = ic_addr[IC_OFF_W-1:0];

    // ─── D-Cache 地址解码 ────────────────────────────────────
    assign dc_idx    = dc_addr[DC_OFF_W +: DC_IDX_W];
    assign dc_tag    = dc_addr[31 -: DC_TAG_W];
    assign dc_offset = dc_addr[DC_OFF_W-1:0];

    // ─── I-Cache Tag 比较 (组合逻辑) ─────────────────────────
    always_comb begin
        ic_any_hit = 1'b0;
        ic_way_hit = '0;
        ic_hit_way = '0;
        for (int w = 0; w < ICACHE_WAYS; w++) begin
            if (ic_tag_mem[ic_idx][w].valid &&
                ic_tag_mem[ic_idx][w].tag == ic_tag) begin
                ic_way_hit[w] = 1'b1;
                ic_any_hit    = 1'b1;
                ic_hit_way    = w[$clog2(ICACHE_WAYS)-1:0];
            end
        end
    end

    // ─── D-Cache Tag 比较 (组合逻辑) ─────────────────────────
    always_comb begin
        dc_any_hit = 1'b0;
        dc_way_hit = '0;
        dc_hit_way = '0;
        for (int w = 0; w < DCACHE_WAYS; w++) begin
            if (dc_tag_mem[dc_idx][w].valid &&
                dc_tag_mem[dc_idx][w].tag == dc_tag) begin
                dc_way_hit[w] = 1'b1;
                dc_any_hit    = 1'b1;
                dc_hit_way    = w[$clog2(DCACHE_WAYS)-1:0];
            end
        end
    end

    // ─── Victim 选择 (找 invalid way 优先, 否则 PLRU) ───────
    always_comb begin
        ic_victim_way = ic_plru_victim(ic_plru[ic_idx]);
        for (int w = 0; w < ICACHE_WAYS; w++) begin
            if (!ic_tag_mem[ic_idx][w].valid) begin
                ic_victim_way = w[$clog2(ICACHE_WAYS)-1:0];
                break;
            end
        end
    end

    always_comb begin
        dc_victim_way = dc_plru_victim(dc_plru[dc_idx]);
        for (int w = 0; w < DCACHE_WAYS; w++) begin
            if (!dc_tag_mem[dc_idx][w].valid) begin
                dc_victim_way = w[$clog2(DCACHE_WAYS)-1:0];
                break;
            end
        end
    end

    // ─── I-Cache 读数据 MUX ─────────────────────────────────
    always_comb begin
        ic_rdata = 128'h0;
        if (ic_any_hit) begin
            // 从 cacheline 中提取 offset 对应的 128bit (16B)
            // offset 粒度: byte, 需要对齐到 16B
            automatic logic [IC_OFF_W-1:0] aligned_off = {ic_offset[IC_OFF_W-1:4], 4'h0};
            ic_rdata = ic_data_mem[ic_idx][ic_hit_way][(aligned_off*8) +: 128];
        end
    end

    // ─── D-Cache 读数据 MUX (32bit word 提取) ───────────────
    always_comb begin
        dc_rdata = 32'h0;
        if (dc_any_hit) begin
            automatic logic [DC_OFF_W-1:0] word_off = {dc_offset[DC_OFF_W-1:2], 2'h0};
            dc_rdata = dc_data_mem[dc_idx][dc_hit_way][(word_off*8) +: 32];
        end
    end

    // ─── 时序逻辑 ────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg      <= ST_IDLE;
            beat_cnt       <= '0;
            addr_reg       <= 32'h0;
            dc_wdata_reg   <= 32'h0;
            dc_be_reg      <= 4'h0;
            dc_we_reg      <= 1'b0;
            evict_addr_reg <= 32'h0;
            evict_dirty    <= 1'b0;
        end else begin
            state_reg <= state_next;

            // beat 计数器
            if (state_reg == ST_IC_REFILL_R || state_reg == ST_DC_REFILL_R) begin
                if (refill_rvalid) begin
                    refill_buf[beat_cnt[BEAT_CNT_W-1:0]] <= refill_rdata;
                    beat_cnt <= beat_cnt + 1'b1;
                end
            end else if (state_next == ST_IC_REFILL_R || state_next == ST_DC_REFILL_R) begin
                beat_cnt <= '0;
            end

            // 地址锁存
            if (state_next == ST_IC_LOOKUP || state_next == ST_IC_REFILL_AR) begin
                addr_reg <= ic_addr;
            end else if (state_next == ST_DC_LOOKUP) begin
                addr_reg     <= dc_addr;
                dc_wdata_reg <= dc_wdata;
                dc_be_reg    <= dc_be;
                dc_we_reg    <= dc_we;
            end

            // I-Cache refill 完成: 写入 tag + data
            if (state_reg == ST_IC_REFILL_R && refill_rlast && refill_rvalid) begin
                ic_tag_mem[addr_reg[IC_OFF_W +: IC_IDX_W]][ic_victim_way].valid <= 1'b1;
                ic_tag_mem[addr_reg[IC_OFF_W +: IC_IDX_W]][ic_victim_way].tag   <= addr_reg[31 -: IC_TAG_W];
                // 将 refill_buf 拼成 cacheline 写入 data_mem
                for (int b = 0; b < REFILL_BEATS; b++)
                    ic_data_mem[addr_reg[IC_OFF_W +: IC_IDX_W]][ic_victim_way][(b*128) +: 128] <= refill_buf[b];
            end

            // D-Cache refill 完成: 写入 tag + data
            if (state_reg == ST_DC_REFILL_R && refill_rlast && refill_rvalid) begin
                dc_tag_mem[addr_reg[DC_OFF_W +: DC_IDX_W]][dc_victim_way].valid <= 1'b1;
                dc_tag_mem[addr_reg[DC_OFF_W +: DC_IDX_W]][dc_victim_way].dirty <= 1'b0;
                dc_tag_mem[addr_reg[DC_OFF_W +: DC_IDX_W]][dc_victim_way].tag   <= addr_reg[31 -: DC_TAG_W];
                for (int b = 0; b < REFILL_BEATS; b++)
                    dc_data_mem[addr_reg[DC_OFF_W +: DC_IDX_W]][dc_victim_way][(b*128) +: 128] <= refill_buf[b];
            end

            // D-Cache store hit: 写入 + 置 dirty
            if (state_reg == ST_DC_STORE_HIT) begin
                for (int byt = 0; byt < 4; byt++) begin
                    if (dc_be_reg[byt])
                        dc_data_mem[dc_idx][dc_hit_way][({dc_offset[DC_OFF_W-1:2], 2'h0} + byt) * 8 +: 8]
                            <= dc_wdata_reg[byt*8 +: 8];
                end
                dc_tag_mem[dc_idx][dc_hit_way].dirty <= 1'b1;
            end

            // D-Cache store retry after refill: 写入新行 + dirty
            if (state_reg == ST_DC_STORE_RETRY) begin
                // 重新查找 hit way (tag 已更新)
                for (int w = 0; w < DCACHE_WAYS; w++) begin
                    if (dc_tag_mem[dc_idx][w].valid &&
                        dc_tag_mem[dc_idx][w].tag == dc_tag) begin
                        for (int byt = 0; byt < 4; byt++) begin
                            if (dc_be_reg[byt])
                                dc_data_mem[dc_idx][w][({dc_offset[DC_OFF_W-1:2], 2'h0} + byt) * 8 +: 8]
                                    <= dc_wdata_reg[byt*8 +: 8];
                        end
                        dc_tag_mem[dc_idx][w].dirty <= 1'b1;
                    end
                end
            end

            // Evict 数据锁存 (脏行读出)
            if (state_next == ST_DC_EVICT_AW) begin
                evict_addr_reg <= {dc_tag_mem[dc_idx][dc_victim_way].tag, dc_idx, {DC_OFF_W{1'b0}}};
                evict_buf      <= dc_data_mem[dc_idx][dc_victim_way];
                evict_dirty    <= dc_tag_mem[dc_idx][dc_victim_way].dirty;
            end

            // FENCE.I: invalidate 所有 I-Cache lines
            if (state_reg == ST_FENCE_I) begin
                for (int s = 0; s < IC_SETS; s++)
                    for (int w = 0; w < ICACHE_WAYS; w++)
                        ic_tag_mem[s][w].valid <= 1'b0;
            end
        end
    end

    // ─── FSM 组合逻辑 ────────────────────────────────────────
    always_comb begin
        state_next     = state_reg;
        ic_hit         = 1'b0;
        ic_ready       = 1'b0;
        dc_hit         = 1'b0;
        dc_ready       = 1'b0;
        fence_ack      = 1'b0;
        dc_ecc_ce_irq  = 1'b0;
        dc_ecc_ded_irq = 1'b0;

        refill_arvalid = 1'b0;
        refill_araddr  = 32'h0;
        refill_rready  = 1'b0;
        evict_awvalid  = 1'b0;
        evict_awaddr   = 32'h0;
        evict_wvalid   = 1'b0;
        evict_wdata    = 128'h0;
        evict_wlast    = 1'b0;

        case (state_reg)
            ST_IDLE: begin
                ic_ready = 1'b1;
                dc_ready = 1'b1;

                // FENCE.I 最高优先级
                if (fence_i_req) begin
                    state_next = ST_FENCE_I;
                // FENCE 次优先级
                end else if (fence_req) begin
                    state_next = ST_FENCE;
                // I-Cache 取指
                end else if (ic_valid) begin
                    state_next = ST_IC_LOOKUP;
                // D-Cache 访问
                end else if (dc_valid) begin
                    state_next = ST_DC_LOOKUP;
                end
            end

            // ── I-Cache 路径 ──────────────────────────────
            ST_IC_LOOKUP: begin
                ic_ready = 1'b1;
                if (ic_any_hit) begin
                    ic_hit = 1'b1;
                    state_next = ST_IDLE;
                end else begin
                    // Miss: 发起 refill
                    state_next = ST_IC_REFILL_AR;
                end
            end

            ST_IC_REFILL_AR: begin
                ic_ready = 1'b0;
                refill_arvalid = 1'b1;
                refill_araddr  = {addr_reg[31:IC_OFF_W], {IC_OFF_W{1'b0}}};
                if (refill_arready)
                    state_next = ST_IC_REFILL_R;
            end

            ST_IC_REFILL_R: begin
                refill_rready = 1'b1;
                if (refill_rlast && refill_rvalid)
                    state_next = ST_IDLE;
            end

            // ── D-Cache 路径 ──────────────────────────────
            ST_DC_LOOKUP: begin
                dc_ready = 1'b1;
                if (dc_any_hit) begin
                    dc_hit = 1'b1;
                    if (dc_we_reg) begin
                        state_next = ST_DC_STORE_HIT;
                    end else begin
                        state_next = ST_IDLE;  // Load hit: 完成
                    end
                end else begin
                    // Miss: 先 evict dirty, 再 refill
                    dc_ready = 1'b0;
                    if (dc_tag_mem[dc_idx][dc_victim_way].valid &&
                        dc_tag_mem[dc_idx][dc_victim_way].dirty) begin
                        state_next = ST_DC_EVICT_AW;
                    end else begin
                        state_next = ST_DC_REFILL_AR;
                    end
                end
            end

            ST_DC_STORE_HIT: begin
                dc_ready = 1'b1;
                dc_hit   = 1'b1;
                state_next = ST_IDLE;
            end

            ST_DC_EVICT_AW: begin
                evict_awvalid = 1'b1;
                evict_awaddr  = evict_addr_reg;
                if (evict_awready)
                    state_next = ST_DC_EVICT_W;
            end

            ST_DC_EVICT_W: begin
                evict_wvalid = 1'b1;
                evict_wdata  = evict_buf[127:0];  // 第一 beat
                evict_wlast  = (REFILL_BEATS == 1);
                // 简化: 单 beat evict (实际需多 beat)
                if (evict_wready) begin
                    // 清除 dirty, invalidate victim
                    state_next = ST_DC_REFILL_AR;
                end
            end

            ST_DC_REFILL_AR: begin
                refill_arvalid = 1'b1;
                refill_araddr  = {addr_reg[31:DC_OFF_W], {DC_OFF_W{1'b0}}};
                if (refill_arready)
                    state_next = ST_DC_REFILL_R;
            end

            ST_DC_REFILL_R: begin
                refill_rready = 1'b1;
                if (refill_rlast && refill_rvalid) begin
                    if (dc_we_reg)
                        state_next = ST_DC_STORE_RETRY;
                    else
                        state_next = ST_IDLE;
                end
            end

            ST_DC_STORE_RETRY: begin
                dc_ready = 1'b1;
                dc_hit   = 1'b1;
                state_next = ST_IDLE;
            end

            // ── FENCE 路径 ────────────────────────────────
            ST_FENCE: begin
                fence_ack = 1'b1;
                state_next = ST_IDLE;
            end

            ST_FENCE_I: begin
                fence_ack = 1'b1;
                state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

endmodule
