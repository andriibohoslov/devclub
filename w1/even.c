#include <stdio.h>

int main() {
    int counter;

    scanf("%d", &counter);
    if ( counter % 2 == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }


    for ( int i = 0; i < counter; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", counter);

    return 0;
}
