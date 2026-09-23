#pragma once
#include "Animal.h"

class Fox : public Animal
{
public:
    virtual void sound() override;
    virtual void moving() override;
    virtual void wannaEat() override;

    Fox() = default;
    ~Fox() = default;
    Fox(const Fox& rhs) = default; //копирующий конструктор
    Fox(Fox&& rhs) = default; //move конструктор
    Fox& operator=(const Fox& rhs) = default;
};