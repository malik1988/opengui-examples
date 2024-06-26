cmake_minimum_required(VERSION 3.11)

PROJECT(fltk_first)

set(CMAKE_CXX_STANDARD 17)


add_executable(fltk_first
        main.cpp
    )

SET(FLTK_BUILD_TEST OFF)
SET(FLTK_BUILD_EXAMPLES OFF)
SET(FLTK_BUILD_SHARED_LIBS OFF)
SET(FLTK_BUILD_FLUID OFF)
SET(FLTK_BUILD_FLTK_OPTIONS OFF)
add_subdirectory(fltk-1.4.x)

target_link_libraries(fltk_first fltk::fltk)