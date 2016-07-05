#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << "QCheckBox: " << ui->checkBox->rect();
    qDebug() << "Radio buttons: " << ui->radioButtons->rect();
    qDebug() << "Radio1: " << ui->radioButton->rect();
    qDebug() << "Radio2: " << ui->radioButton_2->rect();
    qDebug() << "Radio3: " << ui->radioButton_3->rect();
    qDebug() << "QComboBox: " << ui->comboBox->rect();
    qDebug() << "QLineEdit: " << ui->lineEdit->rect();

    qDebug() << "...";
    qDebug() << "QPushButton: " << ui->pushButton->rect();
}

MainWindow::~MainWindow()
{
    delete ui;
}
