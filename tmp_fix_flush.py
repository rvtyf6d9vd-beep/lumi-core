#!/usr/bin/env python3
"""Fix E1->M flush to not kill the branch instruction itself (ERR-020)"""
filepath = 'src/rtl/core/lumi_core_top.sv'
with open(filepath, 'r') as f:
    content = f.read()

old = """        end else if (e1_mispredict || trap_request) begin
            // ERR-019: flush E1\u2192M \u5bc4\u6c34\u7ebf\u5bc4\u5b58\u5668, \u6740\u6b7b\u8bef\u9884\u6d4b\u8def\u5f84\u4e0a\u7684\u6240\u6709\u63a8\u6d4b\u6307\u4ee4
            m_valid_r <= '0;
            m_exception_r <= '0;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_inst_r[i]    <= '0;
                m_result_r[i]  <= 32'h0;
                m_rd_r[i]      <= 5'h0;
            end
        end else begin"""

# Try alternate form with ASCII arrow
old2 = old.replace('\u2192', '->')

new = """        end else if (trap_request) begin
            // ERR-020: trap flush M (exception instruction doesn't commit)
            m_valid_r <= '0;
            m_exception_r <= '0;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_inst_r[i]    <= '0;
                m_result_r[i]  <= 32'h0;
                m_rd_r[i]      <= 5'h0;
            end
        end else if (e1_mispredict) begin
            // ERR-020: DON'T flush M on mispredict - let branch commit
            // The branch (JAL) needs to write ra before redirect takes effect.
            // E1 flush already prevents new speculative instructions from entering.
        end else begin"""

if old in content:
    content = content.replace(old, new, 1)
    with open(filepath, 'w') as f:
        f.write(content)
    print("OK: fixed E1->M flush (Unicode arrow)")
elif old2 in content:
    content = content.replace(old2, new, 1)
    with open(filepath, 'w') as f:
        f.write(content)
    print("OK: fixed E1->M flush (ASCII arrow)")
else:
    print("ERROR: pattern not found, showing context:")
    lines = content.split('\n')
    for i, line in enumerate(lines):
        if 'e1_mispredict' in line and 'trap_request' in line and 'flush' in line.lower():
            for j in range(max(0, i-2), min(len(lines), i+12)):
                print(f"  {j+1}: {lines[j]}")
            break
    # Also search for the exact text
    for i, line in enumerate(lines):
        if 'e1_mispredict || trap_request' in line:
            print(f"\nFound 'e1_mispredict || trap_request' at line {i+1}:")
            for j in range(max(0, i-2), min(len(lines), i+12)):
                print(f"  {j+1}: {lines[j]}")
            break
