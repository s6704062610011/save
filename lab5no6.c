#include <stdio.h>
int main()
{
    int i, j, a, b;
    int A[3][4] = {
        {10, 20, 30, 40},
        {11, 12, 13, 14},
        {9, 8, 7, 6}
    };

    int min = A[0][0];

    scanf("%d %d", &a, &b);


    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("%d ", A[i][j] + 1);
        }
        printf("\n");
    }


    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }


    printf("\nThe minimum value in A[][] is: %d\n", min);

    return 0;
}

