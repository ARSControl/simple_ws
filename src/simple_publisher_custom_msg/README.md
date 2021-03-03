# simple_publisher_custom_msg

This project is a simple publisher with a custom message. It is useful to use it as a template for more complex projects.

## Getting Started

The node will basically continue to publish a new message of type NewMessage on the topic /new_message.

### Prerequisites 

The package compiles also the msg files.
In order to do this it requires the packages message_generation and message_runtime.
They should be already installed, if not type

```
sudo apt-get install ros-melodic-message-generation ros-melodic-message-runtime 
```

Note that if you have another ROS version, you have to substitute melodic with the name of your version.

## Running the tests

After compiling the node you have to open the terminal and type

```
roslaunch simple_publisher_custom_msg publisher.launch
```

## Authors

* **Andrea Pupa** 
