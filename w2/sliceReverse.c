// Написать функцию:
// void sliceReverse(int array[], int lo, int hi)
// Осуществить реверс части массива от lo до hi включительно.




#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; i++, hi-- ) {
        int temp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = temp;
    }
}

int main() {
int array[] = { 1, 2, 3, 4, 5};
int len = 5;
int lo = 2;
int hi = 4;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

void sliceReverse(array, lo, hi);

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
