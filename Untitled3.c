#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
    int a = 1, b = 2, c = 3,i;
    
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    
    swapValue(&a, &b, &c);
    
    printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);

    int arr1[] = {1, 2};
    int arr2[] = {4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("\nBefore swapArray function:\n");
    for ( i = 0; i < size; i++) {
        printf("arr1[%d] = %d, arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
    }

    swapArray(arr1, arr2, size);

    printf("\nAfter swapArray function:\n");
    for ( i = 0; i < size; i++) {
        printf("arr1[%d] = %d, arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
    }

    return 0;
}

void swapValue(int *a, int *b, int *c) {
    int s = *c;
    *c = *b;
    *b = *a;
    *a = s;
}

void swapArray(int a[], int b[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

