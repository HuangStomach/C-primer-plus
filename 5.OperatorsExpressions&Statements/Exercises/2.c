#include <stdio.h>
int main(void) {
    int num;
    printf("请输入值：");
    scanf("%d", &num);

    for (int i = num; i <= num + 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}