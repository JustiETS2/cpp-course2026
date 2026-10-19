#include "Operations.h"

std::ostream &operator<<(std::ostream &stream, std::vector<short> &&vec)
{
    for (short& c : vec)
    {
        std::cout << c << " ";
    }

    return stream;
}

std::ostream &operator<<(std::ostream &stream, const Student &s)
{
    stream << "Name: " << s.getName() << " Group: " << s.getGroup() <<  " Marks: " << s.getMarks() << 
    " Average score: " << s.getAverageScore();

    return stream;
}

bool operator<(const Student &lhs, const Student &rhs)
{
    return lhs.getAverageScore() < rhs.getAverageScore();
}