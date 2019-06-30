#include <stdio.h>
int imax(int, int);
int main(void) {
    printf("%d\n", imax(3));
}

int imax(int n, int m) {
    return (n > m ? n : m);
}