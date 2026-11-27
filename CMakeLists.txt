cmake_minimum_required(VERSION "3.27")
project(Mals)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(raylib GIT_REPOSITORY https://github.com/raysan5/raylib.git GIT_TAG 6.2)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SUPPORT_CAMERA_SYSTEM OFF CACHE BOOL "" FORCE)
set(SUPPORT_GESTURES_SYSTEM OFF CACHE BOOL "" FORCE)
set(PLATFORM "Desktop" CACHE STRING "" FORCE)
set(SUPPORT_SCREEN_CAPTURE OFF CACHE BOOL "" FORCE)
set(SUPPORT_GIF_RECORDING OFF CACHE BOOL "" FORCE)
if (LINUX)
  set(GLFW_BUILD_X11 ON CACHE BOOL "" FORCE)
  set(GLFW_BUILD_WAYLAND ON CACHE BOOL "" FORCE)
endif()
#dev only
set(OPENGL_VERSION "2.1" CACHE STRING "" FORCE)


file(GLOB_RECURSE src "${PROJECT_SOURCE_DIR}/src/*.c")
add_executable(${PROJECT_NAME} ${src})
FetchContent_MakeAvailable(raylib)
target_include_directories(${PROJECT_NAME} PRIVATE CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} raylib)
