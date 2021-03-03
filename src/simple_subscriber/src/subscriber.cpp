#include "subscriber/subscriber.h"
Subscriber::Subscriber()
{
    sub = nh.subscribe("/number", 2, &Subscriber::DataCallback, this);
}

void Subscriber::DataCallback(const std_msgs::Int32::ConstPtr& msg)
{
    std::cout << "I received: " << msg->data << std::endl;
}
void Subscriber::spinner()
{
    ros::spinOnce();
}
