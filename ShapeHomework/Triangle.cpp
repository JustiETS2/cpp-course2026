#include "Triangle.h"

double Triangle::area() const
{
	double p = perimeter() / 2;
	return sqrt(p * (p - a_) * (p - b_) * (p - c_));
}

double Triangle::perimeter() const
{
	return a_ + b_ + c_;
}

Triangle::Triangle(double a, double b, double c) : Shape("Triangle"), a_(a), b_(b), c_(c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		throw std::domain_error("Triangle side must be > 0");
	}

	else if (a >= (b + c)
		|| b >= (a + c)
		|| c >= (a + b))
	{
		throw std::domain_error("Triangle side must not exceed two sides sum");
	}
}
