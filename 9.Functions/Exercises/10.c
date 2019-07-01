#include <stdio.h>
void to_binary(unsigned long, int);

int main(void) {
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1) {
        printf("Binary equivalent: ");
        to_binary(number, 2);
        putchar('\n');
        printf("again");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n, int bit) {
    if (bit < 2 || bit > 10) return;
    int r;

    r = n % bit;
    if (n >= bit) to_binary(n / bit, bit);
    putchar(r == 0 ? '0' : '1');

    return;
}