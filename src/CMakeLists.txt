cmake_minimum_required(VERSION 3.9.2)
project(cmake-test-project)
add_executable(cmake-test-project main.cpp)
install(TARGETS cmake-test-project DESTINATION .)