#include <stdio.h>

int main() {
    int min, max;

    scanf("%d %d", &min, &max);
    if ( min % 3 != 0 ) {
        min += 3 - min % 3;
        printf("%d\n", min);
    }

    for ( ; min <= max; min += 3 ) {
        printf("%d\n", min);
    }
    return 0;
}
