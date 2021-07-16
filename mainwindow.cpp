#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

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
    QProcess *process = new QProcess(this);
    process->start("/usr/bin/linuxcnc /home/neka/linuxcnc/configs/NKCNC/NKCNC3.ini");
}

void MainWindow::on_buttonAxis4_clicked(){
    QProcess *process = new QProcess(this);
    process->start("/usr/bin/linuxcnc /home/neka/linuxcnc/configs/NKCNC/NKCNC4.ini");
}

void MainWindow::on_buttonAxis5_clicked(){
    QProcess *process = new QProcess(this);
    process->start("/usr/bin/linuxcnc /home/neka/linuxcnc/configs/NKCNC/NKCNC5.ini");
}
