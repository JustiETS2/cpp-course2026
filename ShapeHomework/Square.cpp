#include "Square.h"

double Square::area() const
{
    return Rectangle::area();
}

double Square::perimeter() const
{
	return Rectangle::perimeter();
}

Square::Square(double a) : Rectangle(a, a) {}
