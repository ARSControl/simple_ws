#include "client/client.h"

Client::Client()
{  
    client = nh.serviceClient<simple_service::CopyNumber>("copy_number");
    srv.request.a = 1;
}

void Client::spinner()
{
    if (client.call(srv))
    {
        ROS_INFO("Response: %ld", srv.response.b);
    }
    else
    {
        ROS_ERROR("Failed to call service copy_number");
    }
}
