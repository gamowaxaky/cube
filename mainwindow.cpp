#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug()<<"Hello world!";
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
