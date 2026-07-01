/* Linker script for bare-metal RISC-V programs running in gem5 SE mode */

OUTPUT_FORMAT("elf64-littleriscv")
OUTPUT_ARCH(riscv)
ENTRY(_start)

SECTIONS {
    . = 0x10000;  /* Start address (gem5 SE default for RISC-V) */

    .text : {
        *(.text.start)
        *(.text .text.*)
    }

    .rodata : {
        *(.rodata .rodata.*)
    }

    .data : {
        *(.data .data.*)
        *(.sdata .sdata.*)
    }

    __bss_start = .;
    .bss : {
        *(.bss .bss.*)
        *(.sbss .sbss.*)
    }
    __bss_end = .;

    /* Provide 'end' symbol for newlib _sbrk */
    end = .;
    _end = .;

    /DISCARD/ : {
        *(.comment)
        *(.note.*)
        *(.eh_frame*)
    }
}
