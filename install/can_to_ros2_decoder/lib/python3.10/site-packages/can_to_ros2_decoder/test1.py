import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class CANDataSender(Node):
    def __init__(self):
        super().__init__('can_data_sender')
        self.publisher_ = self.create_publisher(String, '/from_CAN_Bus', 10)
        self.timer_ = self.create_timer(1, self.publish_data)

    def publish_data(self):
        try:
            with open('11-bit-obd2.MF4', 'r') as file:
                for line in file:
                    msg = String()
                    msg.data = line.strip()
                    self.publisher_.publish(msg)
        except FileNotFoundError:
            self.get_logger().error("File '11-bit-obd2.MF4' not found.")

def main(args=None):
    rclpy.init(args=args)
    node = CANDataSender()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

