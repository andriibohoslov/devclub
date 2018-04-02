#include <stdio.h>

int main() {
    int even;

    scanf("%d", &even);

    for ( int i = 1; i < even; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", even);

    return 0;
}
