project(calculator)
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard
set(SOURCE 
    ./src/Add.cpp
    ./src/Square.cpp
    ./src/BinaryOperation.cpp
    ./src/UnaryOperation.cpp
    ./test/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
