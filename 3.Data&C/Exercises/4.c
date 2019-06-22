#include <stdio.h>
int main(void) {
    float num;

    printf("请输入一个浮点数：_\b");
    scanf("%f", &num);
    printf("小数点形式: %f\n", num);
    printf("指数形式: %e\n", num);
    printf("p计数法: %a\n", num);

    return 0;
}