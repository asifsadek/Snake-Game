#include "snake_game.h"
#include <QApplication>
#include <QBitmap>
#include <QPixmap>
#include <QPainter>
#include <QColor>
#include <QLabel>
#include <qbackingstore.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Snake_Game w;
    QPainter painter(&w);
    painter.fillRect(0,0,20,200,*new QColor(0,0,1));
    w.show();



    return a.exec();
}