cmake_minimum_required(VERSION 3.20)
project(sub_subbase)

# Set C++ Standard
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# Compile with all warnings
add_compile_options(-Wall -Wextra -Wpedantic) 

set(SOURCE_FILES src/SubBaseNode.cpp)

# Find Dependencies
find_package(ament_cmake REQUIRED) 
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

find_package(eigen3_cmake_module REQUIRED)
find_package(Eigen3 REQUIRED)

# Export Dependencies
ament_export_dependencies(eigen3_cmake_module)
ament_export_dependencies(Eigen3)

###########
## Build ##
###########
include_directories(
  include # will automatically include headers in include/
)

# Add executable
add_executable(sub_base_test src/SubBaseNode.cpp)

# Target Dependencies
ament_target_dependencies(sub_base_test 
  rclcpp 
  sensor_msgs
  geometry_msgs
  Eigen3
)

install(TARGETS
  sub_base_test
  DESTINATION lib/${PROJECT_NAME})

ament_package()
