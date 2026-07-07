/* Minimal linker script for freestanding RV32 RISC-V in gem5 FS mode */
OUTPUT_FORMAT("elf32-littleriscv")
OUTPUT_ARCH(riscv)
ENTRY(_reset)

/* Memory size: 512MiB (0x20000000). Stack at top of memory. */
_stack_top = 0x20000000;

SECTIONS {
    . = 0x10000;

    .text : {
        *(.text.init)     /* crt0.S must be first */
        *(.text .text.*)
    }

    .rodata : {
        *(.rodata .rodata.*)
    }

    .data : {
        *(.data .data.*)
        *(.sdata .sdata.*)
    }

    .bss : {
        *(.bss .bss.*)
        *(.sbss .sbss.*)
    }

    /DISCARD/ : {
        *(.comment)
        *(.note.*)
        *(.eh_frame*)
    }
}
