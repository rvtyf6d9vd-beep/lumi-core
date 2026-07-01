#!/usr/bin/env python3
"""
Lumi-Core PRD 生成器 — 从 YAML 数据文件生成 product-requirements.html
用法:
    .venv/bin/python3 generate_prd.py              # 全量生成
    .venv/bin/python3 generate_prd.py --validate    # 仅校验数据
"""
import os, sys, glob, re
from html import escape as _esc

try:
    import yaml
except ImportError:
    print("错误: 需要 PyYAML。请运行: .venv/bin/pip install pyyaml")
    sys.exit(1)

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
DATA_DIR = os.path.join(SCRIPT_DIR, 'product-requirements')
OUTPUT = os.path.join(SCRIPT_DIR, 'product-requirements.html')

# 12 个 YAML 文件（按编号顺序）
YAML_FILES = [
    '01-about.yaml', '02-overview.yaml', '03-hardware.yaml',
    '04-deliverables.yaml', '05-safety.yaml', '06-security.yaml',
    '07-software.yaml', '08-milestones.yaml', '09-baseline.yaml',
    '10-traceability.yaml', '11-changelog.yaml', '12-deprecated.yaml',
]

# 需求表格的标准列
REQ_HEADERS = ['REQ-ID', '需求名称', '优先级', '状态', '版本', '基线', '来源', '关联文档', '验收标准', '变更日期', '备注']
STATUSES = ['Draft', 'Proposed', 'Approved', 'In-Design', 'Implemented', 'Verified', 'Deferred', 'Rejected']
PRIS = ['Must', 'Should', 'Could', "Won't"]
STATUS_CSS = {s: s.lower().replace('-', '-') for s in STATUSES}
STATUS_CSS['In-Design'] = 'in-design'
PRI_CSS = {'Must': 'must', 'Should': 'should', 'Could': 'could', "Won't": 'wont'}

# ── 工具栏分类映射（从 YAML categories 生成）──
TOOLBAR_GROUPS = {
    'PPA': ['PPA-PIPE', 'PPA-FREQ', 'PPA-IPC', 'PPA-AREA', 'PPA-PWR', 'PPA-INT'],
    'RTL': ['RTL-PROF', 'RTL-ISA', 'RTL-MEM', 'RTL-IF', 'RTL-FEAT', 'RTL-OTHER', 'INC'],
    '交付 & 安全': ['DEL', 'SAFE', 'SEC'],
    '软件依赖': ['SW-TOOL', 'SW-SDK', 'SW-FW', 'SW-IDE', 'SW-SIM', 'SW-DBG', 'SW-PERF'],
}
TOOLBAR_LABELS = {
    'PPA-PIPE': '流水线架构', 'PPA-FREQ': '频率目标', 'PPA-IPC': '性能基准',
    'PPA-AREA': '面积约束', 'PPA-PWR': '功耗预算', 'PPA-INT': '中断性能',
    'RTL-PROF': 'Profile 合规', 'RTL-ISA': 'ISA 扩展',
    'RTL-MEM': '内存模型', 'RTL-IF': '外部接口', 'RTL-FEAT': '调试与跟踪', 'RTL-OTHER': '其他RTL功能',
    'INC': '增量需求', 'DEL': '交付物', 'SAFE': '功能安全',
    'SEC': '信息安全', 'SW-TOOL': '工具链', 'SW-SDK': 'SDK', 'SW-FW': '固件',
    'SW-IDE': 'IDE', 'SW-SIM': '仿真器', 'SW-DBG': '调试工具', 'SW-PERF': '性能工具',
    'DEP': '废弃需求',
}

def esc(s):
    """HTML escape, handling None"""
    return _esc(str(s)) if s else ''

def load_yaml_files():
    """加载所有 YAML 文件，返回 [(filename, data), ...]"""
    result = []
    for fname in YAML_FILES:
        path = os.path.join(DATA_DIR, fname)
        if not os.path.exists(path):
            print(f"警告: 文件不存在 {fname}")
            continue
        with open(path, 'r', encoding='utf-8') as f:
            data = yaml.safe_load(f)
        result.append((fname, data or {}))
    return result

# ─────────────────── HTML 渲染函数 ───────────────────

def render_cover():
    return '''<div class="cover">
    <p class="doc-id">文档编号: LUMI-PRD-001 &nbsp;|&nbsp; 版本: 0.1-draft</p>
    <h1>Lumi-Core 产品需求文档</h1>
    <p style="font-size:1.1rem;color:#546e7a;margin-top:0.5rem;">Product Requirements Document (PRD)</p>
    <div class="meta">
        <p><strong>产品名称:</strong> Lumi-Core RISC-V Processor IP</p>
        <p><strong>目标市场:</strong> 汽车 / 工业控制 / 嵌入式消费电子</p>
        <p><strong>创建日期:</strong> 2026-06-29</p>
        <p><strong>最后更新:</strong> 2026-06-29</p>
        <p><strong>负责人:</strong> Lumitech</p>
    </div>
    <div class="confidential">CONFIDENTIAL &mdash; Lumi Project Internal</div>
</div>'''

