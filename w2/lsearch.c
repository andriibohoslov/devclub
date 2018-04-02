// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

// Пример ввода
// 40
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 3
#include <stdio.h>

#define size 100;


int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    int needle;
    int array[size];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d", &needle);
    fscanf(in, "%100d", array);
    fprintf(out, "%d\n", arraySearch(array[], size, needle));
    
    return 0;
}
