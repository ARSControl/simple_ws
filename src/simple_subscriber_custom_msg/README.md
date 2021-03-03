# simple_subscriber_custom_msg

This project is a simple subscriber with custom message. It is useful to use it as a template for more complex projects.

## Getting Started

The node will basically continue to search if a new message is published on the topic /new_message.
If there is a new message it executes the callback (the function named DataCallback).

### Prerequisites 

In order to correctly compile this package you need also the package "simple_publisher_custom_msg".

## Running the tests

After compiling the node you have to open the terminal and type

```
roslaunch simple_subscriber_custom_msg subscriber.launch
```

## Authors

* **Andrea Pupa** 
