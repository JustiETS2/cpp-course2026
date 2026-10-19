#include "Student.h"

int main()
{
    Student s("Alex", "612");

    s.addMark(5); s.addMark(7); s.addMark(3); s.addMark(10);

    std::cout << s;

    return 0;
}