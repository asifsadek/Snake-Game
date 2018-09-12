#include "snake_game.h"
#include <QApplication>
#include <QBitmap>
#include <QPixmap>
#include <QPainter>
#include <QColor>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Snake_Game w;
    w.show();



    return a.exec();
}
