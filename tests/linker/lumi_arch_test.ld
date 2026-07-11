/* Lumi V1 — riscv-arch-test 链接脚本
 * 适配 Lumi SoC 内存布局: TCM 基地址 0x0000_0000
 */
OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
    TCM (rwx) : ORIGIN = 0x00000000, LENGTH = 256K
}

SECTIONS
{
    .text.init : {
        *(.text.init)
    } > TCM

    .text : {
        *(.text)
        *(.text.*)
    } > TCM

    .rodata : {
        *(.rodata)
        *(.rodata.*)
    } > TCM

    .data : {
        *(.data)
        *(.data.*)
    } > TCM

    .bss : {
        *(.bss)
        *(.bss.*)
    } > TCM

    .tohost ALIGN(4) : {
        *(.tohost)
    } > TCM

    .signature ALIGN(4) : {
        begin_signature = .;
        *(.signature)
        end_signature = .;
    } > TCM

    /DISCARD/ : {
        *(.comment)
        *(.note.*)
    }
}
