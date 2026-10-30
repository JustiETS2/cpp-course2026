#include <iostream>

#include "DynamicArray.h"

/*
            Глава 19
шаблон, проверка диапазона, исключения,
доступ к элементам по []
*/
template<typename T>
void func(const DynamicArray<T>& a)
{
    std::cout << a.at(0);
}

int main()
{

    DynamicArray<double> vec{1.5, 2.5, 13.0};

    std::cout << "vec: ";
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec.at(i) << ' ';
    }
    std::cout << std::endl;

    double value = vec.at(1);

    vec.get(0);

    func(vec);

    DynamicArray<int> numbers{10, 20, 30};
    numbers.set(1, 99);
    std::cout << "numbers[1] = " << numbers.get(1) << std::endl;

    DynamicArray<std::string> words{"one", "two", "three"};
    std::cout << "words[0] = " << words.at(0) << std::endl;

    DynamicArray<int> numbers_copy(numbers);
    numbers_copy[0] = 100;
    std::cout << "numbers[0] = " << numbers[0] << std::endl;
    std::cout << "numbers_copy[0] = " << numbers_copy[0] << std::endl;

    try
    {
        std::cout << vec.at(10) << std::endl;
    }

    catch (const std::out_of_range& error)
    {
        std::cout << "error: " << error.what() << std::endl;
    }

    //самоприсванивание
    DynamicArray<int> vec1{1, 2};
    vec1 = numbers;
    vec1 = vec1;
    std::cout << "vec1 size = " << vec1.size() << std::endl;

    //перемещение
    DynamicArray<int> moved(std::move(numbers_copy));
    std::cout << "moved size = " << moved.size() << std::endl;
    std::cout << "numbers_copy size after move = "
              << numbers_copy.size() << std::endl;

    return 0;
}