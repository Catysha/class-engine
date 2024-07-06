#include "mainclass.h"
#include "ui_mainclass.h"

MainClass::MainClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainClass)
{
    ui->setupUi(this);
    carWindow = new MainCar();
    connect(carWindow, &MainCar::menuOpen, this, &MainClass::show);
    truckWindow = new MainTruck();
    connect(truckWindow, &MainTruck::menuOpen, this, &MainClass::show);
}

MainClass::~MainClass()
{
    delete ui;
}
void MainClass::on_carButton_clicked()
{
    carWindow->show();
    this->close();
}
void MainClass::on_truckButton_clicked()
{
    truckWindow->show();
    this->close();
}
