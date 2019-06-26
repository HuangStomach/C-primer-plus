#include <stdio.h>
int main(void) {
    int start;
    int end;
    printf("plz input start & end:");
    while(scanf("%d %d", &start, &end) == 2) {
        if (start >= end) break;
        int sum = 0;
        for (int i = start; i <= end; i++) {
           sum += i * i;
        }
        printf("sum is %d\n", sum);
        printf("plz input start & end:");
    }

    return 0;
}
