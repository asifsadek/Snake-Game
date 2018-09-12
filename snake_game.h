#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <QMainWindow>
#include <pixel.h>
#include <snake.h>
#include <QPainter>
#include <QPaintEvent>
#include <QRect>
#include <QBrush>

namespace Ui {
class Snake_Game;
}

class Snake_Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Snake_Game(QWidget *parent = nullptr);
    ~Snake_Game();
    void paintEvent(QPaintEvent * event)
        {
            QMainWindow::paintEvent(event);

            QPainter* painter = new QPainter(this);
            Snake snake(painter);
       }

private:
    Ui::Snake_Game *ui;
};

#endif // SNAKE_GAME_H