def render_info_section(data):
    """渲染信息表格章节（sub_sections 结构）"""
    html = ''
    for sub in data.get('sub_sections', []):
        title = sub.get('title', '')
        if title:
            html += f'<h2>{esc(title)}</h2>\n'
        ttype = sub.get('table_type', 'data')
        rows = sub.get('rows', [])
        if ttype == 'meta':
            html += '<div class="table-wrapper"><table class="meta-table"><tbody>\n'
            for row in rows:
                html += f'<tr><td>{esc(row[0])}</td><td>{esc(row[1]) if len(row) > 1 else ""}</td></tr>\n'
            html += '</tbody></table></div>\n'
        else:  # data table
            headers = sub.get('headers', [])
            html += '<div class="table-wrapper"><table><thead><tr>'
            for h in headers:
                html += f'<th>{esc(h)}</th>'
            html += '</tr></thead><tbody>\n'
            for row in rows:
                html += '<tr class="example-row">'
                for i, h in enumerate(headers):
                    val = esc(row[i]) if i < len(row) else ''
                    html += f'<td><span class="ph">{val}</span></td>'
                html += '</tr>\n'
            html += '<tr>' + '<td></td>' * len(headers) + '</tr>\n'
            html += '</tbody></table></div>\n'
    return html

def render_req_header():
    """渲染需求表格的标准表头"""
    return '<tr>' + ''.join(f'<th>{h}</th>' for h in REQ_HEADERS) + '</tr>'

def render_req_rows(requirements):
    """渲染需求数据行"""
    if not requirements:
        return '<tr>' + '<td></td>' * len(REQ_HEADERS) + '</tr>\n'
    html = ''
    for r in requirements:
        pri = r.get('priority', 'Must')
        status = r.get('status', 'Draft')
        bl = r.get('baseline', '')
        pri_cls = PRI_CSS.get(pri, 'must')
        st_cls = STATUS_CSS.get(status, 'draft')
        bl_html = f'<span class="bl-badge">{esc(bl)}</span>' if bl else '<span class="bl-empty">(空)</span>'
        html += f'<tr class="example-row"><td>{esc(r.get("req_id",""))}</td>'
        html += f'<td><span class="ph">{esc(r.get("name",""))}</span></td>'
        html += f'<td><span class="pri pri-{pri_cls}">{esc(pri)}</span></td>'
        html += f'<td><span class="badge badge-{st_cls}">{esc(status)}</span></td>'
        html += f'<td>{esc(r.get("version","v0.1"))}</td><td>{bl_html}</td>'
        html += f'<td><span class="ph">{esc(r.get("source",""))}</span></td>'
        html += f'<td>{esc(r.get("ref_doc",""))}</td>'
        html += f'<td><span class="ph">{esc(r.get("acceptance",""))}</span></td>'
        html += f'<td><span class="ph">{esc(r.get("change_date",""))}</span></td>'
        html += f'<td>{esc(r.get("note",""))}</td></tr>\n'
    # 空行占位
    html += '<tr>' + '<td></td>' * len(REQ_HEADERS) + '</tr>\n'
    return html

def render_req_section(data):
    """渲染需求表格章节（categories 结构）"""
    html = ''
    parent_title = data.get('section', '')
    for cat in data.get('categories', []):
        title = cat.get('title', '')
        desc = cat.get('description', '')
        cat_id = cat.get('id', '')
        reqs = cat.get('requirements', [])
        # 判断 h2 还是 h3（根据标题编号格式）
        if re.match(r'^\d+\.\d+\.\d+', title):
            html += f'<h3>{esc(title)}</h3>\n'
        elif title and title != parent_title:
            html += f'<h2>{esc(title)}</h2>\n'
        if desc:
            html += f'<p class="req-desc">{esc(desc)}</p>\n'
        html += f'<div class="table-wrapper" data-cat="{esc(cat_id)}"><table><thead>\n'
        html += render_req_header()
        html += '\n</thead><tbody>\n'
        html += render_req_rows(reqs)
        html += '</tbody></table></div>\n'
    return html

def render_baseline_section(data):
    """渲染基线管理章节"""
    html = '<blockquote><strong>管理规则:</strong><ul style="margin-top:0.5rem;">\n'
    for rule in data.get('rules', []):
        html += f'<li>{esc(rule)}</li>\n'
    html += '</ul></blockquote>\n'
    html += '<h2>9.1 基线索引表</h2>\n<div class="table-wrapper"><table><thead><tr>'
    html += '<th>基线版本</th><th>定版日期</th><th>需求数量</th><th>YAML 文件</th><th>HTML 报告</th><th>说明</th>'
    html += '</tr></thead><tbody>\n'
    for bl in data.get('baselines', []):
        html += '<tr class="example-row">'
        html += f'<td><span class="bl-badge">{esc(bl.get("version",""))}</span></td>'
        html += f'<td><span class="ph">{esc(bl.get("date",""))}</span></td>'
        html += f'<td><span class="ph">{esc(bl.get("count",""))}</span></td>'
        y = bl.get('yaml', '')
        h = bl.get('html', '')
        html += f'<td><a href="{esc(y)}">{esc(os.path.basename(y))}</a></td>' if y else '<td></td>'
        html += f'<td><a href="{esc(h)}">{esc(os.path.basename(h))}</a></td>' if h else '<td></td>'
        html += f'<td><span class="ph">{esc(bl.get("note",""))}</span></td></tr>\n'
    html += '<tr>' + '<td></td>' * 6 + '</tr>\n</tbody></table></div>\n'
    return html

def render_deprecated_section(data):
    """渲染废弃需求章节"""
    headers = data.get('headers', [])
    rows = data.get('rows', [])
    html = f'<div class="table-wrapper" data-cat="DEP"><table><thead><tr>'
    for h in headers:
        html += f'<th>{esc(h)}</th>'
    html += '</tr></thead><tbody>\n'
    if rows:
        for row in rows:
            html += '<tr class="example-row">'
            for v in row:
                html += f'<td><span class="ph">{esc(v)}</span></td>'
            html += '</tr>\n'
    html += '<tr>' + '<td></td>' * len(headers) + '</tr>\n'
    html += '</tbody></table></div>\n'
    return html

