#include <stdio.h>
int main(void) {
    int age;

    printf("请输入年龄：");
    scanf("%d", &age);
    printf("你已经活了%f秒啦!\n", 3.156e7 * age);

    return 0;
}