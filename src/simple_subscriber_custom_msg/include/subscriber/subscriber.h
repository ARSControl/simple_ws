#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <simple_publisher_custom_msg/NewMessage.h>


class Subscriber
{
	public:
		Subscriber();
		void spinner(void);
	private:
		void DataCallback(const simple_publisher_custom_msg::NewMessage::ConstPtr& msg);
		ros::NodeHandle nh;
		ros::Subscriber sub;
};

#endif /* SUBSCRIBER_H */
