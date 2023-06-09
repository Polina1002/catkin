// Generated by gencpp from file study_pkg/LearningFeedback.msg
// DO NOT EDIT!


#ifndef STUDY_PKG_MESSAGE_LEARNINGFEEDBACK_H
#define STUDY_PKG_MESSAGE_LEARNINGFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace study_pkg
{
template <class ContainerAllocator>
struct LearningFeedback_
{
  typedef LearningFeedback_<ContainerAllocator> Type;

  LearningFeedback_()
    : current_accuracy(0.0)
    , step_number(0)  {
    }
  LearningFeedback_(const ContainerAllocator& _alloc)
    : current_accuracy(0.0)
    , step_number(0)  {
  (void)_alloc;
    }



   typedef float _current_accuracy_type;
  _current_accuracy_type current_accuracy;

   typedef uint32_t _step_number_type;
  _step_number_type step_number;





  typedef boost::shared_ptr< ::study_pkg::LearningFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::study_pkg::LearningFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct LearningFeedback_

typedef ::study_pkg::LearningFeedback_<std::allocator<void> > LearningFeedback;

typedef boost::shared_ptr< ::study_pkg::LearningFeedback > LearningFeedbackPtr;
typedef boost::shared_ptr< ::study_pkg::LearningFeedback const> LearningFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::study_pkg::LearningFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::study_pkg::LearningFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::study_pkg::LearningFeedback_<ContainerAllocator1> & lhs, const ::study_pkg::LearningFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.current_accuracy == rhs.current_accuracy &&
    lhs.step_number == rhs.step_number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::study_pkg::LearningFeedback_<ContainerAllocator1> & lhs, const ::study_pkg::LearningFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace study_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::study_pkg::LearningFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::study_pkg::LearningFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::study_pkg::LearningFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::study_pkg::LearningFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::study_pkg::LearningFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::study_pkg::LearningFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::study_pkg::LearningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e351c2411951a69d81996b20bf44d2b1";
  }

  static const char* value(const ::study_pkg::LearningFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe351c2411951a69dULL;
  static const uint64_t static_value2 = 0x81996b20bf44d2b1ULL;
};

template<class ContainerAllocator>
struct DataType< ::study_pkg::LearningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "study_pkg/LearningFeedback";
  }

  static const char* value(const ::study_pkg::LearningFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::study_pkg::LearningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define a feedback message\n"
"float32 current_accuracy\n"
"uint32  step_number\n"
;
  }

  static const char* value(const ::study_pkg::LearningFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::study_pkg::LearningFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_accuracy);
      stream.next(m.step_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LearningFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::study_pkg::LearningFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::study_pkg::LearningFeedback_<ContainerAllocator>& v)
  {
    s << indent << "current_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.current_accuracy);
    s << indent << "step_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.step_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STUDY_PKG_MESSAGE_LEARNINGFEEDBACK_H
