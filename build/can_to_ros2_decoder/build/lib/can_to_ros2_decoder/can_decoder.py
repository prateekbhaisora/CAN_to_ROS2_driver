import tkinter as tk
from tkinter import filedialog
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import asammdf
import cantools

class CanDecoderNode(Node):
    def __init__(self, dbc_file_path, mdf_file_path):
        super().__init__('can_decoder')
        if dbc_file_path is None or mdf_file_path is None:
            self.get_logger().error("\n\nAborting program. Both DBC and MDF file must be selected!!!\n")
            return
        self.get_logger().info("\n\nReading raw CAN data now!\n")
        self.publisher_ = self.create_publisher(String, '/hr_can_data', 10)
        self.db = cantools.database.load_file(dbc_file_path)
        self.mdf = asammdf.MDF(mdf_file_path)
        self.get_logger().info("\n\nPublishing HR CAN data now!\n")
        self.timer = self.create_timer(1, self.publish_data)

    def publish_data(self):
        for id_data, data_bytes_data in zip(self.mdf.iter_get(name='CAN_DataFrame.ID'),
                                            self.mdf.iter_get(name='CAN_DataFrame.DataBytes')):

            all_can_ids = id_data.samples
            all_data_bytes = data_bytes_data.samples

            for can_id, data_bytes in zip(all_can_ids, all_data_bytes):
                can_id = int(can_id)
                data_bytes = bytes(list(data_bytes))
                if (can_id != 2024):
                    continue
                decoded_id = self.db.decode_message(can_id, data_bytes)
                decoded_str = str(decoded_id)
                msg = String()
                msg.data = decoded_str
                self.publisher_.publish(msg)

    def close(self):
        self.mdf.close()

def browse_dbc_file(root):
    global dbc_file_path
    dbc_file_path = filedialog.askopenfilename()
    print("Selected DBC file:", dbc_file_path)
    dbc_file_path_set = True
    if dbc_file_path_set and mdf_file_path_set:
        root.quit()  


def browse_mdf_file(root):
    global mdf_file_path
    mdf_file_path = filedialog.askopenfilename()
    print("Selected MDF file:", mdf_file_path)
    mdf_file_path_set = True
    if dbc_file_path_set and mdf_file_path_set:
        root.quit()  

def main(args=None):
    global dbc_file_path, mdf_file_path
    global dbc_file_path_set, mdf_file_path_set

    dbc_file_path, mdf_file_path = None, None
    dbc_file_path_set, mdf_file_path_set = False, False

    root = tk.Tk()
    root.title("File Path Selection")
    root.geometry("300x200") 

    dbc_frame = tk.Frame(root)
    dbc_frame.pack(pady=10)

    dbc_label = tk.Label(dbc_frame, text="Select DBC File:", padx=10)
    dbc_label.pack(side=tk.LEFT)

    dbc_button = tk.Button(dbc_frame, text="Browse", command=lambda: browse_dbc_file(root))
    dbc_button.pack(side=tk.LEFT)

    mdf_frame = tk.Frame(root)
    mdf_frame.pack(pady=10)

    mdf_label = tk.Label(mdf_frame, text="Select MDF File:", padx=10)
    mdf_label.pack(side=tk.LEFT)

    mdf_button = tk.Button(mdf_frame, text="Browse", command=lambda: browse_mdf_file(root))
    mdf_button.pack(side=tk.LEFT)

    root.mainloop()

    rclpy.init(args=args)
    node = CanDecoderNode(dbc_file_path, mdf_file_path)
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.close()
        rclpy.shutdown()

if __name__ == '__main__':
    main()