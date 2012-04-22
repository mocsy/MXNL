# The name of our project is "microdesu". CMakeLists files in this project can 
# refer to the root source directory of the project as ${microdesu_SOURCE_DIR} and 
# to the root binary directory of the project as ${microdesu_BINARY_DIR}.

cmake_minimum_required (VERSION 2.6)

project (microdesu)
set(microdesu_VERSION_MAJOR "0")
set(microdesu_VERSION_MINOR "0")
set(microdesu_VERSION_PATCH "1")
set(microdesu_VERSION_COMMIT "0")

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/microdesuConfig.h.in"
  "${PROJECT_BINARY_DIR}/microdesuConfig.h")
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# This project requires Boost
#find_package( boost REQUIRED )

add_subdirectory (inc)
add_subdirectory (libs)
add_subdirectory (microdesu)