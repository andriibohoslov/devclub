
// #include <stdio.h>
// Написать функцию:
// arrayShiftLeft(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент влево.
// Использование дополнительного массива не разрешается.


#include <stdio.h>

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
}

int main() {
int array[] = { 1, 2, 3, 4, 5};
int size = 5;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

arrayShiftLeft(array, size);

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
