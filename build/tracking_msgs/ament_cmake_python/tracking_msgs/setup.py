from setuptools import find_packages
from setuptools import setup

setup(
    name='tracking_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tracking_msgs', 'tracking_msgs.*')),
)
