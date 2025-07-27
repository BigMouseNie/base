cmake_minimum_required(VERSION 3.14)
project(base)

# header-only
add_library(base INTERFACE)

target_include_directories(base INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
