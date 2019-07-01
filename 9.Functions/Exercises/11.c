#include <stdio.h>
unsigned Fibonacci(int);
int main(void) {
    printf("%d\n", Fibonacci(20));
}

unsigned Fibonacci(int n) {
    if (n < 2) return 1;
    int a = 1;
    int b = 1;
    unsigned c;
    for (int i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}