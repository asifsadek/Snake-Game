#include "snake.h"
#include <QKeyEvent>

#define BLACK_BRUSH *new QBrush(*new QColor(0,0,0))
#define WHITE_BRUSH *new QBrush(*new QColor(255,255,255))

Snake::Snake(QPainter* painter)
{
    head=new Pixel(20,20);
    tail=new Pixel(10,20);
    tail->next=head;
    length = 2;
    direction=Right;
    s_painter=new QPainter();
    s_painter=painter;
    draw();

}

void Snake::move() {
    Pixel* temp;
    temp = this->tail;
    this->tail->x = temp->next->x;
    this->tail->y = temp->next->y;
    //assign new head position
    switch(direction) {
    case Up:
        this->head->y -= 10;
        break;
    case Right:
        this->head->x += 10;
        break;
    case Down:
        this->head->y -= 10;
        break;
    case Left:
        this->head->x -= 10;
        break;
    }
    draw();
}

void Snake::draw() {
    s_painter->fillRect(0,0,700,700,WHITE_BRUSH);
    s_painter->fillRect(head->x,head->y,10,10,BLACK_BRUSH);
    s_painter->fillRect(tail->x,tail->y,10,10,BLACK_BRUSH);
}

void Snake :: keyPressEvent(QKeyEvent *event){
    Pixel* temp;
    temp = this->tail;
    temp->set_colour_white();
    this->tail = temp->next;
    //assign new head position
    if (event->key() == Qt::Key_Down){
        this->head->set_pos(head->get_x(),head->get_y()-10);
        whitedraw();
        blackdraw();
    }
    if (event->key() == Qt::Key_Right){
        this->head->set_pos(head->get_x()+10,head->get_y());
        whitedraw();
        blackdraw();
    }
    if (event->key() == Qt::Key_Up){
        this->head->set_pos(head->get_x(),head->get_y()+10);
        whitedraw();
        blackdraw();
    }
    if (event->key() == Qt::Key_Left){
        this->head->set_pos(head->get_x()-10,head->get_y());
        whitedraw();
        blackdraw();
    }
}



