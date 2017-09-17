cmake_minimum_required(VERSION 3.9.2)
project(netlib_project)

add_library(netlib SHARED net.h net.cpp)

install(TARGETS netlib DESTINATION lib)
install(FILES net.h DESTINATION include)