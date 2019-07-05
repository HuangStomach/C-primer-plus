#include <stdio.h>
void two(int[][5], int);
void print(int[][5], int);
int main(void) {
    int arr[3][5] = {
        {1 ,2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3 ,4, 5, 6, 7},
    };

    two(arr, 3);
    print(arr, 3);

    return 0;
}

void two(int arr[][5], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizeof arr[i] / sizeof arr[i][j]; j++) {
            arr[i][j] *= 2;
        }
    }
}

void print(int arr[][5], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizeof arr[i] / sizeof arr[i][j]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

