#include <stdio.h>
double average(double, double);

int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = average(a, b);
    printf("%lf\n", c);
    return 0;
}

double average(double a, double b) {
    double c = 1 / a;
    double d = 1 / b;
    return 1 / ((c + d) / 2);
}