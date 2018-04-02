#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if ( a == 1 ) {
        printf("no\n");
    } else {
        for ( ; a / 2 >= 1; a /= 2 ) {
            if ( a % 2 != 0 ) {
                printf("no\n");
                a = 0;
            } else if ( a / 2 == 1 && a % 2 == 0 ) {
                printf("yes\n");
            }
        }
    }
    return 0;
}
