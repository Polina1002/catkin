// Generated by gencpp from file study_pkg/LearningActionGoal.msg
// DO NOT EDIT!


#ifndef STUDY_PKG_MESSAGE_LEARNINGACTIONGOAL_H
#define STUDY_PKG_MESSAGE_LEARNINGACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <study_pkg/LearningGoal.h>

namespace study_pkg
{
template <class ContainerAllocator>
struct LearningActionGoal_
{
  typedef LearningActionGoal_<ContainerAllocator> Type;

  LearningActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  LearningActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::study_pkg::LearningGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::study_pkg::LearningActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::study_pkg::LearningActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct LearningActionGoal_

typedef ::study_pkg::LearningActionGoal_<std::allocator<void> > LearningActionGoal;

typedef boost::shared_ptr< ::study_pkg::LearningActionGoal > LearningActionGoalPtr;
typedef boost::shared_ptr< ::study_pkg::LearningActionGoal const> LearningActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::study_pkg::LearningActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::study_pkg::LearningActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::study_pkg::LearningActionGoal_<ContainerAllocator1> & lhs, const ::study_pkg::LearningActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::study_pkg::LearningActionGoal_<ContainerAllocator1> & lhs, const ::study_pkg::LearningActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace study_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::study_pkg::LearningActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::study_pkg::LearningActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::study_pkg::LearningActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "563ee02910a883a1726bbfc09e4d8c71";
  }

  static const char* value(const ::study_pkg::LearningActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x563ee02910a883a1ULL;
  static const uint64_t static_value2 = 0x726bbfc09e4d8c71ULL;
};

template<class ContainerAllocator>
struct DataType< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "study_pkg/LearningActionGoal";
  }

  static const char* value(const ::study_pkg::LearningActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"LearningGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: study_pkg/LearningGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"float32 target_accuracy\n"
;
  }

  static const char* value(const ::study_pkg::LearningActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LearningActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::study_pkg::LearningActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::study_pkg::LearningActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::study_pkg::LearningGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STUDY_PKG_MESSAGE_LEARNINGACTIONGOAL_H