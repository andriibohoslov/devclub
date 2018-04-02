#include <stdio.h>

int main() {
    int a;
    int i = 2;

    scanf("%d", &a);

    for ( ; i < a ; i *= 2 );

    if ( i == a ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
