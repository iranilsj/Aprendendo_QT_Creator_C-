#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo("C:/Users/Iran/Documents/QT_CREATOR/Aula_QT_10/Imagens/Google.png");
    ui->label->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap img("C:/Users/Iran/Documents/QT_CREATOR/Aula_QT_10/Imagens/youtube.jpg");
    ui->label->setPixmap(img.scaled(200,200,Qt::KeepAspectRatio));
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}

