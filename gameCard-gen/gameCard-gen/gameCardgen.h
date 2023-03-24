#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_gameCardgen.h"
#include "observer.h"

class gameCardgen : public QMainWindow, public Observer
{
    Q_OBJECT

public:
    gameCardgen(QWidget *parent = nullptr);
    ~gameCardgen();
    void updateModel();
private:
    Ui::gameCardgenClass ui;
};
