cmake_minimum_required(VERSION 2.8.3)
project(simple_service)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)

add_service_files(
  FILES
  CopyNumber.srv
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

add_executable(simple_service src/service.cpp src/service_node.cpp)
target_link_libraries(simple_service ${catkin_LIBRARIES})
add_dependencies(simple_service ${simple_service_EXPORTED_TARGETS})