def render_section(fname, data):
    """根据文件类型选择渲染方式"""
    sid = data.get('id', '')
    section_title = data.get('section', '')
    desc = data.get('description', '')
    html = f'<h1 id="{esc(sid)}">{esc(section_title)}</h1>\n'
    if desc:
        html += f'<p class="req-desc">{esc(desc)}</p>\n'
    if 'categories' in data:
        html += render_req_section(data)
    if 'sub_sections' in data:
        html += render_info_section(data)
    if 'rules' in data and 'categories' not in data and 'sub_sections' not in data:  # baseline
        html += render_baseline_section(data)
    elif 'headers' in data and fname == '12-deprecated.yaml':
        html += render_deprecated_section(data)
    elif 'sub_sections' not in data and 'categories' not in data:
        # fallback for simple sections
        html += render_info_section(data)
    return html

# ─────────────────── CSS ───────────────────

CSS = '''
:root {
    --bg:#fff;--text:#333;--heading:#1a1a2e;--accent:#16213e;--border:#e0e0e0;
    --code-bg:#f5f5f5;--table-header:#16213e;--table-header-text:#fff;
    --table-stripe:#f8f9fa;--note-bg:#e8f4fd;--note-border:#2196F3;--link:#0d47a1;
    --placeholder:#b0b0b0;
    --status-draft:#9e9e9e;--status-proposed:#ff9800;--status-approved:#1976d2;
    --status-in-design:#7b1fa2;--status-implemented:#388e3c;--status-verified:#2e7d32;
    --status-deferred:#f9a825;--status-rejected:#c62828;
    --priority-must:#c62828;--priority-should:#e65100;--priority-could:#1565c0;--priority-wont:#757575;
    --baseline-bg:#0d47a1;--baseline-text:#fff;
}
*{margin:0;padding:0;box-sizing:border-box}
body{font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,sans-serif;
    font-size:15px;line-height:1.7;color:var(--text);background:var(--bg);
    max-width:1100px;margin:0 auto;padding:2rem 2rem 4rem;padding-top:3.5rem}
.cover{text-align:center;padding:4rem 0;border-bottom:3px solid var(--accent);margin-bottom:3rem}
.cover h1{font-size:2.4rem;color:var(--accent);margin-bottom:1rem;font-weight:700}
.cover .doc-id{font-size:1.1rem;color:#78909c;margin-bottom:.5rem}
.cover .meta{font-size:.9rem;color:#90a4ae;margin-top:1.5rem;line-height:2}
.cover .confidential{display:inline-block;border:1px solid #c62828;color:#c62828;padding:.25rem 1rem;margin-top:1rem;font-size:.85rem;font-weight:600}
h1{font-size:1.8rem;color:var(--accent);margin:2.5rem 0 1rem;padding-bottom:.5rem;border-bottom:2px solid var(--border);page-break-before:always}
h1:first-of-type{page-break-before:avoid}
h2{font-size:1.4rem;color:#1a3a5c;margin:2rem 0 .8rem}
h3{font-size:1.15rem;color:#37474f;margin:1.5rem 0 .6rem}
p{margin:.8rem 0;text-align:justify}
.table-wrapper{overflow-x:auto;margin:1.2rem 0}
table{width:100%;border-collapse:collapse;font-size:.92rem}
th{background:var(--table-header);color:var(--table-header-text);padding:.6rem .8rem;text-align:left;font-weight:600;font-size:.85rem;text-transform:uppercase;letter-spacing:.05em;white-space:nowrap}
td{padding:.5rem .8rem;border-bottom:1px solid var(--border);vertical-align:top}
tr:nth-child(even) td{background:var(--table-stripe)}
.meta-table td:first-child{font-weight:600;color:#37474f;width:160px;white-space:nowrap}
.badge{display:inline-block;padding:.15rem .6rem;border-radius:3px;font-size:.8rem;font-weight:600;color:#fff;white-space:nowrap}
.badge-draft{background:var(--status-draft)}.badge-proposed{background:var(--status-proposed)}.badge-approved{background:var(--status-approved)}
.badge-in-design{background:var(--status-in-design)}.badge-implemented{background:var(--status-implemented)}.badge-verified{background:var(--status-verified)}
.badge-deferred{background:var(--status-deferred);color:#333}.badge-rejected{background:var(--status-rejected)}
.pri{display:inline-block;padding:.1rem .5rem;border-radius:3px;font-size:.78rem;font-weight:600;color:#fff}
.pri-must{background:var(--priority-must)}.pri-should{background:var(--priority-should)}.pri-could{background:var(--priority-could)}.pri-wont{background:var(--priority-wont)}
.bl-badge{display:inline-block;padding:.15rem .6rem;border-radius:3px;font-size:.8rem;font-weight:700;background:var(--baseline-bg);color:var(--baseline-text)}
.bl-empty{color:var(--placeholder);font-style:italic}
.ph{color:var(--placeholder);font-style:italic}
.example-row td{color:#888}
code{background:var(--code-bg);padding:.15rem .4rem;border-radius:3px;font-family:"SF Mono","Menlo","Consolas",monospace;font-size:.88em}
blockquote{background:var(--note-bg);border-left:4px solid var(--note-border);padding:.8rem 1.2rem;margin:1rem 0;font-size:.93rem;border-radius:0 6px 6px 0}
blockquote strong{color:#1565C0}
a{color:var(--link);text-decoration:none}a:hover{text-decoration:underline}
hr{border:none;border-top:2px solid var(--accent);margin:3rem 0 1rem}
.req-desc{margin:.6rem 0 1rem;color:#546e7a;font-size:.95rem;line-height:1.8}
#toolbar{position:fixed;top:0;left:0;right:0;z-index:1000;background:#16213e;color:#fff;padding:.5rem 1rem;display:flex;align-items:center;gap:.6rem;font-size:.85rem;box-shadow:0 2px 8px rgba(0,0,0,.3);flex-wrap:wrap}
#toolbar select,#toolbar button{padding:.3rem .6rem;border-radius:3px;font-size:.82rem;border:1px solid rgba(255,255,255,.3);cursor:pointer}
#toolbar select{background:#fff;color:#333}
#toolbar button{background:rgba(255,255,255,.15);color:#fff;transition:background .2s}
#toolbar button:hover{background:rgba(255,255,255,.3)}
#toolbar .tb-sep{width:1px;height:20px;background:rgba(255,255,255,.3)}
#toolbar input[type="text"]{padding:.3rem .5rem;border-radius:3px;border:1px solid rgba(255,255,255,.3);width:80px;background:rgba(255,255,255,.9);color:#333;font-size:.82rem}
td[contenteditable="true"]{outline:2px solid #1976d2;background:#e3f2fd!important}
.row-btn{display:inline-block;padding:.1rem .4rem;margin:0 2px;border:none;border-radius:3px;cursor:pointer;font-size:.75rem;font-weight:600}
.row-btn-del{background:#ef5350;color:#fff}.row-btn-del:hover{background:#c62828}
.modal-overlay{position:fixed;top:0;left:0;right:0;bottom:0;background:rgba(0,0,0,.5);z-index:2000;display:flex;align-items:center;justify-content:center}
.modal-box{background:#fff;border-radius:8px;padding:1.5rem;max-width:900px;width:92%;max-height:80vh;overflow-y:auto;box-shadow:0 4px 20px rgba(0,0,0,.3)}
.modal-box h3{margin-bottom:1rem;color:#16213e}
.modal-actions{display:flex;gap:.5rem;margin-top:1rem;justify-content:flex-end}
.modal-actions button{padding:.4rem 1.2rem;border:none;border-radius:4px;cursor:pointer;font-size:.9rem;font-weight:600}
.btn-confirm{background:#1976d2;color:#fff}.btn-confirm:hover{background:#1565c0}
.btn-cancel{background:#e0e0e0;color:#333}.btn-cancel:hover{background:#bdbdbd}
.import-file-zone{border:2px dashed #90a4ae;border-radius:6px;padding:2rem;text-align:center;color:#78909c;margin:1rem 0}
.import-file-zone.dragover{border-color:#1976d2;background:#e3f2fd}
.import-preview{max-height:300px;overflow:auto;margin:1rem 0}
.import-preview table{font-size:.85rem}
tr.filtered-out{display:none}
@media print{body{font-size:11pt;max-width:none;padding:0;padding-top:0}h1{page-break-before:always}h1:first-of-type{page-break-before:avoid}
table{page-break-inside:avoid}.badge,.pri,.bl-badge{border:1px solid #999}
#toolbar,.row-btn,.modal-overlay{display:none!important}tr.filtered-out{display:table-row!important}}
'''

