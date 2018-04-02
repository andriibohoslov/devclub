#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int i = 0; i < SIZE - 1; i++ ) {
        fscanf(in, "%d", &array[i]);
        fprintf(out, "%d ", array[i]);
    }
    fscanf(in, "%d", &array[SIZE-1]);
    fprintf(out, "%d\n", array[SIZE-1]);
    fclose(in);
    fclose(out);
    
    return 0;
}
