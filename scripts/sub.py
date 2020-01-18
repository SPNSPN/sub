#! /usr/bin/env python

import rospy
from std_msgs.msg import String

def callback (msg):
	rospy.loginfo("subscribe: {0}".format(msg.data))

def main ():
	rospy.init_node("sub", anonymous = True)
	rospy.Subscriber("/chatter", String, callback)
	rospy.spin()

if __name__ == "__main__":
	main()

