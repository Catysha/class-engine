#ifndef MAINCLASS_H
#define MAINCLASS_H
// Лабораторная работа 4
#include <QMainWindow>
#include <maincar.h>
#include <maintruck.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainClass;
}
QT_END_NAMESPACE

class MainClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainClass(QWidget *parent = nullptr);
    ~MainClass();
private slots:
    void on_carButton_clicked();
    void on_truckButton_clicked();
private:
    Ui::MainClass *ui;
    MainCar *carWindow;
    MainTruck *truckWindow;
};
#endif // MAINCLASS_H
