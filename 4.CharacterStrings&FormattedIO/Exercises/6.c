#include <stdio.h>
#include <strings.h>
int main(void) {
    char first[40];
    char second[40];

    printf("请输入姓：");
    scanf("%s", first);
    printf("请输入名：");
    scanf("%s", second);

    printf("%s %s\n", first, second);
    printf("%*d %*d\n", strlen(first), strlen(first), strlen(second), strlen(second));
    printf("%s %s\n", first, second);
    printf("%-*d %-*d\n", strlen(first), strlen(first), strlen(second), strlen(second));

    return 0;
}