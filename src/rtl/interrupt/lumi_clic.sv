// =================================================================
// LUMI-DESIGN-CLIC | 需求: LUMI-CLIC-001~003 | 承接: design/clic-plic.html §3.1
// 模块: lumi_clic — CLIC 中断控制器 (N 本地中断 + 16cycle delay FSM)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_clic #(
    parameter int NUM_INT = lumi_pkg::CLIC_INT_INPUTS,
    parameter int HW_LAT  = lumi_pkg::CLIC_HW_LATENCY
) (
    input  logic clk_core, input  logic reset_n,
    input  logic [NUM_INT-1:0] irq_local,  // 本地中断输入
    input  logic [7:0]         irq_level [NUM_INT-1:0],  // 优先级
    output logic               meip,       // 外部中断 pending (→ CSR)
    output logic [7:0]         irq_cause,  // 中断原因码
    output logic               irq_valid,  // 中断请求有效
    input  logic               irq_ack,    // CPU 应答
    // CLIC CSR 接口
    input  logic [11:0]        clic_csr_addr,
    input  logic [31:0]        clic_csr_wdata,
    output logic [31:0]        clic_csr_rdata,
    input  logic               clic_csr_we
);
    import lumi_pkg::*;
    typedef enum logic [2:0] {
        ST_IDLE, ST_DETECT, ST_PRIORITY, ST_LATENCY, ST_PENDING, ST_ACK
    } clic_state_e;
    clic_state_e state_reg, state_next;
    logic [$clog2(HW_LAT):0] latency_cnt;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin state_reg <= ST_IDLE; latency_cnt <= '0; end
        else begin state_reg <= state_next; if (state_next == ST_LATENCY) latency_cnt <= latency_cnt + 1; end
    end
    always_comb begin
        state_next = state_reg; meip = 1'b0; irq_valid = 1'b0; irq_cause = 8'h0; clic_csr_rdata = 32'h0;
        case (state_reg)
            ST_IDLE:     state_next = ST_DETECT;
            ST_DETECT:   ; // 骨架: TODO — 边沿/电平检测
            ST_PRIORITY: ; // 骨架: TODO — 优先级仲裁
            ST_LATENCY:  state_next = (latency_cnt >= HW_LAT) ? ST_PENDING : ST_LATENCY;
            ST_PENDING:  begin meip = 1'b1; irq_valid = 1'b1; state_next = irq_ack ? ST_ACK : ST_PENDING; end
            ST_ACK:      ; // 骨架: TODO — 中断确认 + 清除
        endcase
    end
endmodule
