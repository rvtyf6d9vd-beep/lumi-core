# =================================================================
# Lumi-Core TB Makefile — Verilator Lint + Sim + V1 Verification
# M3-S1 Task 0 + V1 | 2026-07-07
# =================================================================

VERILATOR ?= verilator
TOP_DIR   := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))
RTL_DIR   := $(realpath $(TOP_DIR)/../rtl)
TB_DIR    := $(TOP_DIR)

# RTL 源文件
RTL_SRCS := $(wildcard $(RTL_DIR)/include/*.sv) \
            $(wildcard $(RTL_DIR)/core/*.sv) \
            $(wildcard $(RTL_DIR)/csr/*.sv) \
            $(wildcard $(RTL_DIR)/memory/*.sv) \
            $(wildcard $(RTL_DIR)/bus/*.sv) \
            $(wildcard $(RTL_DIR)/interrupt/*.sv) \
            $(wildcard $(RTL_DIR)/debug/*.sv) \
            $(wildcard $(RTL_DIR)/fpu/*.sv) \
            $(wildcard $(RTL_DIR)/power/*.sv) \
            $(wildcard $(RTL_DIR)/multicore/*.sv) \
            $(wildcard $(RTL_DIR)/dft/*.sv) \
            $(wildcard $(RTL_DIR)/top/lumi_soc_top.sv)

# TB 源文件
TB_SRCS := $(TB_DIR)/lib/lumi_tb_pkg.sv \
           $(TB_DIR)/agents/axi_memory_bfm.sv \
           $(TB_DIR)/agents/jtag_bfm.sv \
           $(TB_DIR)/top/lumi_tb_top.sv

ALL_SRCS := $(RTL_SRCS) $(TB_SRCS)

# Include 路径
INC_DIRS := -I$(RTL_DIR)/include -I$(TB_DIR)

# ═══════════════════════════════════════════════
# Lint (Verilator)
# ═══════════════════════════════════════════════
.PHONY: lint
lint:
	$(VERILATOR) --lint-only $(INC_DIRS) --top-module lumi_tb_top \
		-Wall -Wno-UNUSED -Wno-UNOPTFLAT -Wno-WIDTH -Wno-BADVLTPRAGMA \
		$(ALL_SRCS)
	@echo "[LINT] PASS — 0 errors"

# ═══════════════════════════════════════════════
# Sim (Verilator)
# ═══════════════════════════════════════════════
SIM_DIR := $(TOP_DIR)/../sim
.PHONY: sim
sim:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) --binary $(INC_DIRS) --top-module lumi_tb_top \
		-Mdir $(SIM_DIR)/obj_dir \
		-o Vlumitb \
		--trace \
		$(ALL_SRCS)
	$(SIM_DIR)/obj_dir/Vlumitb +vcd
	@echo "[SIM] Complete — check lumi_tb_top.vcd"

# ═══════════════════════════════════════════════
# Smoke Test (快速冒烟)
# ═══════════════════════════════════════════════
.PHONY: smoke
smoke: sim
	@echo "[SMOKE] Done"

# ═══════════════════════════════════════════════
# Clean
# ═══════════════════════════════════════════════
.PHONY: clean
clean:
	rm -rf $(SIM_DIR)/obj_dir $(SIM_DIR)/*.vcd $(SIM_DIR)/*.log

# ═══════════════════════════════════════════════
# Help
# ═══════════════════════════════════════════════
.PHONY: help
help:
	@echo "Lumi-Core TB Makefile"
	@echo "  make lint        — Verilator lint check (no sim)"
	@echo "  make sim         — Compile + run simulation"
	@echo "  make smoke       — Quick smoke test"
	@echo "  make v1-lint     — V1 TB lint check"
	@echo "  make v1-sim      — V1 TB compile + run (directed tests)"
	@echo "  make arch-build  — Build riscv-arch-test (RV32I+M+B+C)"
	@echo "  make arch-run    — Run riscv-arch-test on V1 TB"
	@echo "  make v1-report   — Generate V1 verification report"
	@echo "  make clean       — Remove build artifacts"

# ═══════════════════════════════════════════════
# V1 Verification Targets
# ═══════════════════════════════════════════════

# V1 TB 源文件
V1_ENV_SRCS := $(TB_DIR)/uvm_compat/uvm_shim_pkg.sv \
               $(TB_DIR)/env/lumi_inst_monitor.sv \
               $(TB_DIR)/env/lumi_coverage.sv \
               $(TB_DIR)/env/lumi_scoreboard.sv

V1_TB_SRCS := $(RTL_SRCS) \
              $(RTL_DIR)/top/lumi_soc_tb_stub.sv \
              $(TB_DIR)/lib/lumi_tb_pkg.sv \
              $(TB_DIR)/agents/axi_memory_bfm.sv \
              $(TB_DIR)/agents/jtag_bfm.sv \
              $(TB_DIR)/lib/signature_compare.sv \
              $(V1_ENV_SRCS) \
              $(TB_DIR)/top/lumi_tb_top.sv \
              $(TB_DIR)/top/lumi_v1_tb_top.sv

V1_SIM_DIR := $(TOP_DIR)/../sim-v1
V1_OBJ_DIR := $(V1_SIM_DIR)/obj_dir_fast

# Verilator 警告抑制 (V1 允许更多警告)
V1_WNO := -Wno-UNSIGNED -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
          -Wno-UNUSEDPARAM -Wno-WIDTH -Wno-UNDRIVEN -Wno-PINCONNECTEMPTY \
          -Wno-IMPLICIT -Wno-LITENDIAN -Wno-INITIALDLY -Wno-BLKANDNBLK \
          -Wno-UNOPTFLAT -Wno-CASEINCOMPLETE -Wno-ENUMVALUE \
          -Wno-MODDUP -Wno-PINMISSING -Wno-VARHIDDEN -Wno-MULTIDRIVEN \
          -Wno-SELRANGE -Wno-LATCH -Wno-BADVLTPRAGMA \
          -Wno-CASEWITHX -Wno-SYNCASYNCNET -Wno-IMPLICITSTATIC \
          -Wno-BLKSEQ -Wno-EOFNEWLINE

# V1 Lint
.PHONY: v1-lint
v1-lint:
	$(VERILATOR) --lint-only $(INC_DIRS) --top-module lumi_v1_tb_top \
		-Wall $(V1_WNO) \
		$(V1_TB_SRCS)
	@echo "[V1-LINT] PASS — 0 errors"

# V1 Sim (编译)
.PHONY: v1-build
v1-build:
	mkdir -p $(V1_SIM_DIR)
	$(VERILATOR) --binary --timing --main $(INC_DIRS) --top-module lumi_v1_tb_top \
		-Mdir $(V1_OBJ_DIR) \
		--prefix Vlumi_v1_tb_top \
		-o Vlumi_v1 \
		-Wall $(V1_WNO) \
		$(V1_TB_SRCS)
	@echo "[V1-BUILD] OK"

# V1 Sim (运行 directed test, 需要 +hex_file)
.PHONY: v1-sim
v1-sim: v1-build
	@echo "[V1-SIM] Run with +hex_file=<path> to load test program"

# V1 冒烟测试 (自动编译+运行)
TESTS_DIR := $(TOP_DIR)/../../tests
RV32I_CC := riscv64-unknown-elf-gcc
RV32I_ARCH := rv32i
RV32I_ABI := ilp32
RV32I_LD := $(TESTS_DIR)/linker/lumi_arch_test.ld
ELF2HEX := python3 $(TESTS_DIR)/scripts/elf2hex.py

.PHONY: v1-smoke
v1-smoke: v1-build
	@echo "[V1-SMOKE] Compiling rv32i_smoke.S..."
	$(RV32I_CC) -march=$(RV32I_ARCH) -mabi=$(RV32I_ABI) -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32i_smoke.elf \
		$(TESTS_DIR)/directed/rv32i_smoke.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32i_smoke.elf \
		$(TESTS_DIR)/results/rv32i_smoke_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-SMOKE] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32i_smoke_32.hex
	@echo "[V1-SMOKE] Done"

# RV32I 全面测试 (覆盖全部 40 条指令)
.PHONY: v1-rv32i-full
v1-rv32i-full: v1-build
	@echo "[V1-RV32I-FULL] Compiling rv32i_full.S..."
	$(RV32I_CC) -march=rv32i_zicsr -mabi=$(RV32I_ABI) -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32i_full.elf \
		$(TESTS_DIR)/directed/rv32i_full.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32i_full.elf \
		$(TESTS_DIR)/results/rv32i_full_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-RV32I-FULL] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32i_full_32.hex
	@echo "[V1-RV32I-FULL] Done"

# RV32M 扩展测试
.PHONY: v1-rv32m
v1-rv32m: v1-build
	@echo "[V1-RV32M] Compiling rv32m_basic.S..."
	$(RV32I_CC) -march=rv32im -mabi=ilp32 -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32m_basic.elf \
		$(TESTS_DIR)/directed/rv32m_basic.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32m_basic.elf \
		$(TESTS_DIR)/results/rv32m_basic_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-RV32M] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32m_basic_32.hex
	@echo "[V1-RV32M] Done"

# RV32I 未对齐内存访问定向测试 (BUG-009/BUG-010)
.PHONY: v1-rv32i-misalign
v1-rv32i-misalign: v1-build
	@echo "[V1-MISALIGN] Compiling rv32i_misalign.S..."
	$(RV32I_CC) -march=rv32im -mabi=$(RV32I_ABI) -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32i_misalign.elf \
		$(TESTS_DIR)/directed/rv32i_misalign.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32i_misalign.elf \
		$(TESTS_DIR)/results/rv32i_misalign_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-MISALIGN] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32i_misalign_32.hex
	@echo "[V1-MISALIGN] Done"

# Loop Debug Test (core_list_init 最小复现)
.PHONY: v1-loop-debug
v1-loop-debug: v1-build
	@echo "[V1-LOOP-DBG] Compiling rv32im_loop_debug.S..."
	$(RV32I_CC) -march=rv32im -mabi=ilp32 -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32im_loop_debug.elf \
		$(TESTS_DIR)/directed/rv32im_loop_debug.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32im_loop_debug.elf \
		$(TESTS_DIR)/results/rv32im_loop_debug_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-LOOP-DBG] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32im_loop_debug_32.hex
	@echo "[V1-LOOP-DBG] Done"

# RV32IM Bug Regression Test (ERR-115~ERR-127, 13 个 RTL bug 回归)
.PHONY: v1-bug-regression
v1-bug-regression: v1-build
	@echo "[V1-BUG-REG] Compiling rv32im_bug_regression.S..."
	$(RV32I_CC) -march=rv32im_zicsr -mabi=ilp32 -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32im_bug_regression.elf \
		$(TESTS_DIR)/directed/rv32im_bug_regression.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32im_bug_regression.elf \
		$(TESTS_DIR)/results/rv32im_bug_regression_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-BUG-REG] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32im_bug_regression_32.hex
	@echo "[V1-BUG-REG] Done"

# CSR mcause Test (Phase 1: mcause=0 调查)
.PHONY: v1-csrr-mcause
v1-csrr-mcause: v1-build
	@echo "[V1-CSR-MCAUSE] Compiling csrr_mcause.S..."
	$(RV32I_CC) -march=rv32im_zicsr -mabi=ilp32 -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/csrr_mcause.elf \
		$(TESTS_DIR)/directed/csrr_mcause.S
	$(ELF2HEX) $(TESTS_DIR)/results/csrr_mcause.elf \
		$(TESTS_DIR)/results/csrr_mcause_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-CSR-MCAUSE] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/csrr_mcause_32.hex
	@echo "[V1-CSR-MCAUSE] Done"

# RV32B 扩展测试
.PHONY: v1-rv32b
v1-rv32b: v1-build
	@echo "[V1-RV32B] Compiling rv32b_basic.S..."
	$(RV32I_CC) -march=rv32im_zba_zbb -mabi=ilp32 -nostdlib \
		-T $(RV32I_LD) -o $(TESTS_DIR)/results/rv32b_basic.elf \
		$(TESTS_DIR)/directed/rv32b_basic.S
	$(ELF2HEX) $(TESTS_DIR)/results/rv32b_basic.elf \
		$(TESTS_DIR)/results/rv32b_basic_32.hex \
		--base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[V1-RV32B] Running..."
	$(V1_OBJ_DIR)/Vlumi_v1 +itcm_file=$(TESTS_DIR)/results/rv32b_basic_32.hex
	@echo "[V1-RV32B] Done"

# riscv-arch-test 编译
ARCH_TEST_DIR := $(TOP_DIR)/../../tests/riscv-arch-test
.PHONY: arch-clone
arch-clone:
	@if [ ! -d "$(ARCH_TEST_DIR)" ]; then \
		git clone --depth 1 https://github.com/riscv-non-isa/riscv-arch-test.git $(ARCH_TEST_DIR); \
	else \
		echo "[ARCH] Already cloned at $(ARCH_TEST_DIR)"; \
	fi

.PHONY: arch-build
arch-build: arch-clone
	@chmod +x $(TOP_DIR)/../../tests/scripts/build-arch-test.sh
	$(TOP_DIR)/../../tests/scripts/build-arch-test.sh --all

# riscv-arch-test 运行
.PHONY: arch-run
arch-run: v1-build
	@echo "[ARCH-RUN] Run individual tests with:"
	@echo "  $(V1_OBJ_DIR)/Vlumi_v1 +hex_file=<test.hex> +sig_start=<addr> +sig_end=<addr> +sig_ref=<ref>"

# V1 报告生成
.PHONY: v1-report
v1-report:
	@echo "==========================================="
	@echo " V1 Verification Report"
	@echo " Date: $$(date)"
	@echo "==========================================="
	@echo "Status: Framework created, pending test execution"
	@echo "Files created:"
	@echo "  - uvm_shim_pkg.sv (UVM 兼容宏+基类)"
	@echo "  - lumi_inst_monitor.sv (W级指令监视)"
	@echo "  - lumi_coverage.sv (5 CG 覆盖收集)"
	@echo "  - lumi_scoreboard.sv (参考模型+ECALL检测)"
	@echo "  - signature_compare.sv (签名比较器)"
	@echo "  - lumi_v1_tb_top.sv (V1 验证顶层)"
	@echo "  - elf2hex.py (ELF→hex 转换)"
	@echo "  - build-arch-test.sh (arch-test 编译)"
	@echo "  - lumi_arch_test.ld (链接脚本)"
