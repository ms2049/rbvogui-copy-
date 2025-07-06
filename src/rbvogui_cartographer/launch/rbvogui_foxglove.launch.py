import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription, TimerAction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    # Get package directories
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    slam_toolbox_dir = get_package_share_directory('slam_toolbox')
    robotnik_gazebo_dir = get_package_share_directory('robotnik_gazebo_ignition')
    rbvogui_cartographer_dir = get_package_share_directory('rbvogui_cartographer')
    
    # Launch configuration variables
    namespace = LaunchConfiguration('namespace')
    use_sim_time = LaunchConfiguration('use_sim_time')
    slam_params_file = LaunchConfiguration('slam_params_file')
    nav2_params_file = LaunchConfiguration('nav2_params_file')
    world = LaunchConfiguration('world')
    robot = LaunchConfiguration('robot')
    x = LaunchConfiguration('x')
    y = LaunchConfiguration('y')
    z = LaunchConfiguration('z')
    
    # Declare launch arguments
    declare_namespace_cmd = DeclareLaunchArgument(
        'namespace',
        default_value='robot',
        description='Top-level namespace')
        
    declare_use_sim_time_cmd = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation (Gazebo) clock if true')
        
    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value='demo.sdf.world',
        description='World file name')
        
    declare_robot_cmd = DeclareLaunchArgument(
        'robot',
        default_value='rbvogui',
        description='Robot model')
        
    declare_x_cmd = DeclareLaunchArgument(
        'x',
        default_value='0.0',
        description='x position in world')
        
    declare_y_cmd = DeclareLaunchArgument(
        'y',
        default_value='0.0',
        description='y position in world')
        
    declare_z_cmd = DeclareLaunchArgument(
        'z',
        default_value='0.1',
        description='z position in world')
        
    declare_slam_params_file_cmd = DeclareLaunchArgument(
        'slam_params_file',
        default_value=os.path.join(rbvogui_cartographer_dir, 'config', 'slam_toolbox_params.yaml'),
        description='Full path to the ROS2 parameters file to use for the slam_toolbox node')
        
    declare_nav2_params_file_cmd = DeclareLaunchArgument(
        'nav2_params_file',
        default_value=os.path.join(rbvogui_cartographer_dir, 'config', 'nav2_params.yaml'),
        description='Full path to the ROS2 parameters file to use for Nav2')

    # Gazebo Ignition World launch (headless)
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(rbvogui_cartographer_dir, 'launch', 'spawn_world_headless.launch.py')
        ),
        launch_arguments={
            'world': world,
        }.items()
    )

    # Robot spawn launch (without RViz) - using our custom launch file
    robot_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(rbvogui_cartographer_dir, 'launch', 'spawn_robot_no_rviz.launch.py')
        ),
        launch_arguments={
            'robot': robot,
            'namespace': namespace,
            'x': x,
            'y': y,
            'z': z,
        }.items()
    )

    # SLAM Toolbox launch
    slam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(slam_toolbox_dir, 'launch', 'online_async_launch.py')
        ),
        launch_arguments={
            'slam_params_file': slam_params_file,
            'use_sim_time': use_sim_time,
        }.items()
    )
    
    # Nav2 Navigation launch
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_bringup_dir, 'launch', 'navigation_launch.py')
        ),
        launch_arguments={
            'namespace': namespace,
            'use_sim_time': use_sim_time,
            'params_file': nav2_params_file,
        }.items()
    )

    # Foxglove Bridge with optimized parameters
    foxglove_bridge = Node(
        package='foxglove_bridge',
        executable='foxglove_bridge',
        name='foxglove_bridge',
        parameters=[
            os.path.join(rbvogui_cartographer_dir, 'config', 'foxglove_bridge_params.yaml'),
            {'use_sim_time': use_sim_time}
        ],
        output='screen'
    )

    # Create the launch description and populate
    ld = LaunchDescription()

    # Add the commands to the launch description
    ld.add_action(declare_namespace_cmd)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_world_cmd)
    ld.add_action(declare_robot_cmd)
    ld.add_action(declare_x_cmd)
    ld.add_action(declare_y_cmd)
    ld.add_action(declare_z_cmd)
    ld.add_action(declare_slam_params_file_cmd)
    ld.add_action(declare_nav2_params_file_cmd)
    
    # Add the actions to the launch description with timing
    ld.add_action(gazebo_launch)
    ld.add_action(TimerAction(period=5.0, actions=[robot_launch]))
    ld.add_action(TimerAction(period=10.0, actions=[slam_launch]))
    ld.add_action(TimerAction(period=15.0, actions=[nav2_launch]))
    ld.add_action(TimerAction(period=8.0, actions=[foxglove_bridge]))

    return ld 