#include <iostream>
#include "DynamicArray.h"

/*
            Глава 18
std::initializer_list конструктор, копирующий конструктор, глубокое копирование,
копирующее присваивание, самоприсваивание, перемещение, std::copy
*/

int main()
{
    DynamicArray vec(3);
    vec.set(0, 1.5);
    vec.set(1, 2.5);
    vec.set(2, 13);

    std::cout << "vec: ";
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec.get(i) << ' ';
    }
    std::cout << std::endl;

    DynamicArray vec1{10, 20, 30};
    std::cout << "vec1[1] = " << vec1.get(1) << std::endl;

    DynamicArray vec2(vec);
    vec2.set(0, 99);
    std::cout << "vec[0] = " << vec.get(0) << std::endl;
    std::cout << "vec2[0] = " << vec2.get(0) << std::endl;

    DynamicArray vec3(2);
    vec3.set(0, -1);
    vec3 = vec;
    vec3.set(1, 77);
    std::cout << "vec[1] = " << vec.get(1) << std::endl;
    std::cout << "vec3[1] = " << vec3.get(1) << std::endl;

    vec3 = vec3;
    std::cout << "vec3 size after vec3 = vec3: " << vec3.size() << std::endl;

    DynamicArray vec4(std::move(vec2));
    std::cout << "vec4 size = " << vec4.size() << std::endl;
    std::cout << "vec2 size = " << vec2.size() << std::endl;

    DynamicArray vec5(1);
    vec5 = std::move(vec4);
    std::cout << "vec5 size = " << vec5.size() << std::endl;
    std::cout << "vec4 size = " << vec4.size() << std::endl;

    return 0;
}