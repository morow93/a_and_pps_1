cmake_minimum_required(VERSION 2.8) 		

project(a_and_pps_1)				

set(SOURCE_EXE main.cpp)			

include_directories(Patterns)			

add_executable(main ${SOURCE_EXE})		

add_subdirectory(Patterns) 			

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})
if(NOT GLUT_FOUND)
	message(ERROR " GLUT not found!")
endif(NOT GLUT_FOUND)

find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
	message(ERROR " OPENGL not found!")
endif(NOT OPENGL_FOUND)

target_link_libraries(main ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} Patterns)		
