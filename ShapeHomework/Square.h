#pragma once

#include "Rectangle.h"

class Square : public Rectangle
{
	double a_, b_;
public:
	double area() const override;
	double perimeter() const override;

	Square(double a);

	~Square() override = default;
	Square(const Square&) = default;
	Square& operator=(const Square&) = default;
	Square(Square&&) = default;
	Square& operator=(Square&&) = default;
};