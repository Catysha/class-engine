#ifndef MAINCAR_H
#define MAINCAR_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <iostream>
#include <truck.h>
namespace Ui{
class MainCar;
}

class MainCar : public QWidget
{
    Q_OBJECT

public:
    explicit MainCar(QWidget *parent = nullptr);
    ~MainCar();
signals:
    void menuOpen();
private slots:
    void on_menuButton_clicked();
    void addToVariablePower();
    void addToVariableBrand();
    void addToVariablePrice();
    void clearResult();
    void createFile();
private:
    Ui::MainCar *ui;
    QPushButton *buttonOfMenu;
    QPushButton *buttonOfBrand;
    QPushButton *buttonOfPrice;
    QPushButton *buttonOfFile;
    QPushButton *buttonOfPower;
    QPushButton *buttonOfClear;
    QLineEdit *enterLine;
    QLabel *labelOfMenu;
    QLabel *labelOfBrand;
    QLabel *labelOfPrice;
    QLabel *labelOfPower;

};

#endif // MAINCAR_H
