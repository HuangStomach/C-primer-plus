#include <stdio.h>
extern int count;

static int total = 0;
void accumulate(int);

void accumulate(int k) {
    static int subtotal = 0;

    if (k <= 0) {
        printf("loop cycle: %d\n", count);
        printf("sub: %d, total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else {
        subtotal += k;
        total += k;
    }
}
