import xml.etree.ElementTree as ET
import matplotlib.pyplot as plt
import networkx as nx
import hashlib
from collections import Counter, defaultdict, deque


def canonical_label(node):
    return node.get("module", "")


def node_hash(label, child_hashes, digest_bytes=16):
    child_hashes_sorted = sorted(child_hashes)
    combined = f"{label}|{len(child_hashes_sorted)}|" + "|".join(child_hashes_sorted)
    return hashlib.blake2b(combined.encode("utf-8"), digest_size=digest_bytes).hexdigest()


def merkle_hash_all(G):
    topo = list(nx.topological_sort(G))
    h = {}

    for n in reversed(topo):
        label = canonical_label(G.nodes[n])
        children = list(G.successors(n))
        child_hashes = [h[c] for c in children]
        h[n] = node_hash(label, child_hashes)

    return h


def compute_subtree_weights(G):
    topo = list(nx.topological_sort(G))
    weight = {}

    for n in reversed(topo): 
        children = list(G.successors(n))
        if not children:
            weight[n] = 1 
        else:
            weight[n] = sum(weight[c] for c in children)
        G.nodes[n]["weight"] = weight[n] 

    return weight


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
            G.add_node(hier, label=label, module=submod)
            if parent_hier:
                G.add_edge(parent_hier, hier)
            recurse_add(cell, hier)

    recurse_add(cells)
    return G


def export_interactive_html_with_hashes(G, node_hash, html_file="module_hierarchy.html"):
    from pyvis.network import Network
    import matplotlib.cm as cm
    import matplotlib.colors as mcolors

    net = Network(height="900px", width="100%", directed=True, notebook=False)
    net.force_atlas_2based()

    hash_counts = Counter(node_hash.values())
    weight_values = [G.nodes[n]["weight"] for n in G.nodes()]
    norm = mcolors.Normalize(vmin=min(weight_values), vmax=max(weight_values))
    cmap = plt.colormaps.get_cmap("YlOrRd")

    color_map = {}
    color_index = 0

    for node, h in node_hash.items():
        data = G.nodes[node]
        module = data.get("module", str(node))
        weight = data.get("weight", 0)
        label = f"{module}\nW={weight}"

        if hash_counts[h] > 1:
            if h not in color_map:
                color_map[h] = cmap(norm(weight), bytes=True)
                color_index += 1
            color = mcolors.to_hex(cmap(norm(weight)))
        else:
            color = "#d3d3d3"

        net.add_node(node, label=label, title=f"Hash: {h}", shape="box", color=color)

    for u, v in G.edges():
        net.add_edge(u, v)

    net.write_html(html_file)
    print(f"Interactive graph with weights and Merkle hashes saved to {html_file}")


def find_highest_level_repeats(G, node_hash, weight):
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

        repeated_hashes = {
            h: nodes for h, nodes in level_hashes.items() if len(nodes) > 1
        }

        if repeated_hashes:
            max_group = None
            max_group_weight = -1

            for h, nodes in repeated_hashes.items():
                group_max_weight = max(weight[n] for n in nodes)
                if group_max_weight > max_group_weight:
                    max_group_weight = group_max_weight
                    max_group = (h, nodes)

            if max_group:
                h, nodes = max_group
                module_names = [G.nodes[n].get("module", str(n)) for n in nodes]
                print(f"Repeated structures found at level {level}:")
                print(f"  ↳ Hash: {h} (count={len(nodes)}) → Modules: {module_names}")
                return {h: nodes}

        level += 1

    print("No repeated structures found at any level.")
    return {}



def save_weighted_svg(G, weight, output_file="module_hierarchy.svg"):
    import matplotlib.cm as cm
    import matplotlib.colors as mcolors

    values = list(weight.values())
    norm = mcolors.Normalize(vmin=min(values), vmax=max(values))
    cmap = plt.colormaps.get_cmap("YlOrRd")

    node_colors = [cmap(norm(weight[n])) for n in G.nodes()]
    labels = {n: f"{G.nodes[n].get('module', str(n))}\nW={weight[n]}" for n in G.nodes()}
    pos = nx.nx_agraph.graphviz_layout(G, prog="dot")

    plt.figure(figsize=(20, 12))
    nx.draw(
        G, pos,
        labels=labels,
        node_color=node_colors,
        with_labels=True,
        node_size=800,
        font_size=8,
        edge_color="gray",
        linewidths=0.5
    )
    plt.savefig(output_file, format="svg")
    print(f"Saved weighted hierarchy SVG to {output_file}")



if __name__ == "__main__":
    xml_path = "xml/calculator.xml" 
    G = build_hierarchy_graph(xml_path)
    H = merkle_hash_all(G)
    W = compute_subtree_weights(G)
    find_highest_level_repeats(G, H, W)
    export_interactive_html_with_hashes(G, H)
    save_weighted_svg(G, W, )




