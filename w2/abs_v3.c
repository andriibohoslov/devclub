// В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
// Прочитать последовательность в массив.
// Найти все отрицательные числа и заменить их положительными, равными по модулю.
// Результирующий массив вывести в task.out.

// Пример ввода
// 10
// 10 -20 30 40 -50 -60 70 80 90 -100
// Пример вывода
// 10 20 30 40 50 60 70 80 90 100
#include <stdio.h>

void arrayScan(FILE *in, int array[], int limit) {
    for ( int scan = 0; scan < limit; scan++ ) {
        fscanf(in, "%d", &array[scan]);
        if ( array[scan] < 0 ) {
            array[scan] *= -1;
        }
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size;
    fscanf(in, "%d", &size);
    int array[size];
    
    arrayScan(in, array, size);
    arrayPrint(out, array, size);
    
    fclose(in);
    fclose(out);
    return 0;
}
