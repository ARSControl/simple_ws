cmake_minimum_required(VERSION 2.8.3)
project(simple_publisher_custom_msg)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)

add_message_files(
  FILES
  NewMessage.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(simple_publisher_custom src/publisher.cpp src/publisher_node.cpp)
target_link_libraries(simple_publisher_custom ${catkin_LIBRARIES})
add_dependencies(simple_publisher_custom ${simple_publisher_custom_msg_EXPORTED_TARGETS})