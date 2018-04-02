
// Условие задачи
// int strLen(char str[])

// Подсчитать длину заданной строки.


int strLen(char str[]) {
    int scan = 0;
    
    for ( ; str[scan] != '\0'; scan++ );
    return scan;
}
