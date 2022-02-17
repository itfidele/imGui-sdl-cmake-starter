cmake_minimum_required(VERSION 3.10)

project(imguidemo)
find_package(SDL2 REQUIRED)
include_directories(${PROJECT_NAME} ${SDL2_INCLUDE_DIRS})

# for filesystem functionality from C++17
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(vendor/imgui)
#add_subdirectory(resources)
