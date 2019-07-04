#include <stdio.h>
void copy_arr(double [][2], double [][2], int, int);
int main(void) {
    double source[2][2] = {
        { 1.0, 2.0 },
        { 3.0, 4.0 }
    };
    double target[2][2];
    copy_arr(target, source, 2, 2);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%lf ", target[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void copy_arr(double target[][2], double source[][2], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            target[i][j] = source[i][j];
        }
    }
}