#include <stdio.h>

int isPowerOf2(int a) {
    if ( a == 1 ) {
        return 0;
    }
    for ( ; a / 2 > 0; a /= 2 ) {
        if ( a % 2 != 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( isPowerOf2(a) ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