# ─────────────────── JavaScript ───────────────────

def gen_js():
    """生成交互 JavaScript（从 YAML 数据动态构建分类映射）"""
    return '''<script>
var STATUSES=['Draft','Proposed','Approved','In-Design','Implemented','Verified','Deferred','Rejected'];
var STATUS_CSS={Draft:'draft',Proposed:'proposed',Approved:'approved','In-Design':'in-design',Implemented:'implemented',Verified:'verified',Deferred:'deferred',Rejected:'rejected'};
var PRIS=['Must','Should','Could',"Won't"];
var PRI_CSS={Must:'must',Should:'should',Could:'could',"Won't":'wont'};
var CSV_HEADERS=['REQ-ID','需求名称','优先级','状态','版本','基线标签','来源','关联文档','验收标准','变更日期','备注'];
function today(){var d=new Date();return d.getFullYear()+'-'+String(d.getMonth()+1).padStart(2,'0')+'-'+String(d.getDate()).padStart(2,'0');}
function getReqTable(cat){var w=document.querySelector('.table-wrapper[data-cat="'+cat+'"]');return w?w.querySelector('table'):null;}
function getCurCat(){return document.getElementById('sel-cat').value;}
function mkBadge(s){return '<span class="badge badge-'+(STATUS_CSS[s]||'draft')+'" onclick="cycleStatus(this)" title="点击切换状态" style="cursor:pointer;">'+s+'</span>';}
function mkPri(p){return '<span class="pri pri-'+(PRI_CSS[p]||'must')+'" onclick="cyclePri(this)" title="点击切换优先级" style="cursor:pointer;">'+p+'</span>';}
function mkBL(bl){return bl?'<span class="bl-badge">'+bl+'</span>':'<span class="bl-empty">(空)</span>';}
function mkActions(){return '<button class="row-btn" onclick="editRow(this)" title="编辑">&#9998;</button><button class="row-btn row-btn-del" onclick="deleteRow(this)" title="删除">&times;</button>';}
function createRow(d){
    var tr=document.createElement('tr'),cat=d.cat||getCurCat(),isDep=(cat==='DEP');
    var cells;
    if(isDep){cells=[d.reqid||'LUMI-DEP-NNN',d.name||'(填写)',mkPri(d.pri||'Must'),d.reason||'(填写)',d.depDate||today(),d.replace||'--',d.impact||'--',d.approver||'--',mkActions()];}
    else{cells=[d.reqid||'LUMI-'+cat.replace(/-/g,'').substring(0,4).toUpperCase()+'-NNN',d.name||'(填写)',mkPri(d.pri||'Must'),mkBadge(d.status||'Draft'),d.ver||'v0.1',mkBL(d.bl||''),d.source||'(填写)',d.ref||'--',d.accept||'(填写)',d.date||today(),d.note||'--',mkActions()];}
    cells.forEach(function(h){var td=document.createElement('td');td.innerHTML=h;tr.appendChild(td);});return tr;
}
function addRow(){
    var cat=getCurCat(),table=getReqTable(cat);if(!table)return;
    var tbody=table.querySelector('tbody'),maxNum=0;
    tbody.querySelectorAll('tr').forEach(function(r){var m=(r.cells[0].textContent||'').match(/(\\d+)$/);if(m)maxNum=Math.max(maxNum,parseInt(m[1]));});
    var pfx=cat==='DEP'?'LUMI-DEP':'LUMI-'+cat.replace(/-/g,'').substring(0,4).toUpperCase();
    var row=createRow({reqid:pfx+'-'+String(maxNum+1).padStart(3,'0'),cat:cat});
    var last=tbody.lastElementChild;
    if(last){var allE=Array.from(last.cells).every(function(c){return !c.textContent.trim();});if(allE)tbody.insertBefore(row,last);else tbody.appendChild(row);}
    else tbody.appendChild(row);
    row.scrollIntoView({behavior:'smooth',block:'center'});row.style.background='#fff9c4';setTimeout(function(){row.style.background='';},2000);
}
function deleteRow(btn){var tr=btn.closest('tr');if(confirm('确定删除: '+tr.cells[0].textContent+' ?'))tr.remove();}
function editRow(btn){
    var tr=btn.closest('tr'),editing=tr.dataset.editing==='1';
    if(!editing){var idx=tr.cells.length<=8?[0,1,3,4,5,6]:[0,1,4,6,7,8,10];
        idx.forEach(function(i){if(tr.cells[i])tr.cells[i].setAttribute('contenteditable','true');});
        tr.dataset.editing='1';btn.innerHTML='&#10003;';btn.style.background='#4caf50';btn.style.color='#fff';
    }else{tr.querySelectorAll('td[contenteditable]').forEach(function(td){td.removeAttribute('contenteditable');});
        tr.dataset.editing='0';btn.innerHTML='&#9998;';btn.style.background='';btn.style.color='';}
}
function cycleStatus(el){var cur=el.textContent,idx=STATUSES.indexOf(cur),next=STATUSES[(idx+1)%STATUSES.length];
    el.className='badge badge-'+STATUS_CSS[next];el.textContent=next;var tr=el.closest('tr');if(tr&&tr.cells[9])tr.cells[9].textContent=today();}
function cyclePri(el){var cur=el.textContent,idx=PRIS.indexOf(cur),next=PRIS[(idx+1)%PRIS.length];
    el.className='pri pri-'+PRI_CSS[next];el.textContent=next;}
function applyFilters(){
    var st=document.getElementById('flt-status').value,pr=document.getElementById('flt-pri').value,txt=document.getElementById('flt-text').value.toLowerCase();
    document.querySelectorAll('.table-wrapper[data-cat] tbody tr').forEach(function(row){
        var show=true,stC=row.cells[3];if(st&&stC){var b=stC.querySelector('.badge');if(!b||b.textContent!==st)show=false;}
        if(pr&&row.cells[2]){var p=row.cells[2].querySelector('.pri');if(!p||p.textContent!==pr)show=false;}
        if(txt&&row.textContent.toLowerCase().indexOf(txt)===-1)show=false;
        row.classList.toggle('filtered-out',!show);});
}
function resetFilters(){document.getElementById('flt-status').value='';document.getElementById('flt-pri').value='';document.getElementById('flt-text').value='';applyFilters();}
function tagBaseline(){
    var bl=document.getElementById('bl-ver').value.trim();if(!bl){alert('请输入基线版本号');return;}
    var desc=document.getElementById('bl-desc').value.trim(),approver=document.getElementById('bl-appr').value.trim();
    var ok=['Approved','In-Design','Implemented','Verified'],all=[],byCat={},bySt={},byPri={};
    document.querySelectorAll('.table-wrapper[data-cat]').forEach(function(w){
        var cat=w.getAttribute('data-cat');if(cat==='DEP')return;
        w.querySelectorAll('tbody tr').forEach(function(row){
            if(!row.cells[3])return;var badge=row.cells[3].querySelector('.badge');if(!badge)return;
            var status=badge.textContent;if(ok.indexOf(status)<0)return;
            var priEl=row.cells[2]?row.cells[2].querySelector('.pri'):null,blEl=row.cells[5];
            var req={cat:cat,reqid:(row.cells[0]||{}).textContent||'',name:(row.cells[1]||{}).textContent||'',
                pri:priEl?priEl.textContent:'Must',status:status,ver:(row.cells[4]||{}).textContent||'v0.1',
                source:(row.cells[6]||{}).textContent||'',ref:(row.cells[7]||{}).textContent||'--',
                accept:(row.cells[8]||{}).textContent||'',date:(row.cells[9]||{}).textContent||'',note:(row.cells[10]||{}).textContent||'--'};
            all.push(req);byCat[cat]=(byCat[cat]||0)+1;bySt[status]=(bySt[status]||0)+1;byPri[req.pri]=(byPri[req.pri]||0)+1;
            if(blEl)blEl.innerHTML=mkBL(bl);});});
    if(!all.length){alert('未找到 Approved 或以上状态的需求');return;}
    var now=new Date(),ts=now.getFullYear()+'-'+String(now.getMonth()+1).padStart(2,'0')+'-'+String(now.getDate()).padStart(2,'0')+'T'+String(now.getHours()).padStart(2,'0')+':'+String(now.getMinutes()).padStart(2,'0')+':00+08:00';
    var y='# Lumi-Core 需求基线快照\\nbaseline:\\n  version: "'+bl+'"\\n  frozen_at: "'+ts+'"\\n  description: "'+(desc||'')+'"\\n  approver: "'+(approver||'')+'"\\n  statistics:\\n    total: '+all.length+'\\n    by_category:\\n';
    Object.keys(byCat).sort().forEach(function(k){y+='      '+k+': '+byCat[k]+'\\n';});
    y+='    by_status:\\n';Object.keys(bySt).sort().forEach(function(k){y+='      '+k+': '+bySt[k]+'\\n';});
    y+='    by_priority:\\n';Object.keys(byPri).sort().forEach(function(k){y+='      '+k+': '+byPri[k]+'\\n';});
    y+='\\nrequirements:\\n';
    all.forEach(function(r){y+='  - category: '+r.cat+'\\n    req_id: "'+r.reqid+'"\\n    name: "'+r.name.replace(/"/g,'\\\\"')+'"\\n    priority: "'+r.pri+'"\\n    status: "'+r.status+'"\\n    version: "'+r.ver+'"\\n    baseline: "'+bl+'"\\n    source: "'+r.source.replace(/"/g,'\\\\"')+'"\\n    ref_doc: "'+r.ref.replace(/"/g,'\\\\"')+'"\\n    acceptance: "'+r.accept.replace(/"/g,'\\\\"')+'"\\n    change_date: "'+r.date+'"\\n    note: "'+r.note.replace(/"/g,'\\\\"')+'"\\n';});
    var blob=new Blob([y],{type:'text/yaml;charset=utf-8'}),a=document.createElement('a');
    a.href=URL.createObjectURL(blob);a.download='baseline-'+bl+'.yaml';a.click();URL.revokeObjectURL(a.href);
    alert('基线定版完成! '+all.length+' 条需求已打标 '+bl);}
function exportHTML(){
    var c=document.documentElement.cloneNode(true),tb=c.querySelector('#toolbar');if(tb)tb.remove();
    c.querySelectorAll('.row-btn').forEach(function(b){b.remove();});
    c.querySelectorAll('[contenteditable]').forEach(function(e){e.removeAttribute('contenteditable');});
    c.querySelectorAll('script').forEach(function(s){s.remove();});
    c.querySelectorAll('.filtered-out').forEach(function(e){e.classList.remove('filtered-out');});
    c.querySelectorAll('tr').forEach(function(r){r.style.background='';});
    var blob=new Blob(['<!DOCTYPE html>\\n'+c.outerHTML],{type:'text/html;charset=utf-8'}),a=document.createElement('a');
    a.href=URL.createObjectURL(blob);a.download='product-requirements-'+today()+'.html';a.click();URL.revokeObjectURL(a.href);}
function openImport(){
    var o=document.createElement('div');o.className='modal-overlay';
    var catOpts='';document.querySelectorAll('#sel-cat option').forEach(function(o){catOpts+='<option value="'+o.value+'">'+o.textContent+'</option>';});
    o.innerHTML='<div class="modal-box"><h3>\u6279\u91cf\u5bfc\u5165\u9700\u6c42 (CSV)</h3>'
        +'<p><strong>\u6b65\u9aa4:</strong></p>'
        +'<p>1. <a href="#" onclick="downloadTemplate();return false;">\u4e0b\u8f7d\u5bfc\u5165\u6a21\u677f (CSV)</a> \u2014 \u7528 Excel \u6216\u6587\u672c\u7f16\u8f91\u5668\u586b\u5199</p>'
        +'<p>2. \u9009\u62e9\u5bfc\u5165\u76ee\u6807\u5206\u7c7b\uff08\u5bfc\u5165\u7684\u6240\u6709\u884c\u5c06\u5f52\u5165\u6b64\u5206\u7c7b\uff09:</p>'
        +'<select id="imp-cat" style="padding:.4rem;margin:.3rem 0;width:200px;">'+catOpts+'</select>'
        +'<blockquote style="margin:.5rem 0;font-size:.85rem;"><strong>\u63d0\u793a:</strong> CSV \u4e2d\u7684 REQ-ID \u524d\u7f00\u5e94\u4e0e\u76ee\u6807\u5206\u7c7b\u5339\u914d\uff08\u5982 RTL-ISA\u3001SAFE\u3001DEL\uff09\u3002\u6a21\u677f\u4e2d\u5305\u542b\u591a\u4e2a\u5206\u7c7b\u7684\u793a\u4f8b\u3002</blockquote>'
        +'<div class="import-file-zone" id="drop-zone"><p>\u62d6\u62fd CSV \u5230\u6b64\u5904\u6216\u70b9\u51fb\u9009\u62e9\u6587\u4ef6</p><input type="file" id="imp-file" accept=".csv,.txt" style="margin-top:.5rem;"></div>'
        +'<div id="imp-preview" class="import-preview"></div><div class="modal-actions"><button class="btn-cancel" onclick="closeModal()">\u53d6\u6d88</button>'
        +'<button class="btn-confirm" id="btn-do-import" onclick="confirmImport()" disabled>\u786e\u8ba4\u5bfc\u5165</button></div></div>';
    document.body.appendChild(o);o.addEventListener('click',function(e){if(e.target===o)closeModal();});
    document.getElementById('imp-file').addEventListener('change',handleImportFile);
    var z=document.getElementById('drop-zone');
    z.addEventListener('dragover',function(e){e.preventDefault();z.classList.add('dragover');});
    z.addEventListener('dragleave',function(){z.classList.remove('dragover');});
    z.addEventListener('drop',function(e){e.preventDefault();z.classList.remove('dragover');if(e.dataTransfer.files.length){document.getElementById('imp-file').files=e.dataTransfer.files;handleImportFile();}});}
function closeModal(){var m=document.querySelector('.modal-overlay');if(m)m.remove();}
function parseCSVLine(l){var r=[],c='',q=false;for(var i=0;i<l.length;i++){var ch=l[i];if(q){if(ch==='"'&&l[i+1]==='"'){c+='"';i++;}else if(ch==='"'){q=false;}else{c+=ch;}}else{if(ch==='"'){q=true;}else if(ch===','){r.push(c.trim());c='';}else{c+=ch;}}}r.push(c.trim());return r;}
var importData=null;
function handleImportFile(){var f=document.getElementById('imp-file');if(!f.files.length)return;
    var r=new FileReader();r.onload=function(e){var t=e.target.result;if(t.charCodeAt(0)===0xFEFF)t=t.slice(1);
        var lines=t.split(/\\r?\\n/);if(lines.length<2){alert('CSV 至少需要表头和一行数据');return;}
        var rows=[];for(var i=1;i<lines.length;i++){var l=lines[i].trim();if(!l)continue;var v=parseCSVLine(l);if(v.length<2)continue;var row={};CSV_HEADERS.forEach(function(h,idx){row[h]=v[idx]||'';});rows.push(row);}
        importData=rows;var h='<p><strong>预览 ('+rows.length+' 条):</strong></p><table><thead><tr>';CSV_HEADERS.forEach(function(k){h+='<th>'+k+'</th>';});h+='</tr></thead><tbody>';
        rows.forEach(function(r){h+='<tr>';CSV_HEADERS.forEach(function(k){var v=r[k]||'';h+='<td>'+(v.length>25?v.substring(0,25)+'...':v)+'</td>';});h+='</tr>';});
        h+='</tbody></table>';document.getElementById('imp-preview').innerHTML=h;document.getElementById('btn-do-import').disabled=false;};r.readAsText(f.files[0],'UTF-8');}
function confirmImport(){if(!importData||!importData.length){alert('无数据');return;}
    var cat=document.getElementById('imp-cat').value,table=getReqTable(cat);if(!table){alert('未找到分类');return;}
    var tbody=table.querySelector('tbody'),count=0;
    importData.forEach(function(d){if(!d['REQ-ID']&&!d['需求名称'])return;var row=createRow({reqid:d['REQ-ID'],name:d['需求名称'],pri:d['优先级']||'Must',status:d['状态']||'Draft',ver:d['版本']||'v0.1',bl:d['基线标签']||'',source:d['来源'],ref:d['关联文档']||'--',accept:d['验收标准'],date:d['变更日期']||today(),note:d['备注']||'--',cat:cat});tbody.appendChild(row);count++;});
    closeModal();importData=null;var s=document.querySelector('[data-cat="'+cat+'"]');if(s)s.scrollIntoView({behavior:'smooth'});alert('成功导入 '+count+' 条到: '+cat);}
function downloadTemplate(){
    var h=CSV_HEADERS.join(',');
    var rows=[
        'LUMI-ISA-001,RV32I \u57fa\u7840\u6574\u6570\u6307\u4ee4\u96c6,Must,Approved,v1.0,,RISC-V Spec,--,\u5168\u90e8 40 \u6761 RV32I \u6307\u4ee4\u901a\u8fc7\u5408\u89c4\u6d4b\u8bd5,2026-06-26,--',
        'LUMI-PIPE-001,5\u7ea7\u987a\u5e8f\u6267\u884c\u6d41\u6c34\u7ebf,Must,Draft,v0.1,,\u67b6\u6784\u8bbe\u8ba1,--,\u6d41\u6c34\u7ebf\u6df1\u5ea6\u4e3a 5 \u7ea7,,--',
        'LUMI-FREQ-001,\u76ee\u6807\u4e3b\u9891 >=500MHz,Must,Draft,v0.1,,\u5ba2\u6237\u9700\u6c42,--,"TSMC 28nm \u4e0b\u8fbe\u5230 >=500MHz",,--',
        'LUMI-SAFE-001,PMP \u7269\u7406\u5185\u5b58\u4fdd\u62a4,Must,Proposed,v1.0,,RT-Europa,--,PMP \u8d8a\u754c\u8bbf\u95ee\u89e6\u53d1\u5f02\u5e38,,--',
        'LUMI-DEL-001,RTL \u6e90\u7801 (Verilog),Must,Draft,v0.1,,\u5ba2\u6237\u8981\u6c42,--,lint \u68c0\u67e5\u65e0 warning,,--',
        'LUMI-TOOL-001,GCC 14+ \u652f\u6301,Must,Draft,v0.1,,\u5ba2\u6237\u8981\u6c42,--,\u53ef\u7f16\u8bd1\u5e76\u8fd0\u884c\u88f8\u673a\u7a0b\u5e8f,,--'
    ];
    var content='\\uFEFF'+h+'\\n'+rows.join('\\n')+'\\n';
    var b=new Blob([content],{type:'text/csv;charset=utf-8'}),a=document.createElement('a');
    a.href=URL.createObjectURL(b);a.download='prd-import-template.csv';a.click();URL.revokeObjectURL(a.href);
}
(function(){
    document.querySelectorAll('.table-wrapper[data-cat] thead tr').forEach(function(tr){var th=document.createElement('th');th.textContent='操作';th.style.width='60px';tr.appendChild(th);});
    document.querySelectorAll('.table-wrapper[data-cat] tbody tr').forEach(function(row){if(row.cells.length>=7){var td=document.createElement('td');td.innerHTML=mkActions();row.appendChild(td);}});
})();
</script>'''

