// Generated by gencpp from file om_aiv_navigation/PatrolResult.msg
// DO NOT EDIT!


#ifndef OM_AIV_NAVIGATION_MESSAGE_PATROLRESULT_H
#define OM_AIV_NAVIGATION_MESSAGE_PATROLRESULT_H


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
struct PatrolResult_
{
  typedef PatrolResult_<ContainerAllocator> Type;

  PatrolResult_()
    : status()  {
    }
  PatrolResult_(const ContainerAllocator& _alloc)
    : status(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> const> ConstPtr;

}; // struct PatrolResult_

typedef ::om_aiv_navigation::PatrolResult_<std::allocator<void> > PatrolResult;

typedef boost::shared_ptr< ::om_aiv_navigation::PatrolResult > PatrolResultPtr;
typedef boost::shared_ptr< ::om_aiv_navigation::PatrolResult const> PatrolResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::om_aiv_navigation::PatrolResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4fe5af303955c287688e7347e9b00278";
  }

  static const char* value(const ::om_aiv_navigation::PatrolResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4fe5af303955c287ULL;
  static const uint64_t static_value2 = 0x688e7347e9b00278ULL;
};

template<class ContainerAllocator>
struct DataType< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "om_aiv_navigation/PatrolResult";
  }

  static const char* value(const ::om_aiv_navigation::PatrolResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"string status\n"
"\n"
;
  }

  static const char* value(const ::om_aiv_navigation::PatrolResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PatrolResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::om_aiv_navigation::PatrolResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::om_aiv_navigation::PatrolResult_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OM_AIV_NAVIGATION_MESSAGE_PATROLRESULT_H
