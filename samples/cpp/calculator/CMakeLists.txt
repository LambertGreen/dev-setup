cmake_minimum_required(VERSION 3.14)
project(calculator)


# A requirement for generating the compile_commands.json file on Windows
# is to install clang-cl.exe (comes with LLVM i.e. scoop install llvm)
SET( CMAKE_EXPORT_COMPILE_COMMANDS ON ) # To have compile_commands.json in the buld directory

# Below is only needed for YCM to find compile_commands.json in project dir.
# An alternative solution is to inform YCM via .ycm_extra_conf.py file of
# a custom location e.g. ./build dir.  This is currently in place for this
# project, so commenting below lines, but leaving for referrence.
# IF( EXISTS "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json" )
#   EXECUTE_PROCESS( COMMAND ${CMAKE_COMMAND} -E copy_if_different
#     ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
#     ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json
#   )
# ENDIF()

set(CMAKE_CXX_COMPILER clang-cl)
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard
set(SOURCE
    ./src/Add.cpp
    ./src/Square.cpp
    ./src/BinaryOperation.cpp
    ./src/UnaryOperation.cpp
    ./test/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
