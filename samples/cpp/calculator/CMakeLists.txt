project(calculator)
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard
set(SOURCE 
    ./src/Square.cpp
    ./src/UnaryOperation.cpp
    ./test/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
