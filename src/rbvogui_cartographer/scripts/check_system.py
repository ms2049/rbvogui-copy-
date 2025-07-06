#!/usr/bin/env python3

import subprocess
import time
import sys

def run_command(cmd):
    """Run a shell command and return the output."""
    try:
        result = subprocess.run(cmd, shell=True, capture_output=True, text=True, timeout=10)
        return result.returncode == 0, result.stdout.strip()
    except subprocess.TimeoutExpired:
        return False, "Command timed out"
    except Exception as e:
        return False, str(e)

def check_topics():
    """Check if essential topics are available."""
    print("🔍 Checking ROS Topics...")
    
    essential_topics = [
        '/clock',
        '/map', 
        '/robot/front_laser/scan',
        '/robot/robotnik_base_controller/cmd_vel_unstamped',
        '/tf',
        '/tf_static'
    ]
    
    success, output = run_command("ros2 topic list")
    if not success:
        print("❌ Failed to get topic list")
        return False
        
    available_topics = output.split('\n')
    all_good = True
    
    for topic in essential_topics:
        if topic in available_topics:
            print(f"  ✅ {topic}")
        else:
            print(f"  ❌ {topic} - MISSING")
            all_good = False
            
    return all_good

def check_nodes():
    """Check if essential nodes are running."""
    print("\n🔍 Checking ROS Nodes...")
    
    essential_nodes = [
        'foxglove_bridge',
        'slam_toolbox', 
        'robot_state_publisher'
    ]
    
    success, output = run_command("ros2 node list")
    if not success:
        print("❌ Failed to get node list")
        return False
        
    available_nodes = output.split('\n')
    all_good = True
    
    for node in essential_nodes:
        # Check if any node contains this name
        found = any(node in n for n in available_nodes)
        if found:
            print(f"  ✅ {node}")
        else:
            print(f"  ❌ {node} - MISSING")
            all_good = False
            
    return all_good

def check_foxglove():
    """Check Foxglove bridge connectivity."""
    print("\n🔍 Checking Foxglove Bridge...")
    
    success, output = run_command("netstat -tulpn | grep :8765")
    if success and "8765" in output:
        print("  ✅ Foxglove bridge listening on port 8765")
        return True
    else:
        print("  ❌ Foxglove bridge not accessible on port 8765")
        return False

def check_gazebo():
    """Check if Gazebo is running."""
    print("\n🔍 Checking Gazebo Status...")
    
    success, output = run_command("pgrep -f 'ign gazebo'")
    if success and output:
        print("  ✅ Gazebo process running")
        
        # Check if clock topic is publishing
        success2, output2 = run_command("timeout 3 ros2 topic hz /clock")
        if success2 and "average rate" in output2:
            print("  ✅ Gazebo simulation clock active")
            return True
        else:
            print("  ⚠️  Gazebo running but clock not publishing")
            return False
    else:
        print("  ❌ Gazebo not running")
        return False

def check_robot_movement():
    """Test if robot can receive movement commands."""
    print("\n🔍 Testing Robot Movement...")
    
    # Try to publish a small movement command
    cmd = 'ros2 topic pub --once /robot/robotnik_base_controller/cmd_vel_unstamped geometry_msgs/msg/Twist "{linear: {x: 0.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"'
    success, output = run_command(cmd)
    
    if success:
        print("  ✅ Robot movement topic accessible")
        return True
    else:
        print("  ❌ Failed to publish to robot movement topic")
        return False

def main():
    print("🤖 ROS2 System Status Check")
    print("=" * 50)
    
    checks = [
        ("Topics", check_topics),
        ("Nodes", check_nodes), 
        ("Foxglove Bridge", check_foxglove),
        ("Gazebo", check_gazebo),
        ("Robot Movement", check_robot_movement)
    ]
    
    results = []
    for name, check_func in checks:
        try:
            result = check_func()
            results.append((name, result))
        except Exception as e:
            print(f"❌ Error checking {name}: {e}")
            results.append((name, False))
    
    print("\n" + "=" * 50)
    print("📊 Summary:")
    
    all_passed = True
    for name, passed in results:
        status = "✅ PASS" if passed else "❌ FAIL"
        print(f"  {name}: {status}")
        if not passed:
            all_passed = False
    
    print("\n" + "=" * 50)
    if all_passed:
        print("🎉 All systems operational!")
        print("\n💡 To control the robot:")
        print("   python3 src/rbvogui_cartographer/scripts/simple_teleop.py")
        print("\n💡 To view in Foxglove Studio:")
        print("   Connect to ws://YOUR_SERVER_IP:8765")
    else:
        print("⚠️  Some systems need attention")
        
    return 0 if all_passed else 1

if __name__ == '__main__':
    sys.exit(main()) 