// Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
// Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
// В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.

#include <stdio.h>

int gcd(int a, int b) {
    if ( b > 0 ) {
        return gcd(b, a%b);
    }
    return a;
}

int main() {
    int min, max, m, n;
    int step, lcm;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    lcm = m / gcd(m, n) * n;
    step = min - min % lcm;
    if ( step < min ) {
        step = step + lcm;
    }
    for ( ; step <= max; step += lcm ) {
        printf("%d\n", step);
    }
    return 0;
}
