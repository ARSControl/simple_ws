#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <ros/ros.h>
#include <std_msgs/Int32.h>


class Publisher
{
	public:
		Publisher();
		void spinner(void);
	private:
		ros::NodeHandle nh;
		ros::Publisher pub;
		std_msgs::Int32 msg;
};

#endif /* PUBLISHER_H */
