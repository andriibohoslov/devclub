#include <stdio.h>

int main() {
    int a, b, c, max, d, e;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if ( a > b ) {
        max = a;
    } else {
        max = b;
    }
    if ( max < c ) {
        max = c;
    }
    if ( max < d) {
        max = d;
    }
    if ( max > e ) {
        printf("%d\n", max);
    } else {
        printf("%d\n", e);
    }

    return 0;
}
