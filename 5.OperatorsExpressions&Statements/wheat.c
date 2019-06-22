#include <stdio.h>
#define SQUARES 64
int main(void) {
    const double CROP = 2E16;
    double current, total;
    int count = 0;

    printf("square    grains       total        fraction of \n");
    printf("          added        grains       world total\n");
    total = current = 1.0;
    while (count < SQUARES) {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / SQUARES);
    }
    printf("That's all\n");

    return 0;
    
}