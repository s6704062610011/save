#include <stdio.h>

int main() {
    int N, M,i,row,col;
    scanf("%d", &N); 
    int data[N];

    for ( i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }

    scanf("%d", &M);

    for ( i = 0; i < N; i++) {
        int value = data[i];
        for ( row = 0; row < M; row++) {
            for ( col = 0; col < M; col++) {
                if (row == value - 1 || col == value - 1) {
                    printf("*");
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

