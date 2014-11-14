cmake_minimum_required(VERSION 2.8) 		

project(a_and_pps_1)				

set(SOURCE_EXE main.cpp)			

include_directories(Patterns)			

add_executable(main ${SOURCE_EXE})		

add_subdirectory(Patterns) 			

target_link_libraries(main Patterns)		
