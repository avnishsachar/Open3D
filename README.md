Implemented a function to return a list of identically colored connected components from a triangle mesh using Open3D

### Additions to [Open3D](https://github.com/intel-isl/Open3D "doc") in this project: ###
 * [solution.cpp](https://github.com/avnishsachar/Open3D/blob/master/examples/Cpp/solution.cpp) *(C++ Implementation of the task)*
 * [solution.py](https://github.com/avnishsachar/Open3D/blob/master/examples/Python/Basic/solution.py)  *(Python implementation of the task)*
 * [results.txt](https://github.com/avnishsachar/Open3D/blob/master/results.txt) *(.txt file to observe the results when built and run)*


## Building and Running ##
After cloning this repository, follow the instructions given in the [Library Documentation](http://www.open3d.org/docs/release/compilation.html "doc") to build.
 
**[NOTE] Once built, make sure to give the system specific path for *test_mesh.ply* and *results.txt* files in *solution.py* and *solution.cpp*** 

### Additions to the Library: ###
* A [C++ function](https://github.com/avnishsachar/Open3D_homework_task/blob/master/src/Open3D/Geometry/TriangleMesh.cpp#L1177 "cpp") *open3d::geometry::TriangleMesh::IdenticallyColoredConnectedComponents* which provides with identically colored components of the mesh.
* A [Python binding](https://github.com/avnishsachar/Open3D_homework_task/blob/master/src/Python/geometry/trianglemesh.cpp#L184 "py") *open3d.geometry.TriangleMesh.identically_colored_connected_components*
* A C++ [Unit Test](https://github.com/avnishsachar/Open3D_homework_task/blob/master/src/UnitTest/Geometry/TriangleMesh.cpp#L989 "test")
