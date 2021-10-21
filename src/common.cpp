#include <rust_cxx_autoware_auto_msgs_cov/common.hpp>

rust::cxxbridge1::String Convert (std::string & source)
{
  return rust::cxxbridge1::String(source.data(), source.size());
}

std::string Convert (rust::cxxbridge1::String & source)
{
  return std::string(source.data(), source.size());
}