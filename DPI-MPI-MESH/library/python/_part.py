import xml.etree.ElementTree as ET
import matplotlib.pyplot as plt
import networkx as nx
import hashlib
from collections import Counter
from collections import defaultdict, deque

def canonical_label(node):
    return node.get("module", "")   

def node_hash(label, child_hashes, digest_bytes=16):
    child_hashes_sorted = sorted(child_hashes)
    combined = f"{label}|{len(child_hashes_sorted)}|" + "|".join(child_hashes_sorted)
    return hashlib.blake2b(combined.encode('utf-8'), digest_size=digest_bytes).hexdigest()


def merkle_hash_all(G):                     # G is a NetworkX DiGraph
    topo = list(nx.topological_sort(G)) 
    h    = {}                             

    for n in reversed(topo):             
        label = canonical_label(G.nodes[n])
        children = list(G.successors(n))
        child_hashes = [h[c] for c in children]
        h[n] = node_hash(label, child_hashes)

    return h                              

def build_hierarchy_graph(xml_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()
    cells = root.find("cells")
    
    G = nx.DiGraph()

    def recurse_add(cell_elem, parent_hier=None):
        for cell in cell_elem:
            name = cell.attrib["name"]
            submod = cell.attrib["submodname"]
            hier = cell.attrib["hier"]
            label = f"{name}\n[{submod}]"
            G.add_node(hier, label=label)
            if parent_hier:
                G.add_edge(parent_hier, hier)
            recurse_add(cell, hier)

    recurse_add(cells)
    return G

def colour_repeats(G, node_hash):
    palette = {}
    for h in node_hash.values():
        if h not in palette and list(node_hash.values()).count(h) > 1:
            palette[h] = f"C{len(palette)%50}"  # cycle 50 colours
    col = [palette.get(node_hash[n], "lightgrey") for n in G.nodes()]
    pos = nx.nx_agraph.graphviz_layout(G, prog="dot")  # hierarchical layout
    nx.draw(G, pos, node_color=col, with_labels=False, node_size=150)
    plt.show()

def export_interactive_html_with_hashes(G, node_hash, html_file="module_hierarchy.html"):
    from pyvis.network import Network

    net = Network(height="900px", width="100%", directed=True, notebook=False)
    net.force_atlas_2based()

    
    hash_counts = Counter(node_hash.values())
    
    color_map = {}
    # palette = ["#ff6f61", "#6b5b95", "#88b04b", "#f7cac9", "#92a8d1",
    #            "#955251", "#b565a7", "#009b77", "#dd4124", "#d65076",
    #            "#ff6f61", "#6b5b95", "#88b04b", "#f7cac9", "#92a8d1",
    #            "#955251", "#b565a7", "#009b77", "#dd4124", "#d65076",
    #            "#ff6f61", "#6b5b95", "#88b04b", "#f7cac9", "#92a8d1",
    #            "#955251", "#b565a7", "#009b77", "#dd4124", "#d65076",
    #            "#ff6f61", "#6b5b95", "#88b04b", "#f7cac9", "#92a8d1",
    #            "#955251", "#b565a7", "#009b77", "#dd4124", "#d65076",
    #            "#ff6f61", "#6b5b95", "#88b04b", "#f7cac9", "#92a8d1",
    #            "#955251", "#b565a7", "#009b77", "#dd4124", "#d65076"]
    palette = ['#0000ff', '#1effe5', '#59ff83', '#95ff3a', '#d5ff16',
               '#ffe600', '#ff9f00', '#ff5b00', '#ff1a00', '#ff0038',
               '#ff008f', '#e200ff', '#9f00ff', '#5900ff', '#0b00ff',
               '#00d9ff', '#00ff8b', '#2fff00', '#87ff00', '#d3ff00',
               '#ffe000', '#ff9900', '#ff4d00', '#ff0000', '#ff0062',
               '#e100ff', '#9b00ff', '#5100ff', '#000cff', '#00c8ff',
               '#00ff76', '#23ff00', '#7bff00', '#d0ff00', '#ffdb00',
               '#ff9400', '#ff4300', '#ff000c', '#ff004b', '#dc00ff',
               '#9600ff', '#4800ff', '#0017ff', '#00b7ff', '#00ff61',
               '#17ff00', '#76ff00', '#cbff00', '#ffd600', '#ffd6ff']


    color_index = 0

    for node, h in node_hash.items():
        data = G.nodes[node]
        label = data.get("module", str(node))

        if hash_counts[h] > 1:
            # it it is not unique(repeted) then assign colour to it
            if h not in color_map:
                color_map[h] = palette[color_index % len(palette)]
                color_index += 1
            color = color_map[h]
        else:
            color = "#d3d3d3"  # light gray for unique

        net.add_node(node, label=label, title=f"Hash: {h}", shape="box", color=color)

    for u, v in G.edges():
        net.add_edge(u, v)

    net.write_html(html_file)
    print(f"Interactive graph with Merkle hashes saved to {html_file}")


def find_highest_level_repeats(G, node_hash):
    roots = [n for n in G.nodes if G.in_degree(n) == 0]
    visited = set()
    queue = deque(roots)
    level = 0

    while queue:
        level_size = len(queue)
        level_hashes = defaultdict(list)

        for _ in range(level_size):
            node = queue.popleft()
            if node in visited:
                continue
            visited.add(node)

            h = node_hash[node]
            level_hashes[h].append(node)

            for child in G.successors(node):
                if child not in visited:
                    queue.append(child)

        repeated_hashes = {h: nodes for h, nodes in level_hashes.items() if len(nodes) > 1}
        if repeated_hashes:
            print(f"Repeated structures found at level {level}:")
            for h, nodes in repeated_hashes.items():
                module_names = [G.nodes[n].get("module", str(n)) for n in nodes]
                print(f"  ↳ Hash: {h} (count={len(nodes)}) → Modules: {module_names}")
            return repeated_hashes

        level += 1

    print("No repeated structures found at any level.")
    return {}


if __name__ == "__main__":
    xml_path = "../xml/calculator.xml" 
    G = build_hierarchy_graph(xml_path)
    H=merkle_hash_all(G)
    find_highest_level_repeats(G, H)
    colour_repeats(G, H)
    export_interactive_html_with_hashes(G, H)
