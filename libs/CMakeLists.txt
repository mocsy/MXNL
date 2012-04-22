include_directories (${microdesu_SOURCE_DIR}/inc)
link_directories (${microdesu_BINARY_DIR}/inc)

# get microdesu libraries
include_directories (${microdesu_SOURCE_DIR}/microdesu)

# get microdesu binaries for the linker
include_directories (${microdesu_BINARY_DIR}/microdesu)

# create a test executable
add_executable(test_main test_main.cpp)

# Link the executable to packetformat.hpp library
target_link_libraries (test_main Packetformat) 