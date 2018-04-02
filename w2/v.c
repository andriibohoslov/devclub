#include <stdio.h>

int main() {
    int array[10]
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for (int i = 0; i < 10; i++ ) {
        fscanf(in, "%d", &array[i]);
        fprintf(out, "%d", &array[i]);
    }
    fprintf(out, "%d", &array[i]);
    fclose(in);
    fclose(out);
    
    return 0;
}
