// Generated by gencpp from file simple_robot_msgs/VictimFound.msg
// DO NOT EDIT!


#ifndef SIMPLE_ROBOT_MSGS_MESSAGE_VICTIMFOUND_H
#define SIMPLE_ROBOT_MSGS_MESSAGE_VICTIMFOUND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_robot_msgs
{
template <class ContainerAllocator>
struct VictimFound_
{
  typedef VictimFound_<ContainerAllocator> Type;

  VictimFound_()
    : thermal()  {
    }
  VictimFound_(const ContainerAllocator& _alloc)
    : thermal(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _thermal_type;
  _thermal_type thermal;




  typedef boost::shared_ptr< ::simple_robot_msgs::VictimFound_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_robot_msgs::VictimFound_<ContainerAllocator> const> ConstPtr;

}; // struct VictimFound_

typedef ::simple_robot_msgs::VictimFound_<std::allocator<void> > VictimFound;

typedef boost::shared_ptr< ::simple_robot_msgs::VictimFound > VictimFoundPtr;
typedef boost::shared_ptr< ::simple_robot_msgs::VictimFound const> VictimFoundConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_robot_msgs::VictimFound_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simple_robot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'simple_robot_msgs': ['/home/christos/catkin_ws/src/simple_robot_msgs/msg', '/home/christos/catkin_ws/devel/share/simple_robot_msgs/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_robot_msgs::VictimFound_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_robot_msgs::VictimFound_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_robot_msgs::VictimFound_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1a6f246af020e67df0b9fb8d47f8dd0b";
  }

  static const char* value(const ::simple_robot_msgs::VictimFound_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1a6f246af020e67dULL;
  static const uint64_t static_value2 = 0xf0b9fb8d47f8dd0bULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_robot_msgs/VictimFound";
  }

  static const char* value(const ::simple_robot_msgs::VictimFound_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string thermal\n\
";
  }

  static const char* value(const ::simple_robot_msgs::VictimFound_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.thermal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VictimFound_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_robot_msgs::VictimFound_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_robot_msgs::VictimFound_<ContainerAllocator>& v)
  {
    s << indent << "thermal: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.thermal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_ROBOT_MSGS_MESSAGE_VICTIMFOUND_H