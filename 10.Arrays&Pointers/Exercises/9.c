#include <stdio.h>
void copy(int, int, int [*][*], int [*][*]);
void printArr(int, int, int [*][*]);
int main(void) {
    int source[3][5] = {
        {1,2,3,4,5},
        {2,3,4,5,6},
        {3,4,5,6,7},
    };
    int target[3][5];
    copy(3, 5, target, source);
    printArr(3, 5, target);
    
    return 0;
}

void copy(int row, int col, int target[row][col], int source[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            target[i][j] = source[i][j];
        }
    }
}

void printArr(int row, int col, int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
