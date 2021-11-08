#pragma once
#include <rust_cxx_autoware_auto_msgs_cov/builtin_interfaces.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/common.hpp>
#include <std_msgs/msg/header.hpp>

std_msgs::msg::Header Convert (const std_msgs_Header &);
std_msgs_Header Convert (const std_msgs::msg::Header &);
