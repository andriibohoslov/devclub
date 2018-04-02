#include <stdio.h>

int main() {
    int antecedent, divider;
    
    scanf("%d %d", &antecedent, &divider);
    
    if ( antecedent % divider == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
