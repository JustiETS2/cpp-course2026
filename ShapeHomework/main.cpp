#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Operation.h"

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