// Написать функцию:
// void arrayReverse(int array[], int size)

// Использование дополнительного массива не разрешается.

#include <stdio.h>

    void arrayReverse(int array[], int size) {
        for ( int i = 0, reverse_index = size - 1; i < reverse_index; i++, reverse_index-- ) {
            int temp = array[i];
            
            array[i] = array[reverse_index];
            array[reverse_index] = temp;
        }
    }

int main() {
int array[] = { 1, 2, 3, 4, 5};
int size = 5;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

arrayReverse(array, size);

for (int i = 0; i < 5; i++) {
    printf("%d\n", array[i]);
}

    return 0;
}
