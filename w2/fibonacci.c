// int fibonacci(int n)
// Использовать рекурсию.

#include <stdio.h>

int fibonacci(int n) {
    if ( n == 0 ) {
        return 0;
    }
    if ( n > 1 ) {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", fibonacci(number));
    
    return 0;
}
