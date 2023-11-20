# Created by the script cgal_create_CMakeLists
# This is the CMake script for compiling a set of CGAL applications.

cmake_minimum_required(VERSION 3.1...3.15)

set(CMAKE_CXX_COMPILER "g++")

project( draw-one-polygon )

set(CMAKE_BUILD_TYPE Release)

# CGAL and its components
find_package( CGAL REQUIRED COMPONENTS Qt5 Core)

if ( NOT CGAL_FOUND )
	message(STATUS "This project requires the CGAL library, and will not be compiled.")
	return()  
endif()

if ( NOT CGAL_Qt5_FOUND )
	message(STATUS "This project requires the CGAL part for Qt5 library (libCGAL_Qt5.so), and will not be compiled.")
	return()
endif()

find_package(Qt5 COMPONENTS Core Xml Script OpenGL Svg)

# Boost and its components
find_package( Boost REQUIRED )

if ( NOT Boost_FOUND )
	message(STATUS "This project requires the Boost library, and will not be compiled.")
	return()  
endif()

# include for local directory
#include_directories(inc)

# Creating entries for all C++ files with "main" routine
# ##########################################################
add_executable(${PROJECT_NAME} mwe/draw-one-polygon.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC CGAL::CGAL CGAL::CGAL_Basic_viewer)
