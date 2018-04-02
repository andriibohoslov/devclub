// Написать функцию:
// void arraySort(int array[], int size)
// Отсортировать элементы в порядке неубывания.
// Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.


#include <stdio.h>

void arraySort(int array[], int size) {
    int temp;
    for ( int i = 0; i < size; i++ ) {
        for ( int k = i + 1; k < size; k++) {
            if ( array[k] < array[i])  {
                temp = array[k];
                array[k] = array [i];
                array[i] = temp;
            }
        }
    }
}

int main() {
int array[] = { 3, 2, 4, 1, 5};
int size = 5;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

arraySort(array, size);

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
