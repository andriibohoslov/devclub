#include <iostream>
#include "Paper.h"
#include "Pen.h"

Paper::Paper(int maxSymbols) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
    this->content = '\0';
}

Paper::~Paper() {};

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int free_space = this->maxSymbols - this->symbols;
    if ( free_space <= 0 ) {
        throw OutOfSpace();
    }
    symbols += message.size();
    this->content += message;
}

void Paper::show() const {
    std::cout<<content<<'\n'<<std::endl;
}
