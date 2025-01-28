#include <stdio.h>

void addone(int number[], int add[], int size);
void addtwo(int number[], int pos[], int size, int x);

int main() {
	int i;
    int number[] = {10, 20, 30, 40, 50, 60,70};
    int add[] = {1, 2, 3, 4, 5,6,7};


    int size = sizeof(number) / sizeof(number[0]);


    int pos[] = {1, 3, 5};

    addone(number, add, size);


    printf("\':\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    int x = 5;

    addtwo(number, pos, 2, x);

    printf("\n:\n", x);
    for ( i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}

void addone(int number[], int add[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        number[i] += add[i];  
    }
}

void addtwo(int number[], int pos[], int size, int x) {
	int i;
    for ( i = 0; i < size; i++) {
        int index = pos[i];
        if (index >= 0 && index < 6) {
            number[index] += x; 
        }
    }
}

