#include <stdio.h>

int main() {
    int number, base;
    int divisor;
    
    scanf("%d %d", &number, &base);
    
    if ( base == 10 ) {
        printf("%d\n", number);
    } else {
        for ( divisor = 1; divisor <= number / base; divisor *= base );
        for ( ; divisor > 1; divisor /= base ) {
            printf("%d", number/divisor);
            number %= divisor;
        }
        printf("%d\n", number/divisor);
    }
    
    return 0;
}
