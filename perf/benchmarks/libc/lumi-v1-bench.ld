/* lumi-v1-bench.ld — V1 Verilator 基准测试链接脚本
 *
 * 适配 Lumi V1 TCM: 基地址 0x0000_0000, 容量 256KB
 * 结果区域: 0x3FFE0 (benchmark 写入性能数据, TB 读取)
 *
 * T-MS3-S1-7: CoreMark/Dhrystone V1 RTL 仿真
 */

OUTPUT_FORMAT("elf32-littleriscv")
OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
    TCM (rwx) : ORIGIN = 0x00000000, LENGTH = 256K
}

SECTIONS
{
    .text : {
        *(.text.start)       /* crt0_v1 first */
        *(.text .text.*)
    } > TCM

    .rodata : {
        *(.rodata .rodata.*)
    } > TCM

    .data : {
        *(.data .data.*)
        *(.sdata .sdata.*)
        *(.srodata .srodata.*)
    } > TCM

    /* Global pointer anchor */
    PROVIDE(__global_pointer$ = .);

    . = ALIGN(4);
    __bss_start = .;
    .bss : {
        *(.bss .bss.*)
        *(.sbss .sbss.*)
        *(COMMON)
    } > TCM
    . = ALIGN(4);
    __bss_end = .;

    /* Heap starts after BSS — BEFORE bench_result */
    PROVIDE(end = .);
    PROVIDE(_end = .);

    /* Benchmark result area at fixed address */
    . = 0x3FFE0;
    .bench_result (NOLOAD) : {
        __bench_result_start = .;
        *(.bench_result)
        . = ALIGN(4);
        __bench_result_end = .;
    } > TCM

    /DISCARD/ : {
        *(.comment)
        *(.note.*)
        *(.eh_frame*)
    }
}
