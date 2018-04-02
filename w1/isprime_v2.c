#include <stdio.h>
int isPrime(int n) {

    if ( n > 2 ) {
        for ( int i = 2; i < n; i++ ) {
            if ( n % i == 0 ) {
                return 0;
            }
        }
    } else {
        return 1;
    }
}

int main() {
int n, k;
scanf ("%d", &n);

k = isPrime (n);

printf("%d\n", k);
    return 0;
}
