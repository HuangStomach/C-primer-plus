#include <stdio.h>
int main(void) {
    double x;
    double y;
    while (scanf("%lf %lf", &x, &y)) {
        printf("%f\n", (x - y) / (x * y));
    }
    return 0;
}
