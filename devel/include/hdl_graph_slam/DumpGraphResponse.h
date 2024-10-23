// Generated by gencpp from file hdl_graph_slam/DumpGraphResponse.msg
// DO NOT EDIT!


#ifndef HDL_GRAPH_SLAM_MESSAGE_DUMPGRAPHRESPONSE_H
#define HDL_GRAPH_SLAM_MESSAGE_DUMPGRAPHRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hdl_graph_slam
{
template <class ContainerAllocator>
struct DumpGraphResponse_
{
  typedef DumpGraphResponse_<ContainerAllocator> Type;

  DumpGraphResponse_()
    : success(false)  {
    }
  DumpGraphResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DumpGraphResponse_

typedef ::hdl_graph_slam::DumpGraphResponse_<std::allocator<void> > DumpGraphResponse;

typedef boost::shared_ptr< ::hdl_graph_slam::DumpGraphResponse > DumpGraphResponsePtr;
typedef boost::shared_ptr< ::hdl_graph_slam::DumpGraphResponse const> DumpGraphResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator1> & lhs, const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator1> & lhs, const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hdl_graph_slam

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdl_graph_slam/DumpGraphResponse";
  }

  static const char* value(const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DumpGraphResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdl_graph_slam::DumpGraphResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDL_GRAPH_SLAM_MESSAGE_DUMPGRAPHRESPONSE_H
