#!/usr/bin/env python3
"""Insert PC-zero debug into lumi_fetch.sv"""
filepath = 'src/rtl/core/lumi_fetch.sv'
with open(filepath, 'r') as f:
    content = f.read()

old = '            pc_reg <= pc_next;\n\n            // ERR-019'
new = """            pc_reg <= pc_next;

            // Debug: PC-zero detection
            if (pc_next == 32'h0 && pc_reg != 32'h0 && state_reg != ST_IDLE) begin
                $display("[FETCH-PC0] pc_reg=0x%08h -> pc_next=0x0 state=%d trap_v=%b br_v=%b pred_taken=%b pred_target=0x%08h btb_hit=%b",
                         pc_reg, state_reg, trap_redirect_valid, branch_redirect_valid,
                         f1_pred_taken_comb, f1_pred_target_comb, btb_hit);
            end

            // ERR-019"""

if old in content:
    content = content.replace(old, new, 1)
    with open(filepath, 'w') as f:
        f.write(content)
    print("OK: inserted FETCH-PC0 debug")
else:
    print("ERROR: pattern not found")
    # Show context around pc_reg <= pc_next
    lines = content.split('\n')
    for i, line in enumerate(lines):
        if 'pc_reg <= pc_next' in line:
            print(f"  Line {i+1}: {line}")
            for j in range(max(0,i-2), min(len(lines), i+5)):
                print(f"    {j+1}: {lines[j]}")
