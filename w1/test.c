#include <stdio.h>

int main() {
    int num, step, count;
    
    scanf("%d %d %d", &num, &step, &count);
    
    for( ; count>1; count--, num+=step) { 
        printf("%d ", num);
    }
    printf("%d\n",num);
    return 0;
}
