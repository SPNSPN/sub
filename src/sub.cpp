#include <iostream>
#include <ros/ros.h>
#include <std_msgs/String.h>

void callback (const std_msgs::String::ConstPtr &msg)
{
	ROS_INFO("subscribe: %s\n", msg->data.c_str());
}


int main (int argc, char **argv)
{
	ros::init(argc, argv, "sub");
	ros::NodeHandle nh;
	ros::Subscriber sub = nh.subscribe("/chatter", 10, callback);
	ros::spin();
	return 0;
}