def gen_toolbar():
    """生成工具栏 HTML"""
    html = '<div id="toolbar"><span style="font-weight:700;">PRD Editor</span><div class="tb-sep"></div>\n'
    html += '<select id="sel-cat">\n'
    for group, cats in TOOLBAR_GROUPS.items():
        html += f'    <optgroup label="{esc(group)}">\n'
        for cat_id in cats:
            label = TOOLBAR_LABELS.get(cat_id, cat_id)
            html += f'        <option value="{cat_id}">{esc(label)}</option>\n'
        html += '    </optgroup>\n'
    html += '    <option value="DEP">废弃需求</option>\n</select>\n'
    html += '''<button onclick="addRow()" title="添加行">+ 添加行</button><div class="tb-sep"></div>
<select id="flt-status" onchange="applyFilters()"><option value="">状态: 全部</option>'''
    for s in STATUSES:
        html += f'<option value="{s}">{s}</option>'
    html += '</select><select id="flt-pri" onchange="applyFilters()"><option value="">优先级: 全部</option>'
    for p in PRIS:
        html += f'<option value="{p}">{p}</option>'
    html += '</select>'
    html += '<input type="text" id="flt-text" placeholder="搜索..." oninput="applyFilters()">'
    html += '<button onclick="resetFilters()">重置筛选</button><div class="tb-sep"></div>'
    html += '<input type="text" id="bl-ver" placeholder="BL-1.0" style="width:70px;">'
    html += '<input type="text" id="bl-desc" placeholder="基线说明" style="width:120px;">'
    html += '<input type="text" id="bl-appr" placeholder="审批人" style="width:80px;">'
    html += '<button onclick="tagBaseline()" title="基线定版">基线定版</button><div class="tb-sep"></div>'
    html += '<button onclick="openImport()">导入 CSV</button><button onclick="exportHTML()">导出 HTML</button>\n</div>'
    return html

