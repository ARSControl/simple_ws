#include "publisher/publisher.h"

Publisher::Publisher()
{
    pub = nh.advertise<std_msgs::Int32>("/number", 1);
    msg.data = 1;
}

void Publisher::spinner()
{
	pub.publish(msg);
}
