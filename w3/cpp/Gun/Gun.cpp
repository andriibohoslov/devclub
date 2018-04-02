#include <iostream>
#include "Gun.h"

Gun::Gun (const std::string& model, int capacity) {
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun () {};

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = !isReady;
}

void Gun::reload() {
    this->amount = this->capacity;
}

void Gun::shoot() {
    if (!isReady) {
        throw NotReady ();
    }
    if ( this->amount == 0 ) {
        throw OutOfRounds();
    }
    std::cout << "\"Bang!\"" << std::endl;
    this->amount -= 1;
    this->totalShots += 1;

}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "Gun model:" << gun.getModel() << '\n';
    out << "Capacity:" << gun.getCapacity()<< '\n';
    out << "Total shots:" << gun.getTotalShots() << '\n';
    out << "Amount:" << gun.getAmount() << '\n';
    out << "Ready:" << gun.ready() << '\n';
}
