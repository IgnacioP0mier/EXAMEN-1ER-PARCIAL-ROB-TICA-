from setuptools import find_packages, setup

package_name = 'visual_pubsub'

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
    maintainer='carlos',
    maintainer_email='menachocarlos5@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sub_joints = visual_pubsub.sub_joints:main',
            'pub_joints = visual_pubsub.pub_joints:main',
            'inverse_kinematics = visual_pubsub.inverse_kinematics:main',
            'inverse_kinematics_bio = visual_pubsub.inverse_kinematicas_bio:main',

            'fk_server_a = visual_pubsub.fk_server_a:main',
            'fk_server_b = visual_pubsub.fk_server_b:main',
            'fk_client_a = visual_pubsub.fk_client_a:main',
            'fk_client_b = visual_pubsub.fk_client_b:main',

        ],
    },
)
