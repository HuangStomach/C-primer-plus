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
    double pow = 1;
    int i ;

    for (int i = 0; i < p; i++) {
        pow *= n;
    }

    return pow;
}