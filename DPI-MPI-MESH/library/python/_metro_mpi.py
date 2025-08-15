import xml.etree.ElementTree as ET
import matplotlib.pyplot as plt
import networkx as nx
import hashlib
import html
from collections import Counter, defaultdict, deque
from dataclasses import dataclass
import re
from lxml import etree
import csv
import os

#converts verilog constants into str/int
def verilog_const_to_int_str(verilog_str):
    # &apos; → '
    verilog_str = html.unescape(verilog_str) 
    match = re.match(r"(\d+)'(s?)([bBoOdDhH])([0-9a-fA-F_]+)", verilog_str)
    if not match:
        raise ValueError(f"Invalid Verilog constant: {verilog_str}")

    width, is_signed, base_char, value_str = match.groups()
    width = int(width)
    value_str = value_str.replace("_", "")
    base = {'b': 2, 'o': 8, 'd': 10, 'h': 16}[base_char.lower()]
    value = int(value_str, base)

    if is_signed and value >= (1 << (width - 1)):
        value -= (1 << width)

    return str(value)

@dataclass
class Port:
    name: str
    direction: str
    dtype_id: int
    active: str
    type: str
    other_end: str
    mpi_process: str
    with_whom_is_it_communicating: str

def build_hierarchy_graph(xml_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()

    # Build submod → origName mapping
    netlist = root.find("netlist")
    submod_to_orig = {}
    if netlist is not None:
        for mod in netlist.findall("module"):
            sub_name = mod.attrib.get("name")
            orig_name = mod.attrib.get("origName", sub_name)
            submod_to_orig[sub_name] = orig_name

    cells = root.find("cells")
    G = nx.DiGraph()

    def recurse_add(cell_elem, parent_hier=None):
        for cell in cell_elem:
            name = cell.attrib["name"]
            submod = cell.attrib["submodname"]

            # Replace with origName if found
            submod_orig = submod_to_orig.get(submod, submod)

            hier = cell.attrib["hier"]
            label = f"{name}\n[{submod_orig}]"
            G.add_node(hier, label=label, module=submod_orig)

            if parent_hier:
                G.add_edge(parent_hier, hier)

            recurse_add(cell, hier)

    recurse_add(cells)
    return G

def canonical_label(node):
    # gets the module attribute of the node and if none, returns ""
    return node.get("module", "")

'''
Blake2B hashing function, takes input of variable length and give output as 128 bit long hash
'''
def node_hash(label, child_hashes, digest_bytes=16):
    child_hashes_sorted = sorted(child_hashes)
    combined = f"{label}|{len(child_hashes_sorted)}|" + "|".join(child_hashes_sorted)
    return hashlib.blake2b(combined.encode("utf-8"), digest_size=digest_bytes).hexdigest()

'''
The main idea was to do DFS traversal the go to the leaf
nodes, then from there start moving towards the top node
and assigning the hashes
Implementation- Do topological sorting, then start from the 
reverse end, assign label
'''
def merkle_hash_all(G):
    topo = list(nx.topological_sort(G))
    h = {}

    for n in reversed(topo):
        label = canonical_label(G.nodes[n])
        children = list(G.successors(n))
        child_hashes = [h[c] for c in children]
        h[n] = node_hash(label, child_hashes)
    # print("=== hashing Done ===")
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
    # print("=== Weights computed ===")
    return weight

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
                # print("=== Print from find_highest_level_repeats ===")
                # print(f"Repeated structures found at level {level}:")
                # print(f"  ↳ Hash: {h} (count={len(nodes)}) → Modules: {module_names}")
                # print({h: nodes})
                print("=== Found the top modules ===")
                instance_names = [n.split(".")[-1] for n in nodes]
                parent_name = [n.split(".")[-2] for n in nodes]
                # print("Parent node of the partitions- ", parent_name[0])
                return parent_name[0], instance_names

        level += 1

    print("No repeated structures found at any level.")
    return {}

def extract_partition_ports(list_mpi, main_module, xml_path):
    dtype_map = extract_dtype_map(xml_path)
    partition_data = defaultdict(dict)
    tree = ET.parse(xml_path)
    root = tree.getroot()
    netlist = root.find("netlist")
    defname = ""
    if netlist is None:
        raise ValueError("No <netlist> tag found.")
    
    for mod in netlist.findall("module"):
        mod_name = mod.attrib.get("origName", mod.attrib.get("name", "UNKNOWN"))
        if mod_name == main_module:
            # Instances
            for inst_name in list_mpi:
                for inst in mod.findall("instance"):
                    name = inst.attrib.get("name", "UNKNOWN")
                    if inst_name == name:
                        defname = inst.attrib.get("defName", "UNKNOWN")
                        # print(defname)

    for inst_name in list_mpi:
        for module in netlist.findall("module"):
            name = module.attrib.get("name", "UNKNOWN")
            if defname == name:
                # print(name)
                for port in module.findall("var"):
                    dir = port.attrib.get("dir")
                    if dir is not None:
                        port_name = port.attrib.get("name", "UNKNOWN")
                        # print(port_name)
                        direction = port.attrib.get("dir", "UNKNOWN")
                        dtype_id = port.attrib.get("dtype_id", "?")    
                        dtype = dtype_map[dtype_id]
                        # print(inst_name)
                        # print(port)
                        partition_data[inst_name][port_name] = Port(port_name, direction, dtype,"idk","idk","idk","idk",[])            
    return partition_data

def export_partition_data_to_txt(partition_data, output_file="_partition_ports_data.txt"):
    with open(output_file, "w") as f:
        for inst_name, ports in partition_data.items():
            f.write(f"Instance: {inst_name}\n")
            f.write("-" * (len(inst_name) + 11) + "\n")
            f.write(f"{'Port Name':<25} {'Direction':<10} {'Width':<7} {'IsActive':<10} {'type':<7} {'Chip_Side_Connection':<30} {f'{inst_name} <-> ???':<15} {'with_whom_is_it_communicating'}\n")
            for port_key, port_obj in ports.items():
                f.write(f"{port_obj.name:<25} {port_obj.direction:<10} {port_obj.dtype_id:<7} {port_obj.active:<10} {port_obj.type:<7} {port_obj.other_end:<30} {port_obj.mpi_process:<15} {port_obj.with_whom_is_it_communicating}\n")
            f.write("\n")
    print(f"Partition data exported to {output_file}")


def export_partition_data_to_csv(partition_data, output_dir="partition_csv"):
    os.makedirs(output_dir, exist_ok=True)

    for inst_name, ports in partition_data.items():
        filename = os.path.join(output_dir, f"{inst_name}.csv")
        with open(filename, "w", newline='') as csvfile:
            writer = csv.writer(csvfile)
            
            # Write header
            writer.writerow([
                "Port Name", "Direction", "Width", "IsActive", "Type",
                "Chip_Side_Connection", f"{inst_name} <-> ???", "with_whom_is_it_communicating"
            ])
            
            # Write rows
            for port_key, port_obj in ports.items():
                writer.writerow([
                    port_obj.name,
                    port_obj.direction,
                    port_obj.dtype_id,
                    port_obj.active,
                    port_obj.type,
                    port_obj.other_end,
                    port_obj.mpi_process,
                    port_obj.with_whom_is_it_communicating
                ])

    print(f"Partition data exported as CSVs to {output_dir}")

def print_partition_data(partition_data):
    for inst_name, ports in partition_data.items():
        print(f"\nInstance: {inst_name}")
        print("-" * (len(inst_name) + 11))
        print(f"{'Port Name':<25} {'Direction':<10} {'Width/DtypeID'}")
        for port_name, port_obj in ports.items():
            print(f"{port_obj.name:<25} {port_obj.direction:<10} {port_obj.dtype_id}")

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
                bitwidth = int(match.group(1))
            else:
                bitwidth = 64  # fallback default
            dtype_map[dtype_id] = bitwidth

    return dtype_map

def export_dtype_map(dtype_map, output_file="_dtype_map.txt"):
    with open(output_file, "w") as f:
        f.write(f"dtype_id -> bitwidth\n")
        for dtype_id, bitwidth in dtype_map.items():
            f.write(f"{dtype_id}: {bitwidth}\n")

    print(f"dtype_map saved to {output_file}")

# Wires
def extract_wires(main_module, xml_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()
    netlist = root.find("netlist")
    if netlist is None:
        raise ValueError("No <netlist> tag found.")

    module_wires = {}

    for mod in netlist.findall("module"):
        mod_name = mod.attrib.get("origName")
        wires = {}
        if mod_name == main_module:
            for var in mod.findall("var"):
                vartype = var.attrib.get("vartype")
                direction = var.attrib.get("dir")

                if vartype == "logic" and direction is None:
                    wire_name = var.attrib.get("name")
                    dtype_id = var.attrib.get("dtype_id")
                    if wire_name and dtype_id:
                        wires[wire_name] = dtype_id

            module_wires[mod_name] = wires

    return module_wires

def export_wires_to_file(module_wires, dtype_map, output_path="_wires.txt"):
    with open(output_path, "w") as f:
        for mod, wires in module_wires.items():
            f.write(f"Module: {mod}\n")
            for wire, dtype_id in wires.items():
                bitwidth = dtype_map.get(dtype_id, "?")
                f.write(f"  {wire}: {bitwidth} bits (dtype_id={dtype_id})\n")
            f.write("\n")

def type_check(parent_module, partition_data, partition_instance_list):
    tree = ET.parse(xml_path)
    root = tree.getroot()
    netlist = root.find("netlist")
    if netlist is None:
        raise ValueError("No <netlist> tag found.")
    
    for partition in partition_instance_list:
        for mod in netlist.findall("module"):
            name = mod.attrib.get("name")
            if name == parent_module:
                for inst in mod.findall("instance"):
                    inst_name = inst.attrib.get("name")
                    # print(inst_name)
                    if inst_name == partition:
                        for port in inst.findall("port"):
                            for oth_end in port.findall("varref"):
                                wire_name_parent = oth_end.attrib.get("name")
                                port_name = port.attrib["name"]
                                partition_data[partition][port_name].other_end = wire_name_parent
                                partition_data[partition][port_name].type = "wire"
                            for const in port.findall("const"):
                                const_val = const.attrib.get("name")
                                port_name = port.attrib["name"]
                                # print(1)
                                # print(partition)
                                # print(port_name)
                                partition_data[partition][port_name].other_end = verilog_const_to_int_str(const_val)
                                partition_data[partition][port_name].type = "init"
                                partition_data[partition][port_name].active = "No"
    return partition_data

def find_connections(xml_path, parent_module, partition_data, partition_instance_list):
    tree = ET.parse(xml_path)
    root = tree.getroot()

    tree_lxml = etree.parse(xml_path)
    root_lxml = tree_lxml.getroot()

    for partition in partition_instance_list:
        for port_name, port_obj in partition_data[partition].items():
            # print(f"Port name: {port_name}")
            # print(f"  Direction: {port_obj.direction}")
            # print(f"  Dtype ID: {port_obj.dtype_id}")
            # print(f"  Active: {port_obj.active}")
            # print(f"  Type: {port_obj.type}")
            # print(f"  Other End: {port_obj.other_end}")
            wire = ""
            if port_obj.type == "wire":
                wire = port_obj.other_end
                # print(wire)
                for varref in root_lxml.findall(f".//varref[@name='{wire}']"):
                    parent_port = varref.getparent()
                    parent_instance = parent_port.getparent()
                    if parent_module == parent_instance.getparent().get("name"):
                        # print(parent_instance.get("name"))
                        partition_data[partition][port_name].with_whom_is_it_communicating.append(parent_instance.get("name"))
    return partition_data
                    
def checkIfActive(partition_data):
    for partition, partition_obj in partition_data.items():
        print(f"Instance Name: {partition}")
        for port_name, port_obj in partition_data[partition].items():
            if partition in partition_data[partition][port_name].with_whom_is_it_communicating:
                partition_data[partition][port_name].with_whom_is_it_communicating.remove(partition)
            if partition_data[partition][port_name].type == "idk":
                partition_data[partition][port_name].type = "logic"
                partition_data[partition][port_name].active = "Yes"
            if len(partition_data[partition][port_name].with_whom_is_it_communicating) == 1:
                if partition_data[partition][port_name].with_whom_is_it_communicating[0] == partition:
                    partition_data[partition][port_name].active = "No"
                elif partition_data[partition][port_name].with_whom_is_it_communicating[0] == None:
                    partition_data[partition][port_name].active = "No"
            elif len(partition_data[partition][port_name].with_whom_is_it_communicating) > 1:
                partition_data[partition][port_name].active = "Yes"
            if None in partition_data[partition][port_name].with_whom_is_it_communicating:
                partition_data[partition][port_name].with_whom_is_it_communicating.remove(None)

    return partition_data

def determine_process(partition_data, parent_module,partition_instance_list):
    for partition, partition_obj in partition_data.items():
        print(f"Instance Name: {partition}")
        for port_name, port_obj in partition_data[partition].items():
            if len(partition_data[partition][port_name].with_whom_is_it_communicating) == 1:
                for i in range(len(partition_instance_list)):
                    if partition_data[partition][port_name].with_whom_is_it_communicating[0] == partition_instance_list[i]:
                        partition_data[partition][port_name].mpi_process = partition_instance_list[i]
            if len(partition_data[partition][port_name].with_whom_is_it_communicating) >= 1:
                if partition_data[partition][port_name].mpi_process == "idk":
                    partition_data[partition][port_name].mpi_process = f"system({parent_module})"


    return partition_data

if __name__ == "__main__":
    xml_path = "../xml/calculator.xml"  
    design_Graph = build_hierarchy_graph(xml_path)
    dtype_map = extract_dtype_map(xml_path)
    Hashed_design_graph = merkle_hash_all(design_Graph)
    Weighted_design_graph = compute_subtree_weights(design_Graph)
    parent_module, partition_instance_list = find_highest_level_repeats(design_Graph, Hashed_design_graph, Weighted_design_graph)
    partition_data = extract_partition_ports(partition_instance_list, parent_module, xml_path)
    print(partition_instance_list, parent_module)
    print_partition_data(partition_data)
    export_partition_data_to_txt(partition_data)
    module_wires = extract_wires(parent_module, xml_path)
    export_wires_to_file(module_wires, dtype_map)
    export_dtype_map(dtype_map)
    partition_data = type_check(parent_module, partition_data, partition_instance_list)
    partition_data = find_connections(xml_path, parent_module, partition_data, partition_instance_list)
    partition_data = checkIfActive(partition_data)
    partition_data = determine_process(partition_data, parent_module, partition_instance_list)
    export_partition_data_to_txt(partition_data)
    export_partition_data_to_csv(partition_data)