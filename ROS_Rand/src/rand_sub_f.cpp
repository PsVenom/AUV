#include "ros/ros.h"
#include "std_msgs/Float32.h"

void noob(std_msgs::Float32 received_msg)
{
	//if(received_msg==0.0)
	//{
		//ROS_INFO_STREAM("YES");
	//}
	
	ROS_INFO_STREAM(received_msg);

}


int main(int argc, char **argv)
{
	ros::init(argc,argv,"rand_sub_n");
	ros::NodeHandle nh;
	ros::Subscriber sub_noob = nh.subscribe("rand_t",10,noob);
	ros::spin(); 
	return 0;
 

}
