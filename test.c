#include <stdio.h>

int main() {
    char s, status;
    int i, a, n;
    

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {

        scanf(" %c%c %d", &s,&status, &a);

        if (status == 'M') {
            printf("approved\n");
        }
        else if (s == 'M') {
            if (a >= 30 && a <= 60) {
                printf("approved\n");
            } else if (a < 30) {
                printf("not approved\n");
                printf("age < 30\n");
            } else {
                printf("not approved\n");
                printf("age > 60\n");
            }
        } else if (s == 'W') {
            if (a >= 25 && a <= 55) {
                printf("approved\n");
            } else if (a < 25) {
                printf("not approved\n");
                printf("age < 25\n");
            } else {
                printf("not approved\n");
                printf("age > 55\n");
            }
        }
    }

    return 0;
}

