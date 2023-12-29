#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "janela2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Janela2 form2;
    form2.exec();
}

