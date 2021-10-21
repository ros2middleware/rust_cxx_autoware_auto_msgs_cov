#pragma once
#include <rust_cxx_autoware_auto_msgs/common.hpp>

inline rust::cxxbridge1::String Convert (std::string &);
inline std::string Convert (rust::cxxbridge1::String &);

enum NodeType {
  ROS = 0,
  ZenohFlow = 1,
};
