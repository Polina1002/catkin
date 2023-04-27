// Generated by gencpp from file study_pkg/control.msg
// DO NOT EDIT!


#ifndef STUDY_PKG_MESSAGE_CONTROL_H
#define STUDY_PKG_MESSAGE_CONTROL_H


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
struct control_
{
  typedef control_<ContainerAllocator> Type;

  control_()
    : x(0)
    , y(0)
    , z(0)  {
    }
  control_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , z(0)  {
  (void)_alloc;
    }



   typedef int64_t _x_type;
  _x_type x;

   typedef int64_t _y_type;
  _y_type y;

   typedef int64_t _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::study_pkg::control_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::study_pkg::control_<ContainerAllocator> const> ConstPtr;

}; // struct control_

typedef ::study_pkg::control_<std::allocator<void> > control;

typedef boost::shared_ptr< ::study_pkg::control > controlPtr;
typedef boost::shared_ptr< ::study_pkg::control const> controlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::study_pkg::control_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::study_pkg::control_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::study_pkg::control_<ContainerAllocator1> & lhs, const ::study_pkg::control_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::study_pkg::control_<ContainerAllocator1> & lhs, const ::study_pkg::control_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace study_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::study_pkg::control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::study_pkg::control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::study_pkg::control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::study_pkg::control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::study_pkg::control_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::study_pkg::control_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::study_pkg::control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95da2541c9d6989c0876f480a9b1c7e4";
  }

  static const char* value(const ::study_pkg::control_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95da2541c9d6989cULL;
  static const uint64_t static_value2 = 0x0876f480a9b1c7e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::study_pkg::control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "study_pkg/control";
  }

  static const char* value(const ::study_pkg::control_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::study_pkg::control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 x\n"
"int64 y\n"
"int64 z\n"
;
  }

  static const char* value(const ::study_pkg::control_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::study_pkg::control_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct control_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::study_pkg::control_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::study_pkg::control_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<int64_t>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STUDY_PKG_MESSAGE_CONTROL_H