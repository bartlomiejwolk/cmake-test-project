cmake_minimum_required(VERSION 3.9.2)
project(mathlib_project)

add_library(mathlib STATIC math.h math.cpp)

install(TARGETS mathlib DESTINATION lib)
install(FILES math.h DESTINATION include)