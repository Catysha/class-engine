#ifndef CAR_H
#define CAR_H
#include "engine.h"

class Car
{
private:
    char* brand;
    double price;
    Engine engine;

public:
    Car();
    Car(const char* b, double p, Engine e);
    Car(const Car& other);
    Car& operator=(const Car& other);
    const char* getBrand();
    double getPrice();
    Engine getEngine();
    ~Car();
};
#endif // CAR_H
