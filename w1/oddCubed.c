#include <stdio.h>

int main() {
    int min, max, cube;

    scanf("%d %d", &min, &max);
    if ( min % 2 == 0 ) {
        min += 1;
    }

    for ( ; min <= (max - 2); min += 2 ) {
        cube = min * min * min;
        printf("%d ", cube);
    }
    cube = min * min * min;
    printf("%d\n", cube);
    return 0;
}
