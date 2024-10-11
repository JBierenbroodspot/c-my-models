cmake_minimum_required(VERSION 3.14...3.22)


project(CMyModels VERSION 0.1 LANGUAGES C)

include(CTest)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(lib)
