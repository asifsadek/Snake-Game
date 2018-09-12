#include "snake_game.h"
#include <QApplication>
#include <snake.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Snake_Game w;
    Snake snake;
    snake.move();

    w.show();



    return a.exec();
}
