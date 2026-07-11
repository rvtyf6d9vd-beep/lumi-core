#!/usr/bin/env python3
"""
Lumi V1 — ELF to Hex Memory Image Converter
用法: python3 elf2hex.py <elf_file> <output_hex> [--base-addr 0x80000000] [--mem-size 0x40000] [--word-width 128]
输出: hex 文件, 每行一个 memory word (Verilog $readmemh 兼容)
      默认 128-bit (匹配 AXI DATA_WIDTH), 可选 32-bit
"""
import argparse
import struct
import sys
from pathlib import Path

def parse_elf(data: bytes):
    """解析 ELF32 header, 返回 (entry, segments)"""
    if data[:4] != b'\x7fELF':
        raise ValueError("Not a valid ELF file")
    ei_class = data[4]
    if ei_class != 1:  # ELFCLASS32
        raise ValueError(f"Expected ELF32, got class={ei_class}")

    # ELF32 header
    e_entry = struct.unpack_from('<I', data, 24)[0]
    e_phoff = struct.unpack_from('<I', data, 28)[0]
    e_phentsize = struct.unpack_from('<H', data, 42)[0]
    e_phnum = struct.unpack_from('<H', data, 44)[0]

    segments = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type = struct.unpack_from('<I', data, off)[0]
        if p_type != 1:  # PT_LOAD
            continue
        p_offset = struct.unpack_from('<I', data, off + 4)[0]
        p_vaddr = struct.unpack_from('<I', data, off + 8)[0]
        p_filesz = struct.unpack_from('<I', data, off + 16)[0]
        p_memsz = struct.unpack_from('<I', data, off + 20)[0]
        seg_data = data[p_offset:p_offset + p_filesz]
        # Pad to memsz
        if p_memsz > p_filesz:
            seg_data += b'\x00' * (p_memsz - p_filesz)
        segments.append((p_vaddr, seg_data))

    return e_entry, segments


def extract_signature_symbols(elf_path: str):
    """使用 nm 提取 begin_signature / end_signature 地址"""
    import subprocess
    try:
        result = subprocess.run(
            ['riscv64-unknown-elf-nm', elf_path],
            capture_output=True, text=True, timeout=10
        )
        begin_sig = None
        end_sig = None
        for line in result.stdout.splitlines():
            parts = line.split()
            if len(parts) >= 3:
                if parts[2] == 'begin_signature':
                    begin_sig = int(parts[0], 16)
                elif parts[2] == 'end_signature':
                    end_sig = int(parts[0], 16)
        return begin_sig, end_sig
    except Exception:
        return None, None


def elf_to_hex(elf_path: str, hex_path: str, base_addr: int, mem_size: int, word_width: int = 128):
    """转换 ELF → hex memory image, word_width: 32 或 128"""
    data = Path(elf_path).read_bytes()
    entry, segments = parse_elf(data)

    # 创建内存映像
    mem = bytearray(mem_size)
    for vaddr, seg_data in segments:
        offset = vaddr - base_addr
        if offset < 0 or offset >= mem_size:
            print(f"[WARN] Segment at 0x{vaddr:08x} outside memory range [0x{base_addr:08x}, 0x{base_addr+mem_size:08x})")
            continue
        end = min(offset + len(seg_data), mem_size)
        mem[offset:end] = seg_data[:end - offset]

    # 写入 hex 文件
    bytes_per_word = word_width // 8  # 4 or 16
    hex_digits = word_width // 4      # 8 or 32
    with open(hex_path, 'w') as f:
        f.write(f"// Lumi V1 Memory Image — ELF: {elf_path}\n")
        f.write(f"// Entry: 0x{entry:08x}, Base: 0x{base_addr:08x}, Size: {mem_size} bytes, Width: {word_width}-bit\n")
        for i in range(0, len(mem), bytes_per_word):
            # 小端: 从低地址到高地址拼接 hex 字符串
            chunk = mem[i:i + bytes_per_word]
            # $readmemh: MSB first → 从高字节到低字节
            hex_str = ''.join(f'{b:02x}' for b in reversed(chunk))
            f.write(f"{hex_str}\n")

    # 提取签名信息
    begin_sig, end_sig = extract_signature_symbols(elf_path)
    sig_info = {
        'entry': entry,
        'begin_signature': begin_sig,
        'end_signature': end_sig
    }
    print(f"[elf2hex] Entry=0x{entry:08x}, "
          f"Segments={len(segments)}, "
          f"MemImage={hex_path}")
    if begin_sig is not None:
        print(f"[elf2hex] Signature: 0x{begin_sig:08x} ~ 0x{end_sig:08x}")

    return sig_info


def main():
    parser = argparse.ArgumentParser(description='ELF to Hex memory image converter')
    parser.add_argument('elf_file', help='Input ELF file')
    parser.add_argument('hex_file', help='Output hex file')
    parser.add_argument('--base-addr', type=lambda x: int(x, 0), default=0x00000000,
                        help='Memory base address (default: 0x0)')
    parser.add_argument('--mem-size', type=lambda x: int(x, 0), default=0x40000,
                        help='Memory size in bytes (default: 256KiB)')
    parser.add_argument('--word-width', type=int, default=128, choices=[32, 128],
                        help='Memory word width: 32 or 128 (default: 128 for AXI)')
    parser.add_argument('--sig-info', help='Output signature info YAML file')
    args = parser.parse_args()

    sig_info = elf_to_hex(args.elf_file, args.hex_file, args.base_addr, args.mem_size, args.word_width)

    if args.sig_info:
        import yaml
        with open(args.sig_info, 'w') as f:
            yaml.dump(sig_info, f, default_flow_style=False)
        print(f"[elf2hex] Signature info: {args.sig_info}")


if __name__ == '__main__':
    main()
