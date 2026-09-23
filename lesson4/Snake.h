#pragma once
#include "Animal.h"

class Snake : public Animal
{
public:
    virtual void sound() override;
    virtual void moving() override;
    virtual void wannaEat() override;

    Snake() = default;
    ~Snake() = default;
    Snake(const Snake& rhs) = default; //копирующий конструктор
    Snake(Snake&& rhs) = default; //move конструктор
    Snake& operator=(const Snake& rhs) = default;
};