#include <stdio.h>
int main(void) {
    int nums[8];
    
    for (int i = 7; i >= 0; i--) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 8; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}
