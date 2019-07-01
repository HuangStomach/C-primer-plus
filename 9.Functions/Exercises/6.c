#include <stdio.h>
void plan(double *, double *, double *);

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    plan(&a, &b, &c);
    printf("%lf %lf %lf\n", a, b, c);
    return 0;
}

void plan(double * a, double * b, double * c) {
    double x, y, z;
    if (*a > *b) {
        if (*a > *c) {
            x = *a;
            if (*b > *c) y = *b, z = *c;
            else y = *c, z = *b;
        }
        else {
            x = *c;
            y = *a;
            z = *b;
        }
    }
    else {
        if (*b > *c) {
            x = *b;
            if (*a > *c) y = *a, z = *c;
            else y = *c, z = *a;
        }
        else {
            x = *c;
            y = *b;
            z = *a;
        }
    }

    *a = x;
    *b = y;
    *c = z;
}