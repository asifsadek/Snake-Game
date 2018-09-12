#include "pixel.h"
Pixel::Pixel(int x,int y)
{
    this->setGeometry(x, y, 10, 10);
    this->setStyleSheet("background-color:white;");
    this->show();
}

void Pixel::set_pos(int x , int y)
{
    this->setGeometry(x, y, 10, 10);
    this->show();
}
void Pixel::set_colour_black()
{
    this->setStyleSheet("background-color:black;");
    this->show();
}
void Pixel::set_colour_red()
{
    this->setStyleSheet("background-color:red;");
    this->show();
}

int Pixel:: get_x()
{
    return this->x();
}

int Pixel:: get_y()
{
    return this->y();
}



