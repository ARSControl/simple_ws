#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include "simple_publisher_custom_msg/NewMessage.h"


class Publisher
{
	public:
		Publisher();
		void spinner(void);
	private:
		ros::NodeHandle nh;
		ros::Publisher pub;
		simple_publisher_custom_msg::NewMessage msg;
};

#endif /* PUBLISHER_H */
