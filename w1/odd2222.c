#include <stdio.h>

int main() {
    int odd;

    scanf("%d", &odd);
    if ( odd % 2 != 1 ) {
        odd -= 1;
    }

    for ( int i = 1; i < odd; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", odd);

    return 0;
}
