# EXAMEN-1ER-PARCIAL-ROB-TICA-
Morales Franco, Pomier Ignacio

A)
colcon build

source install/setup.bash

ros2 launch robot_description robot_a.launch.py 

ros2 launch robot_description bioinspirado.launch.py 

ros2 topic pub /target_position geometry_msgs/msg/Point "{x: 1.2, y: 0.5, z: 4.0}" -1

ros2 run visual_pubsub inverse_kinematics

-------------------------
Extra:

robot A:

source install/setup.bash

ros2 run visual_pubsub fk_server_a


source install/setup.bash

ros2 run visual_pubsub fk_client_a

robot Bioinspirado:

install/setup.bash

ros2 run visual_pubsub fk_server_b

install/setup.bash

ros2 run visual_pubsub fk_client_b

----------------------------

B)
