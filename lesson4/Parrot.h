#pragma once
#include "Animal.h"

class Parrot : public Animal
{
public:
    virtual void sound() override;
    virtual void moving() override;
    virtual void wannaEat() override;

    Parrot() = default;
    ~Parrot() = default;
    Parrot(const Parrot& rhs) = default; //копирующий конструктор
    Parrot(Parrot&& rhs) = default; //move конструктор
    Parrot& operator=(const Parrot& rhs) = default;
};