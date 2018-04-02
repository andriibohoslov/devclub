// Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 36).
// Вывести в консоль число, записанное в новой системе счисления.
// В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
// Для решения можно пользоваться только циклами. Задача решается без массивов. Использовать только тип int.


#include <stdio.h>

int main() {
    int number, base;
    int divisor = 1;
    
    scanf("%d %d", &number, &base);
    
    if ( base == 10 ) {
        printf("%d\n", number);
    } else {
        if ( number < 0 ) {
            printf("%c", '-');
            number *= -1;
        }
        for ( int partial = number / base; divisor <= partial; divisor *= base );
        for ( int result; divisor > 0; divisor /= base ) {
            result = number / divisor;
            if ( result > 9 ) {
                printf("%c", result+55);
            } else {
                printf("%d", result);
            }
            number %= divisor;
        }
        printf("\n");
    }
    return 0;
}
