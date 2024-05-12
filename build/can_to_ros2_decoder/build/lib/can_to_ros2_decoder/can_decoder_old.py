#!/usr/bin/env python3
import os, rclpy, cantools
from std_msgs.msg import String 
from driver_interfaces.msg import HRCanDataFormat
from rclpy.node import Node
class CanDataDecoder(Node):
    def __init__(self):
        super().__init__("can_data_decoder")
        self.get_logger().info("\n\nCAN to ROS2 Decoder has been initialized and is ready to decode CAN messages!\n")
        dbc_file_path = "/home/prateek/ros2_ws/src/can_to_ros2_decoder/can-database.dbc"
        if not os.path.exists(dbc_file_path):
            self.get_logger().error(f"DBC file {dbc_file_path} does not exist.")
            return
        self.db = cantools.database.load_file(dbc_file_path, strict=False)
        self.subscription = self.create_subscription(String, "raw_can_data", self.raw_can_data_callback, 10)
        self.publisher = self.create_publisher(HRCanDataFormat, "hr_can_data", 10)

    def raw_can_data_callback(self, msg):
        raw_can_msg = msg.data
        raw_can_msg_id, raw_can_msg_data = self.findCanIDandData(raw_can_msg)
        try:
            decoded_msg = self.db.decode_message(raw_can_msg_id, raw_can_msg_data)
        except Exception as e:
            self.get_logger().error(f"Failed to decode raw CAN message: {e}")
            return
        hr_can_msg = HRCanDataFormat()  
        hr_can_msg.data = decoded_msg 
        self.publisher.publish(hr_can_msg)

    def findCanIDandData(self, msg):
        components = msg.split(";")
        can_id, data = components[2], components[-1]
        print("can_id: ", can_id)
        print("data: ", data)
        can_id = int(can_id, 16)
        data = bytes.fromhex(data)   
        return can_id, data

def main(args=None):
    rclpy.init(args=args)
    node = CanDataDecoder()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()