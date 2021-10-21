#pragma once
#include <autoware_auto_msgs/msg/complex32.hpp>
#include <autoware_auto_msgs/msg/had_map_route.hpp>
#include <autoware_auto_msgs/msg/had_map_segment.hpp>
#include <autoware_auto_msgs/msg/route_point.hpp>
#include <autoware_auto_msgs/msg/trajectory.hpp>
#include <autoware_auto_msgs/msg/vehicle_control_command.hpp>
#include <autoware_auto_msgs/msg/vehicle_kinematic_state.hpp>
#include <autoware_auto_msgs/msg/vehicle_state_command.hpp>
#include <autoware_auto_msgs/msg/vehicle_state_report.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/builtin_interfaces.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/common.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/geometry_msgs.hpp>
#include <rust_cxx_autoware_auto_msgs_cov/std_msgs.hpp>

autoware_auto_msgs::msg::VehicleStateCommand Convert (autoware_auto_msgs_VehicleStateCommand &);
autoware_auto_msgs_VehicleStateCommand Convert (autoware_auto_msgs::msg::VehicleStateCommand &);

autoware_auto_msgs::msg::VehicleControlCommand Convert (autoware_auto_msgs_VehicleControlCommand &);
autoware_auto_msgs_VehicleControlCommand Convert (autoware_auto_msgs::msg::VehicleControlCommand &);

autoware_auto_msgs_VehicleKinematicState Convert (autoware_auto_msgs::msg::VehicleKinematicState &);
autoware_auto_msgs::msg::VehicleKinematicState Convert (autoware_auto_msgs_VehicleKinematicState &);

autoware_auto_msgs_VehicleStateReport Convert (autoware_auto_msgs::msg::VehicleStateReport &);
autoware_auto_msgs::msg::VehicleStateReport Convert (autoware_auto_msgs_VehicleStateReport  &);

autoware_auto_msgs_TrajectoryPoint Convert (autoware_auto_msgs::msg::TrajectoryPoint &);
autoware_auto_msgs::msg::TrajectoryPoint Convert (autoware_auto_msgs_TrajectoryPoint &);

autoware_auto_msgs_Complex32 Convert (autoware_auto_msgs::msg::Complex32 &);
autoware_auto_msgs::msg::Complex32 Convert (autoware_auto_msgs_Complex32 &);

autoware_auto_msgs::msg::Trajectory Convert (autoware_auto_msgs_Trajectory &);
autoware_auto_msgs_Trajectory Convert (autoware_auto_msgs::msg::Trajectory &);

autoware_auto_msgs_HADMapRoute Convert (autoware_auto_msgs::msg::HADMapRoute &);
autoware_auto_msgs::msg::HADMapRoute Convert (autoware_auto_msgs_HADMapRoute &);

autoware_auto_msgs::msg::RoutePoint Convert (autoware_auto_msgs_RoutePoint &);
autoware_auto_msgs_RoutePoint Convert (autoware_auto_msgs::msg::RoutePoint &);

autoware_auto_msgs::msg::HADMapSegment Convert (autoware_auto_msgs_HADMapSegment &);
autoware_auto_msgs_HADMapSegment Convert (autoware_auto_msgs::msg::HADMapSegment &);

autoware_auto_msgs::msg::MapPrimitive Convert (autoware_auto_msgs_MapPrimitive  &);
autoware_auto_msgs_MapPrimitive Convert (autoware_auto_msgs::msg::MapPrimitive &);