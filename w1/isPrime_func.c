#include <stdio.h>
int isPrime(int n) {
    int simple = 1;
    
    if ( n == 2 ) {
        return 1;
    }
    for ( int i = 2; i < n; i++ ) {
        if ( n % i == 0 ) {
            simple = 0;
        }
    }
    return simple;
}

int main() {
int n, k;
scanf ("%d", &n);

k = isPrime (n);

printf("%d\n", k);
    return 0;
}
