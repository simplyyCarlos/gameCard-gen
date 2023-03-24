#include "gameCardgen.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gameCardgen w;
    w.show();
    return a.exec();
}
