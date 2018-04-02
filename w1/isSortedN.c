#include <stdio.h>

int main() {
    int count, number, previos;
    int issorted = 1;
    
    scanf("%d %d", &count, &previos);
    
    for ( ; count > 1 && issorted != 0; count-- ) {
        scanf("%d", &number);
        if ( number < previos ) {
            issorted = 0;
        } else {
            issorted = 1;
        }
        previos = number;
    }
    if ( issorted ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
