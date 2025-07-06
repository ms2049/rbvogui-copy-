# RBVOGui Cartographer - ROS2 SLAM & Navigation with Foxglove

A complete ROS2 system for running SLAM (Simultaneous Localization and Mapping) and navigation with the RBVOGui robot in Gazebo Ignition, using Foxglove Studio for visualization.

## Features

- **Headless Gazebo Ignition**: Runs without GUI for SSH/remote environments
- **SLAM Toolbox**: Real-time mapping using laser scanner data
- **Nav2 Navigation Stack**: Complete autonomous navigation
- **Foxglove Bridge**: Web-based visualization on port 8765
- **Optimized Performance**: Reduced message dropping and buffer overflow

## Quick Start

### 1. Launch the Complete System

```bash
cd /home/admin/ros2_ws
source install/setup.bash
ros2 launch rbvogui_cartographer rbvogui_foxglove.launch.py
```

This will start:
- Gazebo Ignition (headless) with demo world
- RBVOGui robot with sensors
- SLAM Toolbox for mapping
- Nav2 navigation stack
- Foxglove bridge on port 8765

### 2. Check System Status

```bash
python3 src/rbvogui_cartographer/scripts/check_system.py
```

### 3. Control the Robot

```bash
python3 src/rbvogui_cartographer/scripts/simple_teleop.py
```

Use WASD keys:
- `W` - Forward
- `S` - Backward  
- `A` - Turn Left
- `D` - Turn Right
- `X` - Stop
- `Q` - Quit

### 4. Visualize with Foxglove Studio

1. Open Foxglove Studio in your browser or desktop app
2. Connect to: `ws://YOUR_SERVER_IP:8765`
3. Add visualization panels for:
   - Map (`/map`)
   - Laser Scan (`/robot/front_laser/scan`)
   - Robot TF frames
   - Camera feeds (`/robot/front_rgbd_camera/color/image_raw`)

## Key Topics

| Topic | Type | Description |
|-------|------|-------------|
| `/map` | nav_msgs/OccupancyGrid | SLAM-generated map |
| `/robot/front_laser/scan` | sensor_msgs/LaserScan | Front laser scanner |
| `/robot/rear_laser/scan` | sensor_msgs/LaserScan | Rear laser scanner |
| `/robot/robotnik_base_controller/cmd_vel_unstamped` | geometry_msgs/Twist | Robot movement commands |
| `/tf` | tf2_msgs/TFMessage | Transform tree |

## Manual Robot Control

```bash
# Move forward
ros2 topic pub --once /robot/robotnik_base_controller/cmd_vel_unstamped geometry_msgs/msg/Twist \
  "{linear: {x: 0.2, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

# Stop
ros2 topic pub --once /robot/robotnik_base_controller/cmd_vel_unstamped geometry_msgs/msg/Twist \
  "{linear: {x: 0.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"
```

## Configuration Files

- `config/slam_toolbox_params.yaml` - SLAM Toolbox configuration
- `config/nav2_params.yaml` - Nav2 navigation parameters  
- `config/foxglove_bridge_params.yaml` - Foxglove bridge optimization

## Launch Files

- `rbvogui_foxglove.launch.py` - Complete system launch
- `spawn_world_headless.launch.py` - Headless Gazebo world only
- `spawn_robot_no_rviz.launch.py` - Robot spawning without RViz
- `nav2_slam.launch.py` - SLAM and Nav2 only

## Troubleshooting

### Gazebo GUI Crashes
The system uses headless Gazebo to avoid Qt display issues in SSH environments. If you need GUI, run on a system with display.

### High CPU Usage
SLAM Toolbox is configured to throttle scans and reduce processing load. Adjust `throttle_scans` in slam_toolbox_params.yaml if needed.

### Foxglove Buffer Warnings
The system is optimized to reduce buffer overflow. Check `foxglove_bridge_params.yaml` for configuration.

### Robot Not Moving
1. Check if controllers are loaded: `ros2 control list_controllers`
2. Verify topic: `ros2 topic list | grep cmd_vel`
3. Test manual command as shown above

## System Requirements

- ROS2 Humble
- Gazebo Ignition
- Python 3.10+
- At least 4GB RAM recommended

## Development

To modify the system:

1. Edit configuration files in `config/`
2. Update launch files in `launch/`
3. Rebuild: `colcon build --packages-select rbvogui_cartographer`
4. Source: `source install/setup.bash` 