// В файле task.in дана последовательность символов.
// Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out

// Пример ввода
// abcd
// Пример вывода
// ABCD


#include <stdio.h>

int main() {
    char temp;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%c", &temp) != -1; ) {
        if ( temp >= 97 && temp <= 122 ) {
            temp -= 32;
        }
        fprintf(out, "%c", temp);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    return 0;
}
