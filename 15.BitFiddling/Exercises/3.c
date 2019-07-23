#include <stdio.h>
#include <limits.h>
#include <strings.h>

int count_open(int d);

int main(void) {
    printf("%d\n", count_open(64));
    printf("%d\n", count_open(63));
    printf("%d\n", count_open(12));
}

int count_open(int d) {
    int count = 0;
    while (d / 2) {
        count += d % 2;
        d = d >> 1;
    }
    count += d % 2;
    return count;
}
