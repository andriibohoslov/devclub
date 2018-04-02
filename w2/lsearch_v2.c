// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

// Пример ввода
// 40
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 3


#include <stdio.h>

#define SIZE 100

void arrayScan(FILE *in, FILE *out, int needle) {
    int array[SIZE];
    int limit = SIZE - 1;
    
    for ( int scan = 0; scan < limit && fscanf(in, "%d", &array[scan]) ==1; scan++ ) {
        if ( array[scan] == needle ) {
            fprintf(out, "%d ", scan);
        }
    }
    fscanf(in, "%d", &array[limit]);
    if ( array[limit] == needle ) {
        fprintf(out, "%d\n", limit);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int needle;
    
    fscanf(in, "%d", &needle);
    
    if ( arrayScan(in, out, needle) ) {
    } else {
        fprintf(out, "%d\n", -1);
    fclose(in);
    fclose(out);
    
    return 0;
}
