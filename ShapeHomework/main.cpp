#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Operation.h"
#include <memory>

enum class ShapeType
{
	UNDEFINED = 0,
	TRIANGLE = 1,
	CIRCLE = 2,
	RECTANGLE = 3,
	SQUARE = 4
};

std::unique_ptr<Shape> buildShape(ShapeType type)
{
	switch (type)
	{
	case ShapeType::UNDEFINED:
		return nullptr;
		break;
	case ShapeType::CIRCLE:
		return std::make_unique<Circle>(0);
		break;
	case ShapeType::TRIANGLE:
		return std::make_unique<Triangle>();
		break;
	case ShapeType::RECTANGLE:
		return std::make_unique<Rectangle>(0, 0);
		break;
	case ShapeType::SQUARE:
		return std::make_unique<Square>();
		break;
	
	default:
		break;
	}
}

int main()
{
	Triangle triangle(28, 40, 32);
	Circle circle(11.0 / sqrt(PI));
	Rectangle rectangle(13, 37);
	Square square(11);

	std::cout << triangle.perimeter() << " " << triangle.area() << std::endl;
	std::cout << circle.perimeter() << " " << circle.area() << std::endl;
	std::cout << rectangle.perimeter() << " " << rectangle.area() << std::endl;
	std::cout << square.perimeter() << " " << square.area() << std::endl;

	std::cout << (rectangle^triangle) << std::endl;
	std::cout << (square==circle) << std::endl;

	std::cout << triangle << std::endl;
	std::cout << circle << std::endl;
	std::cout << rectangle << std::endl;
	std::cout << square << std::endl;

	try 
	{
		Triangle tri = Triangle(3, 4, 21);
	}

	catch (std::domain_error e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Rectangle rect = Rectangle(3, -2);
	}

	catch (std::domain_error e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}