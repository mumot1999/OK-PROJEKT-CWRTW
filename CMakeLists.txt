cmake_minimum_required(VERSION 3.14)
project(testing_test)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(Project_run ${SOURCE_FILES})

include_directories(Node_lib)
add_subdirectory(Node_lib)

include_directories(CVRPTW_lib)
add_subdirectory(CVRPTW_lib)

target_link_libraries(Project_run Node_lib)
target_link_libraries(Project_run CVRPTW_lib)

add_subdirectory(Google_tests)


