# orbita - ReXGlue Recompiled Project
#
# The SDK package provides rexglue_project and the rexglue_setup_* functions.

cmake_minimum_required(VERSION 3.25)
project(orbita LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (REXSDK_DIR)
  add_subdirectory("${REXSDK_DIR}" rexglue-sdk)
else ()
  find_package(rexglue 0.11.0 REQUIRED CONFIG)
endif ()
rexglue_project(orbita OUTPUT_DIR generated/default)

# Host sources. src/main.cpp stays on the executable.
set(ORBITA_HOST_SOURCES src/orbita_hooks.cpp)

# OBJECT and never STATIC, an archive drops the REX_EXPORT symbols.
add_library(orbita_common OBJECT ${ORBITA_HOST_SOURCES})
rexglue_setup_host_library(orbita_common)

if (WIN32)
  add_executable(orbita WIN32 src/main.cpp)
else ()
  add_executable(orbita src/main.cpp)
endif ()

rexglue_setup_target(orbita)
target_link_libraries(orbita PRIVATE orbita_common)
