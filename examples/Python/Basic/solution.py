# Open3D: www.open3d.org
# The MIT License (MIT)
# See license file or visit www.open3d.org for details

# examples/Python/Basic/solution.py

from os.path import expanduser

import os
import open3d as o3d

if __name__ == "__main__":
    # Read triangle mesh "test_mesh.ply"
    data_dir = expanduser("~")+"/Open3D/"
    mesh_file = os.path.join(data_dir, "homework-task/test_mesh.ply")
    results_file = os.path.join(data_dir, "results.txt")
    mesh = o3d.io.read_triangle_mesh(mesh_file)
    # Then get connected components
    mesh.compute_adjacency_list() # Generate adjacency list as per documentation
    connected_components = mesh.identically_colored_components()
    # Print connected_components in the specified format
    file = open(results_file, "w+")
    for i in enumerate(connected_components):
        file.write(connected_components[i], "\n")
    file.close()
