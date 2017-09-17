cmake_minimum_required(VERSION 3.9.2)
project(cmake-test-project)

add_executable(cmake-test main.cpp)
install(TARGETS cmake-test DESTINATION .)

add_subdirectory(mathlib)
add_subdirectory(netlib)

target_link_libraries(cmake-test mathlib)
target_link_libraries(cmake-test netlib)
