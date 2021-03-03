#include "service/service.h"

Service::Service()
{  
    service = nh.advertiseService("copy_number", &Service::copy, this);
}

bool Service::copy(simple_service::CopyNumber::Request  &req, simple_service::CopyNumber::Response &res)
{
    res.b = req.a;
    
    std::cout << "Request a = " << req.a << std::endl;
    std::cout << "Response b = " << res.b << std::endl;

    return true;
}

void Service::spinner()
{
    ros::spinOnce();
}
