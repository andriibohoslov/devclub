// В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
// Прочитать строку в память и подсчитать ее длину.
// Результат вывести в task.out.
#include <stdio.h>

int main() {
    int counter = 0;
    char q;
    
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%c", &q) == 1; counter++);
    fprintf(out, "%d\n", counter);
    
    return 0;
}
