#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow view ;
    view.show();
    return a.exec();
}
