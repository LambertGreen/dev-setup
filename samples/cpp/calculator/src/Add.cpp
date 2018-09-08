#include "./Add.h"

Math::Add::Add(double p1, double p2) : BinaryOperation(p1, p2){};

double Math::Add::Do()
{
    return m_param1 + m_param2;
}
