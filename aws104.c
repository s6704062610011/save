#include <stdio.h>

int main() {
    int a, b, c, d,i;
    
    for ( i = 0; i < 2; i++) {
        scanf("%d/%d/%d/%d", &a, &b, &c, &d);

        int max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d))
                          : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));

        printf("%d\n", max);
    }

    return 0;
}


