cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello_rayli VERSION 1.0)
add_executable(hello_raylib main.c)

target_include_directories(hello_raylib PUBLIC /usr/local/include/)
target_link_libraries(hello_raylib /usr/local/lib/libraylib.so.4.2.0)
