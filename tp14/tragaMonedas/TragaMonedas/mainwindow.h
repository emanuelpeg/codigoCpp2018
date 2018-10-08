#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <listacircular.cpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void moverCol1();
    void moverCol2();
    void moverCol3();

private:
    Ui::MainWindow *ui;
    ListaCircular<QPixmap> *col1;
    ListaCircular<QPixmap> *col2;
    ListaCircular<QPixmap> *col3;
    QTimer *timer1 = new QTimer(this);
    QTimer *timer2 = new QTimer(this);
    QTimer *timer3 = new QTimer(this);
};

#endif // MAINWINDOW_H
