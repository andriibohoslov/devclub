
// gcdНаписать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)

// Передаваемые значения больше нуля.

#include <stdio.h>

int gcd(int a, int b) {
    if ( b > 0 ) {
        return gcd(b, a%b);
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b ));
    printf("%d\n",8%12 );
    return 0;
}
