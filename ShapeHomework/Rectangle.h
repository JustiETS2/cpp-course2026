#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
	double a_, b_;
public:
	double area() const override;
	double perimeter() const override;

	Rectangle(double a, double b);

	virtual ~Rectangle() = default;
	Rectangle(const Rectangle&) = default;
	Rectangle& operator=(const Rectangle&) = default;
	Rectangle(Rectangle&&) = default;
	Rectangle& operator=(Rectangle&&) = default;
};