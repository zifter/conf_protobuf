cmake_minimum_required (VERSION 3.3)

project(conf_protobuf)

add_executable(conf_protobuf
    Utils.h
    Utils.cpp
    main.cpp)
add_subdirectory(proto/)
add_subdirectory(tests/)
include_directories(.)

add_subdirectory(protobuf-3.5.1/cmake)
include_directories(protobuf-3.5.1/src)
include_directories(proto/)

if(MSVC)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

target_link_libraries(conf_protobuf libprotobuf)
