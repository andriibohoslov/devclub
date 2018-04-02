#include <stdio.h>

int main() {
    int spd, lim;
    
    scanf("%d %d", &spd, &lim);

    if ( spd > lim ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }

    return 0;
}
