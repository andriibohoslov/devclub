// Написать функцию:
// void arrayShiftRight(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент вправо.
// Использование дополнительного массива не разрешается.

#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int temp = array[size-1];
    
    for ( int counter = size - 1; counter > 0; counter-- ) {
        array[counter] = array[counter-1];
    }
    array[0] = temp;
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
