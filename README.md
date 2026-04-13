# EXAMEN-1ER-PARCIAL-ROB-TICA-
Morales Franco, Pomier Ignacio

A)

Calculos realizados en los .ipynb

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

source install/setup.bash

ros2 run visual_pubsub fk_server_b

source install/setup.bash

ros2 run visual_pubsub fk_client_b

----------------------------

B)

ros2 launch mypkg sensor.launch.py

VENTANA 1 
colcon build

source install/setup.bash

ros2 run mypkg node_1

VENTANA 2
colcon build

source install/setup.bash

ros2 run mypkg node_2

VENTANA 3
colcon build

source install/setup.bash

ros2 run mypkg node_3

VENTANA 4
colcon build

source install/setup.bash

ros2 run mypkg node_4

VENTANA 5
colcon build

source install/setup.bash

ros2 run mypkg node_5

VENTANA de graficador
rqt_graph
