#include <stdio.h>
int main(void) {
    float cup;

    printf("请输入杯数：");
    scanf("%f", &cup);
    printf("等价%.2f品脱\n", cup / 2);
    printf("等价%.2f盎司\n", cup * 8);
    printf("等价%.2f汤勺\n", cup * 8 * 2);
    printf("等价%.2f茶勺\n", cup * 8 * 2 * 3);

    return 0;
}