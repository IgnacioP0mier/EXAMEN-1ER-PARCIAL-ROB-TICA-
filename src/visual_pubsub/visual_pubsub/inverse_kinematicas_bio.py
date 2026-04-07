import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Point
import numpy as np


class InverseKinematics(Node):

    def __init__(self):
        super().__init__('inverse_kinematicas_bio')

        self.joint_pub = self.create_publisher(JointState, 'joint_states', 10)
        self.target_sub = self.create_subscription(
            Point, 'target_position', self.target_callback, 10
        )

        self.l1 = 10.0
        self.l2 = 6.0
        self.l3 = 4.0
        self.l4 = 3.0

        self.q = np.array([0.2, -0.4, 0.3, -0.2], dtype=float)

        self.target_pos = np.array([10.0, 5.0], dtype=float)

        # Parámetros IK
        self.step_size = 0.1
        self.tolerance = 0.01
        self.damping_factor = 0.1

        self.timer = self.create_timer(0.1, self.update_joints)

    def forward_kinematics(self, q):
        q1, q2, q3, q4 = q

        a1 = q1
        a2 = q1 + q2
        a3 = q1 + q2 + q3
        a4 = q1 + q2 + q3 + q4

        x = (self.l1 * np.cos(a1) +
             self.l2 * np.cos(a2) +
             self.l3 * np.cos(a3) +
             self.l4 * np.cos(a4))

        y = (self.l1 * np.sin(a1) +
             self.l2 * np.sin(a2) +
             self.l3 * np.sin(a3) +
             self.l4 * np.sin(a4))

        return np.array([x, y], dtype=float)

    def jacobian(self, q):
        q1, q2, q3, q4 = q

        a1 = q1
        a2 = q1 + q2
        a3 = q1 + q2 + q3
        a4 = q1 + q2 + q3 + q4

        j11 = -(self.l1*np.sin(a1) + self.l2*np.sin(a2) +
                self.l3*np.sin(a3) + self.l4*np.sin(a4))
        j12 = -(self.l2*np.sin(a2) + self.l3*np.sin(a3) + self.l4*np.sin(a4))
        j13 = -(self.l3*np.sin(a3) + self.l4*np.sin(a4))
        j14 = -self.l4*np.sin(a4)

        j21 = (self.l1*np.cos(a1) + self.l2*np.cos(a2) +
               self.l3*np.cos(a3) + self.l4*np.cos(a4))
        j22 = (self.l2*np.cos(a2) + self.l3*np.cos(a3) + self.l4*np.cos(a4))
        j23 = (self.l3*np.cos(a3) + self.l4*np.cos(a4))
        j24 = self.l4*np.cos(a4)

        return np.array([
            [j11, j12, j13, j14],
            [j21, j22, j23, j24]
        ], dtype=float)

    def target_callback(self, msg):
        self.target_pos = np.array([msg.x, msg.y], dtype=float)
        self.get_logger().info(f"New target received: {self.target_pos}")

    def update_joints(self):
        current_pos = self.forward_kinematics(self.q)
        error = self.target_pos - current_pos
        error_norm = np.linalg.norm(error)

        self.get_logger().info(f"Current position: {current_pos}")
        self.get_logger().info(f"Target position: {self.target_pos}")
        self.get_logger().info(f"Error norm: {error_norm}")

        if error_norm > self.tolerance:
            J = self.jacobian(self.q)

            JT = J.T
            JJT = J @ JT
            damping = (self.damping_factor ** 2) * np.eye(2)

            dq = JT @ np.linalg.solve(JJT + damping, error)

            self.q += self.step_size * dq

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()

        msg.name = ['q1', 'q2', 'q3', 'q4']
        msg.position = self.q.tolist()

        self.joint_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = InverseKinematics()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
