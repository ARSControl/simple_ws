#include "subscriber/subscriber.h"
Subscriber::Subscriber()
{
    sub = nh.subscribe("/new_message", 2, &Subscriber::DataCallback, this);
}

void Subscriber::DataCallback(const simple_publisher_custom_msg::NewMessage::ConstPtr& msg)
{
    std::cout << "Name: " << msg->name << std::endl;
    std::cout << "Value: " << msg->value << std::endl;
}
void Subscriber::spinner()
{
    ros::spinOnce();
}
