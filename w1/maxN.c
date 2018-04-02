#include <stdio.h>

int main() {
    int count, number, max;

    scanf("%d", &count);
    scanf("%d", &max);

    for ( ; count > 1; count-- ) {
        scanf("%d", &number);
        if ( number > max ) {
            max = number;
        }
    }
    printf("%d\n", max);

    return 0;
}
