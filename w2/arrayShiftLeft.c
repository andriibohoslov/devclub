// Написать функцию:
// void arrayShiftRight(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент вправо.
// Использование дополнительного массива не разрешается.

#include <stdio.h>

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    int counter = size - 1;
    
    for ( int i = 0; i < counter; i++ ) {
        array[i] = array[i+1];
        array[i+1] = temp;
    }
    array[counter] = temp;
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
