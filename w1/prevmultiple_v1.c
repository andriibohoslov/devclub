#include <stdio.h>

int main() {
    int multiple, divisor;

    scanf("%d %d", &multiple, &divisor);

    if ( multiple < divisor ) {
        divisor = 0;
    } else {
        divisor = (multiple / divisor) * divisor;
    }
    printf("%d\n", divisor);
    return 0;
}
