#!/usr/bin/env python3
import os
from std_msgs.msg import String
import rclpy
from rclpy.node import Node
 
class canDataSender(Node): 
    def __init__(self):
        super().__init__("can_data_sender") 
        file_path = "/home/prateek/ros2_ws/src/dataset/Hyundai-i20/data.txt"
        if not os.path.exists(file_path):
            self.get_logger().error(f"File {file_path} does not exist.")
            return
        with open(file_path, 'r') as file:
            self.can_data_to_publish = file.read().splitlines()
        self.get_logger().info("\n\nPublishing raw CAN data now!\n")
        publisher = self.create_publisher(String, "raw_can_data", 10)
        msg = String()
        for data in self.can_data_to_publish:
            msg.data = data
            publisher.publish(msg)
            self.get_logger().info(f"Published data: {data}")
def main(args=None):
    rclpy.init(args=args)
    node = canDataSender() 
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
