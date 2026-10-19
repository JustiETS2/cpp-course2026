#include "Student.h"

Student::Student(std::string name, std::string group) : name_(std::move(name)), group_(std::move(group)) {}
void Student::addMark(int mark) 
{
    averageScore_ = (averageScore_ * marks_.size() + mark) / (marks_.size() + 1);
    marks_.push_back(mark);
}

std::vector<short> Student::getMarks() const
{
    return marks_;
}

short Student::getAverageScore() const
{
    return averageScore_;
}

std::string Student::getName() const
{
    return name_;
}

std::string Student::getGroup() const
{
    return group_;
}

std::ostream& operator<<(std::ostream& stream, Student& s)
{
    stream << "Name: " << s.getName() << " Group: " << s.getGroup() <<  " Marks = " << s.getMarks() << 
    " Average score: " << s.getAverageScore();

    return stream;
}