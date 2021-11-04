#pragma once
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <geometry_msgs/msg/transform.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/builtin_interfaces.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/common.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/std_msgs.hpp>

geometry_msgs::msg::PoseWithCovarianceStamped Convert(geometry_msgs_PoseWithCovarianceStamped &);
geometry_msgs_PoseWithCovarianceStamped Convert(geometry_msgs::msg::PoseWithCovarianceStamped &);

geometry_msgs::msg::PoseWithCovariance Convert(geometry_msgs_PoseWithCovariance &);
geometry_msgs_PoseWithCovariance Convert(geometry_msgs::msg::PoseWithCovariance &);

geometry_msgs::msg::Quaternion Convert(geometry_msgs_Quaternion &);
geometry_msgs_Quaternion Convert(geometry_msgs::msg::Quaternion &);

geometry_msgs::msg::Point Convert(geometry_msgs_Point &);
geometry_msgs_Point Convert(geometry_msgs::msg::Point &);

geometry_msgs::msg::Pose Convert(geometry_msgs_Pose &);
geometry_msgs_Pose Convert(geometry_msgs::msg::Pose &);

geometry_msgs_Transform Convert(geometry_msgs::msg::Transform &);
geometry_msgs::msg::Transform Convert(geometry_msgs_Transform &);

geometry_msgs_Vector3 Convert(geometry_msgs::msg::Vector3 &);
geometry_msgs::msg::Vector3 Convert(geometry_msgs_Vector3 &);

geometry_msgs_PoseStamped Convert(geometry_msgs::msg::PoseStamped &);
geometry_msgs::msg::PoseStamped Convert(geometry_msgs_PoseStamped &);
