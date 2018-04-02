// Написать функцию:
// void sliceShiftLeft(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.

#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[start];
        
        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = temp;
    }
}


int main() {
int array[] = { 1, 2, 3, 4, 5};
int size = 5;
int start = 0;
int end = 3;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

sliceShiftLeft(array, start, end);

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
