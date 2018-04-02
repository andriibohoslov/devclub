#include <stdio.h>

int main() {
    int number;
    int counter = 0;
    
    scanf("%d", &number);
    if ( number == 0 ) {
        counter = 1;
    }
    if ( number < 0 ) {
        number *= -1;
        counter = 1;
    }
    for ( ; number >= 1; number /= 10, counter++ );
    printf("%d\n", counter);
    
    return 0;
}
