#include "truck.h"
#include <iostream>
using namespace std;
Truck::Truck() : Car(), liftingCapacity(0) {}

Truck::Truck(const char* b, double p, Engine e, int c) : Car(b, p, e), liftingCapacity(c) {}

Truck::~Truck()
{
    getBrand();
}

void Truck::print()
{
    cout << "Марка: " << getBrand() << endl;
    cout << "Цена: " << getPrice() << endl;
    cout << "Мощность двигателя: " << getEngine().getPower() << endl;
    cout << "Грузоподъемность: " << liftingCapacity << endl;
}
