#include <stdio.h>
double imin(double, double);

int main(void) {
    double a;
    double b;
    scanf("%lf %lf", &a, &b);
    printf("%lf", imin(a, b));

    return 0;
}

double imin(double a, double b) {
    return a > b ? b : a;
}