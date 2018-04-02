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
    int count, k;
    
    scanf("%d", &count);
    
    if ( count < 1 ) {
        printf("-1\n");
    } else {
        for ( int n = 2; count > 0; n++ ) {
            if ( isPrime(n) ) {
                k = n;
                count -= 1;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}
