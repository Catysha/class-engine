#ifndef TRUCK_H
#define TRUCK_H
#include "car.h"

class Truck : public Car
{
private:
    int liftingCapacity;

public:
    Truck();
    Truck(const char* b, double p, Engine e, int c);
    ~Truck();
    void print();
};
#endif // TRUCK_H
