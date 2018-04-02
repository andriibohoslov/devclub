// Написать функцию 
// void arrayExchange(int array[], int len)

// Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
// a[0] <-> a[1]   a[2] <-> a[3]   .....
// Если последний элемент не имеет пары — не менять его значение.

// Запрещено использование дополнительного массива.kk

#include <stdio.h>

void arrayExchange(int array[], int len) {
    int temp;
    
    len = len - len % 2 - 1;
    printf("%d\n", len);
    for ( ; len >= 1; len -= 2 ) {
        temp = array[len];
        array[len] = array[len-1];
        array[len-1] = temp;
    }
}

int main() {
int array[] = { 1, 2, 3, 4};
int len = 4;
// for (int i = 0; i > 5; i++) {
//     printf("%d\n", array[i]);
// }

arrayExchange(array, len);

for (int i = 0; i < 4; i++) {
    printf("%d ", array[i]);
}

    return 0;
}
