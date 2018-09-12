#ifndef PIXEL_H
#define PIXEL_H

#include <QMainWindow>
#include<QWidget>


class Pixel : public QWidget
{
public:

    Pixel(int x,int y);
    void set_pos(int x , int y);
    void set_colour_black();
    void set_colour_white();
    void set_colour_red();
    int get_x();
    int get_y();
    Pixel* next;
};

#endif // PIXEL_H

