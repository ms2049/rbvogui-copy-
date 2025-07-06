import os
from setuptools import setup

package_name = 'rbvogui_cartographer'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/' + package_name + '/launch', [
            'launch/nav2_slam.launch.py',
            'launch/rbvogui_foxglove.launch.py',
            'launch/full_sim_foxglove.launch.py',
            'launch/full_sim_rtabmap.launch.py',
            'launch/spawn_robot_no_rviz.launch.py',
            'launch/spawn_world_headless.launch.py',
        ]),
        ('share/' + package_name + '/config', [
            'config/slam_toolbox_params.yaml',
            'config/rtabmap_laser_params.yaml',
            'config/nav2_params.yaml',
            'config/foxglove_bridge_params.yaml',
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='admin',
    maintainer_email='admin@example.com',
    description='Nav2 SLAM launch for RBVOGUI with Foxglove',
    license='MIT',
    tests_require=['pytest'],
    entry_points={},
)