# ─────────────────── 主生成函数 ───────────────────

def generate():
    """从 YAML 生成完整 HTML"""
    sections = load_yaml_files()
    if not sections:
        print("错误: 未找到任何 YAML 文件")
        return False

    html = '<!DOCTYPE html>\n<html lang="zh-CN">\n<head>\n'
    html += '    <meta charset="UTF-8">\n'
    html += '    <meta name="viewport" content="width=device-width, initial-scale=1.0">\n'
    html += '    <title>Lumi-Core 产品需求文档 (PRD)</title>\n'
    html += f'    <style>{CSS}</style>\n</head>\n<body>\n\n'

    # Cover
    html += render_cover() + '\n\n'

    # Sections
    for fname, data in sections:
        html += f'<!-- ══════ {data.get("section", fname)} ══════ -->\n'
        html += render_section(fname, data) + '\n'

    # Footer
    html += '<hr>\n<p style="text-align:center;color:#90a4ae;font-size:.85rem;margin-top:2rem;">\n'
    html += '    Lumi-Core Product Requirements Document &mdash; Confidential<br>\n'
    html += '    自动生成自 YAML 数据 &nbsp;|&nbsp; 模板版本 2.0\n</p>\n\n'

    # Toolbar + JS
    html += gen_toolbar() + '\n'
    html += gen_js() + '\n'
    html += '</body>\n</html>\n'

    with open(OUTPUT, 'w', encoding='utf-8') as f:
        f.write(html)

    print(f'生成完成: {OUTPUT}')
    print(f'  章节数: {len(sections)}')
    cat_count = sum(len(d.get('categories', [])) for _, d in sections)
    print(f'  分类表格: {cat_count}')
    return True

