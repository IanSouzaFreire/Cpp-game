cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -O3")
set(BUILD_PATH ${PROJECT_NAME}/build/)

# Path to common headers
set(INCLUDE_PATH incl)

project(game)
add_executable(${BUILD_PATH} src/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_PATH})
target_link_libraries(${PROJECT_NAME} include)