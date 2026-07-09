// =================================================================
// LUMI-DESIGN-MC | 需求: LUMI-MC-001~003 | 承接: design/multicore-lockstep.html §3.1
// 模块: lumi_multicore_top — 多核互联顶层 (hart_id + per-Hart core + AXI 互连)
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_multicore_top #(
    parameter int NUM_HARTS = lumi_pkg::NUM_HARTS,
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
) (
    input  logic clk_core, input  logic reset_n,
    // 每个 Hart 的中断输入
    input  logic [NUM_HARTS-1:0] meip, input  logic [NUM_HARTS-1:0] msip, input  logic [NUM_HARTS-1:0] mtip,
    // AXI4 主总线 (共享)
    output logic [31:0]  axi_araddr, output logic axi_arvalid, input  logic axi_arready,
    input  logic [127:0] axi_rdata,  input  logic axi_rvalid,  output logic axi_rready,
    // JTAG 共享
    input  logic tck, input  logic tms, input  logic tdi, output logic tdo,
    // Debug halt per-hart
    input  logic [NUM_HARTS-1:0] debug_halt
);
    import lumi_pkg::*;

    // ─── Per-Hart 内部连线 ──────────────────────────────────────
    logic [31:0]  hart_ic_addr    [NUM_HARTS-1:0];
    logic [127:0] hart_ic_data    [NUM_HARTS-1:0];
    logic         hart_ic_valid   [NUM_HARTS-1:0];
    logic         hart_ic_req     [NUM_HARTS-1:0];

    logic [31:0]  hart_dc_addr    [NUM_HARTS-1:0];
    logic [31:0]  hart_dc_wdata   [NUM_HARTS-1:0];
    logic [31:0]  hart_dc_rdata   [NUM_HARTS-1:0];
    logic         hart_dc_we      [NUM_HARTS-1:0];
    logic [3:0]   hart_dc_be      [NUM_HARTS-1:0];
    logic         hart_dc_valid   [NUM_HARTS-1:0];
    logic         hart_dc_ready   [NUM_HARTS-1:0];

    logic [11:0]  hart_csr_addr   [NUM_HARTS-1:0];
    logic [31:0]  hart_csr_rdata  [NUM_HARTS-1:0];
    logic [31:0]  hart_csr_wdata  [NUM_HARTS-1:0];
    logic         hart_csr_we     [NUM_HARTS-1:0];
    logic [1:0]   hart_csr_op     [NUM_HARTS-1:0];
    logic [31:0]  hart_mstatus    [NUM_HARTS-1:0];
    logic [31:0]  hart_mtvec      [NUM_HARTS-1:0];

    logic [ISSUE_WIDTH-1:0] hart_commit_valid [NUM_HARTS-1:0];
    logic [31:0]  hart_commit_pc    [NUM_HARTS-1:0][ISSUE_WIDTH-1:0];
    logic [31:0]  hart_commit_result[NUM_HARTS-1:0][ISSUE_WIDTH-1:0];

    logic         hart_irq_request [NUM_HARTS-1:0];

    // ─── JTAG TAP Chain (tdo 链式连接) ──────────────────────────
    logic [NUM_HARTS:0] jtag_tdo_chain;
    assign jtag_tdo_chain[0] = tdi;
    assign tdo = jtag_tdo_chain[NUM_HARTS];

    // ─── AXI 交叉开关 (Round-Robin 仲裁) ───────────────────────
    logic [$clog2(NUM_HARTS)-1:0] arb_sel;
    logic [$clog2(NUM_HARTS)-1:0] arb_sel_next;
    logic [NUM_HARTS-1:0]         arb_req;
    logic                         arb_grant;

    // Round-Robin 仲裁器
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            arb_sel <= 0;
        else if (arb_grant)
            arb_sel <= arb_sel_next;
    end

    // 仲裁请求
    always_comb begin
        for (int i = 0; i < NUM_HARTS; i++)
            arb_req[i] = hart_dc_valid[i] || hart_ic_req[i];
    end

    // Round-Robin 选择
    always_comb begin
        arb_sel_next = arb_sel;
        arb_grant = 1'b0;
        for (int i = 0; i < NUM_HARTS; i++) begin
            if (arb_req[(arb_sel + i[$clog2(NUM_HARTS)-1:0]) % NUM_HARTS]) begin
                arb_sel_next = (arb_sel + i[$clog2(NUM_HARTS)-1:0] + 1) % NUM_HARTS;
                arb_grant = 1'b1;
            end
        end
    end

    // AXI 共享总线输出
    assign axi_araddr  = arb_grant ? hart_dc_addr[arb_sel] : 32'h0;
    assign axi_arvalid = arb_grant;
    assign axi_rready  = 1'b1;

    // Per-hart ready 信号
    always_comb begin
        for (int i = 0; i < NUM_HARTS; i++) begin
            hart_dc_ready[i] = arb_grant && (arb_sel == i[$clog2(NUM_HARTS)-1:0]);
        end
    end

    // Per-hart rdata 分发
    always_comb begin
        for (int i = 0; i < NUM_HARTS; i++) begin
            hart_dc_rdata[i] = axi_rvalid ? axi_rdata[31:0] : 32'h0;
            hart_ic_data[i]  = axi_rvalid ? axi_rdata : 128'h0;
        end
    end

    // ─── Generate: Per-Hart Core 实例化 ─────────────────────────
    generate
        for (genvar i = 0; i < NUM_HARTS; i++) begin : gen_hart

            lumi_core_top #(
                .ISSUE_WIDTH (ISSUE_WIDTH),
                .HART_ID     (i)
            ) u_core (
                .clk_core        (clk_core),
                .reset_n         (reset_n),
                .ic_addr         (hart_ic_addr[i]),
                .ic_data         (hart_ic_data[i]),
                .ic_valid        (hart_ic_valid[i]),
                .ic_req_valid    (hart_ic_req[i]),
                .dc_addr         (hart_dc_addr[i]),
                .dc_wdata        (hart_dc_wdata[i]),
                .dc_rdata        (hart_dc_rdata[i]),
                .dc_we           (hart_dc_we[i]),
                .dc_be           (hart_dc_be[i]),
                .dc_valid        (hart_dc_valid[i]),
                .dc_ready        (hart_dc_ready[i]),
                .dc_hit          (1'b0),
                .irq_request     (hart_irq_request[i]),
                .irq_id          (8'h0),
                .irq_level       (8'h0),
                .csr_addr        (hart_csr_addr[i]),
                .csr_rdata       (hart_csr_rdata[i]),
                .csr_wdata       (hart_csr_wdata[i]),
                .csr_we          (hart_csr_we[i]),
                .csr_op          (hart_csr_op[i]),
                .mstatus_out     (hart_mstatus[i]),
                .mtvec_out       (hart_mtvec[i]),
                .debug_halt      (debug_halt[i]),
                .commit_valid    (hart_commit_valid[i]),
                .commit_pc       (hart_commit_pc[i]),
                .commit_result   (hart_commit_result[i])
            );

            // Per-Hart 中断路由
            assign hart_irq_request[i] = meip[i] || msip[i] || mtip[i];

            // JTAG TAP Chain 连接 (简化: bypass 模式)
            assign jtag_tdo_chain[i+1] = jtag_tdo_chain[i];  // bypass 链
        end
    endgenerate

endmodule
