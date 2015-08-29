cmake_minimum_required(VERSION 3.2)
project(Test_Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIR})

set(SOURCE_FILES main.cpp)

add_executable(Test_Project ${SOURCE_FILES})
target_link_libraries(Test_Project ${SDL2_LIBRARY})
target_link_libraries(Test_Project ${GLEW_LIBRARY})