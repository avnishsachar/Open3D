open3d.geometry
---------------

.. currentmodule:: open3d.geometry

**Classes**

.. autosummary::

    FilterScope
    Geometry
    Geometry2D
    Geometry3D
    HalfEdge
    HalfEdgeTriangleMesh
    Image
    ImageFilterType
    KDTreeFlann
    KDTreeSearchParam
    KDTreeSearchParamHybrid
    KDTreeSearchParamKNN
    KDTreeSearchParamRadius
    LineSet
    Octree
    OctreeColorLeafNode
    OctreeInternalNode
    OctreeLeafNode
    OctreeNode
    OctreeNodeInfo
    PointCloud
    RGBDImage
    RotationType
    SimplificationContraction
    TriangleMesh
    Voxel
    VoxelGrid


**Functions**

.. autosummary::

    compute_mesh_convex_hull
    compute_point_cloud_convex_hull
    compute_point_cloud_mahalanobis_distance
    compute_point_cloud_mean_and_covariance
    compute_point_cloud_nearest_neighbor_distance
    compute_point_cloud_to_point_cloud_distance
    create_half_edge_mesh_from_mesh
    create_image_pyramid
    create_line_set_from_point_cloud_correspondences
    create_line_set_from_triangle_mesh
    create_mesh_arrow
    create_mesh_box
    create_mesh_cone
    create_mesh_coordinate_frame
    create_mesh_cylinder
    create_mesh_icosahedron
    create_mesh_moebius
    create_mesh_octahedron
    create_mesh_sphere
    create_mesh_tetrahedron
    create_mesh_torus
    create_point_cloud_from_depth_image
    create_point_cloud_from_rgbd_image
    create_rgbd_image_from_color_and_depth
    create_rgbd_image_from_nyu_format
    create_rgbd_image_from_redwood_format
    create_rgbd_image_from_sun_format
    create_rgbd_image_from_tum_format
    create_surface_voxel_grid_from_point_cloud
    crop_point_cloud
    crop_triangle_mesh
    estimate_normals
    filter_image
    filter_image_pyramid
    orient_normals_to_align_with_direction
    orient_normals_towards_camera_location
    radius_outlier_removal
    sample_points_poisson_disk
    sample_points_uniformly
    select_down_sample
    simplify_quadric_decimation
    simplify_vertex_clustering
    statistical_outlier_removal
    subdivide_loop
    subdivide_midpoint
    uniform_down_sample
    voxel_down_sample
    voxel_down_sample_and_trace


