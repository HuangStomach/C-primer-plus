#include <stdio.h>
#include <math.h>

#define SIZE 10

void transform(double source[SIZE], double target[SIZE], int size, double (* pt) (double value));
double plus_one(double value);
double square(double value);
void show(double target[SIZE]);

int main(void) {
    double source[SIZE] = {
        1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0
    };
    double target[SIZE];

    transform(source, target, 10, sin);
    show(target);
    transform(source, target, 10, cos);
    show(target);
    transform(source, target, 10, plus_one);
    show(target);
    transform(source, target, 10, square);
    show(target);
}

void transform(double source[SIZE], double target[SIZE], int size, double (* pt) (double value)) {
    for (int i = 0; i < size; i++) {
        target[i] = pt(source[i]);
    }
}

double plus_one(double value) {
    return value + 1.0;
}

double square(double value) {
    return value * value;
}

void show(double target[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%lf\n", target[i]);
    }
    printf("-----\n");
}