import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from custom_interface.srv import GetPosition


class FKClientA(Node):

    def __init__(self):
        super().__init__('fk_client_a')
        self.joints = None

        self.sub = self.create_subscription(
            JointState, 'joint_states', self.joint_callback, 10)

        self.client = self.create_client(GetPosition, 'get_position_a')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('Esperando fk_server_a...')

    def joint_callback(self, msg):
        self.joints = msg.position

    def send_request(self):
        while self.joints is None:
            rclpy.spin_once(self, timeout_sec=0.1)

        req = GetPosition.Request()
        req.th1 = float(self.joints[0])
        req.th2 = float(self.joints[1])
        req.th3 = float(self.joints[2])
        req.th4 = 0.0

        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main(args=None):
    rclpy.init(args=args)
    node = FKClientA()
    result = node.send_request()

    if result:
        node.get_logger().info(
            f'Robot A → x={result.x:.4f}, y={result.y:.4f}, z={result.z:.4f}'
        )
    else:
        node.get_logger().error('El servicio no respondió.')

    node.destroy_node()
    rclpy.shutdown()