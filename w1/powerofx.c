#include <stdio.h>

int main() {
    int exponent, power;
    int result = 1;

    scanf("%d %d", &exponent, &power);

    for ( int i = 0; i < power; i++ ) {
        printf("%d ", result);
        result *= exponent;
    }
    printf("%d\n", result);

    return 0;
}
