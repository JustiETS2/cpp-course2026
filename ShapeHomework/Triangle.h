#pragma once

#include "Shape.h"

class Triangle : public Shape
{
	double a_, b_, c_;
public:
	double area() const override;
	double perimeter() const override;

	Triangle(double a, double b, double c);
};