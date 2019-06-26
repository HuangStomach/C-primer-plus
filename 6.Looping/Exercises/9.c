#include <stdio.h>
double result(double x, double y);
int main(void) {
    double x;
    double y;
    while (scanf("%lf %lf", &x, &y)) {
        printf("%f\n", result(x, y));
    }
    return 0;
}

double result(double x, double y) {
    return (x - y) / (x * y);
}
