#include "maincar.h"
#include "ui_maincar.h"

MainCar::MainCar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainCar)
{
    ui->setupUi(this);
    buttonOfMenu = ui->menuButton;
    buttonOfBrand = ui->brandButton;
    buttonOfPrice = ui->priceButton;
    buttonOfFile = ui->fileButton;
    buttonOfPower = ui->powerButton;
    enterLine = ui->lineEdit;
    labelOfPower = ui->powerLabel;
    labelOfPrice = ui->priceLabel;
    labelOfBrand = ui->brandLabel;
    buttonOfClear = ui->clearButton;
    connect(buttonOfPower, &QPushButton::clicked, this, &MainCar::addToVariablePower);
    connect(buttonOfBrand, &QPushButton::clicked, this, &MainCar::addToVariableBrand);
    connect(buttonOfPrice, &QPushButton::clicked, this, &MainCar::addToVariablePrice);
    connect(buttonOfClear, &QPushButton::clicked, this, &MainCar::clearResult);
    connect(buttonOfFile, &QPushButton::clicked, this, &MainCar::createFile);
}

MainCar::~MainCar()
{
    delete ui;
}
void MainCar::on_menuButton_clicked()
{
    this->close();
    emit menuOpen();
}
void MainCar::addToVariablePower()
{
    QString power = enterLine->text();
    labelOfPower->setText(QString("%1").arg(power));
}
void MainCar::addToVariableBrand()
{

    QString brand = enterLine->text();
    labelOfBrand->setText(QString("%1").arg(brand));
}
void MainCar::addToVariablePrice()
{
    QString price = enterLine->text();
    labelOfPrice->setText(QString("%1").arg(price));
}
void MainCar::clearResult()
{
    enterLine->clear();
}
void MainCar::createFile()
{
    QString po = labelOfPower->text();
    QString br = labelOfBrand->text();
    QString pr = labelOfPrice->text();
    QString fileName = enterLine->text();
    QString filePath = QFileDialog::getSaveFileName(this, "Сохранить файл", fileName);
        if (!filePath.isEmpty()) {
            QFile file(filePath);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << "Car engine power:" << endl;
                out << po << endl;
                out << "Car brand:" << endl;
                out << br << endl;
                out << "Car price:" << endl;
                out << pr << endl;
                file.close();

        }
    }
}
