cmake_minimum_required (VERSION 3.16)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wpedantic -Werror=pedantic -Wextra")

SET(LIB_NAME "driverpcsim")
project(${LIB_NAME})

find_package(GTest QUIET)

if(${GTest_FOUND})
add_subdirectory(gtest)
endif()

add_library(${LIB_NAME}
   hal.cpp
   controlbus.cpp
   birelay.cpp
   extrelay.cpp
   version.cpp
)

