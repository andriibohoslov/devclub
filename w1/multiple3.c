#include <stdio.h>

int main() {
    int multiple;

    scanf("%d", &multiple);
    multiple -= multiple % 3;

    for ( int i = 0; i < multiple; i += 3 ) {
        printf("%d ", i);
    }
    printf("%d\n", multiple);

    return 0;
}
