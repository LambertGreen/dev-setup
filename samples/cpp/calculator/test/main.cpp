#include "../src/Add.h"
#include "../src/IOperation.h"
#include "../src/Square.h"
#include "../src/UnaryOperation.h"

#include <iostream>

int main()
{
    std::cout << "Sqr(3) = " << Math::Square(3).Do() << std::endl;
    std::cout << "Add(2, 5) = " << Math::Add(2, 5).Do() << std::endl;
    std::cout << "Add(100, 42) = " << Math::Add(100, 42).Do() << std::endl;
    return 0;
}
