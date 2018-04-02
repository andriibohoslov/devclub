#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);
    for ( int row = total; row >= 1; row-- ) {
        int col = 1;

        for ( ; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", col);
    }
    return 0;
}
