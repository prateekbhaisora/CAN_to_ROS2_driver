from setuptools import find_packages, setup

package_name = 'can_to_ros2_decoder'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Prateek',
    maintainer_email='prateekbhaisora07@gmail.com',
    description='ROS 2 package for decoding CAN data and publishing it to a topic',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "can_data_sender_test = can_to_ros2_decoder.can_data_sender_test:main",
            "can_decoder = can_to_ros2_decoder.can_decoder:main",
            "can_data_logger = can_to_ros2_decoder.can_data_logger:main",
            "can_data_visualizer = can_to_ros2_decoder.can_data_visualizer:main"
            ],
    },
)
