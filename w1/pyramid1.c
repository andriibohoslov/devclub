#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);
    for ( int row = 1; row <= total; row++ ) {
        int col = 1;

        for ( ; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", col);
    }
    return 0;
}
