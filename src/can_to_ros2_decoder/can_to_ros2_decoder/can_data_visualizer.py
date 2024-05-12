import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import ast
import matplotlib.pyplot as plt

class CanDataVisualizer(Node):
    def __init__(self):
        super().__init__('can_data_visualizer')
        self.get_logger().info('\n\nVisualizing logged CAN data...\n')
        self.can_data = {}
        self.fig, self.ax = plt.subplots()
        self.ax.set_xlabel('Labels')
        self.ax.set_ylabel('Values')
        self.ax.set_title('Dynamic Bar Graph')
        self.bar_container = None
        self.subscription = self.create_subscription(String, 'logged_can_data', self.data_callback, 10)

    def data_callback(self, msg):
        can_data = ast.literal_eval(msg.data)
        label = can_data['S01PID'].split('_')[1]
        value = can_data[can_data['S01PID']]
        
        if label in self.can_data:
            self.can_data[label] = value
        else:
            self.can_data[label] = value
        
        self.update_graph()

    def update_graph(self):
        if self.bar_container is not None:
            for bar in self.bar_container:
                bar.remove()

        labels = list(self.can_data.keys())
        values = list(self.can_data.values())
        x = range(len(labels))
        self.bar_container = self.ax.bar(x, values)
        self.ax.set_xticks(x)
        self.ax.set_xticklabels(labels)
        self.fig.canvas.draw()
        plt.pause(0.1)

def main(args=None):
    rclpy.init(args=args)
    node = CanDataVisualizer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()