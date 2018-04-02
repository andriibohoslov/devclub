#include <iostream>
#include <cmath>
#include "Car.h"
#include "Point.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->model = model;
    this->fuelAmount = 0;
    this->location = location;
    this->model = model;
}

Car::~Car () {};

double Car::getFuelAmount () const {
    return this->fuelAmount;
}

double Car::getFuelCapacity () const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption () const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double temp_consumption = location.distance(destination) * this->fuelConsumption;
    
    if ( this->fuelAmount < temp_consumption ) {
        throw OutOfFuel();
    }
    this->fuelAmount -= temp_consumption;
    this->location = destination;
}

void Car::drive (double x, double y) {
    Point destination = Point (x, y);
    
    drive(destination);
}

void Car::refill(double fuel) {
    if ( this->fuelAmount + fuel > fuelCapacity ) {
        throw(ToMuchFuel());
    }
    this->fuelAmount += fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car model:" << car.getModel() << '\n';
    out << "Capacity:" << car.getFuelCapacity() << '\n';
    out << "Fuel consumption:" << car.getFuelConsumption() << '\n';
    out << "Current fuel amount:" << car.getFuelAmount() << '\n';
    out << "Current fuel consumption:" << car.getFuelConsumption() << '\n';
}
