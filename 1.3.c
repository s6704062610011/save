#include <stdio.h>

void addone(int number[], int add[], int size);
void addtwo(int number[], int pos[], int size, int x);
void addthree(int number[], int pos[][2], int size);

int main() {
    int i;
    int number[] = {10, 20, 30, 40, 50, 60, 70};
    int add[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(number) / sizeof(number[0]);

    int pos[] = {1, 3, 5};

    int pos_addthree[][2] = {{0, 3}, {2, 5}, {4, 2}};
    int addthree_size = 3;

    addone(number, add, size);

    printf("\nArray Add one:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    int x = 5;
    addtwo(number, pos, 3, x);

    printf("\nArray Addtwo:\n", x);
    for (i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    addthree(number, pos_addthree, addthree_size);

    printf("\nArray Addthree:\n");
    for (i = 0; i < size; i++) {
        printf("%d %d ", pos[i][1]);
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

void addthree(int number[], int pos[][2], int size) {
	int i;

    for ( i = 0; i < size; i++) {
        int index = pos[i][0];
        int value_to_add = pos[i][1];
        number[index] += value_to_add;
    }
}

