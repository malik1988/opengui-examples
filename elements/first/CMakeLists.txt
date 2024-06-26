cmake_minimum_required(VERSION 3.28)
project(elements_first LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(elements_first 
        main.cpp
        )


set(ELEMENTS_APP_PROJECT "elements_first")
set(ELEMENTS_APP_TITLE "elements first")
set(ELEMENTS_APP_COPYRIGHT "Copyright (c) 2016-2024 NAME")
set(ELEMENTS_APP_ID "com.elements.first")
set(ELEMENTS_APP_VERSION "1.0")

SET(ELEMENTS_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../elements")
set (CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${ELEMENTS_ROOT}/cmake")

include(ElementsConfigCommon)
add_subdirectory(${ELEMENTS_ROOT} elements)


# For your custom application icon on macOS or Windows see cmake/AppIcon.cmake module
include(AppIcon)
include(ElementsConfigApp)

target_link_libraries(elements_first cycfi::elements)

