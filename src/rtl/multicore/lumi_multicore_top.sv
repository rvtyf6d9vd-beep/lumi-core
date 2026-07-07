// =================================================================
// LUMI-DESIGN-MC | 需求: LUMI-MC-001~003 | 承接: design/multicore-lockstep.html §3.1
// 模块: lumi_multicore_top — 多核互联顶层 (hart_id + per-Hart core + AXI 互连)
// 阶段: M2-S1 RTL 骨架 (D-018 参数化 generate) | 作者: Qoder Agent | 日期: 2026-07-07
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
    // 骨架: TODO — generate 块实例化 NUM_HARTS 个 lumi_core_top + AXI 互连
    // generate for (genvar i = 0; i < NUM_HARTS; i++) begin : gen_hart
    //     lumi_core_top #( .ISSUE_WIDTH(ISSUE_WIDTH), .HART_ID(i) ) u_core ( ... );
    // end endgenerate
endmodule
