
// gcdНаписать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)

// Передаваемые значения больше нуля.

#include <stdio.h>

int gcd(int a, int b) {
    if ( a % b == 0 ) {
        return b;
    }
    return gcd (a, b - 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b ));
    
    return 0;
}
