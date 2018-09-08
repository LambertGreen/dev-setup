#include "../src/IOperation.h"
#include "../src/Square.h"
#include "../src/UnaryOperation.h"

#include <iostream>

int main()
{
    std::cout << "Sqr(3) = " << Math::Square(3).Do() << std::endl;
    return 0;
}
