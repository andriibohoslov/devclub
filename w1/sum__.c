#include <stdio.h>
#include <max2.c>

int max2(int x, int y) {
    if ( x > y ) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x = 1;
    int y = 2;
    max2(x, y);

    return 0;
}
