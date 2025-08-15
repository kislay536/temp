import xml.etree.ElementTree as ET
from pyvis.network import Network
import re

def extract_dtype_map(xml_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()
    dtype_map = {}
    for const in root.findall(".//const"):
        dtype_id = const.attrib.get("dtype_id")
        name = const.attrib.get("name")
        if dtype_id and name and dtype_id not in dtype_map:
            match = re.match(r"(\d+)'[bhdo]", name)
            if match:
                dtype_map[dtype_id] = int(match.group(1))
    return dtype_map

def extract_module_structure(xml_path, top_name):
    tree = ET.parse(xml_path)
    root = tree.getroot()
    netlist = root.find("netlist")

    dtype_map = extract_dtype_map(xml_path)

    wires = set()
    top_ports = {}  # name → (dir, dtype_id)
    wire_map = {}   # wire_name → set((source, port, dtype_id))

    instances = {}       # inst_name → defName
    inst_connections = {} # inst_name → port → (dir, wire, dtype_id)

    for mod in netlist.findall("module"):
        mod_name = mod.attrib.get("origName", mod.attrib.get("name"))
        if mod_name != top_name:
            continue

        # Wires
        for var in mod.findall("var"):
            name = var.attrib.get("origName", var.attrib.get("name"))
            dtype_id = var.attrib.get("dtype_id")
            vartype = var.attrib.get("vartype")
            direction = var.attrib.get("dir")

            if vartype == "logic" and direction is None:
                wires.add(name)

            elif direction:  # top-level port
                top_ports[name] = (direction, dtype_id)
                wire_map.setdefault(name, set()).add((top_name, name, dtype_id))

        # Instances
        for inst in mod.findall("instance"):
            inst_name = inst.attrib.get("origName")
            def_name = inst.attrib.get("defName")
            instances[inst_name] = def_name
            inst_connections[inst_name] = {}

            for port in inst.findall("port"):
                pname = port.attrib.get("name")
                pdir = port.attrib.get("direction", "unknown")

                for varref in port.findall("varref"):
                    wire = varref.attrib.get("name")
                    dtype_id = varref.attrib.get("dtype_id", "?")
                    inst_connections[inst_name][pname] = (pdir, wire, dtype_id)
                    wire_map.setdefault(wire, set()).add((inst_name, pname, dtype_id))

    return top_ports, wires, wire_map, instances, inst_connections, dtype_map


def render_html_graph(xml_path, top_name="intermediate", output="graph.html"):
    top_ports, wires, wire_map, instances, inst_connections, dtype_map = extract_module_structure(xml_path, top_name)

    net = Network(height="900px", width="100%", directed=True)
    net.force_atlas_2based()

    net.add_node(top_name, label=top_name, shape="square", color="#ccccff", size=100)

    for inst in instances:
        label = f"{inst}\n[{instances[inst]}]"
        net.add_node(inst, label=label, shape="circle", color="#ffe0cc", size=25)

    for wire in wires:
        net.add_node(wire, label=wire, shape="dot", color="#555555", size=8)

    seen_edges = set()

    for wire, endpoints in wire_map.items():
        points = list(endpoints)
        for i in range(len(points)):
            for j in range(i + 1, len(points)):
                src_inst, src_port, src_dtype = points[i]
                dst_inst, dst_port, dst_dtype = points[j]

                if src_inst == top_name and dst_inst in instances:
                    width = dtype_map.get(src_dtype, "?")
                    label = f"{src_port} → {dst_port} [{width}b]"
                    edge = (src_inst, dst_inst, label)
                    if edge not in seen_edges:
                        net.add_edge(edge[0], edge[1], label=edge[2])
                        seen_edges.add(edge)

                elif dst_inst == top_name and src_inst in instances:
                    width = dtype_map.get(dst_dtype, "?")
                    label = f"{dst_port} → {src_port} [{width}b]"
                    edge = (dst_inst, src_inst, label)
                    if edge not in seen_edges:
                        net.add_edge(edge[0], edge[1], label=edge[2])
                        seen_edges.add(edge)

                else:
                    edge1 = (src_inst, wire, f"{src_port}")
                    edge2 = (wire, dst_inst, f"{dst_port}")

                    if edge1 not in seen_edges:
                        net.add_edge(src_inst, wire, label=src_port, arrows="to")
                        seen_edges.add(edge1)

                    if edge2 not in seen_edges:
                        net.add_edge(wire, dst_inst, label=dst_port, arrows="to")
                        seen_edges.add(edge2)


    net.write_html(output)
    print(f"Graph saved to {output}")

render_html_graph("../xml/calculator.xml", top_name="intermediate", output="tile_mapped_graph.html")
