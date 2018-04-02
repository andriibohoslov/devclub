#include <stdio.h>

int main() {
    int min, max;

    scanf("%d %d", &min, &max);
    if ( min % 2 != 0 ) {
        min += 1;
    }

    for ( ; min <= (max - 2); min += 2 ) {
        printf("%d ", min*min);
    }
    printf("%d\n", min*min);
    return 0;
}
