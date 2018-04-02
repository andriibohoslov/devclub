#include <stdio.h>

int main() {
    int total, rows, cols;

    scanf("%d %d %d", &total, &rows, &cols);
    if ( cols > rows ) {
        rows = cols;
    }
    for ( int row = rows + 1; row <= total; row++ ) {
        int col = cols + 1;

        for ( ; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", col);
    }
    return 0;
}
