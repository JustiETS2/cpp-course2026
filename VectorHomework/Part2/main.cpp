#include <iostream>
#include "DynamicArray.h"

/*
            Глава 18
std::initializer_list конструктор, копирующий конструктор, глубокое копирование,
копирующее присваивание, самоприсваивание, перемещение, std::copy
*/

int main()
{
    DynamicArray vec(20);

    std::cout << vec.get(3) << std::endl;

    vec.set(5, 13);

    std::cout << vec.get(5);

    return 0;
}