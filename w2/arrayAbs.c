// void arrayAbs(int array[], int size)
// Заменить каждый элемент массива его абсолютным значением

void arrayAbs(int array[], int size) {
    for ( int i = size - 1; i >= 0; i-- ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}
