// int arrayScan(FILE *in, int array[], int limit)
// Считать из файла in не более limit элементов в массив array.
// Вернуть количество считанных элементов

int arrayScan(FILE *in, int array[], int limit) {
    int scan;

    for ( scan = 0; scan < limit && fscanf(in, "%d", &array[scan]) == 1; scan++ );
    return scan;
}
