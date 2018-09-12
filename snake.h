#ifndef SNAKE_H
#define SNAKE_H

#include <QObject>
#include "pixel.h"

class Snake
{

public:
    enum Direction {
      Up,Right,Down,Left
    };
    Direction direction;
    Pixel* head;
    Pixel* tail;
    int length;
    Snake();
    void move();
};

#endif // SNAKE_H
