#include <stdio.h>

int main() {
    int counter;
    int power = 1;

    scanf("%d", &counter);

    for ( int i = 0; i < counter; i++ ) {
        printf("%d ", power);
        power *= 2;
    }
    printf("%d\n", power);

    return 0;
}
