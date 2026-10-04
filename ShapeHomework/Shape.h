#pragma once

#include <string>
#include "Utility.h"

class Shape
{
	std::string name_;
public:
	const std::string& getName() const;
	virtual double area() const = 0;
	virtual double perimeter() const = 0;

	virtual ~Shape() = default;
	Shape(const Shape&) = default;
	Shape& operator=(const Shape&) = default;
	Shape(Shape&&) = default;
	Shape& operator=(Shape&&) = default;

	Shape(std::string name) : name_(name) {};
};