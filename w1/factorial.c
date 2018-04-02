#include <stdio.h>

int main() {
    int number;
    int factorial = 1;

    scanf("%d", &number);

    if ( number < 0 ) {
        printf("-1\n");
    } else {
        for ( ; number >= 1; number-- ) {
            factorial *= number;
        }
        printf("%d\n", factorial);
    }
    return 0;
}
