#include "./Square.h"

Math::Square::Square(double param) : UnaryOperation(param){};

double Math::Square::Do()
{
    return m_param * m_param;
}
