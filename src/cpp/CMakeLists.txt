cmake_minimum_required (VERSION 2.8.11)

project(conf_protobuf)

add_subdirectory(protobuf-3.5.1/cmake)
include_directories(protobuf-3.5.1/src)

add_executable(conf_protobuf main.cpp
    proto/v2/status2.pb.cc
    proto/v3/status3.pb.cc)

#add_dependencies(conf_protobuf libprotobuf)
target_link_libraries(conf_protobuf libprotobuf)
