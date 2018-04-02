#include <stdio.h>

int main() {
    int counter, number;
    
    scanf("%d", &counter);
    
    for ( ; counter >= 1; counter-- ) {
        scanf("%d", &number);
        printf("%d\n", number^42);
    }
    
    return 0;
}
