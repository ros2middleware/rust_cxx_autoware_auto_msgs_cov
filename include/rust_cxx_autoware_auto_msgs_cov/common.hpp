#pragma once
#include <rust_cxx_autoware_auto_msgs/common.hpp>

rust::cxxbridge1::String Convert (std::string &);
std::string Convert (rust::cxxbridge1::String &);

enum NodeType {
  ROS = 0,
  ZenohFlow = 1,
};
