#include <stdio.h>

int main() {
    int dividend, divisor;
    int x;

    scanf("%d %d", &dividend, &divisor);

    x = (dividend / divisor) * divisor;
    if ( x < dividend ) {
        x = x + divisor;
    }
    printf("%d\n", x);
    return 0;
}
