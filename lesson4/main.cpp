#include "Bird.h"
#include "Cat.h"
#include "Parrot.h"
#include "Snake.h"
#include "Fox.h"

int main()
{
    Bird bird{};
    Cat cat{};
    Parrot parrot{};
    Snake snake{};
    Fox fox{};

    bird.sound();
    bird.moving();
    bird.wannaEat();

    cat.sound();
    cat.moving();
    cat.wannaEat();

    parrot.sound();
    parrot.moving();
    parrot.wannaEat();

    snake.sound();
    snake.moving();
    snake.wannaEat();

    fox.sound();
    fox.moving();
    fox.wannaEat();

    return 0;
}