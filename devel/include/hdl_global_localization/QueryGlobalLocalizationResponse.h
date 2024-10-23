// Generated by gencpp from file hdl_global_localization/QueryGlobalLocalizationResponse.msg
// DO NOT EDIT!


#ifndef HDL_GLOBAL_LOCALIZATION_MESSAGE_QUERYGLOBALLOCALIZATIONRESPONSE_H
#define HDL_GLOBAL_LOCALIZATION_MESSAGE_QUERYGLOBALLOCALIZATIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace hdl_global_localization
{
template <class ContainerAllocator>
struct QueryGlobalLocalizationResponse_
{
  typedef QueryGlobalLocalizationResponse_<ContainerAllocator> Type;

  QueryGlobalLocalizationResponse_()
    : header()
    , globalmap_header()
    , inlier_fractions()
    , errors()
    , poses()  {
    }
  QueryGlobalLocalizationResponse_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , globalmap_header(_alloc)
    , inlier_fractions(_alloc)
    , errors(_alloc)
    , poses(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _globalmap_header_type;
  _globalmap_header_type globalmap_header;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _inlier_fractions_type;
  _inlier_fractions_type inlier_fractions;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _errors_type;
  _errors_type errors;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _poses_type;
  _poses_type poses;





  typedef boost::shared_ptr< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct QueryGlobalLocalizationResponse_

typedef ::hdl_global_localization::QueryGlobalLocalizationResponse_<std::allocator<void> > QueryGlobalLocalizationResponse;

typedef boost::shared_ptr< ::hdl_global_localization::QueryGlobalLocalizationResponse > QueryGlobalLocalizationResponsePtr;
typedef boost::shared_ptr< ::hdl_global_localization::QueryGlobalLocalizationResponse const> QueryGlobalLocalizationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator1> & lhs, const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.globalmap_header == rhs.globalmap_header &&
    lhs.inlier_fractions == rhs.inlier_fractions &&
    lhs.errors == rhs.errors &&
    lhs.poses == rhs.poses;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator1> & lhs, const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hdl_global_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a537b478ec66ac3888e62265f7d9d901";
  }

  static const char* value(const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa537b478ec66ac38ULL;
  static const uint64_t static_value2 = 0x88e62265f7d9d901ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdl_global_localization/QueryGlobalLocalizationResponse";
  }

  static const char* value(const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"std_msgs/Header globalmap_header\n"
"\n"
"float64[] inlier_fractions\n"
"float64[] errors\n"
"geometry_msgs/Pose[] poses\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.globalmap_header);
      stream.next(m.inlier_fractions);
      stream.next(m.errors);
      stream.next(m.poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QueryGlobalLocalizationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdl_global_localization::QueryGlobalLocalizationResponse_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "globalmap_header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.globalmap_header);
    s << indent << "inlier_fractions[]" << std::endl;
    for (size_t i = 0; i < v.inlier_fractions.size(); ++i)
    {
      s << indent << "  inlier_fractions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.inlier_fractions[i]);
    }
    s << indent << "errors[]" << std::endl;
    for (size_t i = 0; i < v.errors.size(); ++i)
    {
      s << indent << "  errors[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.errors[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDL_GLOBAL_LOCALIZATION_MESSAGE_QUERYGLOBALLOCALIZATIONRESPONSE_H