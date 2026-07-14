// =================================================================
// LUMI-DESIGN-PLIC | 需求: LUMI-PLIC-001~002 | 承接: design/clic-plic.html §2.2
// 模块: lumi_plic — PLIC 外部中断控制器 (32 源 + 7 级优先级 + Claim/Complete)
// 阶段: M3 Batch-3 完整功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_plic #(
    parameter int NUM_SRC  = 32,
    parameter int NUM_HART = lumi_pkg::NUM_HARTS
) (
    input  logic clk_core, input  logic reset_n,

    // ── 外部中断输入 ─────────────────────────────────────────
    input  logic [NUM_SRC-1:0]  ext_irq_in,    // 中断源 [31:0]

    // ── 中断输出 (→ CLIC) ────────────────────────────────────
    output logic [NUM_HART-1:0] meip,          // M-mode 外部中断 pending
    output logic [NUM_HART*5-1:0] irq_id,      // 中断 ID per hart (5-bit)
    input  logic [NUM_HART-1:0] irq_claim,     // Claim 应答

    // ── PLIC MMIO 接口 (AXI4-Lite, 简化 12-bit 地址) ────────
    input  logic [11:0]         plic_addr,
    input  logic [31:0]         plic_wdata,
    output logic [31:0]         plic_rdata,
    input  logic                plic_we
);
    import lumi_pkg::*;

    // 地址/索引位宽参数
    localparam int HART_IDX_W     = (NUM_HART == 1) ? 1 : $clog2(NUM_HART);
    localparam int ENABLE_BASE    = int'(12'h084);
    localparam int THRESHOLD_BASE = int'(12'h100);

    // ═══════════════════════════════════════════════════════════
    // MMIO 地址映射 (简化, 12-bit 地址空间)
    // ═══════════════════════════════════════════════════════════
    // 0x000 ~ 0x07F: priority[1..31] (源 0 保留, 每源 4B, 低 3-bit)
    // 0x080 ~ 0x083: pending (位图, 每 32 源 4B)
    // 0x084 + h*4:  enable[h]  (位图, per-hart context)
    // 0x100 + h*8:  threshold[h] (3-bit)
    // 0x104 + h*8:  claim/complete[h] (读=claim, 写=complete)

    // ═══════════════════════════════════════════════════════════
    // 内部寄存器
    // ═══════════════════════════════════════════════════════════

    // 优先级: 3-bit per source (源 0 保留, 源 1~31)
    logic [2:0] priority_r [NUM_SRC-1:0];

    // Pending 位图
    logic [NUM_SRC-1:0] pending_r;

    // Enable 位图 (per-hart context)
    logic [NUM_SRC-1:0] enable_r [NUM_HART-1:0];

    // Threshold (per-hart context)
    logic [2:0] threshold_r [NUM_HART-1:0];

    // Claim 锁存: 当前被 claim 的中断源 (等待 complete)
    logic [4:0] claimed_src_r [NUM_HART-1:0];
    logic       claimed_valid_r [NUM_HART-1:0];

    // ═══════════════════════════════════════════════════════════
    // 中断边沿检测 (电平触发: ext_irq_in 高电平 = pending)
    // ═══════════════════════════════════════════════════════════

    // Pending 更新: 中断到达时置位, claim 时清零
    // 简化为电平触发: pending = ext_irq_in (非 claim 屏蔽)

    // ═══════════════════════════════════════════════════════════
    // 优先级仲裁 (组合逻辑, per-hart)
    // ═══════════════════════════════════════════════════════════

    logic [4:0]  best_id [NUM_HART-1:0];
    logic [2:0]  best_priority [NUM_HART-1:0];
    logic        has_irq [NUM_HART-1:0];

    always_comb begin
        for (int h = 0; h < NUM_HART; h++) begin
            best_id[h]       = 5'h0;
            best_priority[h] = 3'h0;
            has_irq[h]       = 1'b0;

            // 遍历所有中断源 (跳过源 0)
            for (int i = 1; i < NUM_SRC; i++) begin
                if (pending_r[i] && enable_r[h][i]) begin
                    if (priority_r[i] > best_priority[h]) begin
                        best_priority[h] = priority_r[i];
                        best_id[h]       = i[4:0];
                        has_irq[h]       = 1'b1;
                    end else if (priority_r[i] == best_priority[h] && i[4:0] > best_id[h]) begin
                        // 同优先级: 高 ID 优先
                        best_id[h] = i[4:0];
                        has_irq[h] = 1'b1;
                    end
                end
            end
        end
    end

    // ── Threshold 过滤 (per-hart) ──
    logic irq_above_threshold [NUM_HART-1:0];
    always_comb begin
        for (int h = 0; h < NUM_HART; h++)
            irq_above_threshold[h] = has_irq[h] && (best_priority[h] > threshold_r[h]);
    end

    // ── MEIP 输出 (per-hart) ──
    always_comb begin
        meip = '0;
        for (int h = 0; h < NUM_HART; h++)
            if (irq_above_threshold[h])
                meip[h] = 1'b1;
    end

    // ── IRQ ID 输出 (per-hart) ──
    always_comb begin
        irq_id = '0;
        for (int h = 0; h < NUM_HART; h++)
            if (irq_above_threshold[h])
                irq_id[h*5 +: 5] = best_id[h];
    end

    // ═══════════════════════════════════════════════════════════
    // MMIO 读写逻辑
    // ═══════════════════════════════════════════════════════════

    // 组合 pending 信号 (中断源有效且未被 claim 屏蔽)
    logic [NUM_SRC-1:0] pending_next;
    always_comb begin
        pending_next = ext_irq_in;
        for (int h = 0; h < NUM_HART; h++)
            if (claimed_valid_r[h])
                pending_next[claimed_src_r[h]] = 1'b0;
    end

    // MMIO 地址解码辅助信号
    logic [HART_IDX_W-1:0] hart_idx;
    logic                  addr_is_enable;
    logic                  addr_is_threshold_claim;

    always_comb begin
        hart_idx                = '0;
        addr_is_enable          = 1'b0;
        addr_is_threshold_claim = 1'b0;

        if (int'(plic_addr) >= ENABLE_BASE && int'(plic_addr) < (ENABLE_BASE + NUM_HART*4)) begin
            addr_is_enable = 1'b1;
            hart_idx       = HART_IDX_W'((plic_addr - ENABLE_BASE[11:0]) >> 2);
        end else if (int'(plic_addr) >= THRESHOLD_BASE && int'(plic_addr) < (THRESHOLD_BASE + NUM_HART*8)) begin
            addr_is_threshold_claim = 1'b1;
            hart_idx                = HART_IDX_W'((plic_addr - THRESHOLD_BASE[11:0]) >> 3);
        end
    end

    always_comb begin
        plic_rdata = 32'h0;

        case (plic_addr) inside
            // ── Priority registers (0x000 ~ 0x07F) ──
            12'h000, 12'h004, 12'h008, 12'h00C,
            12'h010, 12'h014, 12'h018, 12'h01C,
            12'h020, 12'h024, 12'h028, 12'h02C,
            12'h030, 12'h034, 12'h038, 12'h03C,
            12'h040, 12'h044, 12'h048, 12'h04C,
            12'h050, 12'h054, 12'h058, 12'h05C,
            12'h060, 12'h064, 12'h068, 12'h06C,
            12'h070, 12'h074, 12'h078, 12'h07C: begin
                plic_rdata = {29'h0, priority_r[plic_addr[6:2]]};
            end

            // ── Pending bitmap (0x080) ──
            12'h080: plic_rdata = pending_r;

            default: begin
                if (addr_is_enable)
                    plic_rdata = enable_r[hart_idx];
                else if (addr_is_threshold_claim) begin
                    if ((plic_addr & 12'h004) == 12'h000)
                        plic_rdata = {29'h0, threshold_r[hart_idx]};
                    else
                        plic_rdata = {27'h0, best_id[hart_idx]};
                end
            end
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // 时序逻辑
    // ═══════════════════════════════════════════════════════════

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            pending_r <= '0;
            for (int i = 0; i < NUM_SRC; i++)
                priority_r[i] <= 3'h0;
            for (int h = 0; h < NUM_HART; h++) begin
                enable_r[h]        <= '0;
                threshold_r[h]     <= 3'h0;
                claimed_src_r[h]   <= 5'h0;
                claimed_valid_r[h] <= 1'b0;
            end
        end else begin
            // ── Pending 更新 ──
            pending_r <= pending_next;

            // ── Claim 处理 (per-hart) ──
            for (int h = 0; h < NUM_HART; h++) begin
                if (irq_claim[h] && irq_above_threshold[h] && !claimed_valid_r[h]) begin
                    claimed_src_r[h]   <= best_id[h];
                    claimed_valid_r[h] <= 1'b1;
                    // 清 pending 位
                    pending_r[best_id[h]] <= 1'b0;
                end
            end

            // ── MMIO 写操作 ──
            if (plic_we) begin
                // Priority 写 (0x000~0x07F)
                if (plic_addr <= 12'h07C && plic_addr[1:0] == 2'b00) begin
                    priority_r[plic_addr[6:2]] <= plic_wdata[2:0];
                end

                // Enable 写 (0x084 + h*4)
                if (addr_is_enable) begin
                    enable_r[hart_idx] <= plic_wdata;
                    // 源 0 不可使能
                    enable_r[hart_idx][0] <= 1'b0;
                end

                // Threshold 写 (0x100 + h*8)
                if (addr_is_threshold_claim && ((plic_addr & 12'h004) == 12'h000)) begin
                    threshold_r[hart_idx] <= plic_wdata[2:0];
                end

                // Complete 写 (0x104 + h*8): 完成中断处理, 清除 claim
                if (addr_is_threshold_claim && ((plic_addr & 12'h004) == 12'h004)) begin
                    claimed_valid_r[hart_idx] <= 1'b0;
                end
            end
        end
    end

endmodule
