#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <ros/ros.h>
#include <std_msgs/Int32.h>


class Subscriber
{
	public:
		Subscriber();
		void spinner(void);
	private:
		void DataCallback(const std_msgs::Int32::ConstPtr& msg);
		ros::NodeHandle nh;
		ros::Subscriber sub;
};

#endif /* SUBSCRIBER_H */
