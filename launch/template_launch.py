from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        '''

        Node(
            package='package1_name',
            namespace='namesapce1_name',
            executable='exec1_name',
            name='node1_name'
        ),
        Node(
            package='package2_name',
            namespace='namesapce2_name',
            executable='exec2_name',
            name='node2_name'
        ),

        ...

        '''
    ])