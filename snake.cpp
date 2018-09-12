#include "snake.h"

Snake::Snake()
{
    head=new Pixel();
    tail=new Pixel();
    tail->next=head;
    length = 2;


}

bool Snake::move() {
    Pixel* temp=new Pixel();
    temp = this->tail;
    //set temp color to white
    this->tail = temp->next;
    //assign new head position
    //call draw snake from box object
    return false;
}

