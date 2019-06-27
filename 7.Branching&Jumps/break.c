#include <stdio.h>
int main(void) {
    float length, width;

    while (scanf("%f", &length) == 1) {
        if (scanf("%f", &width) != 1) break;
    }
    return 0;
}