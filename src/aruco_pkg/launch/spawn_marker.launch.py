# from launch import LaunchDescription
# from launch_ros.actions import Node
# import os

# def generate_launch_description():
#     marker_path = os.path.join(
#         os.getenv('AMENT_PREFIX_PATH').split(':')[0],
#         'share/aruco_pkg/launch/aruco_marker.urdf.xacro'
#     )

#     return LaunchDescription([
#         Node(
#             package='gazebo_ros',
#             executable='spawn_entity.py',
#             arguments=[
#                 '-entity', 'aruco_marker_5',
#                 '-file', '/home/admin/ros2_ws/src/aruco_pkg/textures/ArucoMarker.png',
#                 '-x', '2.0',
#                 '-y', '0.0',
#                 '-z', '0.5'
#             ],
#             output='screen'
#         )
#     ])
