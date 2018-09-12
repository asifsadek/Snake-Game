#include "snake.h"

Snake::Snake()
{
    head=new Pixel(10,10);
    tail=new Pixel(20,10);
    tail->next=head;
    length = 2;
    direction=Right;

}

void Snake::move() {
    Pixel* temp;
    temp = this->tail;
    temp->set_colour_white();
    this->tail = temp->next;
    //assign new head position
    switch(direction) {
    case 0:
        this->head->set_pos(head->get_x(),head->get_y()-10);
        break;
    case 1:
        this->head->set_pos(head->get_x()+10,head->get_y());
        break;
    case 2:
        this->head->set_pos(head->get_x(),head->get_y()+10);
        break;
    case 3:
        this->head->set_pos(head->get_x()-10,head->get_y());
        break;
    }
}



