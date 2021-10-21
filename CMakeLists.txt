cmake_minimum_required(VERSION 3.5)
project(rust_cxx_autoware_auto_msgs_cov)

find_package(ament_cmake_auto REQUIRED)

ament_auto_find_build_dependencies()

ament_auto_add_library(${PROJECT_NAME} SHARED
    src/common.cpp
    src/builtin_interfaces.cpp
    src/std_msgs.cpp
    src/geometry_msgs.cpp
    src/autoware_auto_msgs.cpp
)

ament_auto_package()
