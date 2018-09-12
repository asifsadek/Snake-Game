#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <QMainWindow>

namespace Ui {
class Snake_Game;
}

class Snake_Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Snake_Game(QWidget *parent = nullptr);
    ~Snake_Game();

private:
    Ui::Snake_Game *ui;
};

#endif // SNAKE_GAME_H
