# simple_service

This project is a simple service which is useful to use as a template for more complex projects.

## Getting Started

The node will basically continue to search if a new call is requested on the service CopyNumber.
If there is a new call it executes the callback (function named copy).

### Prerequisites 

The package compiles also the srv files.
In order to do this it requires the packages message_generation and message_runtime.
They should be already installed, if not type

```
sudo apt-get install ros-melodic-message-generation ros-melodic-message-runtime 
```

Note that if you have another ROS version, you have to substitute melodic with the name of your version.

## Running the tests

After compiling the node you have to open the terminal and type

```
roslaunch simple_service service.launch
```

## Authors

* **Andrea Pupa** 
