#include <stdio.h>
int main(void) {
    double a = 1000000;
    double rate = 0.08;

    int year = 0;
    while (a > 0) {
        year++;
        a -= 100000;
        a += a * 0.08;
    }
    
    printf("year:%d %lf\n", year, a);
    return 0;
}
