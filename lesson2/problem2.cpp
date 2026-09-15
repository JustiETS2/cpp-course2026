#include "problem2.h"

void guessNumber()
{
    int number = rand() % 100 + 1;
    int guess = 0;

    do
    {
        std::cout << "Enter number: ";
        std::cin >> guess;

        if (guess > number)
        {
            std::cout << "Lower" << std::endl;
        }

        else if (guess < number)
        {
            std::cout << "Greater" << std::endl;
        }

    } while (guess != number);

    std::cout << "Correct answer" << std::endl;
    
    return;
}

