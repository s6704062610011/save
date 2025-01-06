#include <stdio.h>
#include <string.h>

void numberToWords(int num) {
    char *words[] = {"Zero", "One", "Two", "Three", "Four", 
                     "Five", "Six", "Seven", "Eight", "Nine"};
    
    int digits[3];
    digits[0] = num / 100;
    digits[1] = (num / 10) % 10;
    digits[2] = num % 10;
    

    printf("%s %s %s\n", words[digits[0]], words[digits[1]], words[digits[2]]);
}

int main() {
    int num, count = 0;
    

    while (count < 3) {
        
        
        scanf("%d", &num);
        if (num >= 100 && num <= 999) {
            numberToWords(num);
            count++;
        } else {
            printf("Invalid input\n");
        }
    }
    
    
    return 0;
}

