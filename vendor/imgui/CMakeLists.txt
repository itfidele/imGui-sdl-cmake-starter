file(GLOB IMGUI_SRC_FILES src/*.cpp)
file(GLOB IMGUI_HDR_FILES include/*.h)

add_library(imgui ${IMGUI_SRC_FILES} ${IMGUI_HDR_FILES})
target_include_directories(imgui PUBLIC ./include/)

target_link_libraries(imgui PUBLIC ${CMAKE_DL_LIBS})