# ─────────────────── 校验 ───────────────────

def validate():
    """校验 YAML 数据完整性"""
    sections = load_yaml_files()
    errors = []
    all_req_ids = []

    for fname, data in sections:
        if not data.get('section'):
            errors.append(f'{fname}: 缺少 section 字段')
        for cat in data.get('categories', []):
            if not cat.get('id'):
                errors.append(f'{fname}: 分类缺少 id')
            for req in cat.get('requirements', []):
                rid = req.get('req_id', '')
                if not rid:
                    errors.append(f'{fname}/{cat.get("id","?")}: 需求缺少 req_id')
                elif rid in all_req_ids:
                    errors.append(f'{fname}: REQ-ID 重复: {rid}')
                else:
                    all_req_ids.append(rid)
                if req.get('priority') and req['priority'] not in PRIS:
                    errors.append(f'{rid}: 非法优先级: {req["priority"]}')
                if req.get('status') and req['status'] not in STATUSES:
                    errors.append(f'{rid}: 非法状态: {req["status"]}')

    if errors:
        print('校验失败:')
        for e in errors:
            print(f'  !! {e}')
        return False
    else:
        print(f'校验通过: {len(all_req_ids)} 条需求, REQ-ID 全部唯一, 状态/优先级合法。')
        return True

# ─────────────────── 入口 ───────────────────

if __name__ == '__main__':
    if '--validate' in sys.argv:
        sys.exit(0 if validate() else 1)
    else:
        if not generate():
            sys.exit(1)

