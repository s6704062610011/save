#include <stdio.h>

int main() {
    int x1, x2;
    int y = 3;
    int *pt;
    x1 = 2 * (y + 5);

    pt = &y;
    x2 = 2 * (*pt + 5);

    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);

    return 0;
}

