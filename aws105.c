#include <stdio.h>

int main() {
    int midterm, quiz, final, total;
    
    while (scanf("%d/%d/%d", &midterm, &quiz, &final) != EOF) {
        total = midterm + quiz + final;


        if (total > 80) {
            printf("A\n");
            printf("F %d\n", total - 80); 

        } else if (total >= 70) {
            printf("B\n");
            printf("%d\n", 81 - total);


        } else if (total >= 60) {
            printf("C\n");
            printf("%d\n", 81 - total);
 
        } else if (total >= 50) {
            printf("D\n");
            printf("%d \n", 81 - total);

        } else {
            printf("F\n");
            printf(" %dA\n", 81 - total);
        }


        midterm = quiz = final = total = 0;
    }
    
    return 0;
}

