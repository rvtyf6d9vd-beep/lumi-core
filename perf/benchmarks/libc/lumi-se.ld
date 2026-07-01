/* Linker script for bare-metal RISC-V programs in gem5 SE mode
 * Compatible with mini_libc crt0.S
 */

OUTPUT_FORMAT("elf64-littleriscv")
OUTPUT_ARCH(riscv)
ENTRY(_start)

SECTIONS {
    . = 0x10000;  /* gem5 SE default load address for RISC-V */

    .text : {
        *(.text.start)       /* crt0 first */
        *(.text .text.*)
    }

    .rodata : {
        *(.rodata .rodata.*)
    }

    .data : {
        *(.data .data.*)
        *(.sdata .sdata.*)
    }

    /* Global pointer anchor (for small data model) */
    PROVIDE(__global_pointer$ = .);

    __bss_start = .;
    .bss : {
        *(.bss .bss.*)
        *(.sbss .sbss.*)
    }
    __bss_end = .;

    /* Heap starts after BSS */
    PROVIDE(end = .);
    PROVIDE(_end = .);

    /DISCARD/ : {
        *(.comment)
        *(.note.*)
        *(.eh_frame*)
    }
}
