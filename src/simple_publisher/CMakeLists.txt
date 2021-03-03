cmake_minimum_required(VERSION 2.8.3)
project(simple_publisher)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(simple_publisher src/publisher.cpp src/publisher_node.cpp)
target_link_libraries(simple_publisher ${catkin_LIBRARIES})
