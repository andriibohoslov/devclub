
// #include <stdio.h>
// Написать функцию:
// arrayShiftLeft(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент влево.
// Использование дополнительного массива не разрешается.


void arrayShiftLeft(int array[], int size) {
    
    for ( int i = 0, counter = size - 1; i < counter; i++ ) {
        array[i] += array[i+1];
        array[i+1] = array[i] - array[i+1];
        array[i] -= array[i+1];
    }

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
