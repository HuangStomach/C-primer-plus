#include <stdio.h>
void three(double num);
int main(void) {
    double num;
    printf("请输入一个浮点数：");
    scanf("%lf", &num);
    three(num);

    return 0;
}

void three(double num) {
    printf("%f\n", num * num * num);
}