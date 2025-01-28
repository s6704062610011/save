#include <stdio.h>

void addone(int number[], int add[],int size);

int main() {
	int i;
    int number[] = {1, 2, 3, 4, 5};
    int add[] = {1, 1, 1, 1, 1};
    int size = sizeof(number) / sizeof(number[0]);



    addone(number, add,size);

    for ( i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
void addone(int number[], int add[],int size) {
	int i;
    for ( i = 0; i < size; i++) {
        number[i] += add[i];
    }
}

