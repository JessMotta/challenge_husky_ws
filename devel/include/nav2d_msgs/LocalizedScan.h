// Generated by gencpp from file nav2d_msgs/LocalizedScan.msg
// DO NOT EDIT!


#ifndef NAV2D_MSGS_MESSAGE_LOCALIZEDSCAN_H
#define NAV2D_MSGS_MESSAGE_LOCALIZEDSCAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/LaserScan.h>

namespace nav2d_msgs
{
template <class ContainerAllocator>
struct LocalizedScan_
{
  typedef LocalizedScan_<ContainerAllocator> Type;

  LocalizedScan_()
    : robot_id(0)
    , laser_type(0)
    , x(0.0)
    , y(0.0)
    , yaw(0.0)
    , scan()  {
    }
  LocalizedScan_(const ContainerAllocator& _alloc)
    : robot_id(0)
    , laser_type(0)
    , x(0.0)
    , y(0.0)
    , yaw(0.0)
    , scan(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _robot_id_type;
  _robot_id_type robot_id;

   typedef int8_t _laser_type_type;
  _laser_type_type laser_type;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef  ::sensor_msgs::LaserScan_<ContainerAllocator>  _scan_type;
  _scan_type scan;





  typedef boost::shared_ptr< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> const> ConstPtr;

}; // struct LocalizedScan_

typedef ::nav2d_msgs::LocalizedScan_<std::allocator<void> > LocalizedScan;

typedef boost::shared_ptr< ::nav2d_msgs::LocalizedScan > LocalizedScanPtr;
typedef boost::shared_ptr< ::nav2d_msgs::LocalizedScan const> LocalizedScanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav2d_msgs::LocalizedScan_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nav2d_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'nav2d_msgs': ['/home/jess/Documents/challenge_ws/src/navigation_2d/nav2d_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bab53504723a56692b3864ccf3dfe635";
  }

  static const char* value(const ::nav2d_msgs::LocalizedScan_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbab53504723a5669ULL;
  static const uint64_t static_value2 = 0x2b3864ccf3dfe635ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav2d_msgs/LocalizedScan";
  }

  static const char* value(const ::nav2d_msgs::LocalizedScan_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8      robot_id\n"
"int8      laser_type\n"
"float32   x\n"
"float32   y\n"
"float32   yaw\n"
"sensor_msgs/LaserScan scan\n"
"================================================================================\n"
"MSG: sensor_msgs/LaserScan\n"
"# Single scan from a planar laser range-finder\n"
"#\n"
"# If you have another ranging device with different behavior (e.g. a sonar\n"
"# array), please find or create a different message, since applications\n"
"# will make fairly laser-specific assumptions about this data\n"
"\n"
"Header header            # timestamp in the header is the acquisition time of \n"
"                         # the first ray in the scan.\n"
"                         #\n"
"                         # in frame frame_id, angles are measured around \n"
"                         # the positive Z axis (counterclockwise, if Z is up)\n"
"                         # with zero angle being forward along the x axis\n"
"                         \n"
"float32 angle_min        # start angle of the scan [rad]\n"
"float32 angle_max        # end angle of the scan [rad]\n"
"float32 angle_increment  # angular distance between measurements [rad]\n"
"\n"
"float32 time_increment   # time between measurements [seconds] - if your scanner\n"
"                         # is moving, this will be used in interpolating position\n"
"                         # of 3d points\n"
"float32 scan_time        # time between scans [seconds]\n"
"\n"
"float32 range_min        # minimum range value [m]\n"
"float32 range_max        # maximum range value [m]\n"
"\n"
"float32[] ranges         # range data [m] (Note: values < range_min or > range_max should be discarded)\n"
"float32[] intensities    # intensity data [device-specific units].  If your\n"
"                         # device does not provide intensities, please leave\n"
"                         # the array empty.\n"
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
;
  }

  static const char* value(const ::nav2d_msgs::LocalizedScan_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robot_id);
      stream.next(m.laser_type);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.yaw);
      stream.next(m.scan);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalizedScan_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav2d_msgs::LocalizedScan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav2d_msgs::LocalizedScan_<ContainerAllocator>& v)
  {
    s << indent << "robot_id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.robot_id);
    s << indent << "laser_type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.laser_type);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "scan: ";
    s << std::endl;
    Printer< ::sensor_msgs::LaserScan_<ContainerAllocator> >::stream(s, indent + "  ", v.scan);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV2D_MSGS_MESSAGE_LOCALIZEDSCAN_H
