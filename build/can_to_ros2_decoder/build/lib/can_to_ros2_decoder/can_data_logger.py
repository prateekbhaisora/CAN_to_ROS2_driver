import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class CanDataLogger(Node):
    def __init__(self):
        super().__init__('can_data_logger')
        self.get_logger().info('\n\nListening for HR CAN data...\n')
        self.subscription = self.create_subscription(String, '/hr_can_data', self.data_callback, 10)
        self.subscription
        self.publisher_ = self.create_publisher(String, 'logged_can_data', 10)

    def data_callback(self, msg):
        self.get_logger().info('\nReceived CAN Data: %s\n' % msg.data)
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = CanDataLogger()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()