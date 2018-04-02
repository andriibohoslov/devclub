#include <stdio.h>

int main() {
    int count, number, min;

    scanf("%d %d", &count, &min);

    for ( ; count > 1; count-- ) {
        scanf("%d", &number);
        if ( number < min ) {
            min = number;
        }
    }
    printf("%d\n", min);

    return 0;
}
