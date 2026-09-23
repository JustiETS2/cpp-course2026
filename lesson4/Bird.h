#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
    virtual void sound() override;
    virtual void moving() override;
    virtual void wannaEat() override;

    Bird() = default;
    ~Bird() = default;
    Bird(const Bird& rhs) = default; //копирующий конструктор
    Bird(Bird&& rhs) = default; //move конструктор
    Bird& operator=(const Bird& rhs) = default;
};