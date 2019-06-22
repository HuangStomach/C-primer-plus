#include <stdio.h>
void temperatures(double num);
int main(void) {
    double num;
    int size = 1;

    while (size == 1) {
        printf("请输入一个华氏温度：");
        size = scanf("%lf", &num);
        temperatures(num);
    }

    return 0;
}

void temperatures(double num) {
    const double a = 32.0;
    const double b = 273.16;

    printf("华氏温度：%.2f 摄氏温度：%.2f 开氏温度：%.2f\n", num, 5.0 / 9.0 * (num - a), num + b);
}