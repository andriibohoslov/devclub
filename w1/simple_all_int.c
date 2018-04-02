#include <stdio.h>

int isPrime(int n) {
    if ( n == 2 ) {
        return 1;
    }
    for ( int i = 2; i * i <= n; i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
     int k = 0;
    for ( int i = 1; i <= 2147483647; i++) {
        if ( isPrime (i)) {
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}
