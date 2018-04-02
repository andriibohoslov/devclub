#include <stdio.h>

int main() {
    int size;
    int count;

    scanf("%d", &size);
    for ( int row = 1; row <= size; row++ ) {
        count = (size * size - size * row) + 1;
        for ( int col = 1; col < size; col++ ) {
            printf("%d ", count);
            count += 1;
        }
        printf("%d\n", count);
        count += 1;
    }
    return 0;
}
