#include <stdio.h>

int main() {
    int pswd;

    for ( int i = 1; pswd != 1488 && i <= 5; i++ ) {
        scanf("%d", &pswd);

        if ( pswd == 1488 ) {
            printf("accepted\n");
        } else {
            printf("incorrect password\n");
        }
    }

    if ( pswd != 1488 ) {
        printf("denied\n");
    }

    return 0;
}
