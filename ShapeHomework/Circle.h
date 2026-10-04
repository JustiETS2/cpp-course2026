#pragma once

#include "Shape.h"

class Circle : public Shape
{
	double r_;
public:
	double area() const override;
	double perimeter() const override;

	Circle(double r);

	~Circle() override = default;
	Circle(const Circle&) = default;
	Circle& operator=(const Circle&) = default;
	Circle(Circle&&) = default;
	Circle& operator=(Circle&&) = default;
};