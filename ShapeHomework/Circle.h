#pragma once

#include "Shape.h"

class Circle : public Shape
{
	double r_;
public:
	double area() const override;
	double perimeter() const override;

	Circle(double r);
};