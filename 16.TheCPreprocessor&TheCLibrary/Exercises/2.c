#include <stdio.h>
#define NUM(x, y) (1 / (((1 / (x)) + (1 / (y))) / 2));

int main(void) {
    double a = 10.0;
    double b = 20.0;

    float result = (float) NUM(a, b);
    printf("result is %.2f\n", result);
    return 0;
}