#include <iostream>
#include <cstdlib>
#include "List.h"

List::List (int capacity, double multiplier) {
    this->capacity = capacity;
    this->multiplier = multiplier;
    this->array = (int*) malloc(capacity * sizeof(int));
    if ( array == NULL ){
        throw OutOfMemoryException ();
    }
    this->current = 0;
}

List::~List () {
    free(array);
};

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }
    
    if ( index <= current ) {
        for ( int i = index, j = index + 1; i < current; i++, j++ ) {
            this->array[i] = this->array[j];
        }
        this->current -= 1;
    }
}

void List::insert(int value, int index) {
    if ( this->capacity <= this->current) {
        throw OutOfMemoryException();
    }
    for ( int i = current - 1, j = current; i >= index; i--, j-- ) {
        this->array[j] = this->array[i];
    }
    this->array[index] = value;
    this->current += 1;
}

int List::find(int value) const {
    int finded_index = -1;
    
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }
    
    for ( int i = 0; i < current; i++ ) {
        if ( this->array[i] == value ) {
            std::cout << "value " << value << " finded at index " << i << std::endl;
            finded_index = i;
        }
    }
    if ( finded_index == -1 ) {
        std::cout << "nothing finded" << std::endl;
    }
}

void List::push_back(int value) {
    int newCurrent = this->current + 1;
    
    if ( newCurrent > this->capacity ) {
        int newCapacity = this->capacity * multiplier;
        if ( newCapacity == this->capacity ) {
            newCapacity += 1;
        }
        int* newArray = (int*) realloc(this->array, newCapacity * sizeof(int));
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
    this->capacity = newCapacity;
    this->array = newArray;
    }
    this->current = newCurrent;
    array[current - 1] = value;
}

int List::pop_back() {
    if (this->current == 0 ) {
        throw ZeroLenException();
    }
    current -= 1;
    return array[current];
}

void List::sort() {
    for ( int first = 0, last = this->current - 1; first < last; last-- ) {
    for ( int i = 0, j = i + 1; j <= last; i++, j++ ) {
        if ( this->array[j] < this->array[i] ) {
            int temp = this->array[j];
            
            this->array[j] = this->array[i];
            this->array[i] = temp;
        }
    }
    }
}
int List::operator[](int index) const {
    if ( this->current < index || index < 0 ) {
        throw OutOfMemoryException();
    }
    return this->array[index];
}

bool List::operator==(const List& other) const {
    return this->capacity == other.capacity && this->multiplier == other.multiplier;
}

bool List::operator!=(const List& other) const {
    return !operator == (other);
}

std::ostream& operator<< (std::ostream& out, const List& list) {
    int last = list.size() - 1;
    
    out << "capacity = " << list.max_size() << "\n";
    out << "current = " << list.size() << "\n";
    for (int i = 0; i < last; i++ ) {
            out << list[i] << ' ';
    }
    out << list[last];
    return out;
}
