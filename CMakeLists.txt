CMAKE_MINIMUM_REQUIRED(VERSION 3.11)

project(candy LANGUAGES C)

find_package(raylib)
if(NOT raylib_FOUND)
    message(STATUS "WARNING: raylib was not found in the system; it will be downloaded")
    include(FetchContent)
    FetchContent_Declare(raylib https://github.com/raysan5/raylib/archive/refs/tags/6.2.zip)
    FetchContent_MakeAvailable(raylib)
else()
    message(STATUS "SUCCESS: found raylib in system")
endif()

add_executable(${PROJECT_NAME} src/main.c)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

