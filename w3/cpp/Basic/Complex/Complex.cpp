#include <iostream>
#include <cmath>
#include "Complex.h"

Complex::Complex (double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex () {}

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return !operator == (other);
}

void Complex::operator+=(const Complex& other) {
    this->real += other.real;
    this->imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    this->real -= other.real;
    this->imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    Complex sum;
    
    sum.real = this->real + other.real;
    sum.imaginary = this->imaginary + other.imaginary;
    return sum;
}

Complex Complex::operator-(const Complex& other) const {
        Complex dif;
    
    dif.real = this->real - other.real;
    dif.imaginary = this->imaginary - other.imaginary;
    return dif;
}

Complex Complex::operator*(const Complex& other) const {
    Complex product;
    
    product.real = this->real * other.real - this->imaginary * other.imaginary;
    product.imaginary = this->real * other.imaginary + other.real * this->imaginary;
    return product;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.getReal() << '+' << complex.getImaginary() << 'i';
    return out;
}
