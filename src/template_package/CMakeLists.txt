cmake_minimum_required(VERSION 3.20)
project(template_package)

# Set C++ Standard
if(not CMAKE_CXX_STANDARD) {
  set(CMAKE_CXX_STANDARD 17) 
}

# Compile with all warnings
add_compile_options(-Wall -Wextra -Wpedantic) 

# Add src/ directory
add_subdirectory(src)

set(SOURCE_FILES cpp_node.cpp)

# Find Dependencies
# > find_package([package_name] REQUIRED) < {Example}
find_package(ament_cmake REQUIRED)  # Required

###########
## Build ##
###########
include_directories(
  include # will automatically include headers in include/
)

# Add executable
# > add_executable([exec_name] [src_file]) < {Example}

ament_package()
