from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'mypkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pablo',
    maintainer_email='pablo.sanabria@ucb.edu.bo',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'node_1 = mypkg.node_1:main',
            'node_2 = mypkg.node_2:main',
            'node_3 = mypkg.node_3:main',
            'node_4 = mypkg.node_4:main',
            'node_5 = mypkg.node_5:main',
        ],
    },
)
