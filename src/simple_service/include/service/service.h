#ifndef SERVICE_H
#define SERVICE_H

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include "simple_service/CopyNumber.h"


class Service
{
	public:
		Service();
		void spinner(void);
	private:
		bool copy(simple_service::CopyNumber::Request  &req, simple_service::CopyNumber::Response &res);
		ros::NodeHandle nh;
		ros::ServiceServer service;
		
};

#endif /* SERVICE_H */
