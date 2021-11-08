#pragma once
#include <builtin_interfaces/msg/duration.hpp>
#include <builtin_interfaces/msg/time.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/common.hpp>

builtin_interfaces::msg::Time Convert (const builtin_interfaces_Time &);
builtin_interfaces_Time Convert (const builtin_interfaces::msg::Time &);

builtin_interfaces_Duration Convert(const builtin_interfaces::msg::Duration &);
builtin_interfaces::msg::Duration Convert(const builtin_interfaces_Duration &);
