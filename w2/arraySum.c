// Написать функцию:
// int arraySum(int array[], int size)
// Вернуть сумму элементов массива.
// size > 0

int arraySum(int array[], int size) {
    int summary = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        summary += array[i];
    }
    return summary;
}

#include <stdio.h>



int main() {
    
    
    return 0;
}
