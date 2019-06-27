#include <stdio.h>
int main(void) {
    double nums[8];
    double result[8];
    
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &nums[i]);
    }
    for (int i = 0; i < 8; i++) {
        printf("%lf ", nums[i]);
    }
    printf("\n");

    result[0] = nums[0];
    printf("%lf ", result[0]);
    for (int i = 1; i < 8; i++) {
        result[i] = result[i - 1] + nums[i];
        printf("%lf ", result[i]);
    }

    printf("\n");
    return 0;
}
