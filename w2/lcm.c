// В файле task.in даны два целых положительных числа.
// Записать в файл task.out наименьшее общее кратное этих чисел.

#include <stdio.h>

int gcd(int a, int b) {
    if ( b > 0 ) {
        return gcd(b, a%b);
    }
    return a;
}

int main() {
    int a, b, lcm;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    fscanf(in, "%d %d", &a, &b);
    lcm = a / gcd(a, b) * b;
    fprintf(out, "%d\n", lcm );
    return 0;
}
