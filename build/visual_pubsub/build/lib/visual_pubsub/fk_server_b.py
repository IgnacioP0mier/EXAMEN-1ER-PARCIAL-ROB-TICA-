import rclpy
from rclpy.node import Node
import numpy as np
from custom_interface.srv import GetPosition


class FKServerB(Node):

    def __init__(self):
        super().__init__('fk_server_b')

        self.l1 = 10.0
        self.l2 = 6.0
        self.l3 = 4.0
        self.l4 = 3.0

        self.srv = self.create_service(
            GetPosition,
            'get_position_b',
            self.handle_get_position
        )

        self.get_logger().info('Servidor FK Robot B listo (4 articulaciones, 2D).')

    def handle_get_position(self, request, response):
        th1 = float(request.th1)
        th2 = float(request.th2)
        th3 = float(request.th3)
        th4 = float(request.th4)

        c1 = th1
        c2 = th1 + th2
        c3 = th1 + th2 + th3
        c4 = th1 + th2 + th3 + th4

        response.x = (
            self.l1 * np.cos(c1)
            + self.l2 * np.cos(c2)
            + self.l3 * np.cos(c3)
            + self.l4 * np.cos(c4)
        )

        response.y = (
            self.l1 * np.sin(c1)
            + self.l2 * np.sin(c2)
            + self.l3 * np.sin(c3)
            + self.l4 * np.sin(c4)
        )

        response.z = 0.0  

        self.get_logger().info(
            f'Robot B → th=({th1:.3f}, {th2:.3f}, {th3:.3f}, {th4:.3f}) '
            f'→ pos=({response.x:.4f}, {response.y:.4f}, {response.z:.4f})'
        )

        return response


def main(args=None):
    rclpy.init(args=args)
    node = FKServerB()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()