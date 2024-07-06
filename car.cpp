#include "car.h"
#include <cstring>

Car::Car() : brand(nullptr), price(0.0), engine(Engine()) {}

Car::Car(const char* b, double p, Engine e)
{
    brand = new char[strlen(b) + 1];
    strcpy(brand, b);
    price = p;
    engine = e;
}

Car::Car(const Car& other)
{
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);
    price = other.price;
    engine = other.engine;
}

Car& Car::operator=(const Car& other)
{
    if (this != &other)
    {
        delete[] brand;
        brand = new char[strlen(other.brand) + 1];
        strcpy(brand, other.brand);
        price = other.price;
        engine = other.engine;
    }
    return *this;
}

const char* Car::getBrand()
{
    return brand;
}

double Car::getPrice()
{
    return price;
}

Engine Car::getEngine()
{
    return engine;
}

Car::~Car()
{
    delete[] brand;
}
