cmake_minimum_required (VERSION 3.16)

SET(CMAKE_C_COMPILER "gcc-9" )
SET(CMAKE_CXX_COMPILER "g++-9" )

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic -Werror=pedantic -Wextra")

SET(PROJECT_NAME "pcsim")
project(${PROJECT_NAME})

include_directories( ./ )
include_directories( ./../ )

add_subdirectory(siguni)
add_subdirectory(driver)

#link_directories(${CMAKE_BINARY_DIR}/../siguni/x86 ${CMAKE_BINARY_DIR}/driver )

add_executable(${PROJECT_NAME}
   main.cpp
   manager.cpp
)

target_link_libraries (${PROJECT_NAME} siguni driverpcsim)

