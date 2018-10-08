#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <time.h>

#include <QMessageBox>

void inicializarListaDeImagenes(ListaCircular<QPixmap> *col) {
    QPixmap pix0("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(0).ICO");
    pix0.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix0);
    QPixmap pix1("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(1).ico");
    pix1.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix1);
    QPixmap pix2("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(2).ico");
    pix2.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix2);
    QPixmap pix3("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(3).ICO");
    pix3.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix3);
    QPixmap pix4("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(6).ICO");
    pix4.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix4);
    QPixmap pix5("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(7).ICO");
    pix5.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix5);
    QPixmap pix6("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(8).ICO");
    pix6.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix6);
    QPixmap pix7("/home/emanuel/Facultad/programación orientada a objeto/2018/practica/tp14/tragaMonedas/TragaMonedas/img/imagen(9).ICO");
    pix7.scaled(25,25,Qt::KeepAspectRatio);
    col->agregar(pix7);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->col1 = new ListaCircular<QPixmap>();
    this->col2 = new ListaCircular<QPixmap>();
    this->col3 = new ListaCircular<QPixmap>();
    // Inicializar listas
    inicializarListaDeImagenes(this->col1);
    inicializarListaDeImagenes(this->col2);
    inicializarListaDeImagenes(this->col3);

    this->ui->label->setPixmap(this->col1->siguiente());
    this->ui->label_2->setPixmap(this->col1->siguiente());
    this->ui->label_3->setPixmap(this->col1->siguiente());

    this->ui->label_4->setPixmap(this->col2->siguiente());
    this->ui->label_5->setPixmap(this->col2->siguiente());
    this->ui->label_6->setPixmap(this->col2->siguiente());

    this->ui->label_7->setPixmap(this->col3->siguiente());
    this->ui->label_8->setPixmap(this->col3->siguiente());
    this->ui->label_9->setPixmap(this->col3->siguiente());


    connect(this->timer1, SIGNAL(timeout()), this, SLOT(moverCol1()));
    connect(this->timer2, SIGNAL(timeout()), this, SLOT(moverCol2()));
    connect(this->timer3, SIGNAL(timeout()), this, SLOT(moverCol3()));

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->timer1->setInterval(rand() % 30 + 10);
    this->timer1->start();

    this->timer2->setInterval(rand() % 40 + 10);
    this->timer2->start();

    this->timer3->setInterval(rand() % 50 + 10);
    this->timer3->start();
    this->ui->pushButton->setEnabled(false);
}

void MainWindow::moverCol1() {
    this->ui->label->setPixmap(this->col1->siguiente());
    this->ui->label_2->setPixmap(this->col1->siguiente());
    this->ui->label_3->setPixmap(this->col1->siguiente());
    int inter = this->timer1->interval()+this->timer1->interval()*0.1;
    if (inter<200) {
        this->timer1->setInterval(inter);
    } else {
        this->timer1->stop();

        if (!this->timer3->isActive() && !this->timer2->isActive()) {
            if (this->col1->getIndice() == this->col2->getIndice() && this->col2->getIndice() == this->col3->getIndice()) {
                QMessageBox::critical(this, "Ganaste", "Suertudo!!");
            }
            this->ui->pushButton->setEnabled(true);
        }
    }

}

void MainWindow::moverCol2() {
    this->ui->label_4->setPixmap(this->col2->siguiente());
    this->ui->label_5->setPixmap(this->col2->siguiente());
    this->ui->label_6->setPixmap(this->col2->siguiente());
    int inter = this->timer2->interval()+this->timer2->interval()*0.1;
    if (inter<200) {
        this->timer2->setInterval(inter);
    } else {

        this->timer2->stop();

        if (!this->timer1->isActive() && !this->timer3->isActive()) {
            if (this->col1->getIndice() == this->col2->getIndice() && this->col2->getIndice() == this->col3->getIndice()) {
                QMessageBox::critical(this, "Ganaste", "Suertudo!!");
            }
            this->ui->pushButton->setEnabled(true);
        }
    }
}

void MainWindow::moverCol3() {
    this->ui->label_7->setPixmap(this->col3->siguiente());
    this->ui->label_8->setPixmap(this->col3->siguiente());
    this->ui->label_9->setPixmap(this->col3->siguiente());
    int inter = this->timer3->interval()+this->timer3->interval()*0.1;
    if (inter<200) {
        this->timer3->setInterval(inter);
    } else {

        this->timer3->stop();

        if (!this->timer1->isActive() && !this->timer2->isActive()) {
            if (this->col1->getIndice() == this->col2->getIndice() && this->col2->getIndice() == this->col3->getIndice()) {
                QMessageBox::critical(this, "Ganaste", "Suertudo!!");
            }
            this->ui->pushButton->setEnabled(true);
        }
    }
}
