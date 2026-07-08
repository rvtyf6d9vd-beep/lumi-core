# =================================================================
# Lumi-Core Synthesis Makefile
# M3-S1 Task 0 | 2026-07-07
# =================================================================
# 依赖: yosys, sta (OpenSTA), make
# 输出: build/synth/, build/timing/

YOSYS     ?= yosys
STA       ?= sta
SCRIPT_DIR := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))
BUILD_DIR  := $(SCRIPT_DIR)/../../build

.PHONY: synth
synth:
	mkdir -p $(BUILD_DIR)/synth
	cd $(SCRIPT_DIR) && $(YOSYS) -c synth_lumi.tcl -l $(BUILD_DIR)/synth/synth.log
	@echo "[SYNTH] Complete — $(BUILD_DIR)/synth/"

.PHONY: timing
timing: synth
	mkdir -p $(BUILD_DIR)/timing
	cd $(SCRIPT_DIR) && $(STA) timing_lumi.tcl -exit -no_splash 2>&1 | tee $(BUILD_DIR)/timing/sta.log
	@echo "[STA] Complete — $(BUILD_DIR)/timing/"

.PHONY: all
all: timing
	@echo "[ALL] Synthesis + STA complete"

.PHONY: check-env
check-env:
	@which $(YOSYS) > /dev/null 2>&1 && echo "  yosys: $(shell which $(YOSYS))" || echo "  yosys: NOT FOUND"
	@which $(STA) > /dev/null 2>&1 && echo "  sta:   $(shell which $(STA))" || echo "  sta:   NOT FOUND"
	@echo "  (Install: brew install yosys && brew install opensta)"

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)/synth $(BUILD_DIR)/timing

.PHONY: help
help:
	@echo "Lumi-Core Synthesis Makefile"
	@echo "  make synth     — Run Yosys synthesis"
	@echo "  make timing    — Run OpenSTA timing analysis (after synth)"
	@echo "  make all       — synth + timing"
	@echo "  make check-env — Check tool availability"
	@echo "  make clean     — Remove build artifacts"
