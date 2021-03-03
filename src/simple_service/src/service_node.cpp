#include "service/service.h"

int main(int argc, char** argv)
{
	
	ros::init(argc, argv, "service");
	Service ce;
	ros::Rate r(10);

	while(ros::ok())
	{
		
		ce.spinner();
		r.sleep();

	}

	return 0;

}
