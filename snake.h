#ifndef SNAKE_H
#define SNAKE_H

#include <QObject>
#include "pixel.h"

class Snake
{

public:
    Pixel* head;
    Pixel* tail;
    int length;
    Snake();
    bool move();
};

#endif // SNAKE_H
