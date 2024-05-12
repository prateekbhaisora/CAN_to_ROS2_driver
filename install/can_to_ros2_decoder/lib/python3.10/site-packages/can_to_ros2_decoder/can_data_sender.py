import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import asammdf

class CanDataSender(Node):
    def __init__(self):
        super().__init__('can_data_sender')
        self.publisher_ = self.create_publisher(asammdf.MDF, '/from_CAN_Bus', 10)
        self.mdf = asammdf.MDF("11-bit-obd2.MF4")

    def publish_mdf(self):
        msg = self.mdf
        self.publisher_.publish(msg)
        self.get_logger().info("Publishing MDF data...")

    def on_shutdown(self):
        self.mdf.close()

def main(args=None):
    rclpy.init(args=args)
    node = CanDataSender()
    try:
        node.publish_mdf()
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("Unable to read raw CAN data. Aborting publish...")
    finally:
        node.on_shutdown()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
