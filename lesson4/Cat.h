#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
    virtual void sound() override;
    virtual void moving() override;
    virtual void wannaEat() override;

    Cat() = default;
    ~Cat() = default;
    Cat(const Cat& rhs) = default; //копирующий конструктор
    Cat(Cat&& rhs) = default; //move конструктор
    Cat& operator=(const Cat& rhs) = default;
};