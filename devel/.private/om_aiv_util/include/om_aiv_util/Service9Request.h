// Generated by gencpp from file om_aiv_util/Service9Request.msg
// DO NOT EDIT!


#ifndef OM_AIV_UTIL_MESSAGE_SERVICE9REQUEST_H
#define OM_AIV_UTIL_MESSAGE_SERVICE9REQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace om_aiv_util
{
template <class ContainerAllocator>
struct Service9Request_
{
  typedef Service9Request_<ContainerAllocator> Type;

  Service9Request_()
    : a()
    , b()
    , c()
    , d()
    , e()
    , f()
    , g()
    , h()
    , i()  {
    }
  Service9Request_(const ContainerAllocator& _alloc)
    : a(_alloc)
    , b(_alloc)
    , c(_alloc)
    , d(_alloc)
    , e(_alloc)
    , f(_alloc)
    , g(_alloc)
    , h(_alloc)
    , i(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _a_type;
  _a_type a;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _b_type;
  _b_type b;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _c_type;
  _c_type c;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _d_type;
  _d_type d;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _e_type;
  _e_type e;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _f_type;
  _f_type f;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _g_type;
  _g_type g;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _h_type;
  _h_type h;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _i_type;
  _i_type i;





  typedef boost::shared_ptr< ::om_aiv_util::Service9Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::om_aiv_util::Service9Request_<ContainerAllocator> const> ConstPtr;

}; // struct Service9Request_

typedef ::om_aiv_util::Service9Request_<std::allocator<void> > Service9Request;

typedef boost::shared_ptr< ::om_aiv_util::Service9Request > Service9RequestPtr;
typedef boost::shared_ptr< ::om_aiv_util::Service9Request const> Service9RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::om_aiv_util::Service9Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::om_aiv_util::Service9Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace om_aiv_util

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'om_aiv_util': ['/home/tthmatt/ld_ROS/src/om_aiv_util/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::om_aiv_util::Service9Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::om_aiv_util::Service9Request_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::om_aiv_util::Service9Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::om_aiv_util::Service9Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::om_aiv_util::Service9Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::om_aiv_util::Service9Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::om_aiv_util::Service9Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "791159f7045e778035dcbcbaa1bb29ec";
  }

  static const char* value(const ::om_aiv_util::Service9Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x791159f7045e7780ULL;
  static const uint64_t static_value2 = 0x35dcbcbaa1bb29ecULL;
};

template<class ContainerAllocator>
struct DataType< ::om_aiv_util::Service9Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "om_aiv_util/Service9Request";
  }

  static const char* value(const ::om_aiv_util::Service9Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::om_aiv_util::Service9Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] a\n"
"string[] b\n"
"string[] c\n"
"string[] d\n"
"string[] e\n"
"string[] f\n"
"string[] g\n"
"string[] h\n"
"string[] i\n"
;
  }

  static const char* value(const ::om_aiv_util::Service9Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::om_aiv_util::Service9Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.d);
      stream.next(m.e);
      stream.next(m.f);
      stream.next(m.g);
      stream.next(m.h);
      stream.next(m.i);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Service9Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::om_aiv_util::Service9Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::om_aiv_util::Service9Request_<ContainerAllocator>& v)
  {
    s << indent << "a[]" << std::endl;
    for (size_t i = 0; i < v.a.size(); ++i)
    {
      s << indent << "  a[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.a[i]);
    }
    s << indent << "b[]" << std::endl;
    for (size_t i = 0; i < v.b.size(); ++i)
    {
      s << indent << "  b[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.b[i]);
    }
    s << indent << "c[]" << std::endl;
    for (size_t i = 0; i < v.c.size(); ++i)
    {
      s << indent << "  c[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.c[i]);
    }
    s << indent << "d[]" << std::endl;
    for (size_t i = 0; i < v.d.size(); ++i)
    {
      s << indent << "  d[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.d[i]);
    }
    s << indent << "e[]" << std::endl;
    for (size_t i = 0; i < v.e.size(); ++i)
    {
      s << indent << "  e[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.e[i]);
    }
    s << indent << "f[]" << std::endl;
    for (size_t i = 0; i < v.f.size(); ++i)
    {
      s << indent << "  f[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.f[i]);
    }
    s << indent << "g[]" << std::endl;
    for (size_t i = 0; i < v.g.size(); ++i)
    {
      s << indent << "  g[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.g[i]);
    }
    s << indent << "h[]" << std::endl;
    for (size_t i = 0; i < v.h.size(); ++i)
    {
      s << indent << "  h[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.h[i]);
    }
    s << indent << "i[]" << std::endl;
    for (size_t i = 0; i < v.i.size(); ++i)
    {
      s << indent << "  i[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.i[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OM_AIV_UTIL_MESSAGE_SERVICE9REQUEST_H
