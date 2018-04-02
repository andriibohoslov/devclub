#include <stdio.h>

void pointerIncrement(int *value) {
    *value += 1;
}

int main() {
    int value;
    scanf("%d", &value);
    pointerIncrement (value);
    printf("%p\n", &value);
    return 0;
}
