#include <iostream>
#include "DynamicArray.h"

/*
            Глава 17
не шаблонизированный вектор, доступ к элементам по get() и set(),
нет обработки исключений
*/

int main()
{
    DynamicArray vec(20);

    std::cout << vec.get(3) << std::endl;

    vec.set(5, 13);

    std::cout << vec.get(5);

    return 0;
}