#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # Launch configuration variables
    namespace = LaunchConfiguration('namespace')
    
    # Declare launch arguments
    declare_namespace_cmd = DeclareLaunchArgument(
        'namespace',
        default_value='robot',
        description='Top-level namespace')

    # Teleop twist keyboard node
    teleop_node = Node(
        package='teleop_twist_keyboard',
        executable='teleop_twist_keyboard',
        name='teleop_twist_keyboard',
        namespace=namespace,
        remappings=[('/cmd_vel', '/robot/robotnik_base_controller/cmd_vel_unstamped')],
        output='screen',
        prefix='xterm -e'  # Run in separate terminal window
    )

    # Create the launch description and populate
    ld = LaunchDescription()

    # Add the commands to the launch description
    ld.add_action(declare_namespace_cmd)
    ld.add_action(teleop_node)

    return ld 