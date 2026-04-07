// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/GetPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interface/srv/get_position.hpp"


#ifndef CUSTOM_INTERFACE__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/srv/detail/get_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Request_th4
{
public:
  explicit Init_GetPosition_Request_th4(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::GetPosition_Request th4(::custom_interface::srv::GetPosition_Request::_th4_type arg)
  {
    msg_.th4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_th3
{
public:
  explicit Init_GetPosition_Request_th3(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Request_th4 th3(::custom_interface::srv::GetPosition_Request::_th3_type arg)
  {
    msg_.th3 = std::move(arg);
    return Init_GetPosition_Request_th4(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_th2
{
public:
  explicit Init_GetPosition_Request_th2(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Request_th3 th2(::custom_interface::srv::GetPosition_Request::_th2_type arg)
  {
    msg_.th2 = std::move(arg);
    return Init_GetPosition_Request_th3(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_th1
{
public:
  Init_GetPosition_Request_th1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Request_th2 th1(::custom_interface::srv::GetPosition_Request::_th1_type arg)
  {
    msg_.th1 = std::move(arg);
    return Init_GetPosition_Request_th2(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::GetPosition_Request>()
{
  return custom_interface::srv::builder::Init_GetPosition_Request_th1();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_z
{
public:
  explicit Init_GetPosition_Response_z(::custom_interface::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::GetPosition_Response z(::custom_interface::srv::GetPosition_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_y
{
public:
  explicit Init_GetPosition_Response_y(::custom_interface::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Response_z y(::custom_interface::srv::GetPosition_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetPosition_Response_z(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_x
{
public:
  Init_GetPosition_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Response_y x(::custom_interface::srv::GetPosition_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetPosition_Response_y(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::GetPosition_Response>()
{
  return custom_interface::srv::builder::Init_GetPosition_Response_x();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Event_response
{
public:
  explicit Init_GetPosition_Event_response(::custom_interface::srv::GetPosition_Event & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::GetPosition_Event response(::custom_interface::srv::GetPosition_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Event msg_;
};

class Init_GetPosition_Event_request
{
public:
  explicit Init_GetPosition_Event_request(::custom_interface::srv::GetPosition_Event & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Event_response request(::custom_interface::srv::GetPosition_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPosition_Event_response(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Event msg_;
};

class Init_GetPosition_Event_info
{
public:
  Init_GetPosition_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Event_request info(::custom_interface::srv::GetPosition_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPosition_Event_request(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::GetPosition_Event>()
{
  return custom_interface::srv::builder::Init_GetPosition_Event_info();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
