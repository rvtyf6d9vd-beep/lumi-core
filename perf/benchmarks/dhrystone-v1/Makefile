# Makefile for Dhrystone V1 — Verilator RTL 仿真
#
# T-MS3-S1-7: CoreMark/Dhrystone V1 RTL 仿真
#
# 与 gem5 版的区别:
#   - ARCH: rv32ima (无 C 扩展, 避开 ERR-010)
#   - 链接: lumi-v1-bench.ld (TCM 0x0) + crt0_v1.S + v1_lib.c
#   - printf: no-op (v1_lib.c)
#   - write_tohost: 写结果到 0x3FFE0 后 ECALL 退出

CROSS   ?= riscv64-unknown-elf-
CC       = $(CROSS)gcc

ARCH    ?= rv32ima
ABI     ?= ilp32

OPT      = -O2 -funroll-loops

# Paths
LIBC_DIR = ../libc
DHRY_DIR = ../dhrystone
V1_DIR   = .
ELF2HEX  = python3 ../../../tests/scripts/elf2hex.py

NUMBER_OF_RUNS ?= 500

FLAGS_STR = "$(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding"

CFLAGS = $(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding -fno-builtin \
         -Wall -Wextra -Wno-unused-parameter -Wno-implicit-fallthrough \
         -Wno-implicit-function-declaration \
         -Wno-unused-function -Wno-unused-variable \
         -I$(V1_DIR) -I$(DHRY_DIR) -I$(LIBC_DIR) \
         -DNUMBER_OF_RUNS=$(NUMBER_OF_RUNS) \
         -DFLAGS_STR=\"$(FLAGS_STR)\"

# Linker: V1 TCM at 0x0
LDFLAGS = -nostdlib -T $(LIBC_DIR)/lumi-v1-bench.ld

# Source files
# dhrystone_v1.c: wrapper (includes original dhrystone.c)
# v1_lib.c:       string/memory/printf(no-op)/heap/rdcycle/exit
V1_SRCS = $(V1_DIR)/dhrystone_v1.c \
          $(LIBC_DIR)/v1_lib.c

CRT0 = $(LIBC_DIR)/crt0_v1.S

OBJS = $(V1_SRCS:.c=.o) $(CRT0:.S=.o)

TARGET = dhrystone-v1.riscv
HEX    = dhrystone-v1_32.hex

.PHONY: all clean hex

all: $(TARGET)

hex: $(HEX)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ -lgcc

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

$(HEX): $(TARGET)
	$(ELF2HEX) $(TARGET) $(HEX) --base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[Dhrystone-V1] Hex image: $(HEX)"

clean:
	rm -f $(OBJS) $(TARGET) $(HEX)
