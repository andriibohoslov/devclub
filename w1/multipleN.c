#include <stdio.h>

int main() {
    int multiple, divisor;
    int i = 0;

    scanf("%d %d", &multiple, &divisor);
    if (divisor < 0)
    {
        divisor = -divisor;
    }
    for ( ; i <= (multiple - divisor); i += divisor ) {
        printf("%d ", i);
    }
    printf("%d\n", i);
    return 0;
}
