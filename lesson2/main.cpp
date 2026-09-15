#include <iostream>

#include "problem1.h"
#include "problem2.h"

int main()
{
    
    std::cout << "Test problem 1" << std::endl;

    for (int i = -6; i < 13; i++)
    {
        std::cout << "Input: " << i << " | Output: ";
        printMonth(i);
        std::cout << std::endl;
    }
    

    std::cout << "Problem 2" << std::endl;
    guessNumber();

    return 0;
}