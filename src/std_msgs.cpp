#include <rust_cxx_autoware_auto_msgs_cov/std_msgs.hpp>

std_msgs::msg::Header Convert (std_msgs_Header &source_msg) {
    std_msgs::msg::Header dest_msg;
    dest_msg.frame_id = Convert(source_msg.frame_id);
    dest_msg.stamp = Convert(source_msg.stamp);
    return dest_msg;
}

std_msgs_Header Convert (std_msgs::msg::Header &source_msg) {
    std_msgs_Header dest_msg;
    dest_msg.frame_id = Convert(source_msg.frame_id);
    dest_msg.stamp = Convert(source_msg.stamp);
    return dest_msg;
}