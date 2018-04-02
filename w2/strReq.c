// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.


#include <stdio.h>

#define STRING 101

int main() {
    char str[STRING];
    int scan = STRING;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str);
    // for ( int i = STRING; i > 0; i-- ) {
    fprintf(out, "%s\n", str);
    fprintf(out, "%c\n", str[5]);
    // }
    
    return 0;
}
