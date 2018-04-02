#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);
    for ( int row = 1, count = 1; row <= total; row++ ) {
        int col = 1;

        for ( ; col < row; col++ ) {
            printf("%d ", count);
            count += 1;
        }
        printf("%d\n", count);
        count += 1;
    }
    return 0;
}
