#include <rust_cxx_autoware_auto_msgs_cov/builtin_interfaces.hpp>

builtin_interfaces::msg::Time Convert (builtin_interfaces_Time &source_msg) {
    builtin_interfaces::msg::Time dest_msg;
    dest_msg.nanosec = source_msg.nanosec;
    dest_msg.sec = source_msg.sec;
    return dest_msg;
}

builtin_interfaces_Time Convert (builtin_interfaces::msg::Time &source_msg) {
    builtin_interfaces_Time dest_msg;
    dest_msg.nanosec = source_msg.nanosec;
    dest_msg.sec = source_msg.sec;
    return dest_msg;
}

builtin_interfaces_Duration Convert (builtin_interfaces::msg::Duration &source_msg) {
    builtin_interfaces_Duration dest_msg;
    dest_msg.nanosec = source_msg.nanosec;
    dest_msg.sec = source_msg.sec;
    return dest_msg;
}

builtin_interfaces::msg::Duration Convert (builtin_interfaces_Duration &source_msg) {
    builtin_interfaces::msg::Duration dest_msg;
    dest_msg.nanosec = source_msg.nanosec;
    dest_msg.sec = source_msg.sec;
    return dest_msg;
}
