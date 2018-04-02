#include <stdio.h>
int isPrime(int n) {
    int simple = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            simple = 0;
        }
return simple
    }
}

int main() {

printf("%d\n", isPrime);
    return 0;
}
