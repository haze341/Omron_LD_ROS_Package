// Generated by gencpp from file om_aiv_navigation/StopFeedback.msg
// DO NOT EDIT!


#ifndef OM_AIV_NAVIGATION_MESSAGE_STOPFEEDBACK_H
#define OM_AIV_NAVIGATION_MESSAGE_STOPFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace om_aiv_navigation
{
template <class ContainerAllocator>
struct StopFeedback_
{
  typedef StopFeedback_<ContainerAllocator> Type;

  StopFeedback_()
    : received_data()  {
    }
  StopFeedback_(const ContainerAllocator& _alloc)
    : received_data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _received_data_type;
  _received_data_type received_data;





  typedef boost::shared_ptr< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct StopFeedback_

typedef ::om_aiv_navigation::StopFeedback_<std::allocator<void> > StopFeedback;

typedef boost::shared_ptr< ::om_aiv_navigation::StopFeedback > StopFeedbackPtr;
typedef boost::shared_ptr< ::om_aiv_navigation::StopFeedback const> StopFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::om_aiv_navigation::StopFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace om_aiv_navigation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'om_aiv_navigation': ['/home/tthmatt/Omron_LD_ROS_Package/devel/.private/om_aiv_navigation/share/om_aiv_navigation/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0db3bc19eeede9e4ee493e93f03da761";
  }

  static const char* value(const ::om_aiv_navigation::StopFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0db3bc19eeede9e4ULL;
  static const uint64_t static_value2 = 0xee493e93f03da761ULL;
};

template<class ContainerAllocator>
struct DataType< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "om_aiv_navigation/StopFeedback";
  }

  static const char* value(const ::om_aiv_navigation::StopFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Feedback\n"
"string received_data\n"
"\n"
;
  }

  static const char* value(const ::om_aiv_navigation::StopFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.received_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::om_aiv_navigation::StopFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::om_aiv_navigation::StopFeedback_<ContainerAllocator>& v)
  {
    s << indent << "received_data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.received_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OM_AIV_NAVIGATION_MESSAGE_STOPFEEDBACK_H
