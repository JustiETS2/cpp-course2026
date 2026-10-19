#pragma once

#include <string>
#include <vector>
#include <iostream>

class Student
{
private:
    std::string name_;
    std::string group_;
    std::vector<short> marks_;
    float averageScore_;

public:
    /*
    virtual ~Shape() = default;
	Shape(const Shape&) = default;
	Shape& operator=(const Shape&) = default;
	Shape(Shape&&) = default;
	Shape& operator=(Shape&&) = default;
    */

	Student(std::string name, std::string group);

    void addMark(int mark);

    std::vector<short> getMarks() const;
    float getAverageScore() const;
    std::string getName() const;
    std::string getGroup() const;
};