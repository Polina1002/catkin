#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def callback(msg):
    rospy.loginfo("I heard %s", msg.data)

rospy.init_node('listener')
rospy.Subscriber('my_topic', String, callback, queue_size=10)
rospy.spin()
