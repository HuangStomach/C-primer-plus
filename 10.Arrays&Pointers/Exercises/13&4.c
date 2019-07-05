#include <stdio.h>
void input(int, int, double [][*]);
void rowAverage(int, double [*]);
void average(int, int, double [][*]);
double max(int, int, double [][*]);
int main(void) {
    int rows = 3;
    double arr[3][5];
    input(5, rows, arr);
    for (int i = 0; i < rows; i++) {
        rowAverage(5, arr[i]);
    }
    average(5, rows, arr);
    max(5, rows, arr);
}

void input(int cols, int rows, double arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        scanf("%lf %lf %lf %lf %lf", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
    }
}

void rowAverage(int cols, double arr[cols]) {
    double subTotal = 0.0;
    for (int j = 0; j < cols; j++) {
        subTotal += arr[j];
    }
    printf("%lf\n",subTotal / cols);
}

void average(int cols, int rows, double arr[rows][cols]) {
    double subTotal = 0.0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            subTotal += arr[i][j];
        }
    }
    printf("%lf\n",subTotal / (cols * rows));
}

double max(int cols, int rows, double arr[rows][cols]) {
    double max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}

void print(int cols, int rows, double arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}