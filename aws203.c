#include <stdio.h>

int main() {
    int H, M,i,j;

    while (1) {

        scanf("%d %d", &H, &M);


        if (H == 0 && M == 0) {
            break;
        }

        for ( i = 0; i < H; i++) {
            for ( j = 0; j < M; j++) {
                printf("*");
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

