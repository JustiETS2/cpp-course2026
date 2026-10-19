#include "Student.h"
#include"Operations.h"
#include <algorithm>
#include <cmath>

int main()
{
    std::vector<Student> students = {Student("Alexandr", "612"),
                                     Student("Boris", "612"),
                                     Student("Bogdan", "611"),
                                     Student("Lena", "614"),
                                     Student("Andrey", "614"),
                                     Student("Olga", "611"),
                                     Student("Egor", "611")};

    for (auto& s : students)
    {
        for (std::size_t i = 0; i < 10; i++)
        {
            s.addMark(std::rand() % 10 + 1);
        }

        std::cout << s << std::endl;
    }

    std::sort(students.begin(), students.end()); //по ср. баллу

    std::cout <<"--------------------------------------" <<  std::endl;

    for (const auto& s : students)
    {
        std::cout << s << std::endl;
    }

    std::cout <<"--------------------------------------" <<  std::endl;

    std::sort(students.begin(), students.end(), [](const Student& lhs, const Student& rhs) //сортировка по алфавиту
        {
            std::string lname = lhs.getName();
            std::string rname = rhs.getName();

            for (std::size_t i = 0; i < std::max(lname.size(), rname.size()); i++)
            {
                if (lname[i] < rname[i]) //проход по именам, пока не будет расхождения по буквам
                {
                    return true;
                }

                else if (lname[i] > rname[i])
                {
                    return false;
                }
            }

            return true;
        });

    for (const auto& s : students)
    {
        std::cout << s << std::endl;
    }

    return 0;
}