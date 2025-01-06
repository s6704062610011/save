#include <stdio.h>

char getGrade(int score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    int score;
    int gradeCount[5] = {0};

    while (1) {
        scanf("%d", &score);

        if (score == -1) { 
            break;
        }

        char grade = getGrade(score);
        printf("%d(%c)\n", score, grade);
        switch (grade) {
            case 'A': gradeCount[0]++; break;
            case 'B': gradeCount[1]++; break;
            case 'C': gradeCount[2]++; break;
            case 'D': gradeCount[3]++; break;
            case 'F': gradeCount[4]++; break;
        }
    }
    printf("A(%d)\n", gradeCount[0]);
    printf("B(%d)\n", gradeCount[1]);
    printf("C(%d)\n", gradeCount[2]);
    printf("D(%d)\n", gradeCount[3]);
    printf("F(%d)\n", gradeCount[4]);

    return 0;
}

