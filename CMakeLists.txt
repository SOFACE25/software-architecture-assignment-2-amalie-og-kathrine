cmake_minimum_required(VERSION 3.10...3.22)
project(assignment2)
include(CTest)

set(CMAKE_CXX_STANDARD 14)

# enable testing using ctest
enable_testing()

# include other cmake projects
add_subdirectory(wargame_c)
add_subdirectory(wargame_cpp)
add_subdirectory(test)
add_subdirectory(sandbox)