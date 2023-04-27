#!/usr/bin/env python
import rospy
from study_pkg.msg import Control

rospy.init_node('talker')
pub = rospy.Publisher('my_topic', String, queue_size=10)
rate = rospy.Rate(10)

def start_talker():
    msg = String()
    i=0
    while not rospy.is_shutdown():
        
        rospy.loginfo("%d, %s", % (str(i), str(j)))
        i=10
        j=40

        msg.data = str(i)
        pub.publish(msg)

        rate.sleep()

try:
    start_talker()
except (rospy.ROSInterruptException, KeyboardInterrupt):
    rospy.logerr('Exception catched')
