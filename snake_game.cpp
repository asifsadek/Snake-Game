#include "snake_game.h"
#include "ui_snake_game.h"
#include <QRect>
#include <QPaintEvent>
#include <QBrush>

Snake_Game::Snake_Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Snake_Game)
{
    ui->setupUi(this);
}

Snake_Game::~Snake_Game()
{
    delete ui;
}

void Snake_Game::paintEvent(QPaintEvent* event)
    {
        QMainWindow::paintEvent(event);

        QPainter p(this);
        p.setPen(QColor(Qt::black));
        p.fillRect(QRect(0,20,20,20), QBrush(QColor(Qt::black)));
    }
