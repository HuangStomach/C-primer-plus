#include <stdio.h>
int imin(int, int);

int main(void) {
    int evil1, evil2;
    printf("Enter integers:\n");
    while (scanf("%d %d", &evil1, &evil2) == 2) {
        printf("Is : %d\n", imin(evil1, evil2));
    }
    printf("Bye\n");

    return 0;
}

int imin(int n, int m) {
    int min;

    if (n < m) min = n;
    else min = m;

    return min;
}