#include <stdio.h>
#define MONTHS 12
int main(void) {
    int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;

    for (i = 0; i < MONTHS; i++) {
        printf("%d", days[i]);
    }

    return 0;
}