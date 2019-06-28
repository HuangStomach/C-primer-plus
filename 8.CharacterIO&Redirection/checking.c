#include <stdio.h>
#include <stdbool.h>
long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_squares(long a, long b);
int main(void) {
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    prinf("...sth lower limit: ");
    start = get_long();
    prinf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0) {
        if (bad_limits(start, stop, MIN, MAX)) prinf("again plz\n");
        else {
            answer = sum_squares(start, stop);
            printf("is %ld %ld %g", start, stop, answer);
        }

        prinf("...sth lower limit: ");
        start = get_long();
        prinf("upper limit: ");
        stop = get_long();
    }
    printf("Done.\n");
    return 0;
}

long get_long(void) {
    long input;
    char ch;
    while (scanf("%ld", &input) != 1) {
        while ((ch = getchar()) != '\n')  {
            putchar(ch);
        }
        printf("again\n");
    }
    return input;
}

double sum_squares(long a, long b) {
    double total = 0;
    long i;
    for (i = a; i <= b; i++) {
        total += (double)i * (double)i;
    }
    return total;
}

bool bad_limits(long begin, long end, long low, long high) {
    bool not_good = false;

    if (begin > end) not_good = true;
    if (begin < low || end < low) not_good = true;
    if (begin > high || end > high) not_good = true;
    
    return not_good;
}
