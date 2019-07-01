#include <stdio.h>
void larger_of(double *, double *);

int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    larger_of(&a, &b);
    printf("%lf %lf\n", a, b);
    return 0;
}

void larger_of(double * a, double * b) {
    double c = *a > *b ? *a : *b;
    *a = c;
    *b = c;
}