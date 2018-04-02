#include "Date.h"
#include <iostream>

Date::Date(int day, int month, int year) {
    validate(day, month, year);
    
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {};

void Date::validate(int day, int month, int year) {
    if ( year < 1 || month < 1 || day < 1 ){
        throw InvalidDate("Invalid date");
    }
    if ( year <= 1582 && month <= 10 && day < 15 ){
        throw InvalidDate("Try futher date - more than 14.02.1582");
    }
    if ( year < 1582 ){
        throw InvalidDate("Try bigger year");
    }
    if ( month > 12 ) {
        throw InvalidDate("Try smaller month");
    }
    if ( day > 31 ) {
        throw InvalidDate("Try less days");
    }
    if ( month == 2 && day > 29 ) {
        throw InvalidDate("Too many days for this month");
    }
    if ( month == 2 && day > 28 && ( year % 4 != 0 || year % 400 != 0 ) ) {
        throw InvalidDate("Too many days for this month in this year");
    }
    if ( day > 31 || ( day > 30 && ( month == 4 || month == 6 || month == 9 || month == 11 ) ) )    {
        throw InvalidDate("Too many days for this month");
    }
}


int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << '.' << date.getMonth() << '.' << date.getYear();
}
