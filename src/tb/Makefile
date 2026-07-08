# =================================================================
# Lumi-Core TB Makefile — Verilator Lint + Sim
# M3-S1 Task 0 | 2026-07-07
# =================================================================

VERILATOR ?= verilator
TOP_DIR   := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))
RTL_DIR   := $(TOP_DIR)/../../rtl
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
INC_DIRS := -I$(RTL_DIR)/include

# ═══════════════════════════════════════════════
# Lint (Verilator)
# ═══════════════════════════════════════════════
.PHONY: lint
lint:
	$(VERILATOR) --lint-only $(INC_DIRS) --top-module lumi_tb_top \
		-Wall -Wno-UNUSED -Wno-UNOPTFLAT -Wno-WIDTH \
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
	@echo "  make lint   — Verilator lint check (no sim)"
	@echo "  make sim    — Compile + run simulation"
	@echo "  make smoke  — Quick smoke test"
	@echo "  make clean  — Remove build artifacts"
