#include <stdio.h>
void sum(int [], int [], int [], int size);
void printArr(int [], int);
int main(void) {
    int a[4] = { 2, 4, 5, 8 };
    int b[4] = { 1, 0, 4, 6 };
    int c[4];
    sum(a, b, c, 4);
    printArr(c, 4);
    
    return 0;
}

void sum(int a[], int b[], int c[], int size) {
    for (int i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
