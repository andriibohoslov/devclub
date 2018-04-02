#include <iostream>
#include "Paper.h"
#include "Pen.h"

Pen::Pen(int inkCapacity) {
    this->inkCapacity = inkCapacity;
    this->inkAmount = inkCapacity;
}

Pen::~Pen () {};

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    int len = message.size();
    
    if ( inkAmount <= 0 ) {
        throw OutOfInk();
    }
    
    if ( len > this->inkAmount ) {
        len = this->inkAmount;
    }
    if ( len > paper.getMaxSymbols() - paper.getSymbols() ) {
        len = paper.getMaxSymbols() - paper.getSymbols();
    }
    paper.addContent(message.substr(0, len));
    this->inkAmount -= len;
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}
