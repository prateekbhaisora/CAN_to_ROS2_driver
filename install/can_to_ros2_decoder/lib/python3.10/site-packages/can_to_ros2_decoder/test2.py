import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class CANDataSubscriber(Node):
    def __init__(self):
        super().__init__('can_data_subscriber')
        self.subscription_ = self.create_subscription(
            String,
            '/from_CAN_Bus',
            self.listener_callback,
            10)
        self.subscription_

    def listener_callback(self, msg):
        self.get_logger().info('Received data: %s' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = CANDataSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

