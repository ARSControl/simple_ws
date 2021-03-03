#ifndef CLIENT_H
#define CLIENT_H

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include "simple_service/CopyNumber.h"


class Client
{
	public:
		Client();
		void spinner(void);
	private:
		ros::NodeHandle nh;
		ros::ServiceClient client;
		simple_service::CopyNumber srv;
};

#endif /* CLIENT_H */
