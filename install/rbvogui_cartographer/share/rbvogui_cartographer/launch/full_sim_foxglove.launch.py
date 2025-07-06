#!/usr/bin/env python3
import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, TimerAction
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg_dir = get_package_share_directory('rbvogui_cartographer')
    nav2_dir = get_package_share_directory('nav2_bringup')
    rtabmap_examples_dir = get_package_share_directory('rtabmap_examples')

    # ─────────────────── launch arguments
    namespace = LaunchConfiguration('namespace')
    world     = LaunchConfiguration('world')
    robot     = LaunchConfiguration('robot')
    x = LaunchConfiguration('x')
    y = LaunchConfiguration('y')
    z = LaunchConfiguration('z')

    slam_params_file  = LaunchConfiguration('slam_params_file')
    nav2_params_file  = LaunchConfiguration('nav2_params_file')

    arguments = [
        DeclareLaunchArgument('namespace', default_value='robot'),
        DeclareLaunchArgument('world',     default_value='demo.sdf.world'),
        DeclareLaunchArgument('robot',     default_value='rbvogui'),
        DeclareLaunchArgument('x',         default_value='0.0'),
        DeclareLaunchArgument('y',         default_value='0.0'),
        DeclareLaunchArgument('z',         default_value='0.1'),
        DeclareLaunchArgument(
            'slam_params_file',
            default_value=os.path.join(pkg_dir, 'config', 'rtabmap_laser_params.yaml'),
            description='RTAB-Map parameters'
        ),
        DeclareLaunchArgument(
            'nav2_params_file',
            default_value=os.path.join(pkg_dir, 'config', 'nav2_params.yaml'))
    ]

    # ─────────────────── Ignition world
    world_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_dir, 'launch', 'spawn_world_headless.launch.py')),
        launch_arguments={'world': world}.items())

    # ─────────────────── Robot spawn (with ros_gz_bridge)
    robot_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_dir, 'launch', 'spawn_robot_no_rviz.launch.py')),
        launch_arguments={
            'namespace': namespace,
            'robot': robot,
            'x': x,
            'y': y,
            'z': z,
        }.items())

    # ─────────────────── RTAB-Map (laser-only)
    rtabmap_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(rtabmap_examples_dir, 'launch', 'rtabmap.launch.py')),
        launch_arguments={
            'namespace'        : namespace,
            'use_sim_time'     : 'true',
            'frame_id'         : [namespace, '/base_link'],
            'subscribe_depth'  : 'false',
            'subscribe_rgb'    : 'false',
            'subscribe_scan'   : 'true',
            'scan_topic'       : '/scan',
            'rtabmap_args'     : '--delete_db_on_start',
            'config_path'      : slam_params_file,
        }.items())

    # ─────────────────── Nav2
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_dir, 'launch', 'navigation_launch.py')),
        launch_arguments={
            'namespace'    : namespace,
            'use_sim_time' : 'true',
            'params_file'  : nav2_params_file
        }.items())

    # ─────────────────── Foxglove bridge
    foxglove_bridge = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_dir, 'launch', 'rbvogui_foxglove.launch.py')),
        launch_arguments={
            'namespace'        : namespace,
            'world'            : world,
            'robot'            : robot,
            'x'                : x,
            'y'                : y,
            'z'                : z,
            'slam_params_file' : slam_params_file,
            'nav2_params_file' : nav2_params_file,
        }.items())

    ld = LaunchDescription(arguments)
    ld.add_action(world_launch)
    ld.add_action(TimerAction(period=5.0,  actions=[robot_launch]))
    ld.add_action(TimerAction(period=10.0, actions=[rtabmap_launch]))
    ld.add_action(TimerAction(period=15.0, actions=[nav2_launch]))
    ld.add_action(TimerAction(period=8.0,  actions=[foxglove_bridge]))
    return ld