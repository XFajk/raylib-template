cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

project(hello VERSION 0.1)
add_executable(hello main.c)

target_include_directories(hello PUBLIC /opt/homebrew/Cellar/raylib/4.2.0/include)
target_link_libraries(hello /opt/homebrew/Cellar/raylib/4.2.0/lib/libraylib.4.2.0.dylib)
