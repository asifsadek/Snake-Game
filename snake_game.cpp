#include "snake_game.h"
#include "ui_snake_game.h"

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
