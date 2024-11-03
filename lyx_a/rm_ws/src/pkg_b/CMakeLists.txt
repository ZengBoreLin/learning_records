cmake_minimum_required(VERSION 3.0.2)
project(pkg_b)

## Use C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(catkin REQUIRED COMPONENTS
        roscpp)

catkin_package(
        CATKIN_DEPENDS
        roscpp
)
include_directories(
        ${catkin_INCLUDE_DIRS}
)

add_executable(listener listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
