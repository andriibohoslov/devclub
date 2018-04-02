#include <stdio.h>

int main() {
    int min, max;
    int multiple;

    scanf("%d %d", &min, &max);

    multiple = min - min % 5;

    if ( multiple < min ) {
        multiple = multiple + 5;
    }

    for ( ; multiple <= max; multiple += 5 ) {
        printf("%d\n", multiple);
    }
    return 0;
}







    if ( divisor < 0 ) {
        divisor *= -1;
    }