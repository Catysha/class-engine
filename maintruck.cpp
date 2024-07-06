#include "maintruck.h"
#include "ui_maintruck.h"

MainTruck::MainTruck(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainTruck)
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
    labelOfBrand = ui->informLabel;
    labelOfInform = ui->informLabel;
    buttonOfClear = ui->clearButton;
    connect(buttonOfPower, &QPushButton::clicked, this, &MainTruck::addToVariablePower);
    connect(buttonOfBrand, &QPushButton::clicked, this, &MainTruck::addToVariableBrand);
    connect(buttonOfPrice, &QPushButton::clicked, this, &MainTruck::addToVariablePrice);
    connect(buttonOfPrice, &QPushButton::clicked, this, &MainTruck::addToVariableCapacity);
    connect(buttonOfClear, &QPushButton::clicked, this, &MainTruck::clearResult);
}

MainTruck::~MainTruck()
{
    delete ui;
}
void MainTruck::addToVariablePower()
{
   QString power = enterLine->text();
    labelOfPower->setText(QString("%1").arg(power));

}
void MainTruck::addToVariableBrand()
{

    QString brand = enterLine->text();
    labelOfBrand->setText(QString("%1").arg(brand));
}
void MainTruck::addToVariablePrice()
{
    QString price = enterLine->text();
    labelOfPrice->setText(QString("%1").arg(price));
}


void MainTruck::addToVariableCapacity()
{
    QString capacity = enterLine->text();
    labelOfCapacity->setText(QString("%1").arg(capacity));
}
void MainTruck::clearResult()
{
    enterLine->clear();
}
void MainTruck::createFile()
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
            out << "Truck engine power:" << endl;
            out << po << endl;
            out << "Truck brand:" << endl;
            out << br << endl;
            out << "Truck price:" << endl;
            out << pr << endl;
            file.close();

        }
    }
}
