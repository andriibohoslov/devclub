#include <stdio.h>

int main() {
    int plain1, plain2, encrypted1, encrypted2;
    int multiplicand, augend;
    int count;
    int data;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &count);
    
    multiplicand = (encrypted1 - encrypted2) / (plain1 - plain2);
    augend = encrypted1 - plain1 * multiplicand;
    for ( ; count > 1; count-- ) {
        scanf("%d", &data);
        data = (data - augend) / multiplicand;
        printf("%d ", data);
    }
    scanf("%d", &data);
    data = (data - augend) / multiplicand;
    printf("%d\n", data);
    
    return 0;
}
