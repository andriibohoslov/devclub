#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    for ( ; a / 2 > 1 && a % 2 == 0; ) {
        a /= 2;
    }
    if ( a % 2 == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
