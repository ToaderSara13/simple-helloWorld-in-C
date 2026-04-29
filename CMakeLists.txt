cmake_minimum_required(VERSION 3.10)
project(Task9 C)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

add_executable(app_cmake main.c)
target_include_directories(app_cmake PRIVATE ${GTK3_INCLUDE_DIRS})
target_link_libraries(app_cmake ${GTK3_LIBRARIES})