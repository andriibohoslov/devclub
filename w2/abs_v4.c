#include <stdio.h>

int arrayScan(FILE *in, int array[], int limit) {
    int scan;
    
    for ( scan = 0; scan < limit && fscanf(in, "%d", &array[scan]) == 1; scan++ );
    return scan;
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size;
    int array[size];
    
    fscanf(in, "%d", &size);
    
    arrayScan(in, array, size);
    arrayPrint(out, array, size);
    
    fclose(in);
    fclose(out);
    return 0;
}
