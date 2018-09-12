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
    void keyPressEvent(QKeyEvent* event);

};

#endif // SNAKE_H