.. toctree::
    :hidden:

    FilterScope <open3d.geometry.FilterScope>
    Geometry <open3d.geometry.Geometry>
    Geometry2D <open3d.geometry.Geometry2D>
    Geometry3D <open3d.geometry.Geometry3D>
    HalfEdge <open3d.geometry.HalfEdge>
    HalfEdgeTriangleMesh <open3d.geometry.HalfEdgeTriangleMesh>
    Image <open3d.geometry.Image>
    ImageFilterType <open3d.geometry.ImageFilterType>
    KDTreeFlann <open3d.geometry.KDTreeFlann>
    KDTreeSearchParam <open3d.geometry.KDTreeSearchParam>
    KDTreeSearchParamHybrid <open3d.geometry.KDTreeSearchParamHybrid>
    KDTreeSearchParamKNN <open3d.geometry.KDTreeSearchParamKNN>
    KDTreeSearchParamRadius <open3d.geometry.KDTreeSearchParamRadius>
    LineSet <open3d.geometry.LineSet>
    Octree <open3d.geometry.Octree>
    OctreeColorLeafNode <open3d.geometry.OctreeColorLeafNode>
    OctreeInternalNode <open3d.geometry.OctreeInternalNode>
    OctreeLeafNode <open3d.geometry.OctreeLeafNode>
    OctreeNode <open3d.geometry.OctreeNode>
    OctreeNodeInfo <open3d.geometry.OctreeNodeInfo>
    PointCloud <open3d.geometry.PointCloud>
    RGBDImage <open3d.geometry.RGBDImage>
    RotationType <open3d.geometry.RotationType>
    SimplificationContraction <open3d.geometry.SimplificationContraction>
    TriangleMesh <open3d.geometry.TriangleMesh>
    Voxel <open3d.geometry.Voxel>
    VoxelGrid <open3d.geometry.VoxelGrid>
    compute_mesh_convex_hull <open3d.geometry.compute_mesh_convex_hull>
    compute_point_cloud_convex_hull <open3d.geometry.compute_point_cloud_convex_hull>
    compute_point_cloud_mahalanobis_distance <open3d.geometry.compute_point_cloud_mahalanobis_distance>
    compute_point_cloud_mean_and_covariance <open3d.geometry.compute_point_cloud_mean_and_covariance>
    compute_point_cloud_nearest_neighbor_distance <open3d.geometry.compute_point_cloud_nearest_neighbor_distance>
    compute_point_cloud_to_point_cloud_distance <open3d.geometry.compute_point_cloud_to_point_cloud_distance>
    create_half_edge_mesh_from_mesh <open3d.geometry.create_half_edge_mesh_from_mesh>
    create_image_pyramid <open3d.geometry.create_image_pyramid>
    create_line_set_from_point_cloud_correspondences <open3d.geometry.create_line_set_from_point_cloud_correspondences>
    create_line_set_from_triangle_mesh <open3d.geometry.create_line_set_from_triangle_mesh>
    create_mesh_arrow <open3d.geometry.create_mesh_arrow>
    create_mesh_box <open3d.geometry.create_mesh_box>
    create_mesh_cone <open3d.geometry.create_mesh_cone>
    create_mesh_coordinate_frame <open3d.geometry.create_mesh_coordinate_frame>
    create_mesh_cylinder <open3d.geometry.create_mesh_cylinder>
    create_mesh_icosahedron <open3d.geometry.create_mesh_icosahedron>
    create_mesh_moebius <open3d.geometry.create_mesh_moebius>
    create_mesh_octahedron <open3d.geometry.create_mesh_octahedron>
    create_mesh_sphere <open3d.geometry.create_mesh_sphere>
    create_mesh_tetrahedron <open3d.geometry.create_mesh_tetrahedron>
    create_mesh_torus <open3d.geometry.create_mesh_torus>
    create_point_cloud_from_depth_image <open3d.geometry.create_point_cloud_from_depth_image>
    create_point_cloud_from_rgbd_image <open3d.geometry.create_point_cloud_from_rgbd_image>
    create_rgbd_image_from_color_and_depth <open3d.geometry.create_rgbd_image_from_color_and_depth>
    create_rgbd_image_from_nyu_format <open3d.geometry.create_rgbd_image_from_nyu_format>
    create_rgbd_image_from_redwood_format <open3d.geometry.create_rgbd_image_from_redwood_format>
    create_rgbd_image_from_sun_format <open3d.geometry.create_rgbd_image_from_sun_format>
    create_rgbd_image_from_tum_format <open3d.geometry.create_rgbd_image_from_tum_format>
    create_surface_voxel_grid_from_point_cloud <open3d.geometry.create_surface_voxel_grid_from_point_cloud>
    crop_point_cloud <open3d.geometry.crop_point_cloud>
    crop_triangle_mesh <open3d.geometry.crop_triangle_mesh>
    estimate_normals <open3d.geometry.estimate_normals>
    filter_image <open3d.geometry.filter_image>
    filter_image_pyramid <open3d.geometry.filter_image_pyramid>
    orient_normals_to_align_with_direction <open3d.geometry.orient_normals_to_align_with_direction>
    orient_normals_towards_camera_location <open3d.geometry.orient_normals_towards_camera_location>
    radius_outlier_removal <open3d.geometry.radius_outlier_removal>
    sample_points_poisson_disk <open3d.geometry.sample_points_poisson_disk>
    sample_points_uniformly <open3d.geometry.sample_points_uniformly>
    select_down_sample <open3d.geometry.select_down_sample>
    simplify_quadric_decimation <open3d.geometry.simplify_quadric_decimation>
    simplify_vertex_clustering <open3d.geometry.simplify_vertex_clustering>
    statistical_outlier_removal <open3d.geometry.statistical_outlier_removal>
    subdivide_loop <open3d.geometry.subdivide_loop>
    subdivide_midpoint <open3d.geometry.subdivide_midpoint>
    uniform_down_sample <open3d.geometry.uniform_down_sample>
    voxel_down_sample <open3d.geometry.voxel_down_sample>
    voxel_down_sample_and_trace <open3d.geometry.voxel_down_sample_and_trace>
