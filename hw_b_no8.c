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

    while (1) {
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        char grade = getGrade(score);
        printf("%d(%c)\n", score, grade);
    }
    return 0;
}

