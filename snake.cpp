#include "snake.h"
#include <QKeyEvent>

#define BLACK_BRUSH *new QBrush(*new QColor(0,0,0))
#define WHITE_BRUSH *new QBrush(*new QColor(255,255,255))

Snake::Snake(QPainter* painter)
{
    head=new Pixel(10,20);
    tail=new Pixel(20,20);
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
    this->tail = temp->next;
    //assign new head position
    switch(direction) {
    case Up:
        this->head->set_pos(head->get_x(),head->get_y()-10);
        break;
    case Right:
        this->head->set_pos(head->get_x()+10,head->get_y());
        break;
    case Down:
        this->head->set_pos(head->get_x(),head->get_y()+10);
        break;
    case Left:
        this->head->set_pos(head->get_x()-10,head->get_y());
        break;
    }
    draw();
}

void Snake::draw() {
    s_painter->fillRect(0,0,700,700,WHITE_BRUSH);
}
void Snake :: whitedraw() {s_painter->fillRect(tail->get_x(),tail->get_y(),10,10,WHITE_BRUSH);}
void Snake :: blackdraw() {s_painter->fillRect(head->get_x(),head->get_y(),10,10,BLACK_BRUSH);
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



