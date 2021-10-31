cmake_minimum_required (VERSION 3.8)
project ("CMakeTestProject")

add_executable (CMakeTestProject "Test.cpp")
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CMakeTestProject) 
