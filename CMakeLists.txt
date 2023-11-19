cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-O2")

set(CMAKE_BUILD_TYPE Release)
set(CGAL_DIR ./inc/CGAL)

project(draw-one-polygon)

find_package(CGAL REQUIRED COMPONENTS Qt5)
if (NOT CGAL_FOUND)
        message(STATUS "Missing CGAL library. Abort.")
        return()
endif()

if (NOT CGAL_Qt5_FOUND)
        message(STATUS "Missing Qt5 library.")
        return()
endif()

include_directories(inc)

FILE(GLOB SRCS mwe/compute-convex-hull-of-polygon.cpp)

add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME} PUBLIC CGAL::CGAL CGAL::CGAL_Basic_viewer)
