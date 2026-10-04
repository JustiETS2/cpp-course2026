#include "Rectangle.h"

double Rectangle::area() const
{
    return a_ * b_;
}

double Rectangle::perimeter() const
{
	return 2 * (a_ + b_);
}

Rectangle::Rectangle(double a, double b) : Shape("Rectangle"), a_(a), b_(b)
{
	if (a <= 0 || b <= 0)
	{
		throw std::domain_error("Side must be > 0");
	}
}
