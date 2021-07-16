#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonAxis3_clicked(){
    qDebug() << "3 Axis";
}

void MainWindow::on_buttonAxis4_clicked(){
    qDebug() << "4 Axis";
}

void MainWindow::on_buttonAxis5_clicked(){
    qDebug() << "5 Axis";
}
