#include <stdio.h>

int main() {
    int age;
    
    scanf("%d ", &days);

    if ( days == 366 ) {
        printf("yes\n");
    } else if ( days == 365 ) {
        printf("no\n");
    } else {
        printf("Invalid param\n");
    }

    return 0;
}
