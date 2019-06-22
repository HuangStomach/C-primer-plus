#include <stdio.h>
int main(void) {
    int i;

    printf("请输入字符:_\b");
    scanf("%d", &i);
    printf("输入的字符是:%c\n", i);

    return 0;
}