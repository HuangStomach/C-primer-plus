#include <stdio.h>
int main(void) {
    int count, sum, limit;

    count = 0;
    sum = 0;
    printf("请输入天数：");
    scanf("%d", &limit);

    while (count++ < limit) {
        sum = sum + count * count;
    }
    printf("sum = %d\n", sum);

    return 0;
}