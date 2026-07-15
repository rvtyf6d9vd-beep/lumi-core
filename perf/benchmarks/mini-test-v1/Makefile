# Makefile for V1 minimal test
CROSS   ?= riscv64-unknown-elf-
CC       = $(CROSS)gcc
ARCH    ?= rv32ima
ABI     ?= ilp32
OPT      = -O2
LIBC_DIR = ../libc
ELF2HEX  = python3 ../../../tests/scripts/elf2hex.py
CFLAGS = $(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding -fno-builtin \
         -Wall -Wextra -I$(LIBC_DIR)
LDFLAGS = -nostdlib -T $(LIBC_DIR)/lumi-v1-bench.ld
OBJS = mini_test_v1.o $(LIBC_DIR)/v1_lib.o $(LIBC_DIR)/crt0_v1.o
TARGET = mini-test-v1.riscv
HEX    = mini-test-v1_32.hex
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
	@echo "[MiniTest-V1] Hex image: $(HEX)"
clean:
	rm -f $(OBJS) $(TARGET) $(HEX)
