#pragma once

#include "./IOperation.h"

namespace Math
{
class UnaryOperation : IOperation
{
protected:
    double m_param;

public:
    UnaryOperation(double x);
    virtual double Do() = 0;

    UnaryOperation() = delete;
};
}
