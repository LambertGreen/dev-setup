#pragma once

#include "./BinaryOperation.h"

namespace Math
{
class Add : BinaryOperation
{
public:
    Add(double p1, double p2);
    double Do() override;
};
} // namespace Math
