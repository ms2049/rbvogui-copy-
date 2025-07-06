#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
import termios
import tty
import threading

class SimpleTeleop(Node):
    def __init__(self):
        super().__init__('simple_teleop')
        self.publisher_ = self.create_publisher(
            Twist, 
            '/robot/robotnik_base_controller/cmd_vel_unstamped', 
            10
        )
        
        self.linear_speed = 0.2  # m/s
        self.angular_speed = 0.5  # rad/s
        
        self.msg = Twist()
        self.msg.linear.x = 0.0
        self.msg.linear.y = 0.0
        self.msg.linear.z = 0.0
        self.msg.angular.x = 0.0
        self.msg.angular.y = 0.0
        self.msg.angular.z = 0.0
        
        # Timer to continuously publish velocity commands
        self.timer = self.create_timer(0.1, self.publish_velocity)
        
        self.get_logger().info('Simple Teleop Started!')
        self.get_logger().info('Use WASD keys to control the robot:')
        self.get_logger().info('  W - Forward')
        self.get_logger().info('  S - Backward') 
        self.get_logger().info('  A - Turn Left')
        self.get_logger().info('  D - Turn Right')
        self.get_logger().info('  X - Stop')
        self.get_logger().info('  Q - Quit')
        
    def publish_velocity(self):
        self.publisher_.publish(self.msg)
        
    def update_velocity(self, linear_x, angular_z):
        self.msg.linear.x = linear_x * self.linear_speed
        self.msg.angular.z = angular_z * self.angular_speed

def get_key():
    """Get a single keypress from stdin."""
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(sys.stdin.fileno())
        key = sys.stdin.read(1)
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return key

def main():
    rclpy.init()
    teleop = SimpleTeleop()
    
    # Create a separate thread for ROS spinning
    spin_thread = threading.Thread(target=rclpy.spin, args=(teleop,))
    spin_thread.daemon = True
    spin_thread.start()
    
    try:
        while True:
            key = get_key().lower()
            
            if key == 'w':  # Forward
                teleop.update_velocity(1.0, 0.0)
                print("Moving Forward")
            elif key == 's':  # Backward
                teleop.update_velocity(-1.0, 0.0)
                print("Moving Backward")
            elif key == 'a':  # Turn left
                teleop.update_velocity(0.0, 1.0)
                print("Turning Left")
            elif key == 'd':  # Turn right
                teleop.update_velocity(0.0, -1.0)
                print("Turning Right")
            elif key == 'x':  # Stop
                teleop.update_velocity(0.0, 0.0)
                print("Stopped")
            elif key == 'q':  # Quit
                teleop.update_velocity(0.0, 0.0)
                print("Quitting...")
                break
            elif key == '\x03':  # Ctrl+C
                break
    except KeyboardInterrupt:
        pass
    finally:
        teleop.update_velocity(0.0, 0.0)
        teleop.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 