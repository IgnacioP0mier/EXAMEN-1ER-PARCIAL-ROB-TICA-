import rclpy
from rclpy.node import Node
import numpy as np
from custom_interface.srv import GetPosition


class FKServerA(Node):

    def __init__(self):
        super().__init__('fk_server_a')

        # Parámetros fijos del Robot A
        self.l1 = 3.0
        self.l2 = 1.5
        self.l3 = 1.5

        self.srv = self.create_service(
            GetPosition,
            'get_position_a',
            self.handle_get_position
        )

        self.get_logger().info('Servidor FK Robot A listo (3 articulaciones, 3D).')

    def handle_get_position(self, request, response):
        th1 = float(request.th1)
        th2 = float(request.th2)
        th3 = float(request.th3)
        # th4 existe en el srv, pero Robot A no lo usa

        response.x = (
            self.l2 * np.cos(th2) + self.l3 * np.cos(th2 + th3)
        ) * np.cos(th1)

        response.y = (
            self.l2 * np.cos(th2) + self.l3 * np.cos(th2 + th3)
        ) * np.sin(th1)

        response.z = (
            self.l1
            + self.l2 * np.sin(th2)
            + self.l3 * np.sin(th2 + th3)
        )

        self.get_logger().info(
            f'Robot A → th=({th1:.3f}, {th2:.3f}, {th3:.3f}) '
            f'→ pos=({response.x:.4f}, {response.y:.4f}, {response.z:.4f})'
        )

        return response


def main(args=None):
    rclpy.init(args=args)
    node = FKServerA()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()