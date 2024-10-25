//
// Created by thibodebelie on 10/25/24.
//

#include "mainwindow.h"
#include "gridView.h"

mainwindow::mainwindow(QWidget *parent) : QMainWindow(parent)
{

    m_scene = new GridView(std::make_shared<Grid>());
    m_view = new QGraphicsView(m_scene, this);
    setCentralWidget(m_view);
}

mainwindow::~mainwindow()
{
}
