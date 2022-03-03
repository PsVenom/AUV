#include "ros/ros.h"
#include "std_msgs/Float32.h"

int main(int argc , char **argv)
{
	ros::init(argc,argv,"rand_node_n");
	ros::NodeHandle nh;
	ros::Publisher rand_gen = nh.advertise<std_msgs::Float32>("rand_t",100);
	std_msgs::Float32 rn;
	ros::Rate loop_hz(1);
	
	while(ros::ok())
	{	
	    rn.data=(rand()/(float)RAND_MAX * 2) -1;
	    rand_gen.publish(rn);
	    loop_hz.sleep();
	    

	}
	
	return 0;

}
