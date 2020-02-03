// Auto-generated. Do not edit!

// (in-package frontier_exploration.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class ExploreTaskGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.explore_boundary = null;
      this.explore_center = null;
    }
    else {
      if (initObj.hasOwnProperty('explore_boundary')) {
        this.explore_boundary = initObj.explore_boundary
      }
      else {
        this.explore_boundary = new geometry_msgs.msg.PolygonStamped();
      }
      if (initObj.hasOwnProperty('explore_center')) {
        this.explore_center = initObj.explore_center
      }
      else {
        this.explore_center = new geometry_msgs.msg.PointStamped();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ExploreTaskGoal
    // Serialize message field [explore_boundary]
    bufferOffset = geometry_msgs.msg.PolygonStamped.serialize(obj.explore_boundary, buffer, bufferOffset);
    // Serialize message field [explore_center]
    bufferOffset = geometry_msgs.msg.PointStamped.serialize(obj.explore_center, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ExploreTaskGoal
    let len;
    let data = new ExploreTaskGoal(null);
    // Deserialize message field [explore_boundary]
    data.explore_boundary = geometry_msgs.msg.PolygonStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [explore_center]
    data.explore_center = geometry_msgs.msg.PointStamped.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.PolygonStamped.getMessageSize(object.explore_boundary);
    length += geometry_msgs.msg.PointStamped.getMessageSize(object.explore_center);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'frontier_exploration/ExploreTaskGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b5f41b52fbca52a68ff7363f86187dbf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #Boundary for frontier exploration
    geometry_msgs/PolygonStamped explore_boundary
    #Center point for frontier exploration, inside explore_boundary
    geometry_msgs/PointStamped explore_center
    
    ================================================================================
    MSG: geometry_msgs/PolygonStamped
    # This represents a Polygon with reference coordinate frame and timestamp
    Header header
    Polygon polygon
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Polygon
    #A specification of a polygon where the first and last points are assumed to be connected
    Point32[] points
    
    ================================================================================
    MSG: geometry_msgs/Point32
    # This contains the position of a point in free space(with 32 bits of precision).
    # It is recommeded to use Point wherever possible instead of Point32.  
    # 
    # This recommendation is to promote interoperability.  
    #
    # This message is designed to take up less space when sending
    # lots of points at once, as in the case of a PointCloud.  
    
    float32 x
    float32 y
    float32 z
    ================================================================================
    MSG: geometry_msgs/PointStamped
    # This represents a Point with reference coordinate frame and timestamp
    Header header
    Point point
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ExploreTaskGoal(null);
    if (msg.explore_boundary !== undefined) {
      resolved.explore_boundary = geometry_msgs.msg.PolygonStamped.Resolve(msg.explore_boundary)
    }
    else {
      resolved.explore_boundary = new geometry_msgs.msg.PolygonStamped()
    }

    if (msg.explore_center !== undefined) {
      resolved.explore_center = geometry_msgs.msg.PointStamped.Resolve(msg.explore_center)
    }
    else {
      resolved.explore_center = new geometry_msgs.msg.PointStamped()
    }

    return resolved;
    }
};

module.exports = ExploreTaskGoal;
