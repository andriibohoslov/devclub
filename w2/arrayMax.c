// Написать функцию:
// int arrayMax(int array[], int size)
// Вернуть значение максимального элемента в массиве.

int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] > max ) {
            max = array[i];
        }
    }
    return max;
}

#include <stdio.h>



int main() {
    
    
    return 0;
}
