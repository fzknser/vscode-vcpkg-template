cmake_minimum_required(VERSION 3.5.0)

set(fmt_DIR $ENV{VCPKG_ROOT}/installed/x64-linux/share/fmt/)
set(CMAKE_PREFIX_PATH $ENV{VCPKG_ROOT}/installed/x64-linux/)

message(-- ${CMAKE_PREFIX_PATH})
message(-- $ENV{VCPKG_ROOT})
message(-- fmtDIR -- ${fmt_DIR})

project(test VERSION 0.1.0 LANGUAGES C CXX)

find_package(fmt CONFIG REQUIRED)

add_executable(cmake_main main.cpp)

target_link_libraries(cmake_main PRIVATE fmt::fmt-header-only)

