CMAKE_MINIMUM_REQUIRED(VERSION 4.3)

project(candy LANGUAGES C)

find_package(PkgConfig REQUIRED)
pkg_check_modules(RAY REQUIRED raylib)

add_executable(${PROJECT_NAME} src/main.c)

target_include_directories(${PROJECT_NAME} PRIVATE ${RAY_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${RAY_LIBRARIES})
