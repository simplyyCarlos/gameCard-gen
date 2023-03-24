#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_gameCardgen.h"

class gameCardgen : public QMainWindow
{
    Q_OBJECT

public:
    gameCardgen(QWidget *parent = nullptr);
    ~gameCardgen();

private:
    Ui::gameCardgenClass ui;
};
