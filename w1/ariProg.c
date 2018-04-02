#include <stdio.h>

int main() {
    int first, step, count;

    scanf("%d %d %d", &first, &step, &count);

    for ( ; count > 1; count --) {
        printf("%d ", first);
        first += step;
    }
    printf("%d\n", first);
    return 0;
}
