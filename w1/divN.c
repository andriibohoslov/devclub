#include <stdio.h>

int main() {
    int min, max, divisor;
    int multiple;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    multiple = min - min % divisor;
    
    if ( multiple < min ) {
        multiple = multiple + divisor;
    }
    
    for ( ; multiple <= max; multiple += divisor ) {
        printf("%d\n", multiple);
    }
    return 0;
}
