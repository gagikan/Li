#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //qunimabi
    //heheh  saobiaozi
}

MainWindow::~MainWindow()
{
    delete ui;
}
