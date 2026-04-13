from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([

        Node(
            package='mypkg',
            executable='node_1',
            name='node_1',
            output='screen'
        ),

        Node(
            package='mypkg',
            executable='node_2',
            name='node_2',
            output='screen'
        ),

        Node(
            package='mypkg',
            executable='node_3',
            name='node_3',
            output='screen'
        ),

        Node(
            package='mypkg',
            executable='node_4',
            name='node_4',
            output='screen'
        ),

        Node(
            package='mypkg',
            executable='node_5',
            name='node_5',
            output='screen'
        ),

    ])