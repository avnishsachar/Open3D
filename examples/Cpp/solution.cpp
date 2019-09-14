// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2018 www.open3d.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <Eigen>

#include "Open3D/Open3D.h"

using namespace open3d;

int main() {
    utility::SetVerbosityLevel(utility::VerbosityLevel::Debug);
    geometry::TriangleMesh mesh;
    auto mesh_file = io::ReadTriangleMeshFromPLY(std::string("~/Open3D/homework-task/test_mesh.ply"),
                                                 mesh);
    auto adjecency = mesh.ComputeAdjacencyList();
    auto connected_components = mesh.IdenticallyColoredConnectedComponents();
    std::ofstream file ("~/Open3D/results.txt");
    if (file.is_open()){
        // Writing to file
        for (size_t iter = 0; iter < connected_components.size(); ++iter){
            file << connected_components[iter].x() <<" "<< connected_components[iter].y() << std::endl;
        }
    }
    file.close();
    return 0;
}
