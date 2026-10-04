#include "Circle.h"

double Circle::area() const
{
    return PI * r_ * r_;
}

double Circle::perimeter() const
{
	return 2 * PI * r_;
}

Circle::Circle(double r) : Shape("Circle"), r_(r)
{
	if (r <= 0)
	{
		throw std::domain_error("Radius must be > 0");
	}
}
