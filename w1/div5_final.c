#include <stdio.h>

int main() {
    int min, max;
    int multiple;

    scanf("%d %d", &min, &max);

    multiple = min - min % 3;

    if ( multiple < min ) {
        multiple = multiple + 3;
    }

    for ( ; multiple <= max; multiple += 3 ) {
        printf("%d\n", multiple);
    }
    return 0;
}







    if ( divisor < 0 ) {
        divisor *= -1;
    }