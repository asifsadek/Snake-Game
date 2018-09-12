#ifndef SNAKE_H
#define SNAKE_H

#include <QObject>
#include "pixel.h"
#include <QPainter>
#include <QPaintEvent>
#include <QRect>
#include <QBrush>

class Snake
{
private:
    enum Direction {
      Up,Right,Down,Left
    };

public:
    Direction direction;
    Pixel* head;
    Pixel* tail;
    int length;
    Snake(QPainter* painter);
    void move();
    void draw();
    QPainter* s_painter;
    void keyPressEvent(QKeyEvent* event);
    void whitedraw();
    void blackdraw();


};

#endif // SNAKE_H
