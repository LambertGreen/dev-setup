#pragma once

#include "./IOperation.h"

namespace Math
{
class BinaryOperation : IOperation
{
protected:
    double m_param1;
    double m_param2;

public:
    BinaryOperation(double p1, double p2);
    virtual double Do() = 0;

    BinaryOperation() = delete;
};
}
