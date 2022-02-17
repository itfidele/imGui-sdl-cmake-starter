set(RESOURCE_FILES
    fonts/verdana.ttf
    )

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
  MACOSX_BUNDLE TRUE
  MACOSX_FRAMEWORK_IDENTIFIER org.cmake.ExecutableTarget
  RESOURCE "${RESOURCE_FILES}")