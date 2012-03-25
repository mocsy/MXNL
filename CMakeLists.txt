# The name of our project is "microdesu". CMakeLists files in this project can 
# refer to the root source directory of the project as ${microdesu_SOURCE_DIR} and 
# to the root binary directory of the project as ${microdesu_BINARY_DIR}.

cmake_minimum_required (VERSION 2.6)

project (microdesu)
set(VERSION_MAJOR "0")
set(VERSION_MINOR "0")
set(VERSION_PATCH "1")

# This project requires Boost
#find_package( boost REQUIRED )

add_subdirectory (inc)
add_subdirectory (lib)
add_subdirectory (src)