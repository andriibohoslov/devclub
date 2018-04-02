#include <stdio.h>

int main() {
    int phone, time;

    scanf("%d %d", &phone, &time);

    if ( phone >= 1000000 && phone <= 9999999 ) {
        printf("%d$\n", time);
    } else if ( phone >= 105 && phone <= 999 && phone != 112 ) {
        printf("%d$\n", time*40);
    } else if ( phone == 101 || phone == 102 || phone == 103 || phone == 104 || phone == 112 ) {
        printf("За звонок по номерам специальных служб плата не взимается\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
