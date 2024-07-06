#ifndef MAINTRUCK_H
#define MAINTRUCK_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <iostream>
#include <truck.h>
namespace Ui {
class MainTruck;
}

class MainTruck : public QWidget
{
    Q_OBJECT

public:
    explicit MainTruck(QWidget *parent = nullptr);
    ~MainTruck();
signals:
    void menuOpen();
private slots:
    void addToVariablePower();
    void addToVariableBrand();
    void addToVariablePrice();
    void addToVariableCapacity();
    void clearResult();
    void createFile();
private:
    Ui::MainTruck *ui;
    QPushButton *buttonOfMenu;
    QPushButton *buttonOfBrand;
    QPushButton *buttonOfPrice;
    QPushButton *buttonOfFile;
    QPushButton *buttonOfPower;
    QPushButton *buttonOfCapacity;
    QPushButton *buttonOfClear;
    QLineEdit *enterLine;
    QLabel *labelOfInform;
    QLabel *labelOfMenu;
    QLabel *labelOfBrand;
    QLabel *labelOfPrice;
    QLabel *labelOfPower;
    QLabel *labelOfCapacity;
};

#endif // MAINTRUCK_H
