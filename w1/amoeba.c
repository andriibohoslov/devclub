#include <stdio.h>

int main() {
    int amoeba, hour;

    scanf("%d %d", &amoeba, &hour);

for ( int i = 1; i <= hour; i++) {
    amoeba *= 2;
    printf("%dh => %d amoeba(s) \n", i, amoeba);
}
    return 0;
}
