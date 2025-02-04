#include <stdio.h>
void swapArray(int a[], int b[], int size);
int main (){
	int i;
	int arr1[] = {1, 2};
    int arr2[] = {4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("Before swapArray function:\n");
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
void swapArray(int a[], int b[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
