#pragma once

#include "./UnaryOperation.h"

namespace Math
{
class Square : UnaryOperation
{
public:
    Square(double param);
    double Do() override;
};
} // namespace Math
