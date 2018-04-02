// Написать функцию 
// void arrayExchange(int array[], int len)

// Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
// a[0] <-> a[1]   a[2] <-> a[3]   .....
// Если последний элемент не имеет пары — не менять его значение.

// Запрещено использование дополнительного массива.kk

#include <stdio.h>

void arrayExchange(int array[], int len) {
    int temp;
    
    len -= 2;
    for ( int i = 0; i <= len; i += 2 ) {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
}

int main() {
int array[] = { 1, 2, 3, 4, 5};
int len = 5;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

arrayExchange(array, len);

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
