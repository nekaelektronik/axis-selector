#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_buttonAxis3_clicked();
    void on_buttonAxis4_clicked();
    void on_buttonAxis5_clicked();
    void on_buttonNks_clicked();
    void on_buttonClose_clicked();
};

#endif // MAINWINDOW_H
