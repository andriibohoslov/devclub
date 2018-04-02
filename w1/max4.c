#include <stdio.h>

int main() {
    int a, b, c, max, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ( a > b ) {
        max = a;
    } else {
        max = b;
    } 
    if (max < c) {
        max = c;
    }
    if ( max > d ) {
        printf("%d\n", max);
    } else {
        printf("%d\n", d);
    }

    return 0;
}
