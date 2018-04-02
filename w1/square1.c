#include <stdio.h>

int main() {
    int size;

    scanf("%d", &size);
    for ( int row = 1; row <= size; row++ ) {
        int col = 1;

        for ( ; col < size; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", col);
    }
    return 0;
}
