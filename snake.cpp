#include "snake.h"
#include <QKeyEvent>

Snake::Snake()
{
    head=new Pixel(10,10);
    tail=new Pixel(20,10);
    tail->next=head;
    length = 2;
    direction=Right;

}

void Snake::keyPressEvent(QKeyEvent *event){
    Pixel* temp;
    temp = this->tail;
    temp->set_colour_white();
    this->tail = temp->next;
    //assign new head position
    if (event->key() == Qt::Key_Down){
        this->head->set_pos(head->get_x(),head->get_y()-10);
    }
    if (event->key() == Qt::Key_Right){
        this->head->set_pos(head->get_x()+10,head->get_y());
    }
    if (event->key() == Qt::Key_Up){
        this->head->set_pos(head->get_x(),head->get_y()+10);
    }
    if (event->key() == Qt::Key_Left){
        this->head->set_pos(head->get_x()-10,head->get_y());
    }
}



