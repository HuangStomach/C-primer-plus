#include <stdio.h>
int main(void) {
    double daphne = 0.1;
    double deirde = 0.05;
    double a = 100;
    double b = 100;

    int year = 0;
    while (b <= a) {
        year++;
        a += 100 * daphne;
        b += b * deirde;
    }
    
    printf("year:%d %lf, %lf\n", year, a, b);
    return 0;
}
