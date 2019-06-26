#include <stdio.h>
int main(void) {
    int length = 8;
    int nums[length];
    
    nums[0] = 2;
    for (int i = 1; i < length; i++) {
        nums[i] = nums[i - 1] * 2;
    }

    do {
        printf("%d\n", nums[--length]);
    } while (length > 0);
    
    return 0;
}
