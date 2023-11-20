cmake_minimum_required(VERSION 3.1...3.15)

set(CMAKE_CXX_COMPILER "g++")

project(cgal-examples)

set(CMAKE_BUILD_TYPE Release)

# CGAL and its components.
find_package(CGAL REQUIRED COMPONENTS Qt5 Core)

if (NOT CGAL_FOUND)
	message(STATUS "This project requires the CGAL library, and will not be compiled.")
	return()  
endif()

if (NOT CGAL_Qt5_FOUND)
	message(STATUS "This project requires the CGAL part for Qt5 library (libCGAL_Qt5.so), and will not be compiled.")
	return()
endif()

find_package(Qt5 COMPONENTS Core Xml Script OpenGL Svg)

# Boost and its components.
find_package(Boost REQUIRED)

if (NOT Boost_FOUND)
	message(STATUS "This project requires the Boost library, and will not be compiled.")
	return()  
endif()

# Creating entries for all C++ files with "main" routine.
add_executable(compute-convex-hull-of-polygon mwe/compute-convex-hull-of-polygon.cpp)
target_link_libraries(compute-convex-hull-of-polygon PUBLIC CGAL::CGAL)

add_executable(draw-one-polygon mwe/draw-one-polygon.cpp)
target_link_libraries(draw-one-polygon PUBLIC CGAL::CGAL CGAL::CGAL_Basic_viewer)

add_executable(draw-multiple-polygons mwe/draw-multiple-polygons.cpp)
target_link_libraries(draw-multiple-polygons PUBLIC CGAL::CGAL CGAL::CGAL_Basic_viewer)
