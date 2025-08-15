# System dependencies
# sudo apt-get install graphviz graphviz-dev -y  # or use brew on macOS

# Python packages
# pip install networkx matplotlib pyvis pygraphviz

import xml.etree.ElementTree as ET
import networkx as nx
import matplotlib.pyplot as plt
from networkx.drawing.nx_agraph import graphviz_layout
from pyvis.network import Network

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

def visualize_graph(G, output_file=None):
    try:
        from networkx.drawing.nx_agraph import graphviz_layout
        pos = graphviz_layout(G, prog="dot")
    except ImportError:
        print("pygraphviz not found, using spring_layout instead")
        pos = nx.spring_layout(G, k=0.5, iterations=100)

    labels = nx.get_node_attributes(G, 'label')
    plt.figure(figsize=(30, 20))  # huge canvas
    nx.draw(
        G, pos, with_labels=True, labels=labels, arrows=True,
        node_size=2500, node_color="#f0f0f0", edge_color="#606060",
        font_size=6, font_weight="normal"
    )

    if output_file:
        if output_file.endswith(".svg") or output_file.endswith(".pdf"):
            plt.savefig(output_file, format=output_file.split('.')[-1], bbox_inches='tight')
        else:
            print("Unsupported format, falling back to PNG.")
            plt.savefig(output_file + ".png", format="png", dpi=300, bbox_inches='tight')
    else:
        plt.show()

def export_interactive_html(G, html_file="module_hierarchy.html"):
    from pyvis.network import Network

    net = Network(height="900px", width="100%", directed=True, notebook=False)
    net.force_atlas_2based()

    for node, data in G.nodes(data=True):
        label = data.get("label", node)
        net.add_node(node, label=label, title=label, shape="box")

    for u, v in G.edges():
        net.add_edge(u, v)

    net.write_html(html_file)
    print(f"Interactive graph saved to {html_file}")


if __name__ == "__main__":
    xml_path = "../xml/calculator.xml"  # path to the verilator generated chipset.xml path
    G = build_hierarchy_graph(xml_path)
    # visualize_graph(G, output_file="manycore1x1.svg")
    export_interactive_html(G, "./calculator.html")

