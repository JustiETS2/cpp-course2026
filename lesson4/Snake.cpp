#include "Snake.h"
#include <iostream>

void Snake::sound()
{
    std::cout << "Tss___ss__ss__" << std::endl;
}

void Snake::moving()
{
    std::cout << "ooOOO___oo -> ...ooOOO___oo" << std::endl;
}

void Snake::wannaEat()
{
    std::cout << "Snake eats mice" << std::endl;
}
