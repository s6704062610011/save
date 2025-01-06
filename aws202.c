#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    while (1) {

        scanf("%d", &input);

        if (input == -1) {
            break;
        }

        if (input >= 0 && input <= 100) {
            printf("%d\n", abs(100 - input));
        } else {
            printf("Invalid input\n");
        }
    }

    return 0;
}

