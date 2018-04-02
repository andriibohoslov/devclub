#include <stdio.h>

int main() {
    int discr;

    scanf("%d", &discr);
    if ( discr < 0 ) {
        printf("0\n");
    } else if ( discr == 0 ) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return 0;
}
