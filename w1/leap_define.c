#include <stdio.h>
#define ВВЕСТИ (scanf)
#define ВЫВЕСТИ (printf)
#define ЕСЛИ (if)
#define ИНАЧЕ (else)

int main() {
    int ДНЕЙ_В_ГОДУ;

    ВВЕСТИ("%d ", &ДНЕЙ_В_ГОДУ);

    ЕСЛИ ( ДНЕЙ_В_ГОДУ == 366 ) {
        ВЫВЕСТИ("yes\n");
    } ИНАЧЕ ЕСЛИ ( ДНЕЙ_В_ГОДУ == 365 ) {
        ВЫВЕСТИ("no\n");
    } ИНАЧЕ {
        printf("Invalid param\n");
    }

    return 0;
}
