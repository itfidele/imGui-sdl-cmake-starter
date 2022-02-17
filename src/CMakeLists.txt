file(GLOB SRC_FILES *.cpp)
file(GLOB HDR_FILES ../include/*.hpp)

add_executable(${PROJECT_NAME} ${SRC_FILES} ${HDR_FILES})

find_package(OpenGL REQUIRED)

if (WIN32)
    target_link_libraries(${CMAKE_PROJECT_NAME}
        "glad"
        ${SDL}
        ${SDLmain}
        ${OPENGL_gl_LIBRARY}
        )
else()
    target_link_libraries(${CMAKE_PROJECT_NAME}
            "glad"
            ${OPENGL_gl_LIBRARY}
            )
    if (APPLE)
        target_link_libraries(${CMAKE_PROJECT_NAME}
            ${SDL}
            )
    endif()
    if (UNIX AND NOT APPLE)
        target_link_libraries(${CMAKE_PROJECT_NAME}
            ${SDL2_LIBRARIES}
            ${CMAKE_DL_LIBS}
            )
    endif()
endif()
#message(${WHERE-IS-SDL})
#message(${WHERE-IS-SDL-HEADERS})
#message(${WHERE-IS-GLAD})
#message(${WHERE-IS-GLAD-HEADERS})



if (WIN32 OR APPLE)
    find_library(SDL SDL2 PATHS ${WHERE-IS-SDL})
    if (WIN32)
        find_library(SDLmain SDL2main PATHS ${WHERE-IS-SDL})
    endif()

    include_directories(
        "${WHERE-IS-SDL-HEADERS}"
    )
endif()

add_library("glad" "../vendor/glad/src/glad.c")
include_directories(
        "../vendor/glad/include"
    )

target_include_directories(${PROJECT_NAME} PUBLIC ../vendors/imgui/include ../include)
target_link_libraries(${PROJECT_NAME} imgui)