#include "publisher/publisher.h"

Publisher::Publisher()
{
    pub = nh.advertise<simple_publisher_custom_msg::NewMessage>("/new_message", 1);
    msg.name = "Andrea";
    msg.value = 1;
}

void Publisher::spinner()
{
	pub.publish(msg);
}
