#ifndef PIXEL_H
#define PIXEL_H

#include <QMainWindow>
#include<QWidget>


class Pixel : public QWidget
{
public:

    Pixel(int x,int y);
    Pixel* next;
    int x;
    int y;
};

#endif // PIXEL_H

