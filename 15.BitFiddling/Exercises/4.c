#include <stdio.h>
#include <limits.h>
#include <strings.h>

int check_open(int, int);

int main(void) {
    printf("%d\n", check_open(64, 3));
    printf("%d\n", check_open(63, 3));
    printf("%d\n", check_open(12, 3));
}

int check_open(int d, int index) {
    int count = 0;
    d = d >> index;
    return (d % 2 == 1 ? 1 : 0);
}
