cmake_minimum_required(VERSION 2.8.3)
project(simple_client)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  simple_service
)

catkin_package(
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(simple_client src/client.cpp src/client_node.cpp)
target_link_libraries(simple_client ${catkin_LIBRARIES})
add_dependencies(simple_client ${catkin_EXPORTED_TARGETS})