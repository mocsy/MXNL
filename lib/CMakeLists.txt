# Make sure the compiler can find the include files
include_directories (${microdesu_SOURCE_DIR}/inc)

# Make sure the linker can find the includes once they are built
link_directories (${microdesu_BINARY_DIR}/inc)