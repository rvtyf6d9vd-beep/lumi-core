# Lumi-Core Interrupt Test Makefile
# Builds PMP, CLIC, PLIC, and Smrnmi test binaries for gem5 FS mode

CROSS_COMPILE ?= riscv64-unknown-elf-
CC      = $(CROSS_COMPILE)gcc
OBJCOPY = $(CROSS_COMPILE)objcopy

ARCH_FLAGS = -march=rv32ima_zicsr -mabi=ilp32
CFLAGS  = $(ARCH_FLAGS) -O2 -Wall -nostdlib -ffreestanding
LDFLAGS = -nostdlib -T freestanding.ld

M5_STUB = ../m5-test/syscalls.c
CRT0    = crt0.S

TESTS = test_pmp test_clic test_plic test_smrnmi
TARGETS = $(addsuffix .riscv, $(TESTS))

.PHONY: all clean

all: $(TARGETS)

test_pmp.riscv: $(CRT0) test_pmp.c $(M5_STUB) freestanding.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(CRT0) test_pmp.c $(M5_STUB)

test_clic.riscv: $(CRT0) test_clic.c $(M5_STUB) freestanding.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(CRT0) test_clic.c $(M5_STUB)

test_plic.riscv: $(CRT0) test_plic.c $(M5_STUB) freestanding.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(CRT0) test_plic.c $(M5_STUB)

test_smrnmi.riscv: $(CRT0) test_smrnmi.c $(M5_STUB) freestanding.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(CRT0) test_smrnmi.c $(M5_STUB)

clean:
	rm -f $(TARGETS) *.o
