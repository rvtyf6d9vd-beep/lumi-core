// =================================================================
// LUMI-TB-AGENT | 需求: LUMI-TB-001 | 承接: debug-trace.html
// 模块: jtag_bfm — JTAG DMI Bus Functional Model (Verilator 兼容)
// 阶段: M3-S1 Task 0 | 日期: 2026-07-07
// =================================================================

module jtag_bfm #(
  parameter int TCK_PERIOD = 20  // JTAG 时钟周期 (ns)
)(
  output logic       tck,
  output logic       tms,
  output logic       tdi,
  input  logic       tdo,
  output logic       trst_n
);

  // ─── TAP 状态机枚举 (IEEE 1149.1) ─────────────────────────
  typedef enum logic [3:0] {
    TAP_TEST_LOGIC_RESET = 4'h0,
    TAP_RUN_TEST_IDLE    = 4'h1,
    TAP_SELECT_DR        = 4'h2,
    TAP_CAPTURE_DR       = 4'h3,
    TAP_SHIFT_DR         = 4'h4,
    TAP_EXIT1_DR         = 4'h5,
    TAP_PAUSE_DR         = 4'h6,
    TAP_EXIT2_DR         = 4'h7,
    TAP_UPDATE_DR        = 4'h8,
    TAP_SELECT_IR        = 4'h9,
    TAP_CAPTURE_IR       = 4'hA,
    TAP_SHIFT_IR         = 4'hB,
    TAP_EXIT1_IR         = 4'hC,
    TAP_PAUSE_IR         = 4'hD,
    TAP_EXIT2_IR         = 4'hE,
    TAP_UPDATE_IR        = 4'hF
  } tap_state_e;

  tap_state_e tap_state;
  int unsigned cycle_count;

  // ─── TCK 生成 ─────────────────────────────────────────────
  initial begin
    tck = 1'b0;
    forever #(TCK_PERIOD/2) tck = ~tck;
  end

  // ─── TAP 状态跟踪 ─────────────────────────────────────────
  always_ff @(posedge tck) begin
    case (tap_state)
      TAP_TEST_LOGIC_RESET: tap_state <= tms ? TAP_TEST_LOGIC_RESET : TAP_RUN_TEST_IDLE;
      TAP_RUN_TEST_IDLE:    tap_state <= tms ? TAP_SELECT_DR        : TAP_RUN_TEST_IDLE;
      TAP_SELECT_DR:        tap_state <= tms ? TAP_SELECT_IR        : TAP_CAPTURE_DR;
      TAP_CAPTURE_DR:       tap_state <= tms ? TAP_EXIT1_DR         : TAP_SHIFT_DR;
      TAP_SHIFT_DR:         tap_state <= tms ? TAP_EXIT1_DR         : TAP_SHIFT_DR;
      TAP_EXIT1_DR:         tap_state <= tms ? TAP_UPDATE_DR        : TAP_PAUSE_DR;
      TAP_PAUSE_DR:         tap_state <= tms ? TAP_EXIT2_DR         : TAP_PAUSE_DR;
      TAP_EXIT2_DR:         tap_state <= tms ? TAP_UPDATE_DR        : TAP_SHIFT_DR;
      TAP_UPDATE_DR:        tap_state <= tms ? TAP_SELECT_DR        : TAP_RUN_TEST_IDLE;
      TAP_SELECT_IR:        tap_state <= tms ? TAP_TEST_LOGIC_RESET : TAP_CAPTURE_IR;
      TAP_CAPTURE_IR:       tap_state <= tms ? TAP_EXIT1_IR         : TAP_SHIFT_IR;
      TAP_SHIFT_IR:         tap_state <= tms ? TAP_EXIT1_IR         : TAP_SHIFT_IR;
      TAP_EXIT1_IR:         tap_state <= tms ? TAP_UPDATE_IR        : TAP_PAUSE_IR;
      TAP_PAUSE_IR:         tap_state <= tms ? TAP_EXIT2_IR         : TAP_PAUSE_IR;
      TAP_EXIT2_IR:         tap_state <= tms ? TAP_UPDATE_IR        : TAP_SHIFT_DR;
      TAP_UPDATE_IR:        tap_state <= tms ? TAP_SELECT_DR        : TAP_RUN_TEST_IDLE;
    endcase
  end

  // ─── 复位 ─────────────────────────────────────────────────
  task automatic jtag_reset();
    trst_n = 1'b0;
    tms    = 1'b1;
    tdi    = 1'b0;
    repeat(5) @(posedge tck); // 5 TCK cycles → TLR
    trst_n = 1'b1;
    tap_state = TAP_TEST_LOGIC_RESET;
    $display("[JTAG-BFM] Reset complete, TAP=TLR");
  endtask

  // ─── 移位 N 位 ────────────────────────────────────────────
  task automatic shift_bits(input int n_bits, input logic [255:0] data_in, output logic [255:0] data_out);
    data_out = '0;
    for (int i = 0; i < n_bits; i++) begin
      tdi = data_in[i];
      @(posedge tck);
      data_out[i] = tdo;
      if (i == n_bits - 2) tms = 1'b1; // Exit on last bit
    end
    tms = 1'b0;
    @(posedge tck);
  endtask

  // ─── 写 IR 寄存器 ─────────────────────────────────────────
  task automatic write_ir(input logic [7:0] ir_value);
    logic [255:0] dummy;
    // TLR → RTI → Select-DR → Select-IR → Capture-IR → Shift-IR
    tms = 1'b0; @(posedge tck); // RTI
    tms = 1'b1; @(posedge tck); // Select-DR
    tms = 1'b1; @(posedge tck); // Select-IR
    tms = 1'b0; @(posedge tck); // Capture-IR
    tms = 1'b0; @(posedge tck); // Shift-IR
    shift_bits(8, {248'b0, ir_value}, dummy);
    // Exit1-IR → Update-IR → RTI
    tms = 1'b1; @(posedge tck); // Update-IR
    tms = 1'b0; @(posedge tck); // RTI
    $display("[JTAG-BFM] IR <- 0x%02h", ir_value);
  endtask

  // ─── 读写 DR 寄存器 ────────────────────────────────────────
  task automatic read_write_dr(input int n_bits, input logic [255:0] dr_in, output logic [255:0] dr_out);
    // RTI → Select-DR → Capture-DR → Shift-DR
    tms = 1'b1; @(posedge tck); // Select-DR
    tms = 1'b0; @(posedge tck); // Capture-DR
    tms = 1'b0; @(posedge tck); // Shift-DR
    shift_bits(n_bits, dr_in, dr_out);
    // Exit1-DR → Update-DR → RTI
    tms = 1'b1; @(posedge tck); // Update-DR
    tms = 1'b0; @(posedge tck); // RTI
  endtask

  // ─── DMI 读写 (RISC-V Debug) ──────────────────────────────
  // DMI op: 00=nop, 01=read, 10=write
  task automatic dmi_write(input logic [6:0] addr, input logic [31:0] data);
    logic [255:0] dr_in, dr_out;
    // IR = DMI write command (typically 0x11 or 0x13)
    write_ir(8'h11);
    // DR = {addr[6:0], data[31:0], op[1:0]=10(write)}
    dr_in = {addr, data, 2'b10};
    read_write_dr(41, dr_in, dr_out);
    $display("[JTAG-BFM] DMI Write addr=0x%02h data=0x%08h", addr, data);
  endtask

  task automatic dmi_read(input logic [6:0] addr, output logic [31:0] data);
    logic [255:0] dr_in, dr_out;
    // IR = DMI read command
    write_ir(8'h11);
    // First send read request
    dr_in = {addr, 32'h0, 2'b01};
    read_write_dr(41, dr_in, dr_out);
    // Then NOP to get response
    dr_in = {7'h0, 32'h0, 2'b00};
    read_write_dr(41, dr_in, dr_out);
    data = dr_out[33:2];
    $display("[JTAG-BFM] DMI Read  addr=0x%02h data=0x%08h", addr, data);
  endtask

  // ─── 初始化 ───────────────────────────────────────────────
  initial begin
    tms    = 1'b1;
    tdi    = 1'b0;
    trst_n = 1'b0;
    tap_state = TAP_TEST_LOGIC_RESET;
    cycle_count = 0;
    #100;
    trst_n = 1'b1;
  end

endmodule
