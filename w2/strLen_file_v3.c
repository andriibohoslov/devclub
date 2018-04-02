// В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
// Прочитать строку в память и подсчитать ее длину.
// Результат вывести в task.out.
#include <stdio.h>

#define STRING 101

int main() {
    char str[STRING];
    int scan = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str);
    for ( ; str[scan] != '\0'; scan++ );
    fprintf(out, "%d\n", scan);
    
    return 0;
}
