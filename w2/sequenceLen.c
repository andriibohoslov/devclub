// Считать из файла task.in последовательность чисел размером не более 100 элементов.
// Посчитать длину последовательности и вывести ее в task.out.
#include <stdio.h>

#define SIZE 100

int main() {
    int array[SIZE];
    int counter = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; counter < SIZE && fscanf(in, "%d", &array[counter]) == 1; counter++ );
    fprintf(out, "%d\n", counter);
    fclose(in);
    fclose(out);
    
    return 0;
}
