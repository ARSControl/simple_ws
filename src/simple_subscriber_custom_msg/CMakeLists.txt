cmake_minimum_required(VERSION 2.8.3)
project(simple_subscriber_custom_msg)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  simple_publisher_custom_msg
)

catkin_package(
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(simple_subscriber_custom src/subscriber.cpp src/subscriber_node.cpp)
target_link_libraries(simple_subscriber_custom ${catkin_LIBRARIES})
add_dependencies(simple_subscriber_custom ${catkin_EXPORTED_TARGETS})
