// Написать функцию:
// void sliceShiftRight(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.


#include <stdio.h>

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[end];
        
        for ( ; end > start; end-- ) {
            array[end] = array[end-1];
        }
        array[start] = temp;
    }
}

int main() {
int array[] = { 1, 2, 3, 4, 5};
int size = 5;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

arrayShiftRight(array, size);

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
