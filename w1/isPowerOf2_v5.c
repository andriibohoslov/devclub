#include <stdio.h>

char isPowerOf2(int a) {
    for ( int i = 2; i <= a; i *= 2 ) {
        if ( i == a ) {
            return 1;
        }
    }
    return 0;
}
    
int main() {
    int a;
    
    scanf("%d", &a);
    
    printf("%d\n", isPowerOf2(a));
    
    return 0;
}
