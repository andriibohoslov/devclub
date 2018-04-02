// int powerOf2(int exponent)
// Возвести 2 в данную целую неотрицательную степень.
// Воспользоваться побитовыми операциями.

int powerOf2(int exponent) {
return 1<<exponent;
}


#include <stdio.h>

int main() {
    int power;
    
    scanf("%d", &power);
    printf("%d\n", powerOf2(power));
    
    return 0;
}
