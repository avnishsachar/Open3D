# Open3D_homework_task
Homework Task for intel-isl/Open3D

### Additions to [Open3D](https://github.com/intel-isl/Open3D "doc") in this project: ###
 * Open3D/examples/Cpp/[solution.cpp]() *(C++ Implementation of the task)*
 * Open3D/examples/Python/[solution.py]()  *(Python implementation of the task)*
 * Open3D/[homework-task/]() *(Contains the Assignment Task pdf and the input mesh file)*
 * Open3D/[results.txt]() *(.txt file to observe the results)*


## Building and Running ##
After cloning this repository, follow the instructions given in the [Library Documentation](http://www.open3d.org/docs/release/compilation.html "doc") to build.
 
**[NOTE] Once the build has been completed, make sure to give the system specific path for *test_mesh.ply* and *results.txt* files in *solution.py* and *solution.cpp*** 

### Additions to the Library: ###
* A [C++ function](https://github.com/avnishsachar/Open3D_homework_task/blob/master/src/Open3D/Geometry/TriangleMesh.cpp#L1177 "cpp") *open3d::geometry::TriangleMesh::IdenticallyColoredConnectedComponents* which provides with identically colored components of the mesh.
* A [Python binding](https://github.com/avnishsachar/Open3D_homework_task/blob/master/src/Python/geometry/trianglemesh.cpp#L184 "py") *open3d.geometry.TriangleMesh.identically_colored_connected_components*
* A C++ [Unit Test](https://github.com/avnishsachar/Open3D_homework_task/blob/master/src/UnitTest/Geometry/TriangleMesh.cpp#L989 "test")
