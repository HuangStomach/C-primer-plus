#include <stdio.h>
double power(double n, int p);
int main(void) {
    double x, xpow;
    int exp;

    while (scanf("%lf%d", &x, &exp) == 2) {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
    }
    
    return 0;
}

double power(double n, int p) {
    if (n == 0.0) return 0.0;
    if (p == 0) return 1.0;

    return n * power(n, p - 1);
}