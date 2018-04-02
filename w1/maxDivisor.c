#include <stdio.h>

int main() {
    int divident, divisor=0;

    scanf("%d", &divident);

    for ( int i = 1; i <= divident / 2; i++ ) {
        if ( divident % i == 0 && i > 1) {
            divisor = i;
        }
    }
        printf("%d\n", divisor);

    return 0;
}
