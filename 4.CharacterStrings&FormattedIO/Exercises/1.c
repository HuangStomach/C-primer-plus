#include <stdio.h>
int main(void) {
    char first[40];
    char second[40];

    printf("请输入姓：");
    scanf("%s", first);
    printf("请输入名：");
    scanf("%s", second);
    printf("您的姓名是：%s，%s\n", first, second);

    return 0;
}