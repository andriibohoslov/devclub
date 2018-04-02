// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.


#include <stdio.h>

#define STRING 101

int strLen(char str[]) {
    int scan = 0;
    
    for ( ; str[scan] != '\0'; scan++ );
    return scan;
}

int main() {
    char str[STRING];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str);
    
    for ( int counter = strLen(str) - 1; counter >= 0; counter-- ) {
        fprintf(out, "%c", str[counter]);
    }
    fprintf(out, "\n");
    
    return 0;
}
