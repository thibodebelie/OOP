#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include "grid.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class mainwindow;
}
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT
    QGraphicsScene *m_scene ;
    QGraphicsView *m_view;

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

};
#endif // MAINWINDOW_H
