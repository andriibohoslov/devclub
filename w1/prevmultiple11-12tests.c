#include <stdio.h>

int main() {
    int multiple, divisor;
    int x;

    scanf("%d %d", &multiple, &divisor);

    x = (multiple / divisor) * divisor;

    if ( x > multiple) {
        x = x - divisor;
    }

    printf("%d\n", x);
    return 0;
}
