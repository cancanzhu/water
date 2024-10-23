// Generated by gencpp from file hdl_global_localization/SetGlobalLocalizationEngineRequest.msg
// DO NOT EDIT!


#ifndef HDL_GLOBAL_LOCALIZATION_MESSAGE_SETGLOBALLOCALIZATIONENGINEREQUEST_H
#define HDL_GLOBAL_LOCALIZATION_MESSAGE_SETGLOBALLOCALIZATIONENGINEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace hdl_global_localization
{
template <class ContainerAllocator>
struct SetGlobalLocalizationEngineRequest_
{
  typedef SetGlobalLocalizationEngineRequest_<ContainerAllocator> Type;

  SetGlobalLocalizationEngineRequest_()
    : engine_name()  {
    }
  SetGlobalLocalizationEngineRequest_(const ContainerAllocator& _alloc)
    : engine_name(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _engine_name_type;
  _engine_name_type engine_name;





  typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGlobalLocalizationEngineRequest_

typedef ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<std::allocator<void> > SetGlobalLocalizationEngineRequest;

typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalLocalizationEngineRequest > SetGlobalLocalizationEngineRequestPtr;
typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalLocalizationEngineRequest const> SetGlobalLocalizationEngineRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator1> & lhs, const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator2> & rhs)
{
  return lhs.engine_name == rhs.engine_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator1> & lhs, const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hdl_global_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f71639c3aeb058fa00da5a20981c23c9";
  }

  static const char* value(const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf71639c3aeb058faULL;
  static const uint64_t static_value2 = 0x00da5a20981c23c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdl_global_localization/SetGlobalLocalizationEngineRequest";
  }

  static const char* value(const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String engine_name\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.engine_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGlobalLocalizationEngineRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdl_global_localization::SetGlobalLocalizationEngineRequest_<ContainerAllocator>& v)
  {
    s << indent << "engine_name: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.engine_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDL_GLOBAL_LOCALIZATION_MESSAGE_SETGLOBALLOCALIZATIONENGINEREQUEST_H
