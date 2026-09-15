#include "problem1.h"

void printMonth(int n)
{
    if (n > 12 || n < 1)
    {
        std::cout << "n must be 1-12";
        return;
    }

    std::string months[] = {"January", "February", "March", "April", "May", 
    "June", "July", "August", "September", "October", "November", "December"};

    std::cout << months[n - 1];

    return;
}