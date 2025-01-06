#include <stdio.h>

int main() {
    int year,i;
    float grade;
    char has_help;

    for ( i = 0; i < 4; i++) {
        
        
        scanf("%d %f %c", &year, &grade, &has_help);


        if (year >= 2 && grade >= 3.0) {
            printf("approved\n");
        } else if (year >= 2 && grade >= 2.5 && has_help == 'Y') {
            printf("approved\n");
        } else {
            if (grade < 2.5) {
                printf("grade < 2.50\n");
            }
            if (year < 2) {
                printf("year < 2\n");
            }
            if (has_help == 'N') {
                printf("no help\n");
            }
            printf("not approved\n");
        }
    }

    return 0;
}
