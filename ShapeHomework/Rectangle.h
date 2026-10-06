#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
	double a_, b_;
public:
	double area() const override;
	double perimeter() const override;

	Rectangle(double a, double b);